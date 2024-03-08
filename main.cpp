#include <iostream>
#include <vector>
#include "./headers/Point3D.h"
#include "./headers/Triangulation.h"
#include "./headers/STLReader.h"
#include "./headers/STLWriter.h"
#include "./headers/Clipping.h"

int main()
{
    try
    {
              
        vector<Point3D> points;
     
        Triangulation triangulation1,triangulation2;
        Clipping clipper;
        clipper.clip(triangulation1,triangulation2);
        

        // STLWriter stlWriter;
        // stlWriter.writeSTLToFile(filepath1, triangulation1);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}