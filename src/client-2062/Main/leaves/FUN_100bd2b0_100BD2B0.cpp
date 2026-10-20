// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BD2B0 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_100bd2b0_100BD2B0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x100bd2db
        __asm _emit 0x74
        __asm _emit 0x23
        cmp dword ptr [ecx + 0d0h], 1
        ; Exact mapped bytes 75 0D: jne 0x100bd2ce
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ecx + 118h]
        or byte ptr [ecx + 24h], 2
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 114h]
        or byte ptr [ecx + 24h], 2
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 118h]
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
