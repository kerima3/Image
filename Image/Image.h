//
//  Image.h
//  Image
//
// kerima Hussen
//

#ifndef Image_h
#define Image_h

#include<stdio.h>
#include<string>
#include<iostream>

struct Dimensions{
    int width;
    int height;
    friend std::ostream& operator <<(std::ostream& os,const Dimensions& d);
};
struct Aperture {
    int apertureSize;
    friend std::ostream& operator<<(std::ostream& os, const Aperture& a);
};
struct Exposure {
    int shutterSpeed;
    friend std::ostream& operator<<(std::ostream& os, const Exposure& e);
};
class Image {
private:
    std::string fileName;
    std::string imageType;
    std::string dateCreated;
    double size;
    std::string authorName;
    Dimensions imageDimension;
    int width,height;
    Aperture aperture;
    Exposure exposure;
    int ISOValue;
    bool flashEnabled;
public:
    Image(const std::string &fileName,const std::string &imageType, const std::string &dateCreated,double size, const std::string &authorname, int width,int height,int apertureSize, int shutterSpeed,
          int IsoValue, bool falshEnabled);
    const std:: string &getFileName() const;
    void setFileName(const std::string &fileName);
    const std:: string &getImageType() const;
    void setImageType(const std::string &imageType);
    const std:: string &getDateCreated() const;
    void setDateCreated(const std::string &dateCreated);
    double getSize() const;
    void setSize(double size);
    const std::string&getAuthorName() const;
    void setAuthorName(const std::string &authorName);
    const Dimensions &getImageDimension() const;
    void setImageDimension(int width, int height);
    const Aperture&getAperture() const;
    void setAperture(int apertureSize);
    const Exposure &getExposure() const;
    void setExposure(int exposureTime);
    int getIsoValue () const;
    void setIsoValue(int isoValue);
    bool isFlashEnabled() const;
    void setFlashEnabled(bool flashEnabled);
    
};
#endif /* Image_h */
