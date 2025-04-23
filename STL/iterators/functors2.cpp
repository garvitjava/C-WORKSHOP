#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Functor to check if X-ray is uploaded
class XRayUploaded {
public:
    bool operator()(const bool xrayUploaded) const { 
        return !xrayUploaded;  // Returns true if X-ray is not uploaded
    }
};

int main() {
    vector<bool> patientXrayStatus = {true, false, true, false};

    // Use functor to flag patients who haven't uploaded X-ray
    XRayUploaded xrayCheck;
    int count = count_if(patientXrayStatus.begin(), patientXrayStatus.end(), xrayCheck);

    cout << "Number of patients who haven't uploaded X-rays: " << count << endl;

    return 0;
}
