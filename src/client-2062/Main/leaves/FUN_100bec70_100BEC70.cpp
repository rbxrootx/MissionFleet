// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BEC70 .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_100bec70_100BEC70() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 89 81 A4 00 00 00: mov dword ptr [ecx + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 78: mov ecx, dword ptr [ecx + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x78
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 6D B6 F6 FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xb6
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
