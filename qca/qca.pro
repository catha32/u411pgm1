QT += widgets

SOURCES += qcachannel.cpp \
 	   qcachannelconfdialog.cpp \
 	   qcaiothread.cpp \
 	   qcaevent.cpp \
 	   qcalabel.cpp \
 	   qcalcdnumber.cpp \
 	   qcalineedit.cpp \
 	   qcacounter.cpp \
 	   qcacounterconfdialog.cpp \
 	   qcacombobox.cpp \
 	   qcaaxis.cpp \
 	   kled.cpp \
 	   qcaled.cpp \
           qcapushbutton.cpp
#           qcaplot.cpp \
#           qcaplotdata.cpp

HEADERS += qcachannel.h \
 	   qcachannelconfdialog.h \
	   qcaiothread.h \
	   qcaevent.h \
	   qcalabel.h \
	   qcalcdnumber.h \
	   qcalineedit.h \
	   qcacounter.h \
	   qcacounterconfdialog.h \
 	   qcacombobox.h \
	   qcaaxis.h \
 	   kled.h \
 	   qcaled.h \
           qcapushbutton.h
#           qcaplot.h \
#           qcaplotdata.h

FORMS   += qcaaxisbase.ui \
           qcachannelconfdialogbase.ui \
           qcacounterconfdialogbase.ui

TEMPLATE = lib
CONFIG  += warn_on \
	   thread \
           qt \
	   dll \
	   debug
DESTDIR  = .
MOC_DIR  = moc
OBJECTS_DIR = objs
UI_DIR = ui
TARGET = qca
TARGETDEPS += ../pv/libpv.so

INCLUDEPATH += /opt/epics/base/include/os/Linux \
	       /opt/epics/base/include \
               ../pv
               #/usr/include/qwt-qt4
#LIBS += -lqwt-qt4 \
#	-L../pv \
#	-lpv \
#	-L/opt/epics/base/lib/linux-x86 \
#	-lCom \
#	-lca

target.path = /usr/local/lib
INSTALLS += target

unix:!macx: LIBS += -L$$PWD/../pv/ -lpv

INCLUDEPATH += $$PWD/../pv
DEPENDPATH += $$PWD/../pv

unix:!macx: LIBS += -L$$PWD/../../../../../../opt/epics/base/lib/linux-x86_64/ -lca

INCLUDEPATH += $$PWD/../../../../../../opt/epics/base/lib/linux-x86_64
DEPENDPATH += $$PWD/../../../../../../opt/epics/base/lib/linux-x86_64

unix:!macx: LIBS += -L$$PWD/../../../../../../opt/epics/base/lib/linux-x86_64/ -lCom

INCLUDEPATH += $$PWD/../../../../../../opt/epics/base/lib/linux-x86_64
DEPENDPATH += $$PWD/../../../../../../opt/epics/base/lib/linux-x86_64

unix:!macx: LIBS += -L$$PWD/../../../../../../usr/local/qwt-6.1.2/lib/ -lqwt

INCLUDEPATH += $$PWD/../../../../../../usr/local/qwt-6.1.2/include
DEPENDPATH += $$PWD/../../../../../../usr/local/qwt-6.1.2/include
