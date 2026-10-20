// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00449170 .. +0x158 bytes.
extern "C" __declspec(naked) void FUN_00449170_00449170() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 64h
        push esi
        push edi
        mov dword ptr [ebp - 58h], ecx
        mov al, byte ptr [ebp - 14h]
        mov byte ptr [ebp - 10h], al
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        sub edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 8C A0 00 00 00: jl 0x44923f
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 20h]
        sub eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 08: jne 0x4491c2
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 5ch], ecx
        ; Exact mapped bytes EB 1C: jmp 0x4491de
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 18h]
        mov esi, dword ptr [ebp - 1ch]
        mov edi, dword ptr [ebp + 8]
        mov edx, ecx
        mov eax, edi
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 4E: je 0x44923d
        __asm _emit 0x74
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, dword ptr [ebp + 0ch]
        add ecx, 1
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 08: jne 0x44920c
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 60h], edx
        ; Exact mapped bytes EB 17: jmp 0x449223
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 43 CA 01 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes EB 7E: jmp 0x4492bd
        __asm _emit 0xeb
        __asm _emit 0x7e
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 0ch], edx
        mov al, byte ptr [ebp - 34h]
        mov byte ptr [ebp - 30h], al
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 40h]
        sub ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 38h], ecx
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 75 08: jne 0x449277
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 64h], edx
        ; Exact mapped bytes EB 1C: jmp 0x449293
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 38h]
        mov esi, dword ptr [ebp - 3ch]
        mov edi, dword ptr [ebp + 8]
        mov eax, ecx
        mov edx, edi
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, eax
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov dword ptr [ebp - 64h], edx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 50h], ecx
        mov dl, byte ptr [ebp - 4ch]
        mov byte ptr [ebp - 48h], dl
        lea eax, [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 93 F6 FF FF: call 0x448950
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 58h]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
