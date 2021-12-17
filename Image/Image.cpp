//
//  Image.cpp
//  Image
//
//  Kerima Hussen
//


#include "Image.h"
Image::Image(const std::string &fileName, const std::string &imageType, const std::string &dateCreated, double size, const std::string &authorName, int width, int height, int apertureSize, int shutterSpeed,int isoValue, bool flashEnabled) {
    setFileName(fileName);
    setImageType(imageType);
    setDateCreated(dateCreated);
    setSize(size);
    setAuthorName(authorName);
    setImageDimension(width,height);
    setAperture(apertureSize);
    setExposure(shutterSpeed);
    setIsoValue(isoValue);
    this ->flashEnabled = flashEnabled;
}
const std::string &Image::getFileName() const {
    return fileName;
}
void Image::setFileName(const std::string &fileName){
    if (fileName.empty()) {
        std::cout<<"No valid name is provided!"<<std::endl;
        this ->fileName = "Invalid name";
    }
    else this->fileName = fileName;
    }

const std::string &Image::getImageType() const {
    return imageType;
}
void Image::setImageType(const std::string &imageType) {
    if (imageType =="PNG" || imageType == "GIF" || imageType == "JPEG")
        this -> imageType = imageType;
    else {
        std::cout <<"No valid image type!"<<std::endl;
        this ->imageType = "Invalid Type";
    }
}
const std::string &Image::getDateCreated() const {
    return dateCreated;
}
void Image::setDateCreated(const std::string &dateCreated){
    if (dateCreated.empty()) {
        std::cout<<"No valid name is provided!"<<std::endl;
        this ->dateCreated = "01-01-01";
    }
    else this-> dateCreated= dateCreated;
    }
double Image::getSize() const {
    return size;
}
void Image::setSize(double size){
    if(size <0)size =0;
    this ->size = size;
}
const std::string &Image::getAuthorName() const {
    return authorName;
}
void Image::setAuthorName(const std::string &authorName) {
    if (authorName.empty()) {
        std::cout<<"No valid author name is provided!"<<std::endl;
        this -> authorName = "Invalid name";
    }
    else this->authorName = authorName;
    }
const Dimensions &Image::getImageDimension() const {
    return this ->imageDimension;
}
void Image::setImageDimension(int width, int height) {
    if (width < 0) width = 0;
    if (height < 0) height = 0;
    Image::imageDimension.width = width;
    Image::imageDimension.height = height;
}
const Aperture &Image::getAperture() const {
    return this -> aperture;
}
void Image::setAperture(int apertureSize){
    if (apertureSize <= 0) apertureSize =1;
    this ->aperture.apertureSize = apertureSize;
}
const Exposure &Image::getExposure() const {
    return this -> exposure;
}
void Image::setExposure(int shutterSpeed){
    if (shutterSpeed <= 0) shutterSpeed =0;
    this ->exposure.shutterSpeed = shutterSpeed;
}
int Image::getIsoValue() const {
    return ISOValue;
}
void Image::setIsoValue(int isoValue){
    this -> ISOValue = isoValue;
}
bool Image::isFlashEnabled() const {
    return flashEnabled;
}
void Image::setFlashEnabled(bool flashedEnabled){
    this ->flashEnabled = flashedEnabled;
}
std::ostream &operator<<(std::ostream &os, const Dimensions &d){
    os<<"Width: " <<d.width<<"," <<"Heigtht: " <<d.height<<'\n';
    return os;
}
std::ostream &operator<<(std::ostream &os, const Aperture  &a){
    os<<"Aperture size: f/ " <<a.apertureSize<<'\n';
    return os;
}std::ostream &operator<<(std::ostream &os, const Exposure  &e){
    os<<"Exposure time: 1/ " <<e.shutterSpeed<<'\n';
    return os;
    


}
