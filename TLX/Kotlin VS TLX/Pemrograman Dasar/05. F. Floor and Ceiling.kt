import java.util.Scanner

fun main(Args: Array<String>) {
    val sc = Scanner(System.`in`)
    val N = sc.nextFloat()
    var out: Int = N.toInt()
    if(N < 0) {
        print("${out-1} ${out}")
    } else {
        print("${out} ${out+1}")
    }
}