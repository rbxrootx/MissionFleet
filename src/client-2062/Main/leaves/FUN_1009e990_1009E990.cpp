// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009E990 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_1009e990_1009E990() {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        mov dword ptr [ecx + 2c0h], eax
        ; Exact mapped bytes 74 49: je 0x1009e9e7
        __asm _emit 0x74
        __asm _emit 0x49
        push esi
        push edi
        lea eax, [ecx + 80h]
        mov edi, 4
        mov esi, 0fffdh
        mov edx, dword ptr [eax - 4]
        add eax, 8
        ; Exact mapped bytes 66 21 72 24: and word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x72
        __asm _emit 0x24
        mov edx, dword ptr [eax - 8]
        ; Exact mapped bytes 66 21 72 24: and word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x72
        __asm _emit 0x24
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x1009e9b0
        __asm _emit 0x75
        __asm _emit 0xec
        mov eax, dword ptr [ecx + 9ch]
        pop edi
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 0a0h]
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        mov ecx, dword ptr [ecx + 0a4h]
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 9ch]
        mov edx, 2
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ecx + 0a4h]
        ; Exact mapped bytes 66 09 51 24: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
