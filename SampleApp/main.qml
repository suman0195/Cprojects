import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle{
        id:_rect
        height: 300
        width: 300
        color: Sample.rectangle_color
        anchors.centerIn: parent
    }
}
