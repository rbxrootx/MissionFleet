// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58867E80 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_58867e80() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 89 81 C8 02 00 00: mov dword ptr [ecx + 0x2c8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 81 CC 02 00 00: mov dword ptr [ecx + 0x2cc], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 81 D0 02 00 00: mov dword ptr [ecx + 0x2d0], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
