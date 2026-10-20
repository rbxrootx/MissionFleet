// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884B80C .. +0x10E bytes.
extern "C" __declspec(naked) void FUN_5884b80c_5884B80C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        push esi
        mov esi, ecx
        xor eax, eax
        push edi
        mov edi, dword ptr [ebp + 8]
        mov dword ptr [esi + 5ch], eax
        lea ebx, [esi + 50h]
        mov dword ptr [esi + 64h], eax
        mov byte ptr [esi + 60h], al
        mov dword ptr [esi + 58h], eax
        mov dword ptr [ebx], eax
        mov dword ptr [esi + 70h], eax
        mov dword ptr [esi + 54h], eax
        test edi, edi
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x5884b902
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, -1
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x5884b902
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes FF 15 20 43 89 58: call dword ptr [0x58894320]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 1
        ; Exact mapped bytes 75 33: jne 0x5884b88d
        __asm _emit 0x75
        __asm _emit 0x33
        lea eax, [esi + 48h]
        push eax
        lea eax, [esi + 30h]
        push eax
        push ebx
        lea eax, [esi + 2ch]
        push eax
        push edi
        ; Exact mapped bytes E8 A2 DF FF FF: call 0x5884980f
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        test eax, eax
        ; Exact mapped bytes 0F 85 8F 00 00 00: jne 0x5884b907
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push eax
        push eax
        push edi
        ; Exact mapped bytes FF 15 44 42 89 58: call dword ptr [0x58894244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov byte ptr [esi + 4ch], 1
        mov dword ptr [esi + 5ch], edi
        xor eax, eax
        ; Exact mapped bytes EB 7A: jmp 0x5884b907
        __asm _emit 0xeb
        __asm _emit 0x7a
        cmp dword ptr [ebp + 0ch], 0
        push -1
        pop eax
        cmovne eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebx], eax
        lea eax, [ebp - 14h]
        push eax
        mov dword ptr [esi + 2ch], 80000000h
        mov byte ptr [esi + 4ch], 0
        ; Exact mapped bytes FF 15 48 42 89 58: call dword ptr [0x58894248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 24h]
        push eax
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes FF 15 14 43 89 58: call dword ptr [0x58894314]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 1ch]
        push eax
        lea eax, [ebp - 18h]
        push eax
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 15 1C 43 89 58: call dword ptr [0x5889431c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push dword ptr [ebp - 20h]
        push dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D4 F2 FF FF: call 0x5884abae
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov ecx, edx
        mov dword ptr [esi + 30h], eax
        mov dword ptr [esi + 3ch], ecx
        mov dword ptr [esi + 44h], ecx
        movzx ecx, word ptr [ebp - 18h]
        mov dword ptr [esi + 38h], eax
        mov dword ptr [esi + 40h], eax
        movzx eax, word ptr [ebp - 1ch]
        shl ecx, 10h
        or ecx, eax
        mov dword ptr [esi + 34h], edx
        mov dword ptr [esi + 48h], ecx
        ; Exact mapped bytes EB 84: jmp 0x5884b886
        __asm _emit 0xeb
        __asm _emit 0x84
        mov eax, 10000h
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 3C 57 FE FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
