import java.util.Scanner

fun main(Args: Array<String>) {
    val sc = Scanner(System.`in`)
    val A = sc.nextInt(); val T = sc.nextInt()
    val area = 0.5 * A * T
    print("%.2f".format(area))
}