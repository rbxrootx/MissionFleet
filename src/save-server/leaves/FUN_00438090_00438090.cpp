// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438090 .. +0x14D bytes.
extern "C" __declspec(naked) void FUN_00438090_00438090() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push esi
        push edi
        mov dword ptr [ebp - 3ch], ecx
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        sub ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [edx + 4]
        sub ecx, dword ptr [eax]
        cmp dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 0F 87 A4 00 00 00: ja 0x438165
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
        ; Exact mapped bytes 75 08: jne 0x4380d7
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 40h], ecx
        ; Exact mapped bytes EB 1C: jmp 0x4380f3
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
        ; Exact mapped bytes 74 4E: je 0x438163
        __asm _emit 0x74
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx + 4]
        sub edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 08: jne 0x438132
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 17: jmp 0x438149
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 1D DB 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xdb
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
        ; Exact mapped bytes EB 6D: jmp 0x4381d2
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
        ; Exact mapped bytes 75 08: jne 0x438189
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 48h], edx
        ; Exact mapped bytes EB 1C: jmp 0x4381a5
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
        ; Exact mapped bytes E8 7E FD 00 00: call 0x447f50
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3ch]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
