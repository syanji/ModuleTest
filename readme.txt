C++20 Module build time comparison.

*Environment

Intel(R) Core(TM) i7-8700K CPU @ 3.70GHz
16GB Memory
Windows10 Pro 20H2
Visual Studio 2019 16.9.3


*Debug Build time comparison

Module         2705 ms
ModuleMp       2594 ms
Naive          4039 ms
NaiveCppLatest 4774 ms
NaiveMp        1120 ms
Pch            1506 ms
PchMp          1192 ms


*Release Build time comparison

Module         2638 ms
ModuleMp       2547 ms
Naive          3885 ms
NaiveCppLatest 4547 ms
NaiveMp        1176 ms
Pch            1389 ms
PchMp          1211 ms

