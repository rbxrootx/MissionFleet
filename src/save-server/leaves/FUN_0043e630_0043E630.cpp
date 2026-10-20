// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043E630 .. +0x225 bytes.
extern "C" __declspec(naked) void FUN_0043e630_0043E630() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 68h
        mov dword ptr [ebp - 50h], ecx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 74 42: je 0x43e689
        __asm _emit 0x74
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 12: je 0x43e66e
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x43e675
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx + 4]
        add edx, 4
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [eax + 4], edx
        ; Exact mapped bytes E9 C6 01 00 00: jmp 0x43e84f
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], 1
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sar edx, 2
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        cmp eax, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 73 08: jae 0x43e6ba
        __asm _emit 0x73
        __asm _emit 0x08
        lea ecx, [ebp - 4ch]
        mov dword ptr [ebp - 58h], ecx
        ; Exact mapped bytes EB 06: jmp 0x43e6c0
        __asm _emit 0xeb
        __asm _emit 0x06
        lea edx, [ebp - 18h]
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 18h]
        add edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 3A: je 0x43e711
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 10h]
        shl eax, 2
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 80h
        ; Exact mapped bytes 76 11: jbe 0x43e6fa
        __asm _emit 0x76
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 6E DD 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xdd
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 0F: jmp 0x43e709
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 BD 58 FF FF: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x43e718
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 48h]
        cmp ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 75 08: jne 0x43e736
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 64h], edx
        ; Exact mapped bytes EB 22: jmp 0x43e758
        __asm _emit 0xeb
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 48h]
        sub eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 16 75 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x75
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 48h]
        sub ecx, dword ptr [ebp - 28h]
        add eax, ecx
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes EB 12: jmp 0x43e77e
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 30h]
        sub edx, 1
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 2ch]
        add eax, 4
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 76 0C: jbe 0x43e790
        __asm _emit 0x76
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB DC: jmp 0x43e76c
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 75 41: jne 0x43e7e0
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 34h]
        cmp edx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 75 08: jne 0x43e7b8
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 22: jmp 0x43e7da
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 34h]
        sub ecx, dword ptr [ebp - 48h]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 94 74 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 34h]
        sub ecx, dword ptr [ebp - 48h]
        add eax, ecx
        mov dword ptr [ebp - 68h], eax
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx]
        sar edx, 2
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 40h], ecx
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 30: je 0x43e82f
        __asm _emit 0x74
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 44h]
        shl edx, 2
        mov dword ptr [ebp - 3ch], edx
        cmp dword ptr [ebp - 3ch], 80h
        ; Exact mapped bytes 76 0E: jbe 0x43e81f
        __asm _emit 0x76
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 8F DC 08 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xdc
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 10: jmp 0x43e82f
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 44 59 FF FF: call 0x434170
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1ch]
        lea eax, [edx + ecx*4]
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ecx + 8], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
