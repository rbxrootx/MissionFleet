// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A7D80 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_587a7d80() {
    __asm {
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        mov esi, dword ptr [eax + 0ch]
        test esi, esi
        ; Exact mapped bytes 74 5C: je 0x587a7de9
        __asm _emit 0x74
        __asm _emit 0x5c
        push ebx
        mov bl, byte ptr [esp + 0ch]
        push edi
        mov edi, dword ptr [esp + 14h]
        cmp byte ptr [esi + 354h], bl
        ; Exact mapped bytes 75 41: jne 0x587a7de0
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [esi + 1270h]
        mov edx, edi
        imul edx, edx, 64h
        xor eax, 0aaaaaaaah
        add edx, eax
        xor edx, 0aaaaaaaah
        mov dword ptr [esi + 1270h], edx
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp esi, dword ptr [eax + 4]
        ; Exact mapped bytes 75 19: jne 0x587a7de0
        __asm _emit 0x75
        __asm _emit 0x19
        xor edx, 0aaaaaaaah
        mov eax, 51eb851fh
        mul edx
        mov eax, dword ptr [ecx + 10be4h]
        shr edx, 5
        mov dword ptr [eax + 64h], edx
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 75 B0: jne 0x587a7d97
        __asm _emit 0x75
        __asm _emit 0xb0
        pop edi
        pop ebx
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
