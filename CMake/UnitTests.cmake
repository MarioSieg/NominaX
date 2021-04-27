IF (${CORIUM_BUILD_UNIT_TESTS})
	IF(CMAKE_BUILD_TYPE STREQUAL "Release")
		MESSAGE(SEND_ERROR "Unit tests can only be run in debug mode!")
	ENDIF()
	ADD_SUBDIRECTORY("SharedTools/googletest")
	SET("TEST_INCLUDE" "SharedTools/googletest/googletest/include/gtest/")
ENDIF()