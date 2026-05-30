@echo off
echo Building Renga Plugin (x64)...

call "C:/Program Files (x86)/Microsoft Visual Studio/18/BuildTools/VC/Auxiliary/Build/vcvars64.bat"

set "SCRIPT_DIR=%~dp0"
set "SCRIPT_DIR=%SCRIPT_DIR:~0,-1%"
set "PROJECT_ROOT=%SCRIPT_DIR%"

mkdir EquipmentBuilder

cl /nologo /EHsc /LD /std:c++17 /utf-8^
    /D "WIN32" /D "_WINDOWS" /D "_USRDLL" /D "_UNICODE" /D "UNICODE"^
    /I "." /I "%PROJECT_ROOT%/src/" /I "%PROJECT_ROOT%/src/UI/" /I "%PROJECT_ROOT%/include/RengaPluginHelper/" /W3^
    "%PROJECT_ROOT%/src/EquipmentBuilder.cpp"^
    "%PROJECT_ROOT%/src/DllMain.cpp"^
    "%PROJECT_ROOT%/src/UI/EquipmentBuilderUI.cpp"^
    /Fe:"%PROJECT_ROOT%/EquipmentBuilder/EquipmentBuilder.dll"^
    /link kernel32.lib user32.lib ole32.lib oleaut32.lib advapi32.lib

if %errorlevel% equ 0 (
    del EquipmentBuilder.obj
    del EquipmentBuilderUI.obj
    del DllMain.obj
    cd EquipmentBuilder
    mkdir Application
    xcopy "%PROJECT_ROOT%/Application" "%PROJECT_ROOT%/EquipmentBuilder/Application/" /E /I /Y
    del EquipmentBuilder.exp
    del EquipmentBuilder.lib
    echo ^<RengaPlugin^> > EquipmentBuilder.rndesc
    echo     ^<Name^>EquipmentBuilder^</Name^> >> EquipmentBuilder.rndesc
    echo     ^<Version^>1.0^</Version^> >> EquipmentBuilder.rndesc
    echo     ^<Copyright^>no^</Copyright^> >> EquipmentBuilder.rndesc
    echo     ^<RequiredAPIVersion^>2.30^</RequiredAPIVersion^> >> EquipmentBuilder.rndesc
    echo     ^<PluginFilename^>EquipmentBuilder.dll^</PluginFilename^> >> EquipmentBuilder.rndesc
    echo     ^<Vendor^>Platosha Technic^</Vendor^> >> EquipmentBuilder.rndesc
    echo ^</RengaPlugin^> >> EquipmentBuilder.rndesc
    echo [OK] Build successful!
) else (
    echo [ERROR] Build failed!
)
pause