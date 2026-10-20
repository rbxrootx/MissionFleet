// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043EBE0 .. +0x226 bytes.
extern "C" __declspec(naked) void FUN_0043ebe0_0043EBE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 6ch
        mov dword ptr [ebp - 54h], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 74 40: je 0x43ec3e
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 10: je 0x43ec23
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 58h], edx
        ; Exact mapped bytes EB 07: jmp 0x43ec2a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 4
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [edx + 4], ecx
        ; Exact mapped bytes E9 C4 01 00 00: jmp 0x43ee02
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], 1
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [edx + 4]
        sub ecx, dword ptr [eax]
        sar ecx, 2
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ebp - 50h]
        ; Exact mapped bytes 73 08: jae 0x43ec6f
        __asm _emit 0x73
        __asm _emit 0x08
        lea eax, [ebp - 50h]
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 06: jmp 0x43ec75
        __asm _emit 0xeb
        __asm _emit 0x06
        lea ecx, [ebp - 1ch]
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 3A: je 0x43ecc6
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 14h]
        shl edx, 2
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 80h
        ; Exact mapped bytes 76 11: jbe 0x43ecaf
        __asm _emit 0x76
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 B9 D7 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xd7
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 0F: jmp 0x43ecbe
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 08 53 FF FF: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 64h], edx
        ; Exact mapped bytes EB 07: jmp 0x43eccd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4ch]
        cmp eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 75 08: jne 0x43eceb
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 68h], ecx
        ; Exact mapped bytes EB 22: jmp 0x43ed0d
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 4ch]
        sub edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 61 6F 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4ch]
        sub edx, dword ptr [ebp - 2ch]
        add eax, edx
        mov dword ptr [ebp - 68h], eax
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 30h], edx
        ; Exact mapped bytes EB 12: jmp 0x43ed33
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 34h]
        sub eax, 1
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 4
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 76 0A: jbe 0x43ed43
        __asm _emit 0x76
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx], eax
        ; Exact mapped bytes EB DE: jmp 0x43ed21
        __asm _emit 0xeb
        __asm _emit 0xde
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 75 41: jne 0x43ed93
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 38h]
        cmp edx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 75 08: jne 0x43ed6b
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 22: jmp 0x43ed8d
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 38h]
        sub ecx, dword ptr [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp - 4ch]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 E1 6E 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x6e
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 38h]
        sub ecx, dword ptr [ebp - 4ch]
        add eax, ecx
        mov dword ptr [ebp - 6ch], eax
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx]
        sar edx, 2
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 44h], ecx
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 30: je 0x43ede2
        __asm _emit 0x74
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 48h]
        shl edx, 2
        mov dword ptr [ebp - 40h], edx
        cmp dword ptr [ebp - 40h], 80h
        ; Exact mapped bytes 76 0E: jbe 0x43edd2
        __asm _emit 0x76
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 DC D6 08 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xd6
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 10: jmp 0x43ede2
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        ; Exact mapped bytes E8 91 53 FF FF: call 0x434170
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 20h]
        lea eax, [edx + ecx*4]
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ecx + 8], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
