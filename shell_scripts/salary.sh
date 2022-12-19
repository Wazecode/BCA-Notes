read -p "Enter the Employee Salary: " sal
hra=`bc <<< "scale=2; $sal / 10"`
da=`bc <<< "scale=2; $sal / 12.5"`
pf=`bc <<< "scale=2; $sal / 6.66"` 

while [ true ]
do
	read -p "Enter a option(h for help): " opt
	case "$opt" in

		1) echo "The hra for this Employee is $hra" 
			;;

		2) echo "The da for this Employee is $da" 
			;;

		3) echo "The pf for this Employee is $pf"
			;;

		4) gs=`bc <<< "scale=2; $sal+$hra+$da+$pf"`
			echo "The Employee gross Salary is $gs"
			;;

		h) printf "1. House Rent Allowance\n2. Dearness Allowance\n3. Providence Fund\n4. Gross Salary\nh. help\nq. quit\n" 
			;;

		q) exit
			;;
		*) echo "Invalid Input\n"
			;;

		esac
	done

