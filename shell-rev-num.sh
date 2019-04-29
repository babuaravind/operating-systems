echo "ENTER THE NUMBER" 
read n
rnum=0 
while [ $n -ne 0 ]
do
remainder=`expr $n % 10 | bc`
rnum=`expr $rnum \* 10 + $remainder | bc`
n=`expr $n / 10 | bc`
done
echo "REVERSE OF THE NUMBER IS $rnum"