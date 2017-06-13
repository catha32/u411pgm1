SOURCES += calc_pv_factory.cc \
epics_pv_factory.cc \
epicsPv.cc \
expString.cc \
loc_pv_factory.cc \
pv.cc \
pv_factory.cc

HEADERS += calc_pv_factory.h \
dl_list.h \
epics_pv_factory.h \
epicsPv.h \
expString.h \
hashtable.h \
loc_pv_factory.h \
postfix.h \
pv.h \
pv_factory.h

INCLUDEPATH += /opt/epics/base/include \
/opt/epics/base/include/os/Linux

#LIBS += -L/opt/epics/base/lib/linux-x86 \
#-lCom \
#-lca

TEMPLATE = lib
CONFIG += dll
QMAKE_CXXFLAGS_WARN_ON += -Wno-unused

DESTDIR = .
MOC_DIR = moc
OBJECTS_DIR = obj

target.path = /usr/local/lib
INSTALLS += target

unix:!macx: LIBS += -L$$PWD/../../../../../../opt/epics/base/lib/linux-x86_64/ -lca

INCLUDEPATH += $$PWD/../../../../../../opt/epics/base/lib/linux-x86_64
DEPENDPATH += $$PWD/../../../../../../opt/epics/base/lib/linux-x86_64

unix:!macx: LIBS += -L$$PWD/../../../../../../opt/epics/base/lib/linux-x86_64/ -lCom

INCLUDEPATH += $$PWD/../../../../../../opt/epics/base/lib/linux-x86_64
DEPENDPATH += $$PWD/../../../../../../opt/epics/base/lib/linux-x86_64
