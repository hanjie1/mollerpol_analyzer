mollerpol_analyzer
==================

Compiling
---------

CMake is supported as of analyzer 1.7. For the CMake scripts to work with the moller_analyzer,
the analyzer must have been built and installed with CMake as well so that certain
configuration scripts have been generated.
Be sure that ``$ANALYZER`` is set correctly to point to the analyzer-1.7.15 (and above version)
*installation* directory.

As usual, CMake expects code to be built out of source in a separate build directory.

```shell
cmake -B build -S . 
```
run CMake again, pointing it to the build directory just created:

```shell
cmake --build build [--clean-first] [-jN]
```
where, as usual, you can add the optional ``-j`` argument for a parallel build
on ``N`` CPUs. Cleaning the build directory with the ``--clean-first`` option
should rarely be necessary.
.

