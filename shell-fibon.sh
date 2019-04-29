echo "Enter the length of the series"
read n
i=0
f1=0
f2=1
f3=0
echo "Fibonacci series with length $n is"
echo $f1
echo $f2
for((i=2;i<$n;i++))
do
f3=`expr $f1 + $f2`
echo $f3
f1=$f2
f2=$f3
done