// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Скопировать строку s в новую и зашифровать ее,
// заменяя каждую букву на следующую за ней в алфавите 
// (считать, что за ‘z’ следует ‘a’), сохраняя регистр.

char* task3(char* s)
{
  int len = 0;
  while (s[len] != '\0')
  {
    len++;
  }

  char* sh = (char)malloc((len) * sizeof(char));

  for (int i = 0; i < len; i++)
  {
    if (s[i] == 'a')
    {
      sh[i] = 'z';
    }
    else if (s[i] == 'A')
    {
      sh[i] = 'Z';
    }
    else
    {
      sh[i] = s[i] + 1;
    }
  }
  return sh;
}
