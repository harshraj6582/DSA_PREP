#include <iostream>
#include <string>

// Forward declarations
class MME;
class SGW;

// Class definitions
class UE {
public:
    std::string id;
    UE(std::string id) : id(id) {}
    void attachRequest();
    void authResponse();
    void securityModeComplete();
    void attachComplete();
};

class eNodeB {
public:
    void receiveAttachRequest(UE &ue);
    void sendAttachRequestToMME(UE &ue);
    void sendAttachAccept(UE &ue);
    void receiveAttachComplete(UE &ue);
    void sendBearerResourceCommand();
    void receiveBearerResourceComplete();
};

class MME {
public:
    void receiveAttachRequestFromeNodeB(UE &ue);
    void sendAuthRequest(UE &ue);
    void receiveAuthResponse(UE &ue);
    void sendSecurityModeCommand(UE &ue);
    void receiveSecurityModeComplete(UE &ue);
    void sendAttachAccept(eNodeB &enb, UE &ue);
    void receiveAttachComplete(eNodeB &enb, UE &ue);
    void createSession(SGW &sgw);
};

class SGW {
public:
    void receiveCreateSessionRequest(MME &mme);
    void sendCreateSessionResponse(MME &mme);
};

class PGW {
public:
    void handleDataPackets();
};

// Method implementations
void UE::attachRequest() {
    std::cout << "UE " << id << ": Sending Attach Request" << std::endl;
}

void UE::authResponse() {
    std::cout << "UE " << id << ": Sending Auth Response" << std::endl;
}

void UE::securityModeComplete() {
    std::cout << "UE " << id << ": Sending Security Mode Complete" << std::endl;
}

void UE::attachComplete() {
    std::cout << "UE " << id << ": Sending Attach Complete" << std::endl;
}

void eNodeB::receiveAttachRequest(UE &ue) {
    std::cout << "eNodeB: Received Attach Request from UE " << ue.id << std::endl;
}

void eNodeB::sendAttachRequestToMME(UE &ue) {
    std::cout << "eNodeB: Sending Attach Request to MME for UE " << ue.id << std::endl;
}

void eNodeB::sendAttachAccept(UE &ue) {
    std::cout << "eNodeB: Sending Attach Accept to UE " << ue.id << std::endl;
}

void eNodeB::receiveAttachComplete(UE &ue) {
    std::cout << "eNodeB: Received Attach Complete from UE " << ue.id << std::endl;
}

void eNodeB::sendBearerResourceCommand() {
    std::cout << "eNodeB: Sending Bearer Resource Command" << std::endl;
}

void eNodeB::receiveBearerResourceComplete() {
    std::cout << "eNodeB: Received Bearer Resource Complete" << std::endl;
}

void MME::receiveAttachRequestFromeNodeB(UE &ue) {
    std::cout << "MME: Received Attach Request from eNodeB for UE " << ue.id << std::endl;
}

void MME::sendAuthRequest(UE &ue) {
    std::cout << "MME: Sending Auth Request to UE " << ue.id << std::endl;
}

void MME::receiveAuthResponse(UE &ue) {
    std::cout << "MME: Received Auth Response from UE " << ue.id << std::endl;
}

void MME::sendSecurityModeCommand(UE &ue) {
    std::cout << "MME: Sending Security Mode Command to UE " << ue.id << std::endl;
}

void MME::receiveSecurityModeComplete(UE &ue) {
    std::cout << "MME: Received Security Mode Complete from UE " << ue.id << std::endl;
}

void MME::sendAttachAccept(eNodeB &enb, UE &ue) {
    std::cout << "MME: Sending Attach Accept to eNodeB for UE " << ue.id << std::endl;
    enb.sendAttachAccept(ue);
}

void MME::receiveAttachComplete(eNodeB &enb, UE &ue) {
    std::cout << "MME: Received Attach Complete from UE " << ue.id << std::endl;
    enb.receiveAttachComplete(ue);
}

void MME::createSession(SGW &sgw) {
    std::cout << "MME: Creating Session with SGW" << std::endl;
    sgw.receiveCreateSessionRequest(*this);
}

void SGW::receiveCreateSessionRequest(MME &mme) {
    std::cout << "SGW: Received Create Session Request from MME" << std::endl;
    sendCreateSessionResponse(mme);
}

void SGW::sendCreateSessionResponse(MME &mme) {
    std::cout << "SGW: Sending Create Session Response to MME" << std::endl;
}

void PGW::handleDataPackets() {
    std::cout << "PGW: Handling Data Packets" << std::endl;
}

// Main simulation
int main() {
    UE ue("001");
    eNodeB enb;
    MME mme;
    SGW sgw;
    PGW pgw;

    // Simulate the LTE call flow
    ue.attachRequest();
    enb.receiveAttachRequest(ue);
    enb.sendAttachRequestToMME(ue);
    mme.receiveAttachRequestFromeNodeB(ue);
    mme.sendAuthRequest(ue);
    ue.authResponse();
    mme.receiveAuthResponse(ue);
    mme.sendSecurityModeCommand(ue);
    ue.securityModeComplete();
    mme.receiveSecurityModeComplete(ue);
    mme.sendAttachAccept(enb, ue);
    ue.attachComplete();
    mme.receiveAttachComplete(enb, ue);
    mme.createSession(sgw);
    sgw.receiveCreateSessionRequest(mme);
    enb.sendBearerResourceCommand();
    enb.receiveBearerResourceComplete();
    pgw.handleDataPackets();

    return 0;
}
