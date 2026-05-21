add_library(nub_common INTERFACE)
nub_target_policies(nub_common)

target_sources(nub_common INTERFACE
    FILE_SET HEADERS
    FILES
)