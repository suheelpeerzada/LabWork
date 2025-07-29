import cv2

cap = cv2.VideoCapture(0)
fourcc = cv2.VideoWriter_fourcc(*"XVID")
out = cv2.VideoWriter('OpenCV/output.avi', fourcc, 20.0, (640,480))

while(True):
    ret, frame = cap.read()

    if ret:

        out.write(frame)

        grey = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

        cv2.imshow('output', grey)
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break
    else:
        break

cap.release()
out.release()
cv2.destroyAllWindows()