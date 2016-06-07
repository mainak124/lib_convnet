#include "inference.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void inference::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"inputImage_address0\" :  \"" << inputImage_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"inputImage_ce0\" :  \"" << inputImage_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"inputImage_d0\" :  \"" << inputImage_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"inputImage_q0\" :  \"" << inputImage_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"inputImage_we0\" :  \"" << inputImage_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"outDigit\" :  \"" << outDigit.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"outDigit_ap_vld\" :  \"" << outDigit_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

