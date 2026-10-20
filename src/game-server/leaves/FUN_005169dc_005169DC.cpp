// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005169DC .. +0x290 bytes.
extern "C" __declspec(naked) void FUN_005169dc_005169DC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 40h], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 90 D4 00 00 00: call dword ptr [eax + 0xd4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        and ecx, 10000000h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 4D 02 00 00: je 0x516c61
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        and edx, 0f000h
        test edx, edx
        ; Exact mapped bytes 0F 84 3C 02 00 00: je 0x516c61
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 24 F3 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 24 F6 01 00: call 0x536060
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xf6
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 34h]
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 1F F4 01 00: call 0x535e67
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 28h], edx
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        cmp dword ptr [ecx + 1ch], 0
        setne dl
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 18: je 0x516a87
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx + 64h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x516a87
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 2ch]
        or ecx, 6
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes EB 20: jmp 0x516aa7
        __asm _emit 0xeb
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 8]
        and edx, 0a000h
        test edx, edx
        ; Exact mapped bytes 74 0A: je 0x516a9e
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 2ch]
        or al, 0ah
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 09: jmp 0x516aa7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 2ch]
        or ecx, 10h
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        push -1
        lea eax, [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 7D 08: jge 0x516ada
        __asm _emit 0x7d
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 44h], ecx
        ; Exact mapped bytes EB 06: jmp 0x516ae0
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7D 08: jge 0x516af6
        __asm _emit 0x7d
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 48h], edx
        ; Exact mapped bytes EB 06: jmp 0x516afc
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        and edx, 0a000h
        test edx, edx
        ; Exact mapped bytes 74 7C: je 0x516b8b
        __asm _emit 0x74
        __asm _emit 0x7c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        add ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7E 0B: jle 0x516b34
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 06: jmp 0x516b3a
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [edx + 14h], eax
        mov ecx, dword ptr [ebp - 8]
        and ecx, 2000h
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x516b61
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes EB 25: jmp 0x516b86
        __asm _emit 0xeb
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 8]
        and edx, 8000h
        test edx, edx
        ; Exact mapped bytes 74 18: je 0x516b86
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 14h]
        sub eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        sub edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10h], edx
        ; Exact mapped bytes E9 A8 00 00 00: jmp 0x516c33
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        and ecx, 5000h
        test ecx, ecx
        ; Exact mapped bytes 74 78: je 0x516c10
        __asm _emit 0x74
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        add eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7E 0B: jle 0x516bbd
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 50h], edx
        ; Exact mapped bytes EB 06: jmp 0x516bc3
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ecx + 18h], edx
        mov eax, dword ptr [ebp - 8]
        and eax, 1000h
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x516be9
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], edx
        ; Exact mapped bytes EB 25: jmp 0x516c0e
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 8]
        and ecx, 4000h
        test ecx, ecx
        ; Exact mapped bytes 74 18: je 0x516c0e
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 18h]
        sub edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        sub ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 23: jmp 0x516c33
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x516c2d
        __asm _emit 0x74
        __asm _emit 0x14
        push 318h
        push 5c8b74h
        ; Exact mapped bytes E8 D8 DD 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x516c2d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x516c10
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 20h]
        add edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 1ch]
        add eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 14: je 0x516c61
        __asm _emit 0x74
        __asm _emit 0x14
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 A1 EA FD FF: call 0x4f5702
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
