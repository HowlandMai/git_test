add_rules("mode.debug", "mode.release")
set_languages("c++20")
set_project("git_test")
set_toolchains("clang")

target("git_test")
    set_kind("binary")
    add_files("src/*.cpp")
    add_includedirs("include")
