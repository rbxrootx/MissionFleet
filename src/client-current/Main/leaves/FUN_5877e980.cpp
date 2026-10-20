// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877E980 .. +0x111 bytes.
extern "C" __declspec(naked) void FUN_5877e980() {
    __asm {
        sub esp, 14h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 1
        ; Exact mapped bytes 0F 84 F2 00 00 00: je 0x5877ea87
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 4ch]
        mov ebp, dword ptr [esp + 30h]
        mov ebx, dword ptr [esp + 2ch]
        test edi, edi
        ; Exact mapped bytes 74 1E: je 0x5877e9c2
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 66 83 7F 26 00: cmp word ptr [edi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 17: jge 0x5877e9c2
        __asm _emit 0x7d
        __asm _emit 0x17
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [edx + 14h]
        push ebp
        push ebx
        push eax
        mov ecx, edi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov edi, dword ptr [edi + 48h]
        test edi, edi
        ; Exact mapped bytes 75 E2: jne 0x5877e9a4
        __asm _emit 0x75
        __asm _emit 0xe2
        mov ebx, dword ptr [ebp]
        mov eax, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [esi + 0ch]
        add eax, ebx
        add eax, ecx
        mov ecx, dword ptr [ebp + 4]
        mov ebp, dword ptr [esi + 8]
        mov dword ptr [esp + 10h], ecx
        mov ecx, dword ptr [esi + 18h]
        add ecx, ebp
        mov ebp, dword ptr [esi + 1ch]
        add ebp, ebx
        add ebp, dword ptr [esi + 4]
        add ecx, dword ptr [esi + 10h]
        lea ebx, [edx + ebp + 0ah]
        mov ebp, dword ptr [esi + 20h]
        sub ebp, dword ptr [esi + 54h]
        add ecx, dword ptr [esp + 10h]
        add ebp, dword ptr [esi + 8]
        mov dword ptr [esp + 1ch], ebx
        add ebp, dword ptr [esi + 10h]
        mov ebx, dword ptr [esp + 30h]
        mov ebx, dword ptr [ebx + 4]
        lea ebx, [ebx + ebp - 0ch]
        mov ebp, dword ptr [esp + 30h]
        mov ebp, dword ptr [ebp]
        mov dword ptr [esp + 20h], ebx
        mov ebx, dword ptr [esi + 4]
        add eax, edx
        add ebx, ebp
        mov ebp, dword ptr [esi + 8]
        add ebx, edx
        mov edx, dword ptr [esi + 10h]
        add ebp, edx
        mov edx, dword ptr [esp + 30h]
        add ebp, dword ptr [edx + 4]
        mov edx, dword ptr [esi + 2ch]
        push edx
        mov edx, dword ptr [esi + 28h]
        push edx
        sub esp, 10h
        mov edx, esp
        mov dword ptr [edx], eax
        mov eax, dword ptr [esp + 34h]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [esp + 38h]
        push ebp
        push ebx
        mov ebx, dword ptr [esp + 48h]
        mov dword ptr [edx + 8], eax
        mov dword ptr [edx + 0ch], ecx
        mov ecx, dword ptr [esi + 50h]
        push ebx
        ; Exact mapped bytes E8 FF 52 18 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 74 22: je 0x5877ea87
        __asm _emit 0x74
        __asm _emit 0x22
        mov esi, dword ptr [esp + 2ch]
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 14h]
        push eax
        push esi
        push ebx
        mov ecx, edi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov edi, dword ptr [edi + 48h]
        test edi, edi
        ; Exact mapped bytes 75 E9: jne 0x5877ea70
        __asm _emit 0x75
        __asm _emit 0xe9
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 14h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
