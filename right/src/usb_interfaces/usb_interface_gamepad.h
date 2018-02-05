#ifndef __USB_INTERFACE_GAMEPAD_H__
#define __USB_INTERFACE_GAMEPAD_H__

// Includes:

    #include "usb_api.h"
    #include "usb_descriptors/usb_descriptor_device.h"

// Macros:

    #define USB_GAMEPAD_INTERFACE_INDEX 5
    #define USB_GAMEPAD_INTERFACE_COUNT 1

    #define USB_GAMEPAD_ENDPOINT_COUNT 2

    #define USB_GAMEPAD_ENDPOINT_IN_INDEX 7
    #define USB_GAMEPAD_INTERRUPT_IN_PACKET_SIZE 0x20
    #define USB_GAMEPAD_INTERRUPT_IN_INTERVAL 4

    #define USB_GAMEPAD_ENDPOINT_OUT_INDEX 8
    #define USB_GAMEPAD_INTERRUPT_OUT_PACKET_SIZE 0x20
    #define USB_GAMEPAD_INTERRUPT_OUT_INTERVAL 8

    //#define USB_GAMEPAD_REPORT_LENGTH 7

//// Typedefs:

    //typedef struct {
        //uint8_t buttons;
        //int16_t x;
        //int16_t y;
        //int8_t wheelY;
        //int8_t wheelX;
    //} ATTR_PACKED usb_gamepad_report_t;

//// Variables:

    //extern bool IsUsbGamepadReportSent;
    //extern uint32_t UsbGamepadActionCounter;
    //extern usb_gamepad_report_t* ActiveUsbGamepadReport;

//// Functions:

    //usb_status_t UsbGamepadCallback(class_handle_t handle, uint32_t event, void *param);
    //usb_status_t UsbGamepadSetConfiguration(class_handle_t handle, uint8_t configuration);
    //usb_status_t UsbGamepadSetInterface(class_handle_t handle, uint8_t interface, uint8_t alternateSetting);

    //void ResetActiveUsbGamepadReport(void);
    //void SwitchActiveUsbGamepadReport(void);

#endif
