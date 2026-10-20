// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004381E0 .. +0x15B bytes.
extern "C" __declspec(naked) void FUN_004381e0_004381E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push esi
        push edi
        mov dword ptr [ebp - 3ch], ecx
        mov edi, dword ptr [ebp + 8]
        or ecx, 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        add ecx, -1
        mov eax, dword ptr [ebp + 8]
        add eax, ecx
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        sub ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [edx + 4]
        sub ecx, dword ptr [eax]
        cmp dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 0F 87 A4 00 00 00: ja 0x4382c3
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 08: jne 0x438235
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 40h], ecx
        ; Exact mapped bytes EB 1C: jmp 0x438251
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp - 8]
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
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 4E: je 0x4382c1
        __asm _emit 0x74
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx + 4]
        sub edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 08: jne 0x438290
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 17: jmp 0x4382a7
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 BF D9 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xd9
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 4]
        sub eax, ecx
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 4], edx
        ; Exact mapped bytes EB 6D: jmp 0x438330
        __asm _emit 0xeb
        __asm _emit 0x6d
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 08: jne 0x4382e7
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 48h], edx
        ; Exact mapped bytes EB 1C: jmp 0x438303
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 24h]
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp - 20h]
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
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 8]
        add eax, edx
        mov dword ptr [ebp - 34h], eax
        mov cl, byte ptr [ebp - 30h]
        mov byte ptr [ebp - 2ch], cl
        lea edx, [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 20 FC 00 00: call 0x447f50
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3ch]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
