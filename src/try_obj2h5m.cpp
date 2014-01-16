/*
 * Program to convert triangular surface mesh from stl/obj/wav to h5m
 */
#include <fstream>
#include <iostream>
int read_file (std::string filename);

int main (int argc, char* argv[])
{
  std::string filename;
  // check for arguments
  if( argc == 1 )
    {
      std::cout << "Please provide a filename!" << std::endl;
      return 1;
    }
  else // arguments are provided
    {
      filename = argv[1];
    }
  std::cout << "Filename = " << filename << std::endl;
  read_file(filename);
  return 0;
}

/*
 * function to return data from the file
 */
int read_file(std::string filename)
{
   std::fstream myfile;
   std::string line;
   myfile.open(filename.c_str());
   if (myfile.is_open())
   {
	while ( getline (myfile, line))
	{
	 std::cout << line << '\n';
	}
	myfile.close();
   } 
   else 
      std::cout << "Can't open file";

  return 0;
}
