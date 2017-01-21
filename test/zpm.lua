
workspace "bx"
   configurations { "Test" }
   startproject "bx"

    project "bx"
        kind "ConsoleApp"
        files "main.cpp"

        zpm.uses "Zefiros-Software/bx"