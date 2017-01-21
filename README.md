# bx
To use [bx](https://github.com/bkaradzic/bx) in [ZPM](http://zpm.zefiros.eu), just use:

# [ZPM](http://zpm.zefiros.eu) Installation
In `.package.json`
```json
"requires": [
		{
			"name": "Zefiros-Software/bx",
			"version": "@head"
		}
]
```

In `premake5.lua`
```lua
zpm.uses "Zefiros-Software/bx"
```

# Status
Type        | Status
----------- | -------
Linux & OSX | [![Build Status](https://travis-ci.org/Zefiros-Software/bx.svg?branch=master)](https://travis-ci.org/Zefiros-Software/bx)
Windows     | [![Build status](https://ci.appveyor.com/api/projects/status/dxnsegmtlkx7qpnr?svg=true)](https://ci.appveyor.com/project/Zefiros-Software/bx)