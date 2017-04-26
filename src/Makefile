#BeOSTiLink : BeOS version of GTKTILink
NAME= BeOSTiLink
TYPE= APP
SRCS= ABeOSTiLink.cpp AMain_Window.cpp AMain_View.cpp AMenuBar.cpp MsgBox.cpp ASetupHC_Window.cpp ASetupHC_View.cpp ABoxCableType.cpp ABoxI_OPort.cpp ABoxCalculatorType.cpp

# Add your resource files here! 
RSRCS= 
# Add Your libs here : libTIcalc, LibTILink à mettre
#	specify additional libraries to link against
#	there are two acceptable forms of library specifications
#	-	if your library follows the naming pattern of:
#		libXXX.so or libXXX.a you can simply specify XXX
#		library: libbe.so entry: be
#	- 	if your library does not follow the standard library
#		naming scheme you need to specify the path to the library
#		and it's name
#		library: my_lib.a entry: my_lib.a or path/my_lib.a
LIBS=	be translation stdc++.r4 tracker root
LIBPATHS=
SYSTEM_INCLUDE_PATHS = 
LOCAL_INCLUDE_PATHS = 

#	NONE, SOME, FULL
OPTIMIZE= TRUE
SYMBOLS = 
DEBUGGER = FALSE

# this flag allows you to use the wonderful bdb for x86! 
COMPILER_FLAGS = 
LINKER_FLAGS = 

## include the Be makefile-engine
include /boot/develop/etc/makefile-engine
