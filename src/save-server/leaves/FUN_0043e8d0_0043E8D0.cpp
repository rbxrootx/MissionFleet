// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043E8D0 .. +0x30D bytes.
extern "C" __declspec(naked) void FUN_0043e8d0_0043E8D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 98h
        mov dword ptr [ebp - 78h], ecx
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 8]
        sub edx, dword ptr [ebp - 14h]
        sar edx, 2
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 0F 84 00 01 00 00: je 0x43ea02
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 75 42: jne 0x43e955
        __asm _emit 0x75
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 12: je 0x43e93a
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x43e941
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx + 4]
        add edx, 4
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [eax + 4], edx
        ; Exact mapped bytes E9 A8 00 00 00: jmp 0x43e9fd
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx + 4]
        sub edx, 4
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 12: je 0x43e988
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x43e98f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx + 4]
        add edx, 4
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 4
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [edx + 4]
        sub eax, 8
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        sub ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 7E 1F: jle 0x43e9ec
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        sub ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes E8 7F 72 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 09: jmp 0x43e9f5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes E9 C4 01 00 00: jmp 0x43ebc6
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 70h], 1
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [edx + 4]
        sub ecx, dword ptr [eax]
        sar ecx, 2
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 44h]
        cmp edx, dword ptr [ebp - 70h]
        ; Exact mapped bytes 73 0B: jae 0x43ea2d
        __asm _emit 0x73
        __asm _emit 0x0b
        lea eax, [ebp - 70h]
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 09: jmp 0x43ea36
        __asm _emit 0xeb
        __asm _emit 0x09
        lea ecx, [ebp - 44h]
        mov dword ptr [ebp - 88h], ecx
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [ebp - 44h]
        add ecx, dword ptr [eax]
        mov dword ptr [ebp - 3ch], ecx
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 46: je 0x43ea96
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 3ch]
        shl edx, 2
        mov dword ptr [ebp - 50h], edx
        cmp dword ptr [ebp - 50h], 80h
        ; Exact mapped bytes 76 14: jbe 0x43ea76
        __asm _emit 0x76
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 50h]
        push eax
        ; Exact mapped bytes E8 F5 D9 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xd9
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 12: jmp 0x43ea88
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        ; Exact mapped bytes E8 41 55 FF FF: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 90h], edx
        ; Exact mapped bytes EB 0A: jmp 0x43eaa0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov eax, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp - 54h]
        ; Exact mapped bytes 75 0B: jne 0x43eac4
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 94h], ecx
        ; Exact mapped bytes EB 25: jmp 0x43eae9
        __asm _emit 0xeb
        __asm _emit 0x25
        mov edx, dword ptr [ebp + 8]
        sub edx, dword ptr [ebp - 54h]
        push edx
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        ; Exact mapped bytes E8 88 71 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        sub edx, dword ptr [ebp - 54h]
        add eax, edx
        mov dword ptr [ebp - 94h], eax
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 58h], edx
        ; Exact mapped bytes EB 12: jmp 0x43eb12
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 5ch]
        sub eax, 1
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 58h]
        add ecx, 4
        mov dword ptr [ebp - 58h], ecx
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 76 0C: jbe 0x43eb24
        __asm _emit 0x76
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes EB DC: jmp 0x43eb00
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 40h], edx
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 4A: jne 0x43eb7a
        __asm _emit 0x75
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 60h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0B: jne 0x43eb4c
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 98h], ecx
        ; Exact mapped bytes EB 25: jmp 0x43eb71
        __asm _emit 0xeb
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 60h]
        sub edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes E8 00 71 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 60h]
        sub edx, dword ptr [ebp + 8]
        add eax, edx
        mov dword ptr [ebp - 98h], eax
        mov eax, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [ecx + 8]
        sub eax, dword ptr [edx]
        sar eax, 2
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        add ecx, 8
        ; Exact mapped bytes E8 3A 2B FC FF: call 0x4016e0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x2b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ebp - 48h]
        lea edx, [ecx + eax*4]
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 74h]
        lea eax, [ecx + eax*4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
