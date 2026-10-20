// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F19E0 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_100f19e0_100F19E0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 4]
        lea eax, [eax + edx*2 + 4a6h]
        ; Exact mapped bytes 66 8B 54 24 0C: mov dx, word ptr [esp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 14 41: mov word ptr [ecx + eax*2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x41
        mov eax, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100f1a05
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 6B 0A 00 00: call 0x100f2470
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
