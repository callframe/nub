add_executable(nub)
nub_target_policies(nub)

target_sources(nub PRIVATE
    FILES
        "${NUB_DIR}/main.cc"
)
