// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041DC60 .. +0x520 bytes.
extern "C" __declspec(naked) void FUN_0041dc60_0041DC60() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58b4a4h
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
        mov eax, 1bd0h
        ; Exact mapped bytes E8 1E 83 04 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 1bdch]
        mov ecx, 6f4h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 F3 37 FE FF: call 0x401497
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10f8h], 0ffffffffh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 10fch], ecx
        mov esi, esp
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 63310ch
        lea eax, [ebp - 30h]
        push eax
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 17 71 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 19h], 0
        push 839h
        mov esi, esp
        lea ecx, [ebp - 30h]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FB 70 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + eax + 1]
        push eax
        lea ecx, [ebp - 86ch]
        push ecx
        ; Exact mapped bytes E8 F7 75 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 10fch]
        mov dword ptr [ebp - 1b88h], edx
        lea eax, [ebp - 1b88h]
        push eax
        lea ecx, [ebp - 1b90h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 13ch
        ; Exact mapped bytes E8 F1 35 FE FF: call 0x401325
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], edx
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 90 33 FE FF: call 0x4010d7
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x33
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 10f8h], ecx
        push 888h
        push 0
        lea edx, [ebp - 10f4h]
        push edx
        ; Exact mapped bytes E8 5D 7B 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x7b
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 888h
        lea eax, [ebp - 10f4h]
        push eax
        mov ecx, dword ptr [ebp - 10f8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 17 35 FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        push eax
        lea ecx, [ebp - 86ch]
        push ecx
        lea edx, [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 880h]
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40c84h]
        ; Exact mapped bytes E8 F8 36 FE FF: call 0x4014ab
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 1100h], al
        mov eax, dword ptr [ebp - 1100h]
        and eax, 0ffh
        cmp eax, 1
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x41de59
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        lea ecx, [ebp - 1124h]
        ; Exact mapped bytes E8 13 3B FE FF: call 0x4018ed
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov esi, esp
        lea ecx, [ebp - 30h]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FC 6F 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x6f
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 30h]
        push edx
        lea ecx, [ebp - 1124h]
        ; Exact mapped bytes E8 03 32 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x32
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 1124h]
        ; Exact mapped bytes E8 24 3B FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1124h]
        ; Exact mapped bytes E8 03 37 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 1
        push 0
        push 80020f14h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F0 C2 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1b94h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1124h]
        ; Exact mapped bytes E8 A8 3B FE FF: call 0x4019f6
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1b94h]
        ; Exact mapped bytes E9 07 03 00 00: jmp 0x41e160
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1100h]
        and eax, 0ffh
        cmp eax, 2
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x41def9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        lea ecx, [ebp - 1148h]
        ; Exact mapped bytes E8 73 3A FE FF: call 0x4018ed
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x3a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 1
        mov esi, esp
        lea ecx, [ebp - 30h]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5C 6F 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x6f
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 30h]
        push edx
        lea ecx, [ebp - 1148h]
        ; Exact mapped bytes E8 63 31 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 1148h]
        ; Exact mapped bytes E8 84 3A FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x3a
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1148h]
        ; Exact mapped bytes E8 63 36 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 2
        push 0
        push 80020f14h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 50 C2 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1b98h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1148h]
        ; Exact mapped bytes E8 08 3B FE FF: call 0x4019f6
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1b98h]
        ; Exact mapped bytes E9 67 02 00 00: jmp 0x41e160
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1100h]
        and eax, 0ffh
        cmp eax, 4
        ; Exact mapped bytes 0F 85 51 02 00 00: jne 0x41e15e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1b38h], 0
        push 0ech
        push 0
        lea ecx, [ebp - 1b34h]
        push ecx
        ; Exact mapped bytes E8 96 79 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 86ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes E8 39 38 FE FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1b3ch], eax
        cmp dword ptr [ebp - 1b3ch], -1
        ; Exact mapped bytes 0F 84 05 02 00 00: je 0x41e15a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 900h
        push 0
        lea ecx, [ebp - 1a48h]
        push ecx
        ; Exact mapped bytes E8 58 79 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        push edx
        lea eax, [ebp - 1a48h]
        push eax
        mov ecx, dword ptr [ebp - 1b3ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40c84h]
        ; Exact mapped bytes E8 20 37 FE FF: call 0x4016ae
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 C4 01 00 00: je 0x41e15a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 900h
        mov ecx, 240h
        lea esi, [ebp - 1a48h]
        mov edi, esp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        lea ecx, [ebp - 1b34h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40c84h]
        ; Exact mapped bytes E8 F2 34 FE FF: call 0x4014b5
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        push 24h
        push 0
        lea ecx, [ebp - 1b60h]
        push ecx
        ; Exact mapped bytes E8 ED 78 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 1a44h]
        mov dword ptr [ebp - 1b60h], edx
        mov esi, esp
        lea eax, [ebp - 1994h]
        push eax
        push 63310ch
        lea ecx, [ebp - 1b50h]
        push ecx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 E9 6D 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 85 A8 E4 FF FF 06 00: mov word ptr [ebp - 0x1b58], 6
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        push edx
        lea eax, [ebp - 1b60h]
        push eax
        lea ecx, [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40c78h]
        ; Exact mapped bytes E8 B5 36 FE FF: call 0x4016e5
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 1a44h]
        push edx
        mov eax, dword ptr [ebp - 1b3ch]
        push eax
        mov ecx, dword ptr [ebp - 10f8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40c84h]
        ; Exact mapped bytes E8 5E 36 FE FF: call 0x4016b8
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10f4h], 1
        push 888h
        lea ecx, [ebp - 10f4h]
        push ecx
        mov edx, dword ptr [ebp - 10f8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 84 35 FE FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        add ecx, 0ch
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 13ch
        ; Exact mapped bytes E8 DF 38 FE FF: call 0x401979
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 1b38h], eax
        mov ecx, dword ptr [ebp - 1178h]
        mov dword ptr [ebp - 1a68h], ecx
        push 105h
        lea ecx, [ebp - 1b84h]
        ; Exact mapped bytes E8 2B 38 FE FF: call 0x4018ed
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 2
        mov esi, esp
        lea edx, [ebp - 30h]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 14 6D 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x6d
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        lea eax, [ebp - 30h]
        push eax
        lea ecx, [ebp - 1b84h]
        ; Exact mapped bytes E8 1B 2F FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0ech
        lea ecx, [ebp - 1b34h]
        push ecx
        lea ecx, [ebp - 1b84h]
        ; Exact mapped bytes E8 04 2F FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 1b84h]
        ; Exact mapped bytes E8 25 38 FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1b84h]
        ; Exact mapped bytes E8 04 34 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 1b38h]
        push edx
        push 1
        push 80020f14h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EC BF 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1b9ch], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1b84h]
        ; Exact mapped bytes E8 A4 38 FE FF: call 0x4019f6
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1b9ch]
        ; Exact mapped bytes EB 06: jmp 0x41e160
        __asm _emit 0xeb
        __asm _emit 0x06
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x41e160
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 1bdch
        cmp ebp, esp
        ; Exact mapped bytes E8 76 6C 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
