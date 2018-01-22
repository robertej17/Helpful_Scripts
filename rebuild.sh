cd ~
rm -rf build_test
mkdir build_test
cd build_test
#cmake -DGeant4_DIR=/home/bobby/Geant4/geant4.10.03.p02-install/lib/Geant4-10.3.2 /home/bobby/Geant4/geant4.10.03.p02/examples/basic/B3/NaI
#make exampleB3a
cmake -DGeant4_DIR=/home/bobby/Geant4/geant4.10.03.p02-install/lib/Geant4-10.3.2 /home/bobby/Geant4/geant4.10.03.p02/examples/basic/B2/NaI_Sim
make exampleB2a

make install
export BUILD_SOURCE=/home/bobby/Geant4/geant4.10.03.p02/examples/basic/B2/NaI_Sim


