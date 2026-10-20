// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A3FC0 .. +0x19F bytes.
extern "C" __declspec(naked) void FUN_587a3fc0_587A3FC0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push 0
        push dword ptr [esp + 14h]
        push dword ptr [esp + 14h]
        push esi
        ; Exact mapped bytes E8 CB DF FF FF: call 0x587a1fa0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 124h]
        add esp, 10h
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x587a3ff4
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [esi + 128h]
        mov dword ptr [esi + 124h], eax
        mov dword ptr [esi + 128h], ecx
        mov eax, dword ptr [esi + 11ch]
        inc eax
        mov dword ptr [esi + 11ch], eax
        cmp eax, dword ptr [esi + 10ch]
        ; Exact mapped bytes 0F 82 2C 01 00 00: jb 0x587a4139
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esi + 150h], 0
        push edi
        ; Exact mapped bytes 0F 84 0E 01 00 00: je 0x587a4129
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [esi + 7ch], 2
        mov dword ptr [esi + 11ch], 0
        ; Exact mapped bytes 74 17: je 0x587a4042
        __asm _emit 0x74
        __asm _emit 0x17
        inc byte ptr [esi + 151h]
        lea edx, [esi + 104h]
        mov al, byte ptr [esi + 151h]
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x587a40d2
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        lea ebp, [esi + 104h]
        push ebx
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi + 151h]
        mov edx, ebp
        inc al
        mov byte ptr [esp + 14h], al
        mov byte ptr [esi + 151h], al
        cmp al, 7
        ; Exact mapped bytes 73 68: jae 0x587a40d0
        __asm _emit 0x73
        __asm _emit 0x68
        movzx ebx, al
        xor edx, edx
        movzx edi, byte ptr [ebx + 588b8994h]
        movzx eax, byte ptr [ebx + 588b898ch]
        mov ecx, edi
        sub ecx, eax
        mov eax, dword ptr [ebp]
        dec ecx
        add eax, ecx
        movzx ecx, byte ptr [ebx + 588b899ch]
        div edi
        movzx edi, byte ptr [ebx + 588b89a4h]
        mov ebp, eax
        mov edx, edi
        mov eax, dword ptr [esi + 108h]
        sub edx, ecx
        dec eax
        mov dword ptr [esi + 110h], ebp
        add eax, edx
        xor edx, edx
        div edi
        test ebp, ebp
        lea ebp, [esi + 104h]
        mov ecx, eax
        mov dword ptr [esi + 10ch], ecx
        ; Exact mapped bytes 74 90: je 0x587a4050
        __asm _emit 0x74
        __asm _emit 0x90
        mov al, byte ptr [esp + 14h]
        lea ebp, [esi + 104h]
        mov edx, ebp
        test ecx, ecx
        ; Exact mapped bytes 74 80: je 0x587a4050
        __asm _emit 0x74
        __asm _emit 0x80
        pop ebx
        pop ebp
        cmp al, 7
        ; Exact mapped bytes 73 53: jae 0x587a4129
        __asm _emit 0x73
        __asm _emit 0x53
        mov edi, dword ptr [esi + 124h]
        test edi, edi
        ; Exact mapped bytes 74 58: je 0x587a4138
        __asm _emit 0x74
        __asm _emit 0x58
        movzx eax, byte ptr [esi + 155h]
        movzx ecx, byte ptr [esi + 158h]
        imul ecx, eax
        mov eax, dword ptr [edx]
        cmp ecx, 8
        ; Exact mapped bytes 72 17: jb 0x587a410f
        __asm _emit 0x72
        __asm _emit 0x17
        shr ecx, 3
        imul ecx, eax
        lea eax, [ecx + 1]
        push eax
        push 0
        push edi
        ; Exact mapped bytes E8 06 8D 0A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x8d
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 29: jmp 0x587a4138
        __asm _emit 0xeb
        __asm _emit 0x29
        imul ecx, eax
        add ecx, 7
        shr ecx, 3
        lea eax, [ecx + 1]
        push eax
        push 0
        push edi
        ; Exact mapped bytes E8 EC 8C 0A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 0F: jmp 0x587a4138
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 4
        push 0
        push 0
        push esi
        ; Exact mapped bytes E8 6B DE FF FF: call 0x587a1fa0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        pop edi
        mov eax, dword ptr [esi + 184h]
        mov ecx, dword ptr [esi + 180h]
        inc eax
        mov dword ptr [esi + 184h], eax
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x587a415d
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp eax, ecx
        ; Exact mapped bytes 72 09: jb 0x587a415d
        __asm _emit 0x72
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 16 A0 FF FF: call 0x5879e170
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        pop esi
        ret
    }
}
