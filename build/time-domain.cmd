set terminal qt persist enhanced font 'Script,12'
set title 'time-domain'
set xlabel 'No Label'
set ylabel 'No Label'
plot 'time-domain.dat' using 1:2 lt rgb 'blue' with lines notitle
