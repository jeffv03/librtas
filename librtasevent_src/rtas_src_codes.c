/**
 * @file rtas_src_codes.c
 * @brief SRC Section Codes
 *
 * Copyright (C) 2004 IBM Corporation
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 *
 * @author Nathan Fontenot <nfont@austin.ibm.com>
 */

/**
 * @struct src_code
 * @brief structure to hold src codes and their description
 */
struct src_code {
    char    *id;
    char    *desc;
};

/**
 * src_codes
 * @brief List of known SRC codes
 */
static struct src_code src_codes[] = {
    /* B1xx Codes - Service Processor Early Termination */
    {"B1517200", "Invalid boot request"},
    {"B1517201", "Service processor failure"},
    {"B1517202", "The permanent and temporary firmware sides are both marked invalid"},
    {"B1517203", "Error setting boot parameters"},
    {"B1517204", "Error reading boot parameters"},
    {"B1517205", "Boot code error"},
    {"B1517206", "Unit check timer was reset"},
    {"B1817200", "Invalid boot request"},
    {"B1817201", "Service processor failure"},
    {"B1817202", "The permanent and temporary firmware sides are both marked invalid"},
    {"B1817203", "Error setting boot parameters"}, 
    {"B1817204", "Error reading boot parameters"},
    {"B1817205", "Boot code error"},
    {"B1817206", "Unit check timer was reset"},
    {"B1817207", "Error reading from NVRAM"},
    {"B1817208", "Error writing to NVRAM"},
    /* BAxx Codes - Partition Firmware reference codes */
    {"BA000010", "The device data structure is corrupted"},
    {"BA000020", "Incompatible firmware levels were found"},
    {"BA000030", "An lpevent communication failure occurred"},
    {"BA000040", "The firmware was unable to obtain the RTAS code lid details"},
    {"BA000050", "The firmware was unable to load the RTAS code lid"},
    {"BA000060", "The firmware was unable to obtain the open firmware code lid details"},
    {"BA000070", "The firmware was unable to load the open firmware code lid"},
    {"BA010000", "There is insufficient information to boot the partition"},
    {"BA010001", "The client IP address is already in use by another network device"},
    {"BA010002", "Cannot get gateway IP address"},
    {"BA010003", "Cannot get server hardware address"},
    {"BA010004", "Bootp failed"},
    {"BA010005", "File transmission (TFTP) failed"},
    {"BA010006", "The boot image is too large"},
    {"BA020001", "Partition firmware password entry error"},
    {"BA020009", "Invalid password entered - system locked"},
    {"BA030011", "RTAS attempt to allocate memory failed"},
    {"BA04000F", "Self test failed on device; no error or location code information available"},
    {"BA040010", "Self test failed on device; can't locate package"},
    {"BA050001", "Failed to reboot a partition in logical partition mode"},
    {"BA050004", "Failed to locate service processor device tree node"},
    {"BA05000A", "Failed to send boot failed message to the service processor"},
    {"BA060003", "IP parameter requires 3 period characters"},
    {"BA060004", "Invalid IP parameter"},
    {"BA060005", "Invalid IP parameter (>255)"},
    {"BA060007", "A keyboard was not found"},
    {"BA060008", "No configurable adapters found by the remote IPL menu in the SMS utilities"},
    {"BA06000B", "The system was not able to find an operating system on the devices in the boot list"},
    {"BA06000C", "A pointer to the operating system was found in non-volatile storage"},
    {"BA060020", "The environment variable \"boot-device\" exceeded the allowed character limit"},
    {"BA060021", "The environment variable \"boot-device\" contained more than five entries"},
    {"BA060022", "The environment variable \"boot-device\" contained an entry that exceeded 255 characters in length"},
    {"BA080001", "An IDE device remained busy for a longer period than the time out period"},
    {"BA080010", "An IDE device is busy longer than specified time-out period"},
    {"BA080011", "An IDE command timed out; command is exceeding the period allowed to complete"},
    {"BA080012", "The ATA command failed"},
    {"BA080013", "The media is not present in the tray"},
    {"BA080014", "The media has been changed"},
    {"BA080015", "The packet command failed; the media might not be readable"},
    {"BA090001", "SCSI DASD: test unit ready failed; hardware error"},
    {"BA090002", "SCSI DASD: test unit ready failed; sense data available"},
    {"BA090003", "SCSI DASD: send diagnostic failed; sense data available"},
    {"BA090004", "SCSI DASD: send diagnostic failed: devofl cmd"},
    {"BA100001", "SCSI tape: test unit ready failed; hardware error"},
    {"BA100002", "SCSI tape: test unit ready failed; sense data available"},
    {"BA100003", "SCSI tape: send diagnostic failed; sense data available"},
    {"BA100004", "SCSI tape: send diagnostic failed: devofl cmd"},
    {"BA110001", "SCSI changer: test unit ready failed; hardware error"},
    {"BA110002", "SCSI changer: test unit ready failed; sense data available"},
    {"BA110003", "SCSI changer: send diagnostic failed; sense data available"},
    {"BA110004", "SCSI changer: send diagnostic failed: devofl command"},
    {"BA120001", "On an undetermined SCSI device, test unit ready failed; hardware error"},
    {"BA120002", "On an undetermined SCSI device, test unit ready failed; sense data available"},
    {"BA120003", "On an undetermined SCSI device, send diagnostic failed; sense data available"},
    {"BA120004", "On an undetermined SCSI device, send diagnostic failed; devofl command"},
    {"BA130001", "SCSI CD-ROM: test unit ready failed; hardware error"},
    {"BA130002", "SCSI CD-ROM: test unit ready failed; sense data available"},
    {"BA130003", "SCSI CD-ROM: send diagnostic failed; sense data available"},
    {"BA130004", "SCSI CD-ROM: send diagnostic failed: devofl command"}, 
    {"BA130010", "USB CD-ROM: device remained busy longer than the time-out period"},
    {"BA130011", "USB CD-ROM: execution of ATA/ATAPI command was not completed with the allowed time"},
    {"BA130012", "USB CD-ROM: execution of ATA/ATAPI command failed"},
    {"BA130013", "USB CD-ROM: bootable media is missing from the drive"},
    {"BA130014", "USB CD-ROM: the media in the USB CD-ROM drive has been changed"},
    {"BA130015", "USB CD-ROM: ATA/ATAPI packet command execution failed"},
    {"BA140001", "SCSI read/write optical: test unit ready failed; hardware error"},
    {"BA140002", "SCSI read/write optical: test unit ready failed; sense data available"},
    {"BA140003", "SCSI read/write optical: send diagnostic failed; sense data available"},
    {"BA140004", "SCSI read/write optical: send diagnostic failed; devofl command"},
    {"BA150001", "PCI Ethernet BNC/RJ-45 or PCI Ethernet AUI/RJ-45 adapter: internal wrap test failure"},
    {"BA151001", "10/100 MBPS Ethernet PCI adapter: internal wrap test failure"},
    {"BA151002", "10/100 MBPS Ethernet card"},
    {"BA160001", "PCI auto LANstreamer token ring adapter: failed to complete hardware initialization"},
    {"BA161001", "PCI token ring adapter: failed to complete hardware initialization"},
    {"BA170000", "NVRAMRC initialization failed; device test failed"},
    {"BA170100", "NVRAM data validation check failed"},
    {"BA170201", "The firmware was unable to expand target partition - saving configuration variable"}, 
    {"BA170202", "The firmware was unable to expand target partition - writing error log entry"},
    {"BA170203", "The firmware was unable to expand target partition - writing VPD data"},
    {"BA170210", "Setenv/$Setenv parameter error - name contains a null character"},
    {"BA170211", "Setenv/$Setenv parameter error - value contains a null character"},
    {"BA170998", "NVRAMRC script evaluation error - command line execution error"},
    {"BA170999", "NVRAMRC script evaluation error - stack unbalanced on completion"},
    {"BA180008", "PCI device Fcode evaluation error"},
    {"BA180010", "PCI probe error, bridge in freeze state"},
    {"BA180011", "PCI bridge probe error, bridge is not usable"},
    {"BA180012", "PCI device runtime error, bridge in freeze state"},
    {"BA180100", "FDDI adapter Fcode driver is not supported on this system"},
    {"BA180101", "Stack underflow from fibre-channel adapter"},
    {"BA188000", "An unsupported adapter was found in a PCI slot"},
    {"BA188001", "EEH recovered a failing I/O adapter"},
    {"BA188002", "EEH could not recover the failed I/O adapter"},
    {"BA190001", "Firmware function to get/set time-of-day reported an error"},
    {"BA210000", "Partition firmware reports a default catch"},
    {"BA210001", "Partition firmware reports a stack underflow was caught"},
    {"BA210002", "Partition firmware was ready before standout was ready"},
    {"BA250010", "dlpar error in open firmware"},
    {"BA278001", "Failed to flash firmware: invalid image file"},
    {"BA278002", "Flash file is not designed for this eServer platform"},
    {"BA278003", "Unable to lock the firmware update lid manager"},
    {"BA278004", "An invalid firmware update lid was requested"},
    {"BA278005", "Failed to flash a firmware update lid"},
    {"BA278006", "Unable to unlock the firmware update lid manager"},
    {"BA278007", "Failed to reboot the system after a firmware flash update"},
    {NULL, NULL}
};
