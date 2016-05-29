#ifndef EASYPR_CONFIG_H_
#define EASYPR_CONFIG_H_

namespace easypr {

// static const char* kDefaultSvmPath = "resources/model/svm.xml";
// static const char* kDefaultAnnPath = "resources/model/ann.xml";

static char* kDefaultSvmPath = "/sdcard/svm.xml";
static char* kDefaultAnnPath = "/sdcard/ann.xml";



typedef enum {
  kForward = 1, // correspond to "has plate"
  kInverse = 0  // correspond to "no plate"
} SvmLabel;

static const float kSvmPercentage   = 0.7f;
static const int   kPredictSize     = 10;
static const int   kNeurons         = 40;

static const char *kChars[] = {
  "0", "1", "2",
  "3", "4", "5",
  "6", "7", "8",
  "9",
  /*  10  */
  "A", "B", "C",
  "D", "E", "F",
  "G", "H", /* {"I", "I"} */
  "J", "K", "L",
  "M", "N", /* {"O", "O"} */
  "P", "Q", "R",
  "S", "T", "U",
  "V", "W", "X",
  "Y", "Z",
  /*  24  */
  "川" , "鄂"    , "赣"  ,
  "甘" , "贵"  , "桂" ,
  "黑"  , "沪"   , "冀"   ,
  "津"  , "京" , "吉"   ,
  "辽" , "鲁"   , "蒙" ,
  "闽"  , "宁" , "青" ,
  "琼", "陕" , "苏"   ,
  "晋"   , "皖"  , "湘",
  "新"  , "豫"   , "渝"  ,
  "粤"  , "云"  , "藏" ,
  "浙"
  /*  31  */
};

static const int kCharsTotalNumber = 65;

static bool kDebug = false;

}

#endif // EASYPR_CONFIG_H_
