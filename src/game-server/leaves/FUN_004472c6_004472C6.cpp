// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004472C6 .. +0x350 bytes.
extern "C" __declspec(naked) void FUN_004472c6_004472C6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push edi
        push ecx
        lea edi, [ebp - 2ch]
        mov ecx, 0bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 40c98h]
        ; Exact mapped bytes E8 57 4E FF FF: call 0x43c14d
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        cmp dword ptr [edx + 8d0h], 0
        ; Exact mapped bytes 74 28: je 0x44732a
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ecx + 8d0h]
        ; Exact mapped bytes E8 6B B2 02 00: call 0x47257f
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        push 1
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40c98h]
        ; Exact mapped bytes E8 6E 4C FF FF: call 0x43bf98
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 8dch], 0
        ; Exact mapped bytes 74 29: je 0x44735f
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 8dch]
        ; Exact mapped bytes E8 28 A7 03 00: call 0x481a70
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xa7
        __asm _emit 0x03
        __asm _emit 0x00
        push 2
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 40c98h]
        ; Exact mapped bytes E8 39 4C FF FF: call 0x43bf98
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 66 26 00 00: call 0x4499cd
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 90 02 00 00: jne 0x4475ff
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 79 30 FC FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x30
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 52 CC FB FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xcc
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 0F 85 76 02 00 00: jne 0x4475ff
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 5F 30 FC FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x30
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0d78h]
        mov ecx, dword ptr [eax + 0fch]
        and ecx, 18h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 57 02 00 00: je 0x4475ff
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 0e4h], 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 33 30 FC FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x30
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d78h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 EC 00 00 00: mov dx, word ptr [ecx + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 4
        ; Exact mapped bytes 0F 84 29 01 00 00: je 0x447504
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x4473ed
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 0F 8D 0D 01 00 00: jge 0x447504
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4 + 270h]
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 14h], 63h
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 1ch], edx
        lea eax, [ebp - 14h]
        push eax
        lea ecx, [ebp - 18h]
        push ecx
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 78 C3 FB FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xc3
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 AC 00 00 00: je 0x4474ff
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 10h
        or al, 4
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 26 C5 FB FF: call 0x403990
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xc5
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x4474ff
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 278h]
        shr edx, 1
        and edx, 7fffffffh
        cmp edx, 1
        ; Exact mapped bytes 75 4E: jne 0x4474e6
        __asm _emit 0x75
        __asm _emit 0x4e
        push 0
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 8b4h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 8b0h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 32 2F FC FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x2f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0d70h]
        ; Exact mapped bytes E8 E9 E4 01 00: call 0x4659b2
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 15 2F FC FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x2f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0d70h]
        ; Exact mapped bytes E8 20 DB 01 00: call 0x465006
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 B6 B1 03 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xb1
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 E0 FE FF FF: jmp 0x4473e4
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], 32h
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 16ch]
        mov dword ptr [ebp - 28h], ecx
        lea edx, [ebp - 20h]
        push edx
        lea eax, [ebp - 24h]
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 91 C2 FB FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xc2
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x4475e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 16ch]
        imul edx, edx, 370h
        cmp dword ptr [eax + edx + 16be4h], 0
        ; Exact mapped bytes 75 68: jne 0x4475c4
        __asm _emit 0x75
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 16ch]
        imul eax, eax, 370h
        mov ecx, dword ptr [ecx + eax + 16be0h]
        and ecx, 0fffffffeh
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 16ch]
        imul eax, eax, 370h
        mov edx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [edx + 168h]
        mov dword ptr [edx + eax + 16be0h], ecx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 16ch]
        shl ecx, 10h
        or ecx, 2
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 F3 B0 03 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xb0
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 24: jmp 0x4475e8
        __asm _emit 0xeb
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 16ch]
        shl eax, 10h
        or al, 2
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 CD B0 03 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xb0
        __asm _emit 0x03
        __asm _emit 0x00
        push 3
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 40c98h]
        ; Exact mapped bytes E8 99 49 FF FF: call 0x43bf98
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 45 01 00 00: call 0x44774c
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        add esp, 2ch
        cmp ebp, esp
        ; Exact mapped bytes E8 CE 11 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x11
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
