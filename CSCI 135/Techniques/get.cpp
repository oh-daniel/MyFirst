in_file.get(ch);
if (isdigit(ch))
{
 in_file.unget(); // Put the digit back
 data >> n; // Read integer starting with ch
}