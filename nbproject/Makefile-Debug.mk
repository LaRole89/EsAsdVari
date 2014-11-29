#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin_4.x-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Compitino29012013Es1.o \
	${OBJECTDIR}/Consegne23102010Es3.o \
	${OBJECTDIR}/Consegne28102009Es1.o \
	${OBJECTDIR}/Consegne28102009Es2.o \
	${OBJECTDIR}/Consegne28102009Es4.o \
	${OBJECTDIR}/Consegne31102014Es1.o \
	${OBJECTDIR}/Consegne31102014Es2.o \
	${OBJECTDIR}/Consegne31102014Es3.o \
	${OBJECTDIR}/Esame10092012Es1.o \
	${OBJECTDIR}/Esame29052012Es2.o \
	${OBJECTDIR}/Esame30052013Es2.o \
	${OBJECTDIR}/Test.o \
	${OBJECTDIR}/functionABR.o \
	${OBJECTDIR}/functionTree.o \
	${OBJECTDIR}/margeSort.o \
	${OBJECTDIR}/quickSort.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/asdesvari.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/asdesvari.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/asdesvari ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Compitino29012013Es1.o: Compitino29012013Es1.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Compitino29012013Es1.o Compitino29012013Es1.c

${OBJECTDIR}/Consegne23102010Es3.o: Consegne23102010Es3.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Consegne23102010Es3.o Consegne23102010Es3.c

${OBJECTDIR}/Consegne28102009Es1.o: Consegne28102009Es1.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Consegne28102009Es1.o Consegne28102009Es1.c

${OBJECTDIR}/Consegne28102009Es2.o: Consegne28102009Es2.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Consegne28102009Es2.o Consegne28102009Es2.c

${OBJECTDIR}/Consegne28102009Es4.o: Consegne28102009Es4.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Consegne28102009Es4.o Consegne28102009Es4.c

${OBJECTDIR}/Consegne31102014Es1.o: Consegne31102014Es1.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Consegne31102014Es1.o Consegne31102014Es1.c

${OBJECTDIR}/Consegne31102014Es2.o: Consegne31102014Es2.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Consegne31102014Es2.o Consegne31102014Es2.c

${OBJECTDIR}/Consegne31102014Es3.o: Consegne31102014Es3.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Consegne31102014Es3.o Consegne31102014Es3.c

${OBJECTDIR}/Esame10092012Es1.o: Esame10092012Es1.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Esame10092012Es1.o Esame10092012Es1.c

${OBJECTDIR}/Esame29052012Es2.o: Esame29052012Es2.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Esame29052012Es2.o Esame29052012Es2.c

${OBJECTDIR}/Esame30052013Es2.o: Esame30052013Es2.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Esame30052013Es2.o Esame30052013Es2.c

${OBJECTDIR}/Test.o: Test.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Test.o Test.c

${OBJECTDIR}/functionABR.o: functionABR.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/functionABR.o functionABR.c

${OBJECTDIR}/functionTree.o: functionTree.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/functionTree.o functionTree.c

${OBJECTDIR}/margeSort.o: margeSort.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/margeSort.o margeSort.c

${OBJECTDIR}/quickSort.o: quickSort.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/quickSort.o quickSort.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/asdesvari.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
