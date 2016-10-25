project "bx"

    kind "StaticLib"
 
    files {
        "include/**.h",
        "include/**.inl",
    }
  
    includedirs {
        "include"
    }

    zpm.export(function()

        includedirs {
	        "include"
        }
     
	    filter { "system:windows", "not action:android" }
            includedirs "include/compat/msvc"

	    filter { "system:macosx", "not action:ios" }
            includedirs "include/compat/osx"

        filter "system:linux"

    	filter "action:ios"
	      includedirs "include/compat/ios"

        filter "action:android"
            includedirs { "include/compat/ANDROID" }

        filter {}
 
    end)
