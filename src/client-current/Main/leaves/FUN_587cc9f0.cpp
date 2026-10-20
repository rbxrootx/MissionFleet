// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CC9F0 .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_587cc9f0() {
    __asm {
        sub esp, 8
        xor eax, eax
        mov dword ptr [esp], eax
        mov dword ptr [esp + 4], eax
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 0ch]
        push esi
        push edi
        xor edi, edi
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x587cca42
        __asm _emit 0x74
        __asm _emit 0x36
        mov esi, 2710h
        push ebx
        mov dl, byte ptr [eax + 354h]
        cmp dl, 1
        ; Exact mapped bytes 77 1D: ja 0x587cca3a
        __asm _emit 0x77
        __asm _emit 0x1d
        cmp dword ptr [eax + 664ch], esi
        ; Exact mapped bytes 74 15: je 0x587cca3a
        __asm _emit 0x74
        __asm _emit 0x15
        mov ebx, dword ptr [eax + 0d98h]
        movzx edx, dl
        lea edx, [esp + edx*4 + 0ch]
        xor ebx, 0aaaaaaaah
        add dword ptr [edx], ebx
        mov eax, dword ptr [eax + 78h]
        test eax, eax
        ; Exact mapped bytes 75 D1: jne 0x587cca12
        __asm _emit 0x75
        __asm _emit 0xd1
        pop ebx
        xor esi, esi
        add ecx, 0a4h
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        lea edx, [eax*8]
        sub edx, eax
        mov eax, 0cccccccdh
        mul edx
        shr edx, 3
        cmp edx, dword ptr [esp + esi*4 + 8]
        ; Exact mapped bytes 77 11: ja 0x587cca7c
        __asm _emit 0x77
        __asm _emit 0x11
        inc esi
        add ecx, 4
        cmp esi, 2
        ; Exact mapped bytes 75 DC: jne 0x587cca50
        __asm _emit 0x75
        __asm _emit 0xdc
        mov eax, edi
        pop edi
        pop esi
        add esp, 8
        ret
        ; Exact mapped bytes 8B 0D A4 45 A2 58: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, 1
        pop edi
        mov dword ptr [ecx + 8d8h], eax
        pop esi
        add esp, 8
        ret
    }
}
