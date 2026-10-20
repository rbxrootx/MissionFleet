// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B4480 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_587b4480() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 39 81 64 01 00 00: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 10: je 0x587b449c
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 89 81 64 01 00 00: mov dword ptr [ecx + 0x164], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 81 00 39 00 00 00 00 00 00: mov dword ptr [ecx + 0x3900], 0
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
