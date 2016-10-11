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
     
 
    end)
