#include "usb_api.h"
#include "usb_descriptor_hid.h"
#include "usb_descriptor_mouse_report.h"
#include "usb_descriptor_generic_hid_report.h"

usb_status_t USB_DeviceGetHidDescriptor(
    usb_device_handle handle, usb_device_get_hid_descriptor_struct_t *hidDescriptor)
{
    return kStatus_USB_InvalidRequest;
}

usb_status_t USB_DeviceGetHidReportDescriptor(
    usb_device_handle handle, usb_device_get_hid_report_descriptor_struct_t *hidReportDescriptor)
{
    if (USB_GENERIC_HID_INTERFACE_INDEX == hidReportDescriptor->interfaceNumber) {
        hidReportDescriptor->buffer = UsbGenericHidReportDescriptor;
        hidReportDescriptor->length = USB_GENERIC_HID_REPORT_DESCRIPTOR_LENGTH;
    } else if (USB_BASIC_KEYBOARD_INTERFACE_INDEX == hidReportDescriptor->interfaceNumber) {
        hidReportDescriptor->buffer = UsbBasicKeyboardReportDescriptor;
        hidReportDescriptor->length = USB_BASIC_KEYBOARD_REPORT_DESCRIPTOR_LENGTH;
    } else if (USB_MEDIA_KEYBOARD_INTERFACE_INDEX == hidReportDescriptor->interfaceNumber) {
        hidReportDescriptor->buffer = UsbMediaKeyboardReportDescriptor;
        hidReportDescriptor->length = USB_MEDIA_KEYBOARD_REPORT_DESCRIPTOR_LENGTH;
    } else if (USB_SYSTEM_KEYBOARD_INTERFACE_INDEX == hidReportDescriptor->interfaceNumber) {
        hidReportDescriptor->buffer = UsbSystemKeyboardReportDescriptor;
        hidReportDescriptor->length = USB_MEDIA_KEYBOARD_REPORT_DESCRIPTOR_LENGTH;
    } else if (USB_MOUSE_INTERFACE_INDEX == hidReportDescriptor->interfaceNumber) {
        hidReportDescriptor->buffer = UsbMouseReportDescriptor;
        hidReportDescriptor->length = USB_MOUSE_REPORT_DESCRIPTOR_LENGTH;
    } else {
        return kStatus_USB_InvalidRequest;
    }
    return kStatus_USB_Success;
}

usb_status_t USB_DeviceGetHidPhysicalDescriptor(
    usb_device_handle handle, usb_device_get_hid_physical_descriptor_struct_t *hidPhysicalDescriptor)
{
    return kStatus_USB_InvalidRequest;
}
