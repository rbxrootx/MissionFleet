// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58535F90 .. +0x265 bytes.
extern "C" __declspec(naked) void FUN_58535f90_58535F90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        mov dword ptr [ebp - 4], ecx
        push 18h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 74h
        push eax
        ; Exact mapped bytes E8 67 6E 31 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x6e
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 9ch], 0
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx]
        sub ecx, dword ptr [eax]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 4]
        sub ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 21 B3 F5 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xb3
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        cdq
        mov ecx, 3
        idiv ecx
        mov dword ptr [ebp - 48h], edx
        mov edx, dword ptr [ebp - 34h]
        push edx
        ; Exact mapped bytes E8 0A B3 F5 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xb3
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        cdq
        mov ecx, 3
        idiv ecx
        mov dword ptr [ebp - 44h], edx
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 0C: je 0x58536026
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 38h]
        cdq
        idiv dword ptr [ebp - 48h]
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 06: jmp 0x5853602c
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 0C: je 0x58536044
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 34h]
        cdq
        idiv dword ptr [ebp - 44h]
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 06: jmp 0x5853604a
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 4ch], edx
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 75 09: jne 0x5853605f
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 1
        ; Exact mapped bytes EB 06: jmp 0x58536065
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 28h], eax
        imul eax, dword ptr [ebp - 34h], 64h
        cdq
        idiv dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 9D B2 F5 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xb2
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 64h
        ; Exact mapped bytes 7D 72: jge 0x585360f1
        __asm _emit 0x7d
        __asm _emit 0x72
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ecx + 9ch], edx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585360a4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 7D 40: jge 0x585360ec
        __asm _emit 0x7d
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 40h]
        add edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 18h]
        add eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [edx + ecx*8 + 74h], eax
        mov eax, dword ptr [ebp - 18h]
        imul eax, dword ptr [ebp - 14h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp + 8]
        add eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*8 + 78h], eax
        ; Exact mapped bytes EB AF: jmp 0x5853609b
        __asm _emit 0xeb
        __asm _emit 0xaf
        ; Exact mapped bytes E9 FE 00 00 00: jmp 0x585361ef
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 64h
        ; Exact mapped bytes 75 59: jne 0x58536150
        __asm _emit 0x75
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [eax + 9ch], ecx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58536115
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 48h]
        ; Exact mapped bytes 7D 2E: jge 0x5853614b
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 40h]
        add ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 3ch]
        add edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ecx + eax*8 + 74h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ecx + eax*8 + 78h], edx
        ; Exact mapped bytes EB C1: jmp 0x5853610c
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x585361ef
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 64h
        ; Exact mapped bytes 0F 8E 95 00 00 00: jle 0x585361ef
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 08: je 0x5853616f
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58536176
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 1
        imul eax, dword ptr [ebp - 38h], 64h
        cdq
        idiv dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 8C B1 F5 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xb1
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 9ch], edx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x585361a8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 7D 3F: jge 0x585361ef
        __asm _emit 0x7d
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 1ch]
        add edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 3ch]
        add eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 1ch]
        imul eax, dword ptr [ebp - 30h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp + 8]
        add eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*8 + 74h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ecx + eax*8 + 78h], edx
        ; Exact mapped bytes EB B0: jmp 0x5853619f
        __asm _emit 0xeb
        __asm _emit 0xb0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
