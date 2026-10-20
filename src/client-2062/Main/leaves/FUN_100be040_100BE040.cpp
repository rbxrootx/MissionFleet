// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BE040 .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_100be040_100BE040() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 89 8C 00 00 00: mov ecx, dword ptr [ecx + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D0 16 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x16
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
