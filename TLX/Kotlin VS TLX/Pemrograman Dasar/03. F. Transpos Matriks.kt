import java.util.Scanner

fun main(Args: Array<String>) {
    val sc = Scanner(System.`in`)
    val input = Array(3) { Array(3) {0} }
    //val a = sc.next(); val b = sc.next(); val c = sc.next(); val d = sc.next(); val e = sc.next(); val f = sc.next(); val g = sc.next(); val h = sc.next(); val i = sc.next()
    for(i in 0..2) {
        for(j in 0..2) {input[i][j] = sc.nextInt()}
    }
    //print("$a $d $g\n$b $e $h\n$c $f $i")
    for(i in 0..2) {
        for(j in 0..2) {print("${input[j][i]} ")}
        print("\n")
    }
}