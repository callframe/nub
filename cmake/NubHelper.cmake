
# nub_target_policies(<target>)
#
# Applies nub compiler flag policies to <target>.
function(nub_target_policies target_)
    target_compile_features(${target_} PUBLIC cxx_std_17)
    target_include_directories(${target_} PRIVATE "${NUB_SRC_DIR}")
    target_compile_options(${target_} PRIVATE 
        $<$<CXX_COMPILER_ID:GNU>: -Wall -Wextra -pedantic>
    )
endfunction(nub_target_policies)
