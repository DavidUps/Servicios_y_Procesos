
#Crear el demonio

sudo vi /etc/systemd/system/<Nombre>.service

##Ejemplo de demonio
[Unit]
Description=descripcion
After=multi-user.target

[Service]
Type=simple
ExecStart=ruta de el archivo
User=usuario
WorkingDirectory=ruta de la carpeta del archivo
Restart=on-failure

[Intall]
WantedBy=multi-user.target


//Pararlo
sudo systemctl enable demonio.service
//Actualizar los demonios
sudo systemctl daemon-reload
//Iniciarlo
sudo systemctl start demonio.service
//Mirar como esta
sudo systemctl status demonio.service
