/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.5.1
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // /home/lele/Desktop/qt_tutorial/qt13_resource_file/qt13_resource_file.pro
  0x0,0x0,0x0,0xad,
  0x51,
  0x54,0x20,0x2b,0x3d,0x20,0x63,0x6f,0x72,0x65,0xa,0x51,0x54,0x20,0x2d,0x3d,0x20,
  0x67,0x75,0x69,0xa,0xa,0x43,0x4f,0x4e,0x46,0x49,0x47,0x20,0x2b,0x3d,0x20,0x63,
  0x2b,0x2b,0x31,0x31,0xa,0xa,0x54,0x41,0x52,0x47,0x45,0x54,0x20,0x3d,0x20,0x71,
  0x74,0x31,0x33,0x5f,0x72,0x65,0x73,0x6f,0x75,0x72,0x63,0x65,0x5f,0x66,0x69,0x6c,
  0x65,0xa,0x43,0x4f,0x4e,0x46,0x49,0x47,0x20,0x2b,0x3d,0x20,0x63,0x6f,0x6e,0x73,
  0x6f,0x6c,0x65,0xa,0x43,0x4f,0x4e,0x46,0x49,0x47,0x20,0x2d,0x3d,0x20,0x61,0x70,
  0x70,0x5f,0x62,0x75,0x6e,0x64,0x6c,0x65,0xa,0xa,0x54,0x45,0x4d,0x50,0x4c,0x41,
  0x54,0x45,0x20,0x3d,0x20,0x61,0x70,0x70,0xa,0xa,0x53,0x4f,0x55,0x52,0x43,0x45,
  0x53,0x20,0x2b,0x3d,0x20,0x6d,0x61,0x69,0x6e,0x2e,0x63,0x70,0x70,0xa,0xa,0x52,
  0x45,0x53,0x4f,0x55,0x52,0x43,0x45,0x53,0x20,0x2b,0x3d,0x20,0x5c,0xa,0x20,0x20,
  0x20,0x20,0x6d,0x79,0x72,0x73,0x63,0x2e,0x71,0x72,0x63,0xa,
  
};

static const unsigned char qt_resource_name[] = {
  // resc1
  0x0,0x5,
  0x0,0x78,0xc9,0x61,
  0x0,0x72,
  0x0,0x65,0x0,0x73,0x0,0x63,0x0,0x31,
    // pro1
  0x0,0x4,
  0x0,0x7,0x79,0x21,
  0x0,0x70,
  0x0,0x72,0x0,0x6f,0x0,0x31,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
  // :/resc1
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
  // :/resc1/pro1
  0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_myrsc)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_myrsc)()
{
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_myrsc)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_myrsc)()
{
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_myrsc)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_myrsc)(); }
   } dummy;
}