// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D1CC .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_0041d1cc_0041D1CC() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 39 41 0C: cmp dword ptr [ecx + 0xc], eax
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 74 08: je 0x41d1dd
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes E8 07 00 00 00: call 0x41d1e4
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
