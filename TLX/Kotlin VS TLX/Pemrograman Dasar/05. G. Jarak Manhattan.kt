import java.util.Scanner

fun main(Args: Array<String>) {
    val sc = Scanner(System.`in`)
    val x1 = sc.nextInt(); val y1 = sc.nextInt(); val x2 = sc.nextInt(); val y2 = sc.nextInt()
    val x = x2 - x1; val y = y2 - y1;
    print("${abs(x) + abs(y)}")
}
fun abs(num: Int): Int {
    if(num < 0) return num * -1 else return num
}