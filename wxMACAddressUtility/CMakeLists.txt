set (SRCS
	MACAddressUtility.cpp
	wxMACAddressUtilityApp.cpp
	wxMACAddressUtilityMainFrame.cpp)
set (HEADERS
	MACAddressUtility.h
	wxMACAddressUtilityApp.h
	wxMACAddressUtility.h
	wxMACAddressUtilityMainFrame.h)
	
set(INCLUDE_DIRECTORIES ${BASE_INCLUDE_DIRECTORIES})

if(WIN32)
	set(SRCS ${SRCS} wxMACAddressUtility.rc)
	set(PREPROCESSOR_DEFINITIONS ${PREPROCESSOR_DEFINITIONS};
		/DwxUSE_NO_MANIFEST=1;
		/D__STDC_CONSTANT_MACROS)
endif(WIN32)

set(LIBS ${wxWidgets_LIBRARIES})

set(EXECUTABLE_NAME wxMACAddressUtility)

add_definitions(${PREPROCESSOR_DEFINITIONS})
include_directories(${INCLUDE_DIRECTORIES} ${BASE_INCLUDE_DIRECTORIES})
link_directories(${LINK_DIRECTORIES})

if(WIN32)
	set(EXECUTABLE_TYPE WIN32)
endif(WIN32)
if(APPLE)
	set(MACOSX_BUNDLE YES)
	set(EXECUTABLE_TYPE MACOSX_BUNDLE)
	set(CMAKE_INSTALL_PATH "@loader_path")
endif(APPLE)
if(LINUX)
	set(EXECUTABLE_TYPE "")
endif(LINUX)

set(SRCS ${SRCS} ${HEADERS} 
	${PROJECT_ROOT_DIR}/include/stdwx.h 
	${PROJECT_ROOT_DIR}/include/stdwx.cpp)

set(PROJECT_FILES ${SRCS})
add_executable(${EXECUTABLE_NAME} ${EXECUTABLE_TYPE} ${PROJECT_FILES})

set(EXE_DIR bin)
set(TARGET_LOCATION ${PROJECT_SOURCE_DIR}/${EXE_DIR}${LIB_SUFFIX})
set_target_properties(${EXECUTABLE_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${TARGET_LOCATION})
if(APPLE)
	set(CMAKE_MACOSX_RPATH 1)
	set(MACOSX_RPATH TRUE)
        set_target_properties(
                ${EXECUTABLE_NAME} PROPERTIES 
                INSTALL_RPATH "@loader_path/../Frameworks")
endif(APPLE)

target_link_libraries(${EXECUTABLE_NAME} ${LIBS})

set_precompiled_header(${EXECUTABLE_NAME} 
	${PROJECT_ROOT_DIR}/include/stdwx.h 
	${PROJECT_ROOT_DIR}/include/stdwx.cpp)

