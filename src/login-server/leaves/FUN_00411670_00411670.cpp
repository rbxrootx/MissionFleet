// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411670 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_00411670_00411670() {
    __asm {
        ; Exact mapped bytes C7 01 5C D4 43 00: mov dword ptr [ecx], 0x43d45c
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x5c
        __asm _emit 0xd4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes E9 55 FC FF FF: jmp 0x4112d0
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
