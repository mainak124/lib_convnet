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
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"inputImage_TDATA\" :  \"" << inputImage_TDATA.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"outDigit_TDATA\" :  \"" << outDigit_TDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"inputImage_TVALID\" :  \"" << inputImage_TVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"inputImage_TREADY\" :  \"" << inputImage_TREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"outDigit_TVALID\" :  \"" << outDigit_TVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"outDigit_TREADY\" :  \"" << outDigit_TREADY.read() << "\" ";
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

