#include <stdint.h>

#define EXPORT __attribute__((visibility ("default")))

const int64_t TextWindowStyle1 = 0;
const int64_t TextWindowStyleTemplateCode = 2;

EXPORT int64_t TWInit(void);
EXPORT int TWTerm(int64_t handle, int64_t b, int64_t c, int64_t d);

EXPORT int TWShow(int64_t handle, int64_t b, int64_t c, int64_t d);
EXPORT int TWHide(int64_t handle, int64_t b, int64_t c, int64_t d);
EXPORT int TWResize(int64_t handle, int64_t b, int64_t c, int64_t d);
EXPORT int TWFocus(int64_t handle, int64_t b, int64_t c, int64_t d);

EXPORT int TWSet(int64_t handle, const char* data, int64_t len, int64_t d);
EXPORT int TWGet(int64_t handle, char** data, int64_t* len, int64_t d);

EXPORT int TWGetSel(int64_t handle, int64_t b, int64_t c, int64_t d);
EXPORT int TWSetSel(int64_t handle, int64_t sel, int64_t c, int64_t d);

EXPORT int TWGetSZ(int64_t handle, int64_t b, int64_t c, int64_t d);
EXPORT int TWSetSZ(int64_t handle, int64_t size, int64_t c, int64_t d);
