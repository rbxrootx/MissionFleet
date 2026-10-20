// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049DE9A .. +0x3DC bytes.
extern "C" __declspec(naked) void FUN_0049de9a_0049DE9A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ee78h
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
        push ecx
        sub esp, 70h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 AF E8 0A 00: call 0x54c77a
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 29 3C 09 00: call 0x531b06
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x3c
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        and eax, 4000h
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x49df00
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 14h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        and edx, 2000h
        test edx, edx
        ; Exact mapped bytes 74 1D: je 0x49df1d
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 95 E6 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xe6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes E9 86 03 00 00: jmp 0x49e2a3
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        mov dword ptr [ebp - 78h], edx
        cmp dword ptr [ebp - 78h], 11h
        ; Exact mapped bytes 0F 87 36 03 00 00: ja 0x49e268
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 78h]
        ; Exact mapped bytes FF 24 85 B6 E2 49 00: jmp dword ptr [eax*4 + 0x49e2b6]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xb6
        __asm _emit 0xe2
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BA 3B 09 00: call 0x531b06
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x3b
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 4C E6 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        ; Exact mapped bytes E9 3D 03 00 00: jmp 0x49e2a3
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov cl, byte ptr [eax + 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4E 3B 09 00: call 0x531ac3
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x3b
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 23 E6 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xe6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        ; Exact mapped bytes E9 14 03 00 00: jmp 0x49e2a3
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 67 3B 09 00: call 0x531b06
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x3b
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 F9 E5 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xe5
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E9 EA 02 00 00: jmp 0x49e2a3
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 83 3B 09 00: call 0x531b4b
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x3b
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 D0 E5 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xe5
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        ; Exact mapped bytes E9 C1 02 00 00: jmp 0x49e2a3
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9D 3B 09 00: call 0x531b8e
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x3b
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4B 3B 09 00: call 0x531b4b
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x3b
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 98 E5 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xe5
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 54h]
        ; Exact mapped bytes E9 89 02 00 00: jmp 0x49e2a3
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A8 3B 09 00: call 0x531bd1
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x3b
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 6F E5 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xe5
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        ; Exact mapped bytes E9 60 02 00 00: jmp 0x49e2a3
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [eax + 8]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BE 3B 09 00: call 0x531c14
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x3b
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 42 E5 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xe5
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E9 33 02 00 00: jmp 0x49e2a3
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [eax + 8]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 91 3B 09 00: call 0x531c14
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x3b
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 15 E5 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xe5
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60h]
        ; Exact mapped bytes E9 06 02 00 00: jmp 0x49e2a3
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 A8 24 5E 00: call dword ptr [0x5e24a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D5 3A 09 00: call 0x531b8e
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x3a
        __asm _emit 0x09
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 76 13: jbe 0x49e0d2
        __asm _emit 0x76
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0E 73 06 00: call 0x5053e0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x73
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 64h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 C3 E4 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xe4
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 64h]
        ; Exact mapped bytes E9 B4 01 00 00: jmp 0x49e2a3
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4D 3A 09 00: call 0x531b4b
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x3a
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 9A E4 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xe4
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 68h]
        ; Exact mapped bytes E9 8B 01 00 00: jmp 0x49e2a3
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 2C 21 04 00: call 0x4e0250
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x21
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        push ecx
        push 58e948h
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 7D 1D: jge 0x49e164
        __asm _emit 0x7d
        __asm _emit 0x1d
        lea ecx, [ebp - 1ch]
        push ecx
        push 58e4c0h
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 F3 E6 FF FF: call 0x49c860
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea edx, [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov dword ptr [ebp - 7ch], eax
        mov eax, dword ptr [ebp - 7ch]
        push eax
        ; Exact mapped bytes E8 D3 E6 FF FF: call 0x49c860
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F5 39 09 00: call 0x531b8e
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x39
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 55 CC: mov dx, word ptr [ebp - 0x34]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xcc
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 60 39 09 00: call 0x531b06
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x39
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 45 CE: mov ax, word ptr [ebp - 0x32]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xce
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 53 39 09 00: call 0x531b06
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x39
        __asm _emit 0x09
        __asm _emit 0x00
        push 8
        lea ecx, [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1F 72 06 00: call 0x5053e0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x72
        __asm _emit 0x06
        __asm _emit 0x00
        push 1
        lea edx, [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov dword ptr [ebp - 80h], eax
        mov eax, dword ptr [ebp - 80h]
        push eax
        ; Exact mapped bytes E8 81 E6 FF FF: call 0x49c860
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 40: jmp 0x49e221
        __asm _emit 0xeb
        __asm _emit 0x40
        push 584850h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 A2 CE 05 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xce
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x49e206
        __asm _emit 0x75
        __asm _emit 0x14
        push 2f6h
        push 5cbe8ch
        ; Exact mapped bytes E8 FF 67 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x67
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x49e206
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x49e1e1
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        push 0
        push 0
        ; Exact mapped bytes E8 FF 20 01 00: call 0x4b0320
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 6ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 61 E3 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xe3
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 6ch]
        ; Exact mapped bytes EB 55: jmp 0x49e2a3
        __asm _emit 0xeb
        __asm _emit 0x55
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 70h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 47 E3 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xe3
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 70h]
        ; Exact mapped bytes EB 3B: jmp 0x49e2a3
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x49e285
        __asm _emit 0x74
        __asm _emit 0x14
        push 306h
    }
}
