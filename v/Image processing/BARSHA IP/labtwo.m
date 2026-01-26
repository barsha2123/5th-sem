clear all;
close all;
clc;

% load image package (for Octave)
pkg load image;

% read image
img = imread("Hill.png");
figure;
imshow(img);
#subplot(2,2,1);
% convert to grayscale
grayscale_img = rgb2gray(img);
figure;
imshow(grayscale_img);
#subplot(2,2,2);
title("grayscale image");
imwrite(grayscale_img, "original.jpg");

% calculate negative of the image
output = 255 - grayscale_img;

% show output image
figure;
imshow(uint8(output));
#subplot(2,2,3);
title("output image");
imwrite(uint8(output), "negative_tan.jpg");
