// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58867240 .. +0x20A bytes.
extern "C" __declspec(naked) void FUN_58867240_58867240() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 8
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
        mov esi, dword ptr [ebp + 8]
        push edi
        test esi, esi
        ; Exact mapped bytes 74 14: je 0x58867270
        __asm _emit 0x74
        __asm _emit 0x14
        mov ebx, dword ptr [ebp + 0ch]
        push ebx
        push esi
        ; Exact mapped bytes E8 CA 1E FF FF: call 0x58859130
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x1e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        cmp eax, ebx
        ; Exact mapped bytes 72 2C: jb 0x58867299
        __asm _emit 0x72
        __asm _emit 0x2c
        mov byte ptr [esi], 0
        ; Exact mapped bytes E8 FA B1 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 2B 9D FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, 16h
        lea esp, [ebp - 14h]
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 BB 9D FC FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x9d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0a8h]
        test edx, edx
        ; Exact mapped bytes 75 32: jne 0x588672da
        __asm _emit 0x75
        __asm _emit 0x32
        mov cl, byte ptr [esi]
        test cl, cl
        ; Exact mapped bytes 74 16: je 0x588672c4
        __asm _emit 0x74
        __asm _emit 0x16
        mov edi, edi
        lea eax, [ecx - 61h]
        cmp al, 19h
        ; Exact mapped bytes 77 05: ja 0x588672bc
        __asm _emit 0x77
        __asm _emit 0x05
        sub cl, 20h
        mov byte ptr [esi], cl
        mov cl, byte ptr [esi + 1]
        inc esi
        test cl, cl
        ; Exact mapped bytes 75 EC: jne 0x588672b0
        __asm _emit 0x75
        __asm _emit 0xec
        xor eax, eax
        lea esp, [ebp - 14h]
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 7A 9D FC FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x9d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
        push 1
        push dword ptr [ecx + 8]
        push 0
        push 0
        push -1
        push esi
        push 200h
        push edx
        push eax
        ; Exact mapped bytes E8 EA B0 00 00: call 0x588723dc
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        mov dword ptr [ebp - 8], eax
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x5886730c
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes E8 6E B1 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 2ah
        ; Exact mapped bytes E9 23 01 00 00: jmp 0x5886742f
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, eax
        ; Exact mapped bytes 73 2C: jae 0x5886733c
        __asm _emit 0x73
        __asm _emit 0x2c
        mov byte ptr [esi], 0
        ; Exact mapped bytes E8 57 B1 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 22h
        ; Exact mapped bytes E8 88 9C FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, 22h
        lea esp, [ebp - 14h]
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 18 9D FC FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x9d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
        lea ecx, [eax + 8]
        cmp eax, ecx
        sbb eax, eax
        and eax, ecx
        ; Exact mapped bytes 0F 84 D9 00 00 00: je 0x58867424
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 400h
        ; Exact mapped bytes 77 17: ja 0x58867369
        __asm _emit 0x77
        __asm _emit 0x17
        ; Exact mapped bytes E8 89 B2 FC FF: call 0x588325e0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xb2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edi, esp
        test edi, edi
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x58867424
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi], 0cccch
        ; Exact mapped bytes EB 19: jmp 0x58867382
        __asm _emit 0xeb
        __asm _emit 0x19
        push eax
        ; Exact mapped bytes E8 61 5B 00 00: call 0x5886ced0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        test edi, edi
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x58867424
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi], 0ddddh
        add edi, 8
        test edi, edi
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x58867424
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        lea ebx, [edi - 8]
        push 1
        mov eax, dword ptr [ecx]
        push dword ptr [eax + 8]
        push dword ptr [ebp - 8]
        push edi
        push -1
        push esi
        push 200h
        push dword ptr [eax + 0a8h]
        push ecx
        ; Exact mapped bytes E8 2A B0 00 00: call 0x588723dc
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x588673ef
        __asm _emit 0x74
        __asm _emit 0x36
        push edi
        push dword ptr [ebp + 0ch]
        push esi
        ; Exact mapped bytes E8 CD 03 FF FF: call 0x58857790
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov esi, eax
        cmp dword ptr [ebx], 0ddddh
        ; Exact mapped bytes 75 09: jne 0x588673d9
        __asm _emit 0x75
        __asm _emit 0x09
        push ebx
        ; Exact mapped bytes E8 3A 58 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        lea esp, [ebp - 14h]
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 65 9C FC FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x9c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
        ; Exact mapped bytes E8 7B B0 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 2ah
        cmp dword ptr [ebx], 0ddddh
        ; Exact mapped bytes 75 09: jne 0x5886740b
        __asm _emit 0x75
        __asm _emit 0x09
        push ebx
        ; Exact mapped bytes E8 08 58 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, 2ah
        lea esp, [ebp - 14h]
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 30 9C FC FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x9c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
        ; Exact mapped bytes E8 46 B0 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 0ch
        ; Exact mapped bytes E8 3B B0 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        lea esp, [ebp - 14h]
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 0A 9C FC FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x9c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
