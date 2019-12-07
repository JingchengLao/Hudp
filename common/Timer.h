//#ifndef HEADER_COMMON_TIMER
//#define HEADER_COMMON_TIMER
//
//#include <condition_variable>
//#include <mutex>
//#include <map>
//
//#include "Runnable.h"
//#include "TimeTool.h"
//#include "Single.h"
//#include "CommonType.h"
//
//namespace hudp {
//
//    class CTimerSolt;
//    class CTimer : public base::CRunnable, public base::CSingle<CTimer> {
//    public:
//        CTimer();
//        ~CTimer();
//        // add a timer event. return cur time stamp
//        uint64_t AddTimer(uint32_t ms, CTimerSolt* ti);
//
//        // remove a timer event.  return cur time stamp
//        void RemoveTimer(CTimerSolt* ti);
//
//        // get cur time stamp
//        uint64_t GetTimeStamp();
//
//        // thread func 
//        virtual void Run();
//        
//    private:
//        // all expiration in list
//        std::map<uint64_t, CTimerSolt*> _timer_map;
//
//        // cur wait time
//        uint64_t                     _wait_time;
//
//        // get now time tool
//        base::CTimeTool              _time_tool;
//
//        // thread safe
//        std::mutex					 _mutex;
//        std::condition_variable  	 _notify;
//    };
//}
//
//#endif