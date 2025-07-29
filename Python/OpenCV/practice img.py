import cv2

img = cv2.imread("OpenCV\lena_copy.jpg", 1)
cv2.imshow('frame', img)
cv2.waitKey(0)
cv2.destroyAllWindows()