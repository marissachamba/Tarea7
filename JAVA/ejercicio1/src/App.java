public class App {
    public static void main(String[] args) throws Exception {
        Mascota mascota1 = new Mascota("Bruno". "perro", 3);
        Mascota mascota2 = new Mascota("Michi", "Gato", 2);

        System.out.println("==Mascota 1 ==");
        mascota1.mostrarInfo();

        System.out.println("==Mascota 2 ==");
        mascota2.mostrarInfo();
    }
}
