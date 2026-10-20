// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100436E0 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_100436e0_100436E0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        lea eax, [eax + eax*4]
        lea edx, [edx + edx*4]
        shl eax, 1
        shl edx, 1
        mov dword ptr [ecx + 0b4h], eax
        mov dword ptr [ecx + 0b0h], edx
        ; Exact mapped bytes 74 14: je 0x10043714
        __asm _emit 0x74
        __asm _emit 0x14
        mov dword ptr [ecx + 0fch], 40000000h
        mov dword ptr [ecx + 0d4h], 64h
        mov edx, dword ptr [esp + 0ch]
        lea edx, [edx + edx*4]
        shl edx, 1
        cmp edx, eax
        mov dword ptr [ecx + 0c4h], edx
        ; Exact mapped bytes 7E 0D: jle 0x10043734
        __asm _emit 0x7e
        __asm _emit 0x0d
        mov dword ptr [ecx + 0c8h], 1
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ecx + 0c8h], 0
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
