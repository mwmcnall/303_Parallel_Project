# 303_Parallel_Project

# Setting up OpenMP in Visual Sudio
> If OpenMP is not correctly setup already, then the number of threads will either say 1 or 0. If this happens, here is how to fix it.
* Right click name of project (Parallel Project) and click **Properties** at the bottom
- Navigate to:
  - Configuration Properties
  - C/C++
  - Language
    -  Set **Open MP Support** to **Yes(/openmp)**
-  Navigate to
   - Configuration Properties
   - C/C++
   - Command Line
     -  Add */Zc:twoPhase-* to **Additional Options**

# Objectives for omp_hello.cpp
- Implement first method for setting threads
- Implement second method for setting threads
- Implement third method for setting threads
- Screenshots of all three separate methods

# Objectives for omp_for.cpp
- Change code from **dynamic** scheduling to **static** and recompile. State conclusions of what is happening
- Change code from **static** scheduling to **guided** scheduling (chunk size doesn't matter) and repeat. State conclusions of what is happening
- Measure time of execution using **omp_get_wtime()** at beginning and end of the program
- Screenshot regular compile
- Screenshot dynamic -> static comile
- Screenshot static -> guided compile
