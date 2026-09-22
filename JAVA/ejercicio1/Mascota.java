public class mascota {
     String nombre;
     String especie;
     int edad;   
    
    public Mascota(string nombre, string especie, int edad){
     this.nombre = nombre;
     this.especie = especie;
     this.edad  = edad;
    } 

    public void mostrarInfo(){
     System.out.println("Nombre: " + nombre);
     System.out.println("Especie : " + especie);
     System.out.println("Edad: " + edad + " años");
    }
}

