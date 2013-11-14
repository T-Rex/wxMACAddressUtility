CXX=c++
CC=gcc

# Common ################################################################################

OUT_DIR=bin/
BUNDLE_DIR=bin/
BUNDLE=.app/Contents/MacOS/

LIBS=`wx-config --libs --libs`
INCS=-I./wxMACAddressUtility `wx-config --libs --cxxflags`

PROG=wxMACAddressUtility

SRC=wxMACAddressUtility/MACAddressUtility.cpp \
	wxMACAddressUtility/wxMACAddressUtilityApp.cpp \
	wxMACAddressUtility/wxMACAddressUtilityMainFrame.cpp

APP_BUNDLE=${BUNDLE_DIR}${PROG}${BUNDLE}

# Builds ################################################################################

all: 
	mkdir -p ${OUT_DIR}
	${CXX} -g -o ${OUT_DIR}${PROG} ${LIBS} ${INCS} ${SRC} 


# Bundles ###############################################################################

bundle:
	mkdir -p ${APP_BUNDLE} && cp -v ${OUT_DIR}${PROG} ${APP_BUNDLE}


# Cleans ################################################################################

clean:
	rm -rf *.o ${OUT_DIR}${PROG}* ${BUNDLE_DIR}
