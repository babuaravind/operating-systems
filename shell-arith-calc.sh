echo "ENTER THE VALUE OF A:"
read a
echo "ENTER THE VALUE OF B:"
read b
c=0
echo "ENTER THE OPTION TO PERFORM 1.ADDITION 2.SUBTRACTION 3.MULTIPLICATION 4.DIVISION"
read op
case "$op" in
1)c=`expr $a + $b`
echo $c;;
2)c=`expr $a - $b`
echo $c;;
3)c=`expr $a \* $b`
echo $c;;
4)c=`expr $a / $b`
echo $c;;
esac
exit
