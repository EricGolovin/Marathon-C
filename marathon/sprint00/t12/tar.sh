F1=$1
F2=$2
F3=$3
F4=$4

tar -cvf arch.tar $1 $2 $3 $4
rm -rf $1 $2 $3 $4
tar -xvf arch.tar
