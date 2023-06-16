RELEASE="version-10.0.0-RC01"
JAVA_INCLUDE_PATH="/usr/bin/jdk1.8.0_161/include"
JAVA_AWT_INCLUDE_PATH="/usr/bin/jdk1.8.0_161/include/linux"
JAVA_AWT_LIBRARY="/usr/bin/jdk1.8.0_161/lib/aarch64"
JAVA_HOME="/usr/bin/jdk1.8.0_161"
cmake ./jcuda-main
make all
cd jcuda-main
mvn clean install
