project(
    'pong',
    'cpp',
    version : '0.0.1',
    default_options : [
        'cpp_std=c++20',
        'warning_level=3'
    ]
)

project_description = 'A example project using the String engine demonstrating Pong.'

build_args = [
]

# --------------------------------------------------

# ======
# Target
# ======

include_dir = include_directories('include')

src_dir = [
    'src/pong.cpp'
]

deps = [
    dependency('string')
]

build_args += [
    '-DPROJECT_NAME=' + meson.project_name(),
    '-DPROJECT_VERSION=' + meson.project_version()
]

pong_game = executable(
    meson.project_name(),
    dependencies: deps,
    include_directories : include_dir,
    sources : src_dir,
    install : true,
    c_args : build_args
)