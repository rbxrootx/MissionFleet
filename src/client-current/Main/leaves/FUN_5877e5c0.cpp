// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877E5C0 .. +0x174 bytes.
extern "C" __declspec(naked) void FUN_5877e5c0() {
    __asm {
        sub esp, 20h
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
        ; Exact mapped bytes 0F 84 55 01 00 00: je 0x5877e72a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 4ch]
        mov ebx, dword ptr [esp + 3ch]
        mov ebp, dword ptr [esp + 38h]
        mov dword ptr [esp + 10h], edi
        test edi, edi
        ; Exact mapped bytes 74 22: je 0x5877e60a
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes 66 83 7F 26 00: cmp word ptr [edi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 17: jge 0x5877e606
        __asm _emit 0x7d
        __asm _emit 0x17
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esp + 34h]
        mov edx, dword ptr [edx + 14h]
        push ebx
        push ebp
        push eax
        mov ecx, edi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov edi, dword ptr [edi + 48h]
        test edi, edi
        ; Exact mapped bytes 75 E2: jne 0x5877e5e8
        __asm _emit 0x75
        __asm _emit 0xe2
        mov dword ptr [esp + 10h], edi
        mov ecx, 1
        cmp dword ptr [esi + 6ch], ecx
        ; Exact mapped bytes 75 16: jne 0x5877e62a
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [esi + 70h]
        mov eax, dword ptr [eax + 58h]
        imul eax, dword ptr [esi + 68h]
        cdq
        idiv dword ptr [esi + 54h]
        mov ebp, eax
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 06: jmp 0x5877e630
        __asm _emit 0xeb
        __asm _emit 0x06
        xor ebp, ebp
        mov dword ptr [esp + 14h], ebp
        cmp dword ptr [esi + 64h], ecx
        ; Exact mapped bytes 75 08: jne 0x5877e63d
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 60h]
        mov dword ptr [esi + 58h], ecx
        ; Exact mapped bytes EB 06: jmp 0x5877e643
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [esi + 60h]
        mov dword ptr [esi + 5ch], edx
        mov edi, dword ptr [ebx]
        mov eax, dword ptr [esi + 14h]
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 0ch]
        sub eax, ebp
        add eax, edi
        add eax, edx
        mov edx, dword ptr [ebx + 4]
        mov ebx, dword ptr [esi + 58h]
        add ebx, dword ptr [esi + 18h]
        mov dword ptr [esp + 18h], edx
        mov edx, dword ptr [esi + 8]
        add ebx, edx
        mov edx, dword ptr [esi + 1ch]
        sub edx, dword ptr [esi + 5ch]
        add ebx, dword ptr [esi + 10h]
        sub edx, ebp
        mov ebp, dword ptr [esp + 3ch]
        add ebx, dword ptr [esp + 18h]
        add edx, edi
        add edx, dword ptr [esi + 4]
        add eax, ecx
        add edx, ecx
        mov ecx, dword ptr [esi + 20h]
        add ecx, dword ptr [esi + 8]
        add ecx, dword ptr [esi + 10h]
        add ecx, dword ptr [ebp + 4]
        mov ebp, dword ptr [esp + 34h]
        mov dword ptr [esp + 2ch], ecx
        mov ecx, dword ptr [ebp + 1ch]
        sub ecx, dword ptr [ebp + 14h]
        cmp eax, ecx
        ; Exact mapped bytes 7D 67: jge 0x5877e707
        __asm _emit 0x7d
        __asm _emit 0x67
        test edx, edx
        ; Exact mapped bytes 7C 63: jl 0x5877e707
        __asm _emit 0x7c
        __asm _emit 0x63
        mov ecx, dword ptr [ebp + 20h]
        sub ecx, dword ptr [ebp + 18h]
        cmp ebx, ecx
        ; Exact mapped bytes 7D 59: jge 0x5877e707
        __asm _emit 0x7d
        __asm _emit 0x59
        cmp dword ptr [esp + 2ch], 0
        ; Exact mapped bytes 7C 52: jl 0x5877e707
        __asm _emit 0x7c
        __asm _emit 0x52
        mov ecx, dword ptr [esi + 50h]
        mov dword ptr [esp + 34h], ecx
        test ecx, ecx
        ; Exact mapped bytes 74 47: je 0x5877e707
        __asm _emit 0x74
        __asm _emit 0x47
        sub edi, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 3ch]
        add edi, dword ptr [esi + 4]
        mov ecx, dword ptr [ecx + 4]
        add edi, dword ptr [esi + 0ch]
        add ecx, dword ptr [esi + 8]
        mov dword ptr [esp + 18h], edi
        add ecx, dword ptr [esi + 10h]
        mov edi, dword ptr [esi + 2ch]
        mov esi, dword ptr [esi + 28h]
        push edi
        push esi
        sub esp, 10h
        mov esi, esp
        mov dword ptr [esi], eax
        mov eax, dword ptr [esp + 30h]
        push ecx
        mov ecx, dword ptr [esp + 50h]
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 8], edx
        mov edx, dword ptr [esp + 48h]
        push eax
        push ebp
        mov dword ptr [esi + 0ch], edx
        ; Exact mapped bytes E8 59 56 18 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x56
        __asm _emit 0x18
        __asm _emit 0x00
        mov esi, dword ptr [esp + 10h]
        test esi, esi
        ; Exact mapped bytes 74 1B: je 0x5877e72a
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edi, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 3ch]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 14h]
        push eax
        push edi
        push ebp
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov esi, dword ptr [esi + 48h]
        test esi, esi
        ; Exact mapped bytes 75 E9: jne 0x5877e713
        __asm _emit 0x75
        __asm _emit 0xe9
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 20h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
