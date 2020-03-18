execute_process(COMMAND "${GIT}" describe --dirty --match "v*" RESULT_VARIABLE RET OUTPUT_VARIABLE DESCRIPTION OUTPUT_STRIP_TRAILING_WHITESPACE)
if(RET)
    message(WARNING "Cannot determine current revision. Make sure that you are building either from a Git working tree or from a source archive.")
    set(VERSION "${COMMIT}")
    configure_file("${CMAKE_CURRENT_SOURCE_DIR}/src/config/version.h.in" "${TO}")
else()
    string(REGEX MATCH "([0-9a-f][0-9a-f][0-9a-f][0-9a-f][0-9a-f][0-9a-f][0-9a-f])?(-dirty)? $" COMMIT "${DESCRIPTION} ")
    string(STRIP "${COMMIT}" COMMIT)
    set(VERSION "${COMMIT}")
    configure_file("${CMAKE_CURRENT_SOURCE_DIR}/src/config/version.h.in" "${TO}")
endif()