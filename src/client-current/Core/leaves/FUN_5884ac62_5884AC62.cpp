// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884AC62 .. +0x14A bytes.
extern "C" __declspec(naked) void FUN_5884ac62_5884AC62() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        mov ebx, 0ffff8000h
        push edi
        mov edi, dword ptr [esi + 6af70h]
        mov eax, dword ptr [esi + 6af84h]
        sub edi, eax
        sub edi, dword ptr [esi + 6af90h]
        cmp edi, -1
        ; Exact mapped bytes 75 08: jne 0x5884ac91
        __asm _emit 0x75
        __asm _emit 0x08
        push -2
        pop edi
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x5884ad35
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0fefah
        ; Exact mapped bytes 0F 82 99 00 00 00: jb 0x5884ad35
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 6af78h], 0
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x5884ad35
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 8000h
        lea eax, [esi + 22f70h]
        push eax
        lea eax, [esi + 1af70h]
        push eax
        ; Exact mapped bytes E8 CF 1B 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        add dword ptr [esi + 6af88h], ebx
        add esp, 0ch
        add dword ptr [esi + 6af84h], ebx
        add dword ptr [esi + 6af74h], ebx
        lea ebx, [esi + 4af70h]
        mov esi, 8000h
        mov eax, dword ptr [ebx]
        xor edx, edx
        cmp eax, 8000h
        lea ecx, [eax - 8000h]
        cmovae edx, ecx
        mov dword ptr [ebx], edx
        lea ebx, [ebx + 4]
        sub esi, 1
        ; Exact mapped bytes 75 E4: jne 0x5884ace1
        __asm _emit 0x75
        __asm _emit 0xe4
        mov ebx, dword ptr [ebp + 8]
        mov esi, 8000h
        add ebx, 2af70h
        mov eax, dword ptr [ebx]
        xor edx, edx
        cmp eax, 8000h
        lea ecx, [eax - 8000h]
        cmovae edx, ecx
        mov dword ptr [ebx], edx
        lea ebx, [ebx + 4]
        sub esi, 1
        ; Exact mapped bytes 75 E4: jne 0x5884ad0b
        __asm _emit 0x75
        __asm _emit 0xe4
        mov esi, dword ptr [ebp + 8]
        add edi, 8000h
        mov ebx, 0ffff8000h
        cmp dword ptr [esi + 6af8ch], 0
        ; Exact mapped bytes 75 69: jne 0x5884ada7
        __asm _emit 0x75
        __asm _emit 0x69
        cmp edi, 2
        push 588c2510h
        sbb al, al
        inc al
        movzx eax, al
        push eax
        push esi
        ; Exact mapped bytes E8 3C E8 FF FF: call 0x58849590
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 6af84h]
        mov eax, dword ptr [esi + 6af90h]
        add ecx, 1af70h
        add ecx, esi
        push edi
        add eax, ecx
        push eax
        push esi
        ; Exact mapped bytes FF 56 0C: call dword ptr [esi + 0xc]
        __asm _emit 0xff
        __asm _emit 0x56
        __asm _emit 0x0c
        add esp, 18h
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x5884ad84
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp eax, -1
        ; Exact mapped bytes 74 08: je 0x5884ad84
        __asm _emit 0x74
        __asm _emit 0x08
        add dword ptr [esi + 6af90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5884ad8e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [esi + 6af8ch], 1
        cmp dword ptr [esi + 6af90h], 106h
        ; Exact mapped bytes 73 0D: jae 0x5884ada7
        __asm _emit 0x73
        __asm _emit 0x0d
        cmp dword ptr [esi + 6af8ch], 0
        ; Exact mapped bytes 0F 84 C9 FE FF FF: je 0x5884ac70
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
