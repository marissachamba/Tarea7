public class App {
    public static void main(String[] args) {
     Telefono miTelefono = new Telefono("Iphone", "15", 500.0);

        System.out.println("== Teléfono inicial ==");
        miTelefono.mostrarInfo();

        System.out.println("Cambiando precio a 420.0 (válido)");
        miTelefono.setPrecio(420.0);
        miTelefono.mostrarInfo();

        System.out.println("Intentando cambiar precio a -50.0 (inválido)");
        miTelefono.setPrecio(-50.0);
        miTelefono.mostrarInfo();

        System.out.println("Consultando datos con getters:");
        System.out.println("Marca: " + miTelefono.getMarca());
        System.out.println("Modelo: " + miTelefono.getModelo());
        System.out.println("Precio final: $" + miTelefono.getPrecio());
    }
    
}
