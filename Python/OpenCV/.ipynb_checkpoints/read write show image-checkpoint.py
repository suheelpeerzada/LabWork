import cv2

img = cv2.imread("OpenCV\\data\\lena.jpg", 1)
cv2.imshow('image', img)
k = cv2.waitKey(0)
if k == 27:
    cv2.destroyAllWindows()
else:
    cv2.imwrite('OpenCV\\lena_copy.jpg', img)
cv2.destroyAllWindows()