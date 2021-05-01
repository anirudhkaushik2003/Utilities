# CMake generated Testfile for 
# Source directory: /home/anirudhkaushik/opencv-master/modules/core
# Build directory: /home/anirudhkaushik/build/modules/core
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_core "/home/anirudhkaushik/build/bin/opencv_test_core" "--gtest_output=xml:opencv_test_core.xml")
set_tests_properties(opencv_test_core PROPERTIES  LABELS "Main;opencv_core;Accuracy" WORKING_DIRECTORY "/home/anirudhkaushik/build/test-reports/accuracy" _BACKTRACE_TRIPLES "/home/anirudhkaushik/opencv-master/cmake/OpenCVUtils.cmake;1640;add_test;/home/anirudhkaushik/opencv-master/cmake/OpenCVModule.cmake;1310;ocv_add_test_from_target;/home/anirudhkaushik/opencv-master/modules/core/CMakeLists.txt;117;ocv_add_accuracy_tests;/home/anirudhkaushik/opencv-master/modules/core/CMakeLists.txt;0;")
add_test(opencv_perf_core "/home/anirudhkaushik/build/bin/opencv_perf_core" "--gtest_output=xml:opencv_perf_core.xml")
set_tests_properties(opencv_perf_core PROPERTIES  LABELS "Main;opencv_core;Performance" WORKING_DIRECTORY "/home/anirudhkaushik/build/test-reports/performance" _BACKTRACE_TRIPLES "/home/anirudhkaushik/opencv-master/cmake/OpenCVUtils.cmake;1640;add_test;/home/anirudhkaushik/opencv-master/cmake/OpenCVModule.cmake;1212;ocv_add_test_from_target;/home/anirudhkaushik/opencv-master/modules/core/CMakeLists.txt;118;ocv_add_perf_tests;/home/anirudhkaushik/opencv-master/modules/core/CMakeLists.txt;0;")
add_test(opencv_sanity_core "/home/anirudhkaushik/build/bin/opencv_perf_core" "--gtest_output=xml:opencv_perf_core.xml" "--perf_min_samples=1" "--perf_force_samples=1" "--perf_verify_sanity")
set_tests_properties(opencv_sanity_core PROPERTIES  LABELS "Main;opencv_core;Sanity" WORKING_DIRECTORY "/home/anirudhkaushik/build/test-reports/sanity" _BACKTRACE_TRIPLES "/home/anirudhkaushik/opencv-master/cmake/OpenCVUtils.cmake;1640;add_test;/home/anirudhkaushik/opencv-master/cmake/OpenCVModule.cmake;1213;ocv_add_test_from_target;/home/anirudhkaushik/opencv-master/modules/core/CMakeLists.txt;118;ocv_add_perf_tests;/home/anirudhkaushik/opencv-master/modules/core/CMakeLists.txt;0;")
