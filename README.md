# Meta-Runtime-Research
A C++ Metaprogramming Research [MRR]


A project aiming to research the C++14 Meta-Programming calculation efficiency compared to regular runtime , 
and integrate the compilation as part of the "actual runtime" to acompish enormours performance boost. 

Reason:\
while writing another metaprogram (the "Max Sub Array" solution), i've noticed one very exciting effect - the more input is proccessed, 
the higher (exponentially) the curve of performance difference between\
[compiling+calculating->running] and [running->calculating]\
in other words the speed of meta vs runtime calculation.


how high?\
this high.              ---------------------------   // read next paragraph no understand the benchmark sections

Benchmark[intel i7, 80% CPU free, Windows10,     tested with cygwin "time" prefix real-time]:

![alt tag](http://i.imgur.com/gx9kO7H.jpg)


as you can see the runtime version gets ineffective at somewhere between 16-19 (depending on what you consider ineffective)
while meta version is not even raising exponentially. most impressive.


the algorithm used is EXACTLY the same, actually same function. the only difference is that in meta-version, instead of just inputing arguments
on run, i'm first inputting arguments to auxillary program(run.exe), that launches the compilation of the "true" metaprogram(meta.cpp->.exe).
(run.exe arg1 arg2 ... argN compiles meta.cpp with all N arguments embedded) which then autolaunching the fresh generated meta.exe.
the benchmark of metaprogram is including the sum time of running run.exe, compiling meta.cpp, running meta.exe , \
while non-meta benchmark is of the run only! excluding compile time! \
so the benchmark is purely fair, as both versions are proccessing dynamic input.


conclusions so far:
1) metaruntime is FULLY capable of runtime input processing.
2) due to the fact that metaruntime includes compilation inside the runtime, it is ineffective for minor tasks that would take less then 1 second, compared to convencional runtime .
3) metaruntime gets VERY effective at heavier tasks, infact, it can compute tasks that would be omited in convencional runtime due to slowness.
4) it is to be studied further. 




