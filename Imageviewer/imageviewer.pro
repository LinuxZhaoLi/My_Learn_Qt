QT += widgets
#Qt PrintSupport模块提供了使打印更容易和可移植的类
qtHaveModule(printsupport): QT += printsupport

HEADERS       = imageviewer.h
SOURCES       = imageviewer.cpp \
                main.cpp

# install
message($$[QT_INSTALL_EXAMPLES])
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/widgets/imageviewer
INSTALLS += target

wince {
   DEPLOYMENT_PLUGIN += qjpeg qgif
}
message(DEPLOYMENT_PLUGIN)
