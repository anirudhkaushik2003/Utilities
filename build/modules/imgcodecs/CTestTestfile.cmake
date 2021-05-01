# CMake generated Testfile for 
# Source directory: /home/anirudhkaushik/opencv-master/modules/imgcodecs
# Build directory: /home/anirudhkaushik/build/modules/imgcodecs
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_imgcodecs "/home/anirudhkaushik/build/bin/opencv_test_imgcodecs" "--gtest_output=xml:opencv_test_imgcodecs.xml")
set_tests_properties(opencv_test_imgcodecs PROPERTIES  LABELS "Main;opencv_imgcodecs;Accuracy" WORKING_DIRECTORY "/home/anirudhkaushik/build/test-reports/accuracy" _BACKTRACE_TRIPLES "/home/anirudhkaushik/opencv-master/cmake/OpenCVUtils.cmake;1640;add_test;/home/anirudhkaushik/opencv-master/cmake/OpenCVModule.cmake;1310;ocv_add_test_from_target;/home/anirudhkaushik/opencv-master/modules/imgcodecs/CMakeLists.txt;166;ocv_add_accuracy_tests;/home/anirudhkaushik/opencv-master/modules/imgcodecs/CMakeLists.txt;0;")
add_test(opencv_perf_imgcodecs "/home/anirudhkaushik/build/bin/opencv_perf_imgcodecs" "--gtest_output=xml:opencv_perf_imgcodecs.xml")
set_tests_properties(opencv_perf_imgcodecs PROPERTIES  LABELS "Main;opencv_imgcodecs;Performance" WORKING_DIRECTORY "/home/anirudhkaushik/build/test-reports/performance" _BACKTRACE_TRIPLES "/home/anirudhkaushik/opencv-master/cmake/OpenCVUtils.cmake;1640;add_test;/home/anirudhkaushik/opencv-master/cmake/OpenCVModule.cmake;1212;ocv_add_test_from_target;/home/anirudhkaushik/opencv-master/modules/imgcodecs/CMakeLists.txt;170;ocv_add_perf_tests;/home/anirudhkaushik/opencv-master/modules/imgcodecs/CMakeLists.txt;0;")
add_test(opencv_sanity_imgcodecs "/home/anirudhkaushik/build/bin/opencv_perf_imgcodecs" "--gtest_output=xml:opencv_perf_imgcodecs.xml" "--perf_min_samples=1" "--perf_force_samples=1" "--perf_verify_sanity")
set_tests_properties(opencv_sanity_imgcodecs PROPERTIES  LABELS "Main;opencv_imgcodecs;Sanity" WORKING_DIRECTORY "/home/anirudhkaushik/build/test-reports/sanity" _BACKTRACE_TRIPLES "/home/anirudhkaushik/opencv-master/cmake/OpenCVUtils.cmake;1640;add_test;/home/anirudhkaushik/opencv-master/cmake/OpenCVModule.cmake;1213;ocv_add_test_from_target;/home/anirudhkaushik/opencv-master/modules/imgcodecs/CMakeLists.txt;170;ocv_add_perf_tests;/home/anirudhkaushik/opencv-master/modules/imgcodecs/CMakeLists.txt;0;")
