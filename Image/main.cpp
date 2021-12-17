//
//  main.cpp
//  Image
//
// kerima hussen
//


#include "Image.h"

void printImageMetaData(Image & image) {
    std::cout <<"Image Name: "<<image.getFileName() <<std::endl;
    std::cout <<"Image type: " <<image.getImageType() <<std::endl;
    std::cout <<"Date Created: " <<image.getDateCreated() <<std::endl;
    std::cout <<"Image size(MB): " <<image.getSize() <<std::endl;
    std::cout <<"Author Name: " <<image.getAuthorName() <<std::endl;
    std::cout <<"Dimensions value: " <<image.getImageDimension() <<std::endl;
    std::cout <<"Aperture value: " <<image.getAperture() <<std::endl;
    std::cout <<"Exposure value: " << image.getExposure () <<std::endl;
    std::cout <<"ISO value: " <<image.getIsoValue() <<std::endl;
    std::cout <<"Flash enabled: "; if(image.isFlashEnabled()) {
        std::cout << "True" <<std::endl;
    }
    else {
        std::cout<<"False" <<std::endl;
    }
}
int main() {
    Image image("cities_image" , "JPEG", "10-05-2021", 7.9, "James", 1956,1024,32,56,2700,true);
    printImageMetaData(image);
    return 0;
}
