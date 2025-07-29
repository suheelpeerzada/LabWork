import cv2 as cv

cap = cv.VideoCapture(0)
fourcc = cv.VideoWriter_fourcc(*'XVID')
out = cv.VideoWriter('OpenCV\\ahmad.avi', fourcc, 20.0, (640,480))

while(cap.isOpened()):
    ret , frame = cap.read()
    if ret == True:
        # print(cap.get(cv.CAP_PROP_FRAME_WIDTH))
        # print(cap.get(cv.CAP_PROP_FRAME_HEIGHT))
        gray = cv.cvtColor(frame, cv.COLOR_BGR2GRAY)

        out.write(frame)

        cv.imshow('video' , gray)

        if cv.waitKey(1) & 0xFF == ord('q'):
            break
    else:
        break
cap.release()
out.release()
cv.destroyAllWindows()