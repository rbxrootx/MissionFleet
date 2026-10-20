// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00439840 .. +0x16D bytes.
extern "C" __declspec(naked) void FUN_00439840_00439840() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 78h
        push esi
        push edi
        mov dword ptr [ebp - 6ch], ecx
        mov al, byte ptr [ebp - 0ch]
        mov byte ptr [ebp - 8], al
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 68h], ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 64h], edx
        mov al, byte ptr [ebp - 20h]
        mov byte ptr [ebp - 1ch], al
        mov ecx, dword ptr [ebp - 68h]
        sub ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 0ch]
        sub edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F 8C A0 00 00 00: jl 0x439924
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 2ch]
        sub eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 08: jne 0x4398a7
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 70h], ecx
        ; Exact mapped bytes EB 1C: jmp 0x4398c3
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 24h]
        mov esi, dword ptr [ebp - 28h]
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
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 38h]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 4E: je 0x439922
        __asm _emit 0x74
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [eax + 4]
        sub ecx, dword ptr [ebp + 0ch]
        add ecx, 1
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 75 08: jne 0x4398f1
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 74h], edx
        ; Exact mapped bytes EB 17: jmp 0x439908
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        ; Exact mapped bytes E8 5E C3 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 74h], eax
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes EB 7E: jmp 0x4399a2
        __asm _emit 0xeb
        __asm _emit 0x7e
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 18h], edx
        mov al, byte ptr [ebp - 40h]
        mov byte ptr [ebp - 3ch], al
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 4ch]
        sub ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 44h], ecx
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 75 08: jne 0x43995c
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 78h], edx
        ; Exact mapped bytes EB 1C: jmp 0x439978
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 44h]
        mov esi, dword ptr [ebp - 48h]
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
        mov dword ptr [ebp - 78h], edx
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 5ch], ecx
        mov dl, byte ptr [ebp - 58h]
        mov byte ptr [ebp - 54h], dl
        lea eax, [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 AE EF 00 00: call 0x448950
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 6ch]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
