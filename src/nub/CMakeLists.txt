add_executable(nub)
nub_target_policies(nub "${NUB_DIR}")

target_sources(nub PRIVATE
    "${NUB_DIR}/main.cc"
)
