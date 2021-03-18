#!/bin/bash

#Comprobar num parametros es correcto
if [ $# != 3 ]
then 
	#Se notifica por el canal de errores.
	echo "No has introducido parametros." >> /dev/stderr
	exit
fi
#El 1er argumento es ALT_MIN(en mm), el 2 es ALT_MAX (en mm)
#El tercer argumento es el num de alturas a generar
alt_min=$1
alt_max=$2
n_alt=$3
array_pais=(ES FR DE IT UK US)
#Para cada altura
for i in `seq 1 $n_alt`; do
	# genera altura aleatoria entre valor min y max
	altura=$(( $RANDOM %($alt_max-$alt_min) + $alt_min ))
	
	if [ $altura -gt $(( $alt_max*90/100 )) ]
	then
		# si esta por encima del 90% de ALT_MAX, su categoria es A
		categoria="A"
	else if [ $altura -lt $(( $alt_min*125/100 )) ]
	then	
			# si esta hasta un 25% por encima de ALT_MIN, categoria es B
			categoria="B"
		else
			categoria="N"
		fi
	fi
	# Genera el pais aleatoriamente
	n_pais=$(( $RANDOM % 6 ))
	pais=${array_pais[$n_pais]}
	
	echo "$altura	$categoria	$pais"
done
