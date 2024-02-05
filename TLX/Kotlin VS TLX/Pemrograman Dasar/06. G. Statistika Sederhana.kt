import java.util.Scanner

fun main(Args: Array<String>) {
    val sc = Scanner(System.`in`)
    val N = sc.nextInt()   
    var low = 101; var high = 0
    for(i in 1..N) {
        var now = sc.nextInt()
        if(now < low) low = now
        if(now > high) high = now
    }
    print("${high} ${low}")
}