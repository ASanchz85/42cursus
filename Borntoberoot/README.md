    [!]Script de información del sistema
Este script muestra información detallada sobre el sistema en el que se ejecuta. Al ejecutar el script, se mostrará información sobre la arquitectura del sistema, el uso de la CPU y la memoria, el uso del disco duro, la carga de la CPU, la última vez que se inició el sistema, si se está utilizando LVM (Logical Volume Manager), el número de conexiones TCP establecidas, el número de usuarios conectados al sistema y la dirección IP del sistema.

    [!]Uso
Para ejecutar el script, primero debe hacerlo ejecutable con el comando chmod +x nombre_del_script.sh. Luego, puede ejecutar el script con el comando ./nombre_del_script.sh.

    [!]Dependencias
El script utiliza varios comandos del sistema, como hostnamectl, awk, cut, uniq, sed, cat, wc, free, df, top, who, lsblk, netstat, hostname e ip, por lo que asegúrese de que estos comandos estén disponibles en su sistema.

    [!]Salida
Aquí hay un ejemplo de la salida del script:

#Architecture: CentOS Linux 8 (Core) x86_64
#CPU physical: 1
#vCPU:  1
#Memory Usage: 

    [!]Explicación detallada

1- "#!/bin/bash" indica que el script debe interpretarse con el intérprete de comandos "bash".

2- "wall $'#Architecture: ' hostnamectl | grep 'Operating System' | cut -d ' ' -f5- awk -F':' '/^model name/ {print $2}' /proc/cpuinfo | uniq | sed -e 's/^[ \t]*//' arch" envía un mensaje a todos los usuarios conectados al sistema con la siguiente información:

  "#Architecture: " es una etiqueta para el mensaje.
  "hostnamectl | grep 'Operating System' | cut -d ' ' -f5-" obtiene el nombre del sistema operativo y lo muestra.
  "awk -F':' '/^model name/ {print $2}' /proc/cpuinfo | uniq | sed -e 's/^[ \t]*//'" obtiene el modelo de la CPU y lo muestra.
  "arch" muestra la arquitectura del sistema (x86_64, por ejemplo).
  
3- "$'\n#CPU physical: 'cat /proc/cpuinfo | grep processor | wc -l" envía otra línea del mensaje con el número de CPUs físicas en el sistema.

4- "$'\n#vCPU: 'cat /proc/cpuinfo | grep processor | wc -l" envía otra línea del mensaje con el número de CPUs virtuales (vCPUs) en el sistema. En este caso, el número de vCPUs es igual al número de CPUs físicas.

5- "$'\n'`free -m | awk 'NR==2{printf "#Memory Usage: %s/%sMB (%.2f%%)", $3,$2,$3*100/$2 }'" envía otra línea del mensaje con el uso de la memoria en el sistema, mostrando la cantidad de memoria utilizada y la cantidad total de memoria disponible en MB, y el porcentaje de uso.

6- "$'\n'`df -h | awk '$NF=="/"{printf "#Disk Usage: %d/%dGB (%s)", $3,$2,$5}'" envía otra línea del mensaje con el uso del disco duro en el sistema, mostrando la cantidad de espacio utilizado y la cantidad total de espacio disponible en GB, y el porcentaje de uso.

7- "$'\n'`top -bn1 | grep load | awk '{printf "#CPU Load: %.2f\n", $(NF-2)}'" envía otra línea del mensaje con la carga de la CPU en el sistema

8- "$'\n#Last boot: ' `who -b | awk '{print $3" "$4" "$5}'" envía otra línea del mensaje con la fecha y hora de la última vez que se inició el sistema.

9- "$'\n#LVM use: ' `lsblk |grep lvm | awk '{if ($1) {print "yes";exit;} else {print "no"} }'" envía otra línea del mensaje con "yes" si se está utilizando LVM en el sistema o "no" si no se está utilizando.

10- "$'\n#Connection TCP:' netstat -an | grep ESTABLISHED | wc -l" envía otra línea del mensaje con el número de conexiones TCP establecidas en el sistema.

11- "$'\n#User log: ' who | cut -d " " -f 1 | sort -u | wc -l" envía otra línea del mensaje con el número de usuarios conectados al sistema.

12- "$'\nNetwork: IP ' hostname -I"("ip a | grep link/ether | awk '{print $2}'")"" envía otra línea del mensaje con la dirección IP del sistema y su dirección MAC.

13- "$'\n#Sudo: ' grep 'sudo ' /var/log/sudo.log | wc -l" envía otra línea del mensaje con el número de veces que se ha ejecutado "sudo" en el sistema.
