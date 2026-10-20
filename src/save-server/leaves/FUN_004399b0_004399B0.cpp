// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004399B0 .. +0x181 bytes.
extern "C" __declspec(naked) void FUN_004399b0_004399B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 7ch
        push esi
        push edi
        mov dword ptr [ebp - 70h], ecx
        mov edi, dword ptr [ebp + 10h]
        or ecx, 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        add ecx, -1
        mov eax, dword ptr [ebp + 10h]
        add eax, ecx
        mov dword ptr [ebp - 6ch], eax
        mov cl, byte ptr [ebp - 0ch]
        mov byte ptr [ebp - 8], cl
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 64h], eax
        mov cl, byte ptr [ebp - 20h]
        mov byte ptr [ebp - 1ch], cl
        mov edx, dword ptr [ebp - 68h]
        sub edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F 8C A0 00 00 00: jl 0x439aa8
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 2ch]
        sub ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 08: jne 0x439a2b
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 74h], edx
        ; Exact mapped bytes EB 1C: jmp 0x439a47
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 24h]
        mov esi, dword ptr [ebp - 28h]
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
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 4E: je 0x439aa6
        __asm _emit 0x74
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 70h]
        mov eax, dword ptr [edx + 4]
        sub eax, dword ptr [ebp + 0ch]
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 75 08: jne 0x439a75
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 78h], ecx
        ; Exact mapped bytes EB 17: jmp 0x439a8c
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 DA C1 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 78h], eax
        mov edx, dword ptr [ebp + 0ch]
        sub edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, edx
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 70h]
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [edx + 4], eax
        ; Exact mapped bytes EB 7E: jmp 0x439b26
        __asm _emit 0xeb
        __asm _emit 0x7e
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 18h], ecx
        mov dl, byte ptr [ebp - 40h]
        mov byte ptr [ebp - 3ch], dl
        mov eax, dword ptr [ebp - 18h]
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 4ch]
        sub eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 44h], eax
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 75 08: jne 0x439ae0
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 7ch], ecx
        ; Exact mapped bytes EB 1C: jmp 0x439afc
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 44h]
        mov esi, dword ptr [ebp - 48h]
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
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 60h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 5ch], edx
        mov al, byte ptr [ebp - 58h]
        mov byte ptr [ebp - 54h], al
        lea ecx, [ebp - 54h]
        push ecx
        mov edx, dword ptr [ebp - 60h]
        push edx
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 2A EE 00 00: call 0x448950
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 70h]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
