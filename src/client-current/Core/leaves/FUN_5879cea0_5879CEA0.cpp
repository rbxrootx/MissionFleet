// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879CEA0 .. +0x3FD bytes.
extern "C" __declspec(naked) void FUN_5879cea0_5879CEA0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58891e7dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 38h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov edi, dword ptr [ebp + 8]
        mov ecx, edi
        mov dword ptr [ebp - 40h], edi
        ; Exact mapped bytes E8 F7 DC FF FF: call 0x5879abd0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        test eax, eax
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x5879cf69
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 0F 11 45 D8: movups xmmword ptr [ebp - 0x28], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xd8
        mov eax, 5d5bh
        mov dword ptr [ebp - 14h], 0fh
        ; Exact mapped bytes 66 89 45 D8: mov word ptr [ebp - 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        mov byte ptr [ebp - 26h], 0
        test byte ptr [esi + 94h], 1
        lea eax, [ebp - 28h]
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0B: je 0x5879cf24
        __asm _emit 0x74
        __asm _emit 0x0b
        push eax
        lea ecx, [esi + 8]
        ; Exact mapped bytes E8 EE 16 D8 FF: call 0x5851e610
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x16
        __asm _emit 0xd8
        __asm _emit 0xff
        ; Exact mapped bytes EB 0E: jmp 0x5879cf32
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 2
        push eax
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 21 E1 FF FF: call 0x5879b050
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, 0fh
        ; Exact mapped bytes 0F 86 24 03 00 00: jbe 0x5879d262
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        inc ecx
        mov eax, edx
        cmp ecx, 1000h
        ; Exact mapped bytes 0F 82 08 03 00 00: jb 0x5879d258
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax - 4]
        add ecx, 23h
        sub eax, edx
        add eax, -4
        cmp eax, 1fh
        ; Exact mapped bytes 0F 87 1B 03 00 00: ja 0x5879d27f
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x1b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 EF 02 00 00: jmp 0x5879d258
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 48h], 2
        ; Exact mapped bytes 0F 84 B7 00 00 00: je 0x5879d02a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 25 E7 FF FF: call 0x5879b6a0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 85 A7 00 00 00: jne 0x5879d02a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b73ach
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 60 76 D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x76
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        cmp dword ptr [esi + 40h], 0
        ; Exact mapped bytes 74 10: je 0x5879cfa9
        __asm _emit 0x74
        __asm _emit 0x10
        push 588ade80h
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 4A 76 D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x76
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        xor edi, edi
        cmp dword ptr [ebp - 30h], edi
        ; Exact mapped bytes 76 52: jbe 0x5879d002
        __asm _emit 0x76
        __asm _emit 0x52
        mov dword ptr [ebp - 2ch], edi
        mov ecx, 588b73b8h
        test edi, edi
        ; Exact mapped bytes 74 18: je 0x5879cfd4
        __asm _emit 0x74
        __asm _emit 0x18
        cmp dword ptr [esi + 40h], 0
        mov eax, 588b73b4h
        cmove eax, ecx
        push eax
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 1F 76 D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x76
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [esi + 8]
        add eax, dword ptr [ebp - 2ch]
        mov ecx, eax
        cmp dword ptr [eax + 14h], 0fh
        ; Exact mapped bytes 76 02: jbe 0x5879cfe4
        __asm _emit 0x76
        __asm _emit 0x02
        mov ecx, dword ptr [eax]
        push dword ptr [eax + 10h]
        push ecx
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 60 E0 FF FF: call 0x5879b050
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        add dword ptr [ebp - 2ch], 18h
        inc edi
        add esp, 0ch
        mov ecx, 588b73b8h
        cmp edi, dword ptr [ebp - 30h]
        ; Exact mapped bytes 72 B6: jb 0x5879cfb8
        __asm _emit 0x72
        __asm _emit 0xb6
        cmp dword ptr [esi + 40h], 0
        ; Exact mapped bytes 74 10: je 0x5879d018
        __asm _emit 0x74
        __asm _emit 0x10
        push 588ade80h
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 DB 75 D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x75
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        push 588b73b0h
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 CB 75 D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x75
        __asm _emit 0xd6
        __asm _emit 0xff
        ; Exact mapped bytes E9 35 02 00 00: jmp 0x5879d25f
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov ecx, 1
        mov edx, 0fh
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 0F 11 45 D8: movups xmmword ptr [ebp - 0x28], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xd8
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes 66 C7 45 D8 5B 00: mov word ptr [ebp - 0x28], 0x5b
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xd8
        __asm _emit 0x5b
        __asm _emit 0x00
        test byte ptr [esi + 94h], 2
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 75 32: jne 0x5879d085
        __asm _emit 0x75
        __asm _emit 0x32
        cmp dword ptr [esi + 40h], 0
        ; Exact mapped bytes 74 2C: je 0x5879d085
        __asm _emit 0x74
        __asm _emit 0x2c
        push 0ah
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 4D DD FF FF: call 0x5879adb0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        lea ecx, [esi + 14h]
        cmp dword ptr [esi + 28h], 0fh
        ; Exact mapped bytes 76 03: jbe 0x5879d072
        __asm _emit 0x76
        __asm _emit 0x03
        mov ecx, dword ptr [esi + 14h]
        push dword ptr [esi + 24h]
        push ecx
        push eax
        ; Exact mapped bytes E8 D4 DF FF FF: call 0x5879b050
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        add esp, 0ch
        mov ecx, dword ptr [ebp - 18h]
        cmp edx, 0fh
        lea eax, [ebp - 28h]
        push ecx
        cmova eax, dword ptr [ebp - 28h]
        push eax
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 B7 DF FF FF: call 0x5879b050
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        and byte ptr [esi + 94h], 0fdh
        add esp, 0ch
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 4], 0ffffffffh
        cmp ecx, 0fh
        ; Exact mapped bytes 76 2C: jbe 0x5879d0de
        __asm _emit 0x76
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 28h]
        inc ecx
        mov eax, edx
        cmp ecx, 1000h
        ; Exact mapped bytes 72 14: jb 0x5879d0d4
        __asm _emit 0x72
        __asm _emit 0x14
        mov edx, dword ptr [eax - 4]
        add ecx, 23h
        sub eax, edx
        add eax, -4
        cmp eax, 1fh
        ; Exact mapped bytes 0F 87 BA 01 00 00: ja 0x5879d28e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push edx
        ; Exact mapped bytes E8 59 3F 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x3f
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        cmp dword ptr [esi + 44h], 0fh
        lea ecx, [esi + 30h]
        ; Exact mapped bytes 76 03: jbe 0x5879d0ea
        __asm _emit 0x76
        __asm _emit 0x03
        mov ecx, dword ptr [esi + 30h]
        push dword ptr [esi + 40h]
        push ecx
        lea ecx, [esi + 14h]
        ; Exact mapped bytes E8 AA 8B D2 FF: call 0x584c5ca0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x8b
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [esi + 0ch]
        mov dword ptr [ebp - 44h], eax
        xor eax, eax
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 D7 C0 FF FF: call 0x587991f0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, esi
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes E8 3C 03 00 00: call 0x5879d460
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        cmp dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes 74 10: je 0x5879d13c
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 8]
        add ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 C6 0A 00 00: call 0x5879dc00
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4D: jmp 0x5879d189
        __asm _emit 0xeb
        __asm _emit 0x4d
        test byte ptr [esi + 94h], 2
        ; Exact mapped bytes 75 2C: jne 0x5879d171
        __asm _emit 0x75
        __asm _emit 0x2c
        cmp dword ptr [esi + 40h], 0
        ; Exact mapped bytes 74 26: je 0x5879d171
        __asm _emit 0x74
        __asm _emit 0x26
        push 0ah
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 5B DC FF FF: call 0x5879adb0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        lea ecx, [esi + 14h]
        cmp dword ptr [esi + 28h], 0fh
        ; Exact mapped bytes 76 03: jbe 0x5879d164
        __asm _emit 0x76
        __asm _emit 0x03
        mov ecx, dword ptr [esi + 14h]
        push dword ptr [esi + 24h]
        push ecx
        push eax
        ; Exact mapped bytes E8 E2 DE FF FF: call 0x5879b050
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        push dword ptr [ebp - 38h]
        or byte ptr [esi + 94h], 2
        mov ecx, esi
        ; Exact mapped bytes E8 2E 06 00 00: call 0x5879d7b0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        and byte ptr [esi + 94h], 0fdh
        mov eax, dword ptr [ebp - 34h]
        add dword ptr [ebp - 2ch], 18h
        inc eax
        mov dword ptr [ebp - 34h], eax
        cmp eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes 74 22: je 0x5879d1bb
        __asm _emit 0x74
        __asm _emit 0x22
        push 588b73b8h
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 4A 74 D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x74
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        mov ecx, esi
        push dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 ED 00 00 00: call 0x5879d2a0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        ; Exact mapped bytes E9 55 FF FF FF: jmp 0x5879d110
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp - 38h]
        mov ecx, esi
        ; Exact mapped bytes E8 DB 00 00 00: call 0x5879d2a0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 24h]
        lea ecx, [esi + 14h]
        sub eax, dword ptr [esi + 40h]
        push 0
        push eax
        ; Exact mapped bytes E8 5A EB D6 FF: call 0x5850bd30
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xeb
        __asm _emit 0xd6
        __asm _emit 0xff
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov ecx, 1
        mov edx, 0fh
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 0F 11 45 D8: movups xmmword ptr [ebp - 0x28], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xd8
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes 66 C7 45 D8 5D 00: mov word ptr [ebp - 0x28], 0x5d
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xd8
        __asm _emit 0x5d
        __asm _emit 0x00
        test byte ptr [esi + 94h], 2
        mov dword ptr [ebp - 4], 2
        ; Exact mapped bytes 75 32: jne 0x5879d235
        __asm _emit 0x75
        __asm _emit 0x32
        cmp dword ptr [esi + 40h], 0
        ; Exact mapped bytes 74 2C: je 0x5879d235
        __asm _emit 0x74
        __asm _emit 0x2c
        push 0ah
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 9D DB FF FF: call 0x5879adb0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        lea ecx, [esi + 14h]
        cmp dword ptr [esi + 28h], 0fh
        ; Exact mapped bytes 76 03: jbe 0x5879d222
        __asm _emit 0x76
        __asm _emit 0x03
        mov ecx, dword ptr [esi + 14h]
        push dword ptr [esi + 24h]
        push ecx
        push eax
        ; Exact mapped bytes E8 24 DE FF FF: call 0x5879b050
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        add esp, 0ch
        mov ecx, dword ptr [ebp - 18h]
        cmp edx, 0fh
        lea eax, [ebp - 28h]
        push ecx
        cmova eax, dword ptr [ebp - 28h]
        push eax
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 07 DE FF FF: call 0x5879b050
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        and byte ptr [esi + 94h], 0fdh
        ; Exact mapped bytes E9 DA FC FF FF: jmp 0x5879cf32
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        push edx
        ; Exact mapped bytes E8 D5 3D 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x3d
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 D7 3D 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x3d
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 4B 3D 0B 00: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x3d
        __asm _emit 0x0b
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 3C 3D 0B 00: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x3d
        __asm _emit 0x0b
        __asm _emit 0x00
    }
}
