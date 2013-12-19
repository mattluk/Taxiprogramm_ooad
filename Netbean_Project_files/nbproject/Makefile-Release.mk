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
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/1360937237/Adresse.o \
	${OBJECTDIR}/_ext/1360937237/Auftrag.o \
	${OBJECTDIR}/_ext/1360937237/Auftragssystem.o \
	${OBJECTDIR}/_ext/1360937237/DateTime.o \
	${OBJECTDIR}/_ext/1360937237/Hauptmenue.o \
	${OBJECTDIR}/_ext/1360937237/I_KomSys.o \
	${OBJECTDIR}/_ext/1360937237/Koordinate.o \
	${OBJECTDIR}/_ext/1360937237/Kunde.o \
	${OBJECTDIR}/_ext/1360937237/Kundendatenbank.o \
	${OBJECTDIR}/_ext/1360937237/Schichtplan.o \
	${OBJECTDIR}/_ext/1360937237/Status.o \
	${OBJECTDIR}/_ext/1360937237/Taxi.o \
	${OBJECTDIR}/_ext/1360937237/TaxiKomSys.o \
	${OBJECTDIR}/_ext/1360937237/Taxidatenbank.o \
	${OBJECTDIR}/_ext/1360937237/ePayment.o \
	${OBJECTDIR}/_ext/1360937237/main.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/netbean_project_files

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/netbean_project_files: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/netbean_project_files ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/1360937237/Adresse.o: ../src/Adresse.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1360937237
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1360937237/Adresse.o ../src/Adresse.cpp

${OBJECTDIR}/_ext/1360937237/Auftrag.o: ../src/Auftrag.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1360937237
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1360937237/Auftrag.o ../src/Auftrag.cpp

${OBJECTDIR}/_ext/1360937237/Auftragssystem.o: ../src/Auftragssystem.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1360937237
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1360937237/Auftragssystem.o ../src/Auftragssystem.cpp

${OBJECTDIR}/_ext/1360937237/DateTime.o: ../src/DateTime.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1360937237
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1360937237/DateTime.o ../src/DateTime.cpp

${OBJECTDIR}/_ext/1360937237/Hauptmenue.o: ../src/Hauptmenue.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1360937237
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1360937237/Hauptmenue.o ../src/Hauptmenue.cpp

${OBJECTDIR}/_ext/1360937237/I_KomSys.o: ../src/I_KomSys.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1360937237
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1360937237/I_KomSys.o ../src/I_KomSys.cpp

${OBJECTDIR}/_ext/1360937237/Koordinate.o: ../src/Koordinate.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1360937237
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1360937237/Koordinate.o ../src/Koordinate.cpp

${OBJECTDIR}/_ext/1360937237/Kunde.o: ../src/Kunde.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1360937237
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1360937237/Kunde.o ../src/Kunde.cpp

${OBJECTDIR}/_ext/1360937237/Kundendatenbank.o: ../src/Kundendatenbank.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1360937237
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1360937237/Kundendatenbank.o ../src/Kundendatenbank.cpp

${OBJECTDIR}/_ext/1360937237/Schichtplan.o: ../src/Schichtplan.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1360937237
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1360937237/Schichtplan.o ../src/Schichtplan.cpp

${OBJECTDIR}/_ext/1360937237/Status.o: ../src/Status.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1360937237
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1360937237/Status.o ../src/Status.cpp

${OBJECTDIR}/_ext/1360937237/Taxi.o: ../src/Taxi.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1360937237
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1360937237/Taxi.o ../src/Taxi.cpp

${OBJECTDIR}/_ext/1360937237/TaxiKomSys.o: ../src/TaxiKomSys.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1360937237
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1360937237/TaxiKomSys.o ../src/TaxiKomSys.cpp

${OBJECTDIR}/_ext/1360937237/Taxidatenbank.o: ../src/Taxidatenbank.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1360937237
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1360937237/Taxidatenbank.o ../src/Taxidatenbank.cpp

${OBJECTDIR}/_ext/1360937237/ePayment.o: ../src/ePayment.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1360937237
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1360937237/ePayment.o ../src/ePayment.cpp

${OBJECTDIR}/_ext/1360937237/main.o: ../src/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1360937237
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1360937237/main.o ../src/main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/netbean_project_files

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
