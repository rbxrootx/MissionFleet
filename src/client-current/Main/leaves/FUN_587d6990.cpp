// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D6990 .. +0xC7 bytes.
extern "C" __declspec(naked) void FUN_587d6990() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        cmp esi, -1
        ; Exact mapped bytes 75 41: jne 0x587d69db
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [esp + 0ch]
        mov ecx, dword ptr [ecx + 340h]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x587d6a53
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esp + 0ch]
        mov eax, dword ptr [ecx + esi*4 + 240h]
        mov dword ptr [eax + 54h], edx
        test edx, edx
        ; Exact mapped bytes 74 2C: je 0x587d6a19
        __asm _emit 0x74
        __asm _emit 0x2c
        push edi
        mov edi, dword ptr [edx + 18h]
        mov dword ptr [eax + 0ch], edi
        mov edi, dword ptr [edx + 1ch]
        mov dword ptr [eax + 10h], edi
        mov edi, dword ptr [edx + 20h]
        add edx, 20h
        mov dword ptr [eax + 14h], edi
        mov edi, dword ptr [edx + 4]
        add eax, 14h
        mov dword ptr [eax + 4], edi
        mov edi, dword ptr [edx + 8]
        mov dword ptr [eax + 8], edi
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [eax + 0ch], edx
        pop edi
        mov eax, dword ptr [ecx + esi*4 + 2c0h]
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [eax + 54h], ecx
        test ecx, ecx
        ; Exact mapped bytes 74 28: je 0x587d6a53
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [eax + 0ch], edx
        mov edx, dword ptr [ecx + 1ch]
        add ecx, 20h
        mov dword ptr [eax + 10h], edx
        mov edx, dword ptr [ecx]
        add eax, 14h
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [eax + 0ch], ecx
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
