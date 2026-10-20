// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100405D0 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_100405d0_100405D0() {
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
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0A: je 0x100405e6
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 54 24 08: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 DA 36 00 00: call 0x10043cc0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
