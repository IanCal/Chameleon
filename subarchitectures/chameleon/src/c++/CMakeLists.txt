include_directories(.)
include(Slice2Cpp)

cast_slice2cpp(GEN_CPP GEN_HPP LearnCommands.ice)
add_library(LearnCommands SHARED ${GEN_CPP})
add_library(BasicAlgorithm SHARED ${GEN_CPP})
install(TARGETS LearnCommands LIBRARY DESTINATION lib ARCHIVE DESTINATION lib)

add_cast_component(Chameleon Chameleon.cpp BasicAlgorithm.cpp)
link_cast_component(${CAST_COMPONENT_NAME} LearnCommands)

add_cast_component(ChameleonSpecific Chameleon.cpp ChameleonSpecific.cpp BasicAlgorithm.cpp KNearestNeighbour.cpp PrintEverythingAlgorithm.cpp)
link_cast_component(${CAST_COMPONENT_NAME} LearnCommands)

add_cast_component(DummyComponent ChameleonComponent.cpp DummyComponent.cpp)
link_cast_component(${CAST_COMPONENT_NAME} LearnCommands)
SET_TARGET_PROPERTIES(DummyComponent PROPERTIES LINK_FLAGS -Wl,-lboost_thread)
#SET (CMAKE_MODULE_LINKER_FLAGS ${CMAKE_MODULE_LINKER_FLAGS_INIT} $ENV{LDFLAGS} CACHE STRING "-lboost_threads")


#add_cast_component(RA RandomAlgorithm.cpp)
#link_cast_component(${CAST_COMPONENT_NAME} LearnCommands)
