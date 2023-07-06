project('complex-windows', 'c')

cc = meson.get_compiler('c')
is_windows = host_machine.system() == 'windows'

if is_windows and cc.get_id() == 'msvc'
  name_prefix_staticlib = ''
  name_suffix_staticlib = 'lib'
else
  name_prefix_staticlib = []
  name_suffix_staticlib = []
endif

staticlib_cflags = []
if cc.get_id() == 'msvc'
  # Disable voltbl section for vc142 to allow link using mingw-w64; see:
  # https://github.com/matthew-brett/dll_investigation/issues/1#issuecomment-1100468171
  # Needs to be added to static libraries that are shipped for reuse (i.e.,
  # libnpymath and libnpyrandom)
  if cc.has_argument('-d2VolatileMetadata-')
     staticlib_cflags +=  '-d2VolatileMetadata-'
  endif
endif

static_library('npymath',
  ['main.c'],
  c_args: staticlib_cflags,
  include_directories: ['include'],
  name_prefix: name_prefix_staticlib,
  name_suffix: name_suffix_staticlib,
)
