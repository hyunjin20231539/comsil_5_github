if [ $# -eq 0 ]
then
    echo "Usage: phone searchfor [… searchfor]"
    echo "(You didn’t tell me what you want to search for.)"

else
    args=$1
    for arg in "$@"
    do
      args="${args}|${arg}"
    done
fi


egrep -i "$args" mydata.txt > tmp
awk -f display.awk tmp [ $# -eq 0 ]
