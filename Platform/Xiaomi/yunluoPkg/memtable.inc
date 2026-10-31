static ARM_MEMORY_REGION_DESCRIPTOR_EX gDeviceMemoryDescriptorEx[] = {
/*                                                    EFI_RESOURCE_ EFI_RESOURCE_ATTRIBUTE_ EFI_MEMORY_TYPE ARM_REGION_ATTRIBUTE_
     MemLabel(32 Char.),  MemBase,    MemSize, BuildHob, ResourceType, ResourceAttribute, MemoryType, CacheAttributes
--------------------- Register ---------------------*/
    {"Periphs",           0x00000000, 0x1B000000,  AddMem, MEM_RES, UNCACHEABLE,  RtCode,   NS_DEVICE},

    //--------- DDR 6GB (MT6789 / yunluo, 依据设备实测 /proc/iomem) --------- */
    {"DDR Memory 1", 0x040000000, 0x000C00000,  AddMem, SYS_MEM, SYS_MEM_CAP, Conv, WRITE_BACK_XN},
    {"UEFI Stack", 0x040C00000, 0x000040000,  AddMem, SYS_MEM, SYS_MEM_CAP, BsData, WRITE_BACK},
    {"CPU Vectors", 0x040C40000, 0x000010000,  AddMem, SYS_MEM, SYS_MEM_CAP, BsCode, WRITE_BACK},
    {"DXE Heap", 0x040C50000, 0x0073B1000,  AddMem, SYS_MEM, SYS_MEM_CAP, Conv, WRITE_BACK_XN},
    {"Hw Reserved 1", 0x048080000, 0x000100000,  AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_BACK},
    {"DDR Memory 2", 0x048180000, 0x000080000,  AddMem, SYS_MEM, SYS_MEM_CAP, Conv, WRITE_BACK_XN},
    {"BL31", 0x048200000, 0x000200000,  AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_BACK},
    {"DDR Memory 3", 0x048400000, 0x000010000,  AddMem, SYS_MEM, SYS_MEM_CAP, Conv, WRITE_BACK_XN},
    {"UEFI FD", 0x048410000, 0x000700000,  AddMem, SYS_MEM, SYS_MEM_CAP, BsCode, WRITE_BACK},
    {"DDR Memory 4", 0x048B10000, 0x0274F0000,  AddMem, SYS_MEM, SYS_MEM_CAP, Conv, WRITE_BACK_XN},
    {"TrustZone Mem", 0x070000000, 0x003200000,  AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_BACK},
    {"DDR Memory 5", 0x073200000, 0x009E00000,  AddMem, SYS_MEM, SYS_MEM_CAP, Conv, WRITE_BACK_XN},
    {"Hw Reserved 2", 0x07D000000, 0x000500000,  AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_BACK},
    {"DDR Memory 6", 0x07D500000, 0x000F00000,  AddMem, SYS_MEM, SYS_MEM_CAP, Conv, WRITE_BACK_XN},
    {"Hw Reserved 3", 0x07E400000, 0x000800000,  AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_BACK},
    {"DDR Memory 7", 0x07EC00000, 0x000200000,  AddMem, SYS_MEM, SYS_MEM_CAP, Conv, WRITE_BACK_XN},
    {"Hw Reserved 4", 0x07EE00000, 0x001000000,  AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_BACK},
    {"DDR Memory 8", 0x07FE00000, 0x0000B0000,  AddMem, SYS_MEM, SYS_MEM_CAP, Conv, WRITE_BACK_XN},
    {"Hw Reserved 5", 0x07FEB0000, 0x000100000,  AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_BACK},
    {"DDR Memory 9", 0x07FFB0000, 0x000050000,  AddMem, SYS_MEM, SYS_MEM_CAP, Conv, WRITE_BACK_XN},
    {"DDR Memory 10", 0x080000000, 0x00F000000,  AddMem, SYS_MEM, SYS_MEM_CAP, Conv, WRITE_BACK_XN},
    {"SCP Mem", 0x08F000000, 0x0005A0000,  AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_BACK},
    {"DDR Memory 11", 0x08F5A0000, 0x00FFC0000,  AddMem, SYS_MEM, SYS_MEM_CAP, Conv, WRITE_BACK_XN},
    {"SSPM Mem", 0x09F560000, 0x000A90000,  AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_BACK},
    {"DDR Memory 12", 0x09FFF0000, 0x000010000,  AddMem, SYS_MEM, SYS_MEM_CAP, Conv, WRITE_BACK_XN},
    {"DDR Memory 13", 0x0A0000000, 0x01F000000,  AddMem, SYS_MEM, SYS_MEM_CAP, Conv, WRITE_BACK_XN},
    {"Hw Reserved 6", 0x0BF000000, 0x000600000,  AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_BACK},
    {"DDR Memory 14", 0x0BF600000, 0x000200000,  AddMem, SYS_MEM, SYS_MEM_CAP, Conv, WRITE_BACK_XN},
    {"Hw Reserved 7", 0x0BF800000, 0x000600000,  AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_BACK},
    {"DDR Memory 15", 0x0BFE00000, 0x000200000,  AddMem, SYS_MEM, SYS_MEM_CAP, Conv, WRITE_BACK_XN},
    {"DDR Memory 16", 0x0C0000000, 0x03E000000,  AddMem, SYS_MEM, SYS_MEM_CAP, Conv, WRITE_BACK_XN},
    {"Hw Reserved 8", 0x0FE000000, 0x000100000,  AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_BACK},
    {"DDR Memory 17", 0x0FE100000, 0x0BF100000,  AddMem, SYS_MEM, SYS_MEM_CAP, Conv, WRITE_BACK_XN},
    {"Hw Reserved 9", 0x1BF200000, 0x000C20000,  AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_BACK},
    {"DDR Memory 18", 0x1BFE20000, 0x0001DE000,  AddMem, SYS_MEM, SYS_MEM_CAP, Conv, WRITE_BACK_XN},

{"Terminator", 0, 0, 0, 0, 0, 0, 0}};