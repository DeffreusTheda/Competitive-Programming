import java.util.Scanner

fun main(Args: Array<String>) {
    val sc = Scanner(System.`in`)
    var arr = Array(100) {0}
    var count = 0
    while(sc.hasNextInt()) { arr[count] = sc.nextInt(); count++ }
    for(i in 1..count) println(arr[count-i])
}