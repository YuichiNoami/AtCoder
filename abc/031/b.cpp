#include <bits/stdc++.h>
using namespace std;

void fill_island(vector<vector<char>> &board, vector<vector<bool>> &checked, int y, int x)
{
  if (y >= 10 || x >= 10 || y < 0 || x < 0)
  {
    return;
  }
  if (board.at(y).at(x) == 'x')
  {
    return;
  }
  if (checked.at(y).at(x))
  {
    return;
  }

  checked.at(y).at(x) = true;
  fill_island(board, checked, y - 1, x);
  fill_island(board, checked, y, x + 1);
  fill_island(board, checked, y + 1, x);
  fill_island(board, checked, y, x - 1);
}

bool solve(vector<vector<char>> &board)
{
  vector<vector<bool>> checked(10, vector<bool>(10, false));

  // 陸地マスを1つ探す
  int y, x;
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (board.at(i).at(j) == 'o')
      {
        y = i;
        x = j;
        break;
      }
    }
  }
  /* 引数： 盤面, チェック二次元配列, y座標, x座標*/
  fill_island(board, checked, y, x); // (y, x)から到達できるすべての陸地マスのcheckedをtrueにする

  bool ok = true;
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (board.at(i).at(j) == 'o')
      {
        if (!checked.at(i).at(j))
        {
          // 到達できていない陸地マスがある
          ok = false;
        }
      }
    }
  }

  // ok == true なら全ての陸地マスは繋がっている
  return ok;
}

int main()
{
  vector<vector<char>> board(10, vector<char>(10));

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      cin >> board.at(i).at(j);
    }
  }

  for (int y = 0; y < 10; y++)
  {
    for (int x = 0; x < 10; x++)
    {
      if (board.at(y).at(x) == 'o')
      {
        continue;
      }

      board.at(y).at(x) = 'o';
      if (solve(board))
      {
        cout << "YES" << endl;
        return 0;
      }
      board.at(y).at(x) = 'x';
    }
  }

  cout << "NO" << endl;
}