package com.link_trust.platerecognize;

/**
 * Created by cjling on 16/5/26.
 */
public class PlateRecognizeLib {

    static {
        System.loadLibrary("recognize");
    }

    public native long InitSVM(String svm_path);
    public native long InitANN(String ann_path);
    public native String Recongize1(String ann_path, String svm_path, String img_path);
    public native String Recongize2(String ann_path, String svm_path, long img_data);
    public native String Recognize3(long ann_model, long svm_model, long img_data);

}
