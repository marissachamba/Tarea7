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
    public String getMarca(){
      return marca;
    }

    public String getModelo(){
      return modelo;
    }

    public double getPrecio(){
      return precio;
    }


    public void setMarca(String marca) {
        this.marca = marca;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public void setPrecio(double precio) {
        
        if (precio >= 0) {
            this.precio = precio;
        } else {
            System.out.println("Precio inválido. No se puede asignar un valor negativo.");
        }
    }


    
}
