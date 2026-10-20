// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C5E00 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_100c5e00_100C5E00() {
    __asm {
        ; Exact mapped bytes 8B 81 48 01 00 00: mov eax, dword ptr [ecx + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 04: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 89 48 58: mov dword ptr [eax + 0x58], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x58
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
