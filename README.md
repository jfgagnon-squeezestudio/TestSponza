# Setup
1. Checkout Unreal 4.22 at tag 4.22.0-release
2. Compile engine
3. Generate solution for this project
4. Compile

# Launching
From console without cooking:
\UnrealEngine\Engine\Binaries\Win64\UE4Editor.exe {fullpath_to_project}\TestSponza.uproject -dx12 -game

Otherwise one need to cook.

# Keys
- Y - Toggle GI raytrace
- U - Toggle reflections
- ~ - start console
  + stat fps -- basic frame timing <br>
  + stat gpu -- detailed passes timing <br>
  + stat rhi -- show memory <br>
  + t.maxfps 999 -- uncap framerate <br>
