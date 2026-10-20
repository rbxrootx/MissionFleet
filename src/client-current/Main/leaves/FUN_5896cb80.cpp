// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5896CB80 .. +0xCF bytes.
extern "C" __declspec(naked) void FUN_5896cb80() {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x5896cc47
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [edi + 4ch]
        mov ebp, dword ptr [esp + 20h]
        mov ebx, dword ptr [esp + 18h]
        test esi, esi
        ; Exact mapped bytes 74 1E: je 0x5896cbc0
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 66 83 7E 26 00: cmp word ptr [esi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 17: jge 0x5896cbc0
        __asm _emit 0x7d
        __asm _emit 0x17
        mov eax, dword ptr [esp + 1ch]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 14h]
        push ebp
        push eax
        push ebx
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov esi, dword ptr [esi + 48h]
        test esi, esi
        ; Exact mapped bytes 75 E2: jne 0x5896cba2
        __asm _emit 0x75
        __asm _emit 0xe2
        cmp dword ptr [edi + 50h], 0
        ; Exact mapped bytes 74 5F: je 0x5896cc25
        __asm _emit 0x74
        __asm _emit 0x5f
        mov eax, dword ptr [edi + 0ch]
        sub eax, dword ptr [ebx + 4]
        mov ecx, dword ptr [edi + 50h]
        add eax, dword ptr [edi + 4]
        mov edx, dword ptr [ebp + 4]
        sub edx, dword ptr [ebx + 8]
        add eax, dword ptr [ebp]
        mov ebp, dword ptr [ecx]
        add edx, dword ptr [edi + 10h]
        mov ebx, dword ptr [edi + 14h]
        add edx, dword ptr [edi + 8]
        mov dword ptr [esp + 10h], ecx
        mov ecx, dword ptr [edi + 2ch]
        push ecx
        mov ecx, dword ptr [edi + 28h]
        push ecx
        add edi, 14h
        sub esp, 10h
        mov ecx, esp
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [edi + 4]
        mov dword ptr [ecx + 4], ebx
        mov ebx, dword ptr [edi + 8]
        mov edi, dword ptr [edi + 0ch]
        mov dword ptr [ecx + 8], ebx
        mov ebx, dword ptr [esp + 30h]
        push edx
        mov edx, dword ptr [ebx + 50h]
        push eax
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [ecx + 0ch], edi
        mov ecx, dword ptr [esp + 30h]
        push edx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ebp, dword ptr [esp + 20h]
        test esi, esi
        ; Exact mapped bytes 74 1E: je 0x5896cc47
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 14h]
        push ebp
        push eax
        push ebx
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov esi, dword ptr [esi + 48h]
        test esi, esi
        ; Exact mapped bytes 75 E9: jne 0x5896cc30
        __asm _emit 0x75
        __asm _emit 0xe9
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
