mollerpol_analyzer
==================

Compiling
---------
# mollerpol_analyzer

Hall A / MOLLER polarimeter analyzer with GEM support.

This repository is built against the Hall A Analyzer (Podd/HallA) and adds GEM decoding + tracking classes under `gem/`.

---

## Requirements

### Analyzer / Podd
This repo is intended to be compiled and run with:

- **Analyzer 1.7.18** (local install used for development/testing)

Example known-good setup on JLab:
- `/w/halla-scshelf2102/moller12gev/asar/Analyzer/local/analyzer-1.7.18`

> If you use a different analyzer version, you may hit library/dictionary conflicts.  
> Recommendation: **use the same analyzer version as the build**, and source its `setup.csh` before building/running.

### Toolchain
- CMake (Analyzer 1.7+ uses CMake)
- A compiler available on ifarm (gcc/clang)
- ROOT provided by the Analyzer environment

---

## Quick start (recommended workflow)

### 1) Source analyzer environment
Always source the analyzer setup first:

```csh
source /w/halla-scshelf2102/moller12gev/asar/Analyzer/local/analyzer-1.7.18/bin/setup.csh

```
------------------------------------------------

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

Root Tree
---------
Here is a list of tree variables:
```
    { "chan",     "Channel number",                 "fEventData.fChannel" },
    { "nhit",     "Number of hits",                 "fEventData.fNHits" },
    { "ped",      "Pedestal",                       "fEventData.fPedestal" },
    { "pedq",     "Pedestal Quality",               "fEventData.fPedq" },
    { "nsamples", "number of ADC raw samples",      "fNumSamples" },
    { "samples_c","ADC raw samples channel number", "fSamples_c" },
    { "samples",  "ADC raw samples",                "fSamples" },
    { "adc_chan", "Hit channel number",             "fPulseData.fChannel" },
    { "adc",      "Pulse integral",                 "fPulseData.fRawADC" },
    { "adc_c",    "Calibrated Pulse integral",      "fPulseData.fCalADC" },
    { "adc_p",    "Pulse peak",                     "fPulseData.fPeak" },
    { "adc_t",    "Pulse time",                     "fPulseData.fT" },
    { "adc_o",    "Pulse overflow bit",             "fPulseData.fOverflow" },
    { "adc_u",    "Pulse underflow bit",            "fPulseData.fUnderflow" },
```
