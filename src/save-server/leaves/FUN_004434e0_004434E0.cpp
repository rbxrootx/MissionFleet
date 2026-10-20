// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004434E0 .. +0x251 bytes.
extern "C" __declspec(naked) void FUN_004434e0_004434E0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58bf69h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 48h
        mov eax, dword ptr [ebp + 8]
        sub eax, 1
        shr eax, 3
        lea ecx, [eax*4 + 6850b8h]
        mov dword ptr [ebp - 18h], ecx
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 0F 84 16 01 00 00: je 0x44362e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push 6850f8h
        ; Exact mapped bytes FF 15 28 BA 68 00: call dword ptr [0x68ba28]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 01 01 00 00: je 0x44362e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 28 0A 67 00: mov eax, dword ptr [0x670a28]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x67
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 8B 0D 98 50 68 00: mov ecx, dword ptr [0x685098]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 24h], 11h
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x443557
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 2ch]
        add edx, 1
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        cmp eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 73 64: jae 0x4435c3
        __asm _emit 0x73
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 28h]
        shr ecx, 1
        cmp dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes 72 09: jb 0x443572
        __asm _emit 0x72
        __asm _emit 0x09
        ; Exact mapped bytes 83 3D F8 50 68 00 00: cmp dword ptr [0x6850f8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2A: je 0x44359c
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 24h]
        imul edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        imul eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        imul ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        imul edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes EB 25: jmp 0x4435c1
        __asm _emit 0xeb
        __asm _emit 0x25
        push 1
        push 6850f8h
        ; Exact mapped bytes FF 15 28 BA 68 00: call dword ptr [0x68ba28]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4435c1
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes A3 98 50 68 00: mov dword ptr [0x685098], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 28 0A 67 00 E8 03 00 00: mov dword ptr [0x670a28], 0x3e8
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 6D: jmp 0x44362e
        __asm _emit 0xeb
        __asm _emit 0x6d
        ; Exact mapped bytes EB 8B: jmp 0x44354e
        __asm _emit 0xeb
        __asm _emit 0x8b
        ; Exact mapped bytes C7 05 28 0A 67 00 1E 00 00 00: mov dword ptr [0x670a28], 0x1e
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4435df
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 1
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        add edx, 6
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 1bh
        ; Exact mapped bytes 7E 07: jle 0x4435f5
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 1bh
        push 1
        push 6850f8h
        ; Exact mapped bytes FF 15 28 BA 68 00: call dword ptr [0x68ba28]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x443608
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 26: jmp 0x44362e
        __asm _emit 0xeb
        __asm _emit 0x26
        cmp dword ptr [ebp - 30h], 14h
        ; Exact mapped bytes 7F 0A: jg 0x443618
        __asm _emit 0x7f
        __asm _emit 0x0a
        push 0
        ; Exact mapped bytes FF 15 AC B7 68 00: call dword ptr [0x68b7ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x44362c
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 30h]
        sub ecx, 14h
        mov eax, 1
        shl eax, cl
        push eax
        ; Exact mapped bytes FF 15 AC B7 68 00: call dword ptr [0x68b7ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB A8: jmp 0x4435d6
        __asm _emit 0xeb
        __asm _emit 0xa8
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0F: je 0x443652
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x4436fd
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 50h], eax
        mov dword ptr [ebp - 40h], 14h
        mov ecx, dword ptr [ebp - 50h]
        add ecx, 7
        and ecx, 0fffffff8h
        mov dword ptr [ebp - 50h], ecx
        lea edx, [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp - 50h]
        push eax
        ; Exact mapped bytes E8 B8 FC FF FF: call 0x443330
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 40h], 1
        ; Exact mapped bytes 75 08: jne 0x44368c
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 71: jmp 0x4436fd
        __asm _emit 0xeb
        __asm _emit 0x71
        mov edx, dword ptr [ebp - 50h]
        sub edx, 1
        shr edx, 3
        lea eax, [edx*4 + 6850b8h]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 38h]
        add edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [eax], ecx
        mov dword ptr [ebp - 44h], 1
        ; Exact mapped bytes EB 09: jmp 0x4436c8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 44h]
        add edx, 1
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 34h]
        add ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 40h]
        sub edx, 1
        cmp edx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 75 0B: jne 0x4436ed
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [eax], 0
        ; Exact mapped bytes EB 0A: jmp 0x4436f7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB C8: jmp 0x4436bf
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 74 10: je 0x443720
        __asm _emit 0x74
        __asm _emit 0x10
        mov dword ptr [ebp - 54h], 6850f8h
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [eax], 0
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
