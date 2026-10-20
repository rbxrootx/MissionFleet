// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100420B0 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_100420b0_100420B0() {
    __asm {
        mov eax, dword ptr [ecx + 8]
        mov ecx, dword ptr [ecx + 0ch]
        push esi
        cmp eax, ecx
        ; Exact mapped bytes 74 12: je 0x100420cd
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [esp + 8]
        mov esi, dword ptr [eax]
        cmp dword ptr [esi + 28h], edx
        ; Exact mapped bytes 74 0D: je 0x100420d3
        __asm _emit 0x74
        __asm _emit 0x0d
        add eax, 4
        cmp eax, ecx
        ; Exact mapped bytes 75 F2: jne 0x100420bf
        __asm _emit 0x75
        __asm _emit 0xf2
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
