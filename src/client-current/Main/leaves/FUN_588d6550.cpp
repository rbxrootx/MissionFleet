// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D6550 .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_588d6550() {
    __asm {
        ; Exact mapped bytes 83 B9 58 12 00 00 00: cmp dword ptr [ecx + 0x1258], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x58
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x588d656d
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8D 51 04: lea edx, [ecx + 4]
        __asm _emit 0x8d
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 89 20 60 00 00: mov ecx, dword ptr [ecx + 0x6020]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 83 FC E7 FF: call 0x587561f0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xfc
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
