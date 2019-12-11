{
  struct { int x; int y; } A;
  struct { int n; int m; } B;
  int aux;

  read(aux); A.x = aux;
  read(aux); B.n = aux;
    while ( A.x != 5) { A.x = A.x + B.n; }
  print(A.x);
}