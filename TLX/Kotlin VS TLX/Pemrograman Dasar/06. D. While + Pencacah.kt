import java.util.Scanner

fun main(Args: Array<String>) {
    val sc = Scanner(System.`in`)
    var out = 0
    while(sc.hasNextInt()) {
        out += sc.nextInt()   
    }
    print(out)
}   