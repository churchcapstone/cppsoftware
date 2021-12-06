/* Main class for message handler app
 * Runs a listener thread and starts a callback when a mesage is received
 *
 * Author: Jared Wood
 */
#include "MessageHandlerApp.h"

int main() {

    std::cout << "Starting database message handler" << std::endl;

    std::cout << "Connection information: " << std::endl;

    //Connect to the database
    connectDatabase();

    //Start listener thread
    startListenThread();

    //Handle received message
    handleMessageX();

    //Run until interrupted
}