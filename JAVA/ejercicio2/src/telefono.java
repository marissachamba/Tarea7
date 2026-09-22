public class telefono {

    private String marca;
    private String modelo;
    private double precio;

    public Telefono(String marca, String modelo, double precio) {
        this.marca = marca;
        this.modelo = modelo;
        
        if (precio >= 0) {
            this.precio = precio;
        } else {
            System.out.println("El precio no puede ser negativo. Se asignó 0.0");
            this.precio = 0.0;
        }
    }
    
}
