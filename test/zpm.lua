
workspace "bx"
   configurations { "Test" }

   characterset "MBCS"

   startproject "bx"

    project "bx"
        kind "ConsoleApp"
        files "main.cpp"

        zpm.uses "Zefiros-Software/bx"