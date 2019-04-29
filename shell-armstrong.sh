echo "Enter the number" 
read n
cube=0
x=0
sum=0
temp=$n
while((temp !=0))
do
x=`expr $temp % 10`
cube=`expr $x\*$x\*$x`
sum=`expr $sum+$cube`
temp=`expr $temp / 10`
done
if (($sum==$n))
then
echo "It is an Armstrong number"
elif (($sum!=$n))
then
echo "It is not an Armstrong number"
fi
