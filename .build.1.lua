project "bgfx"

    kind "StaticLib"
 
    files 
    {
	"include/**.h",
	"include/**.inl",
    }
  
    -- dummy to prevent error on osx
    files 
    {
     	"extern/dummy.cpp"
    }  

    includedirs 
    {
        "include"
    }


    zpm.export(function()

        includedirs 
	{
	    "include"
        }
     
	filter { "system:windows", "not action:android" }

	     includedirs
             {
                  "include/compat/msvc"
             }

	filter { "system:macosx", "not action:ios" }

	      includedirs { "include/compat/osx" }

    	filter "action:ios"

	      includedirs { "include/compat/ios" }

	filter {}
 
    end)
