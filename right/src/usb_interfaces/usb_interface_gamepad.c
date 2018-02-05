#include "usb_composite_device.h"

/*
 *uint32_t UsbGamepadActionCounter;
 *static usb_gamepad_report_t usbGamepadReports[2];
 *usb_gamepad_report_t* ActiveUsbGamepadReport = usbGamepadReports;
 *bool IsUsbGamepadReportSent = false;
 *
 *usb_gamepad_report_t* getInactiveUsbGamepadReport(void)
 *{
 *    return ActiveUsbGamepadReport == usbGamepadReports ? usbGamepadReports+1 : usbGamepadReports;
 *}
 *
 *void SwitchActiveUsbGamepadReport(void)
 *{
 *    ActiveUsbGamepadReport = getInactiveUsbGamepadReport();
 *}
 *
 *void ResetActiveUsbGamepadReport(void)
 *{
 *    bzero(ActiveUsbGamepadReport, USB_GAMEPAD_REPORT_LENGTH);
 *}
 *
 *static volatile usb_status_t usbGamepadAction(void)
 *{
 *    usb_gamepad_report_t *gamepadReport = getInactiveUsbGamepadReport();
 *    IsUsbGamepadReportSent = true;
 *    return USB_DeviceHidSend(UsbCompositeDevice.gamepadHandle, USB_GAMEPAD_ENDPOINT_INDEX,
 *               (uint8_t*)gamepadReport, USB_GAMEPAD_REPORT_LENGTH);
 *}
 *
 *usb_status_t UsbGamepadCallback(class_handle_t handle, uint32_t event, void *param)
 *{
 *    UsbGamepadActionCounter++;
 *    usb_status_t error = kStatus_USB_Error;
 *
 *    switch (event) {
 *        case kUSB_DeviceHidEventSendResponse:
 *            if (UsbCompositeDevice.attach) {
 *                return usbGamepadAction();
 *            }
 *            break;
 *        case kUSB_DeviceHidEventGetReport:
 *        case kUSB_DeviceHidEventSetReport:
 *        case kUSB_DeviceHidEventRequestReportBuffer:
 *            error = kStatus_USB_InvalidRequest;
 *            break;
 *        case kUSB_DeviceHidEventGetIdle:
 *        case kUSB_DeviceHidEventGetProtocol:
 *        case kUSB_DeviceHidEventSetIdle:
 *        case kUSB_DeviceHidEventSetProtocol:
 *            break;
 *        default:
 *            break;
 *    }
 *
 *    return error;
 *}
 *
 *usb_status_t UsbGamepadSetConfiguration(class_handle_t handle, uint8_t configuration)
 *{
 *    if (USB_COMPOSITE_CONFIGURATION_INDEX == configuration) {
 *        return usbGamepadAction();
 *    }
 *    return kStatus_USB_Error;
 *}
 *
 *usb_status_t UsbGamepadSetInterface(class_handle_t handle, uint8_t interface, uint8_t alternateSetting)
 *{
 *    if (USB_GAMEPAD_INTERFACE_INDEX == interface) {
 *        return usbGamepadAction();
 *    }
 *    return kStatus_USB_Error;
 *}
 */
