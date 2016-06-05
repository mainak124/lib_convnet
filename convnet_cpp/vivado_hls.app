<AutoPilot:project xmlns:AutoPilot="com.autoesl.autopilot.project" projectType="C/C++" name="convnet_cpp" top="inference">
    <Simulation argv="">
        <SimFlow name="csim" setup="false" optimizeCompile="false" clean="true" ldflags="" mflags=""/>
    </Simulation>
    <files>
        <file name="../conv_test.cpp" sc="0" tb="1" cflags=" "/>
        <file name="convnet_cpp/cnn.h" sc="0" tb="false" cflags=""/>
        <file name="convnet_cpp/conv.h" sc="0" tb="false" cflags=""/>
        <file name="convnet_cpp/fc_module.h" sc="0" tb="false" cflags=""/>
        <file name="convnet_cpp/inference.cpp" sc="0" tb="false" cflags=""/>
        <file name="convnet_cpp/matrixTemplate.h" sc="0" tb="false" cflags=""/>
        <file name="convnet_cpp/myutils.cpp" sc="0" tb="false" cflags=""/>
        <file name="convnet_cpp/myutils.h" sc="0" tb="false" cflags=""/>
        <file name="convnet_cpp/sm_module.h" sc="0" tb="false" cflags=""/>
        <file name="convnet_cpp/weights.h" sc="0" tb="false" cflags=""/>
    </files>
    <solutions>
        <solution name="solution1" status=""/>
    </solutions>
</AutoPilot:project>

