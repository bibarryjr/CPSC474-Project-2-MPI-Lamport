#include <iostream>
#include <algorithm>
#include "mpi.h"

using namespace std;

#define N 10
#define M 10

int main(int argc, char *argv[]) {
  int size, rank;
  string given_events[N][M];

  int send_array[100];
  fill_n(send_array, 100, -1);

  MPI_Init( &argc, &argv );
  MPI_Comm_rank( MPI_COMM_WORLD, &rank );
  MPI_Comm_size( MPI_COMM_WORLD, &size );

  if (rank == 0) {
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
          given_events[i][j] = "NULL";
        }
      }

    cout << "Enter the input for the logical clock" << endl;
    for (int i = 0; i < N; i++) {
      cout << "Enter the events for process " << i << endl;
      for (int j = 0; j < M; j++) {
        cin >> input;
        if (input != "NULL") {
            given_events[i][j] = input;
        }
      }
    }

  }


}
