// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00447080 .. +0x16A bytes.
extern "C" __declspec(naked) void FUN_00447080_00447080() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 74h
        push esi
        push edi
        mov dword ptr [ebp - 68h], ecx
        mov al, byte ptr [ebp - 8]
        mov byte ptr [ebp - 4], al
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 60h], edx
        mov al, byte ptr [ebp - 1ch]
        mov byte ptr [ebp - 18h], al
        mov ecx, dword ptr [ebp - 64h]
        sub ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 0ch]
        sub edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F 8C A0 00 00 00: jl 0x447161
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 28h]
        sub eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 08: jne 0x4470e4
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 6ch], ecx
        ; Exact mapped bytes EB 1C: jmp 0x447100
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 20h]
        mov esi, dword ptr [ebp - 24h]
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
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 34h]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 4E: je 0x44715f
        __asm _emit 0x74
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, dword ptr [ebp + 0ch]
        add ecx, 1
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 08: jne 0x44712e
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 70h], edx
        ; Exact mapped bytes EB 17: jmp 0x447145
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        ; Exact mapped bytes E8 21 EB 01 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 70h], eax
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 68h]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes EB 7E: jmp 0x4471df
        __asm _emit 0xeb
        __asm _emit 0x7e
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 14h], edx
        mov al, byte ptr [ebp - 3ch]
        mov byte ptr [ebp - 38h], al
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 48h]
        sub ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 40h], ecx
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 75 08: jne 0x447199
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 74h], edx
        ; Exact mapped bytes EB 1C: jmp 0x4471b5
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 40h]
        mov esi, dword ptr [ebp - 44h]
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
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 58h], ecx
        mov dl, byte ptr [ebp - 54h]
        mov byte ptr [ebp - 50h], dl
        lea eax, [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 71 17 00 00: call 0x448950
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 68h]
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
