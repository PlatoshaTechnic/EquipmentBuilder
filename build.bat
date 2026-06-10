@echo off
echo Building Renga Plugin (x64)...

call "C:/Program Files (x86)/Microsoft Visual Studio/18/BuildTools/VC/Auxiliary/Build/vcvars64.bat"

set "SCRIPT_DIR=%~dp0"
set "SCRIPT_DIR=%SCRIPT_DIR:~0,-1%"
set "PROJECT_ROOT=%SCRIPT_DIR%"

mkdir EquipmentBuilder

cl /nologo /EHsc /LD /std:c++17 /utf-8^
    /D "WIN32" /D "_WINDOWS" /D "_USRDLL" /D "_UNICODE" /D "UNICODE"^
    /I "." /I "%PROJECT_ROOT%/src/" /I "%PROJECT_ROOT%/include/RengaPluginHelper/" /W3^
    "%PROJECT_ROOT%/src/EquipmentBuilder.cpp"^
    "%PROJECT_ROOT%/src/DllMain.cpp"^
    /Fe:"%PROJECT_ROOT%/EquipmentBuilder/EquipmentBuilder.dll"^
    /link kernel32.lib user32.lib ole32.lib oleaut32.lib advapi32.lib

if %errorlevel% equ 0 (
    del EquipmentBuilder.obj
    del DllMain.obj
    cd EquipmentBuilder
    del EquipmentBuilder.exp
    del EquipmentBuilder.lib
    mkdir Application
    cd Application
    mkdir primitives
    xcopy "%PROJECT_ROOT%/application/icons" "%PROJECT_ROOT%/EquipmentBuilder/Application/icons" /E /I /Y
    cd "%PROJECT_ROOT%/application/primitives"
    "%PROJECT_ROOT%/application/RstBuilder/RstBuilder.exe" cube.json cube.lua -o cube.rst -s 1.0
    move cube.rst "%PROJECT_ROOT%/EquipmentBuilder/Application/primitives"
    "%PROJECT_ROOT%/application/RstBuilder/RstBuilder.exe" cone.json cone.lua -o cone.rst -s 1.0
    move cone.rst "%PROJECT_ROOT%/EquipmentBuilder/Application/primitives"
    "%PROJECT_ROOT%/application/RstBuilder/RstBuilder.exe" cylinder.json cylinder.lua -o cylinder.rst -s 1.0
    move cylinder.rst "%PROJECT_ROOT%/EquipmentBuilder/Application/primitives"
    "%PROJECT_ROOT%/application/RstBuilder/RstBuilder.exe" sphere.json sphere.lua -o sphere.rst -s 1.0
    move sphere.rst "%PROJECT_ROOT%/EquipmentBuilder/Application/primitives"
    "%PROJECT_ROOT%/application/RstBuilder/RstBuilder.exe" port.json port.lua -o port.rst -s 1.0
    move port.rst "%PROJECT_ROOT%/EquipmentBuilder/Application/primitives"
    cd "%PROJECT_ROOT%/EquipmentBuilder"
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