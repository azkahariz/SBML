# Edit following two lines to set component requirements (see docs)
set(COMPONENT_REQUIRES aac_decoder arduino Audio flac_decoder mp3_decoder)
set(COMPONENT_PRIV_REQUIRES)

set(COMPONENT_SRCS "flac_decoder.cpp")
set(COMPONENT_ADD_INCLUDEDIRS ".")

register_component()