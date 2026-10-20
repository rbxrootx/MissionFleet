// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A5690 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_587a5690() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4C 81 08: mov ecx, dword ptr [ecx + eax*4 + 8]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x81
        __asm _emit 0x08
        ; Exact mapped bytes E8 43 B5 00 00: call 0x587b0be0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
