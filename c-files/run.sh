echo "Compilation choicinator 4000"
echo ""
while true; do
read -p "Enter which exercise you want to build and run: " choice
echo ""

    if [ "$choice" ]; then
        echo "Code-----------------"
        echo ""
        gcc -o run ${choice}/${choice}.c && ./run
        echo ""
        echo "end-----------------"
        rm -f run
        break
    elif [ -z "$choice" ]; then
        echo "Incorrect input!!! try again"
    else 
        echo "Incorrect filename or does not exist!!! try again"
    fi
    echo ""
done