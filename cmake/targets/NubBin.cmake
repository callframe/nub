add_executable(nub)
nub_target_policies(nub)
target_sources(nub PRIVATE "${NUB_SRC_DIR}/nub.cc")
