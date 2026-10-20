// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00577138 .. +0x9B5 bytes.
extern "C" __declspec(naked) void FUN_00577138_00577138() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5800c8h
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
        sub esp, 36ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 35ch], ecx
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 86 09 00 00: call 0x577aed
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 75 14: jne 0x577188
        __asm _emit 0x75
        __asm _emit 0x14
        push 87h
        push 5d0900h
        ; Exact mapped bytes E8 7D D8 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd8
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x577188
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x57716e
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes E8 99 A6 F7 FF: call 0x4f182c
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xa6
        __asm _emit 0xf7
        __asm _emit 0xff
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 08: mov cx, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        cmp ecx, 0e108h
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x57722c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 56 E3 FB FF: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xe3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 4ch], edx
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 6C: je 0x577225
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 4ch]
        cmp dword ptr [eax + 10h], 3
        ; Exact mapped bytes 75 63: jne 0x577225
        __asm _emit 0x75
        __asm _emit 0x63
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 20h
        ; Exact mapped bytes E8 DB 9D FB FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x9d
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 18h
        ; Exact mapped bytes E8 CF 9D FB FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x9d
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 1ch
        ; Exact mapped bytes E8 C3 9D FB FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x9d
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 08 21 5E 00: call dword ptr [0x5e2108]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [edx + 10h], eax
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 5ch]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 22: jne 0x577225
        __asm _emit 0x75
        __asm _emit 0x22
        push -1
        push 0
        push 0f106h
        ; Exact mapped bytes E8 B8 66 F9 FF: call 0x50d8c9
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x66
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 FB 09 00 00: call 0x577c1b
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B7 08 00 00: jmp 0x577adc
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], 1
        lea edx, [ebp - 48h]
        push edx
        mov eax, dword ptr [ebp - 35ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes FF 92 FC 00 00 00: call dword ptr [edx + 0xfc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 81 08 00 00: je 0x577acd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 5ch]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x57726c
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a1h
        push 5d0900h
        ; Exact mapped bytes E8 99 D7 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xd7
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57726c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x57724c
        __asm _emit 0x75
        __asm _emit 0xda
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 8D 9C FB FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x9c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 14h]
        and edx, 20h
        test edx, edx
        ; Exact mapped bytes 0F 84 B0 01 00 00: je 0x577442
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 0F 85 A6 01 00 00: jne 0x577442
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0f045h
        lea ecx, [ebp - 0fch]
        ; Exact mapped bytes E8 2C 66 F7 FF: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        push 0f046h
        lea ecx, [ebp - 0f8h]
        ; Exact mapped bytes E8 18 66 F7 FF: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        push 0f047h
        lea ecx, [ebp - 2fch]
        ; Exact mapped bytes E8 04 66 F7 FF: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        push 0f048h
        lea ecx, [ebp - 2f8h]
        ; Exact mapped bytes E8 F0 65 F7 FF: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x65
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        push 0
        lea ecx, [ebp - 2fch]
        ; Exact mapped bytes E8 B1 9C FB FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x9c
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        push 6
        lea ecx, [ebp - 0f8h]
        ; Exact mapped bytes E8 A3 9C FB FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x9c
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0fch]
        ; Exact mapped bytes E8 97 9C FB FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x9c
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        push 0
        lea ecx, [ebp - 2f4h]
        ; Exact mapped bytes E8 8F 8F F5 FF: call 0x4d02b0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x8f
        __asm _emit 0xf5
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 6
        lea ecx, [ebp - 2f8h]
        ; Exact mapped bytes E8 7A 9C FB FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x9c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 268h], eax
        lea ecx, [ebp - 2f4h]
        ; Exact mapped bytes E8 7A 91 F5 FF: call 0x4d04bb
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x91
        __asm _emit 0xf5
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 6B: je 0x5773b1
        __asm _emit 0x74
        __asm _emit 0x6b
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 2f4h]
        ; Exact mapped bytes E8 8B A4 F5 FF: call 0x4d17e0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xa4
        __asm _emit 0xf5
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 2f8h]
        ; Exact mapped bytes E8 E8 64 F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 2fch]
        ; Exact mapped bytes E8 D9 64 F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x64
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 0f8h]
        ; Exact mapped bytes E8 CA 64 F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x64
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0fch]
        ; Exact mapped bytes E8 BB 64 F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x64
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 AF 64 F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x64
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 6F 08 00 00: call 0x577c1b
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 2B 07 00 00: jmp 0x577adc
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 350h]
        push eax
        lea ecx, [ebp - 2f4h]
        ; Exact mapped bytes E8 33 93 F5 FF: call 0x4d06f6
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x93
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 360h], eax
        mov ecx, dword ptr [ebp - 360h]
        mov dword ptr [ebp - 364h], ecx
        mov byte ptr [ebp - 4], 7
        mov edx, dword ptr [ebp - 364h]
        push edx
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 5E 66 F7 FF: call 0x4eda46
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 6
        lea ecx, [ebp - 350h]
        ; Exact mapped bytes E8 55 64 F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x64
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 2f4h]
        ; Exact mapped bytes E8 DA A3 F5 FF: call 0x4d17e0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xa3
        __asm _emit 0xf5
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 2f8h]
        ; Exact mapped bytes E8 37 64 F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x64
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 2fch]
        ; Exact mapped bytes E8 28 64 F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x64
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 0f8h]
        ; Exact mapped bytes E8 19 64 F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x64
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0fch]
        ; Exact mapped bytes E8 0A 64 F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x64
        __asm _emit 0xf7
        __asm _emit 0xff
        lea ecx, [ebp - 0f4h]
        ; Exact mapped bytes E8 BA 9A FB FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x9a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 8
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes E8 69 A5 FC FF: call 0x5419c5
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xa5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 16: je 0x57747b
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 D6 A5 FC FF: call 0x541a43
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xa5
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0f4h]
        ; Exact mapped bytes E8 CD 65 F7 FF: call 0x4eda46
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x65
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 19: jmp 0x577494
        __asm _emit 0xeb
        __asm _emit 0x19
        lea eax, [ebp - 0f4h]
        push eax
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes E8 B5 D6 F7 FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xd6
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5D BC F7 FF: call 0x4f30f1
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xbc
        __asm _emit 0xf7
        __asm _emit 0xff
        lea ecx, [ebp - 0f4h]
        ; Exact mapped bytes E8 C1 9A FB FF: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x9a
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, 1fh
        ; Exact mapped bytes 7E 0D: jle 0x5774b1
        __asm _emit 0x7e
        __asm _emit 0x0d
        push 1fh
        lea ecx, [ebp - 0f4h]
        ; Exact mapped bytes E8 82 6C F7 FF: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x6c
        __asm _emit 0xf7
        __asm _emit 0xff
        push 14h
        push 0
        lea ecx, [ebp - 0f0h]
        push ecx
        ; Exact mapped bytes E8 AF 1E F3 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x1e
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 0f0h], 14h
        lea ecx, [ebp - 0f4h]
        ; Exact mapped bytes E8 D1 9A FB FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x9a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 20 9A FB FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x9a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 9
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 99 9A FB FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x9a
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 59: je 0x577550
        __asm _emit 0x74
        __asm _emit 0x59
        mov dword ptr [ebp - 0e8h], 0
        lea edx, [ebp - 354h]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 AE BB F5 FF: call 0x4d30be
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xbb
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 368h], eax
        mov eax, dword ptr [ebp - 368h]
        mov dword ptr [ebp - 36ch], eax
        mov byte ptr [ebp - 4], 0ah
        mov ecx, dword ptr [ebp - 36ch]
        push ecx
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 11 65 F7 FF: call 0x4eda46
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x65
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 9
        lea ecx, [ebp - 354h]
        ; Exact mapped bytes E8 08 63 F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x63
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], 0f040h
        ; Exact mapped bytes EB 39: jmp 0x577589
        __asm _emit 0xeb
        __asm _emit 0x39
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 52 9A FB FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x9a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        push 104h
        push 104h
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 88 6A F7 FF: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x6a
        __asm _emit 0xf7
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 31 9A FB FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x9a
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 00 8A F8 FF: call 0x4fff7f
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x8a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], 0f049h
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 DE 96 F8 FF: call 0x500c6f
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 75 19: jne 0x5775b4
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 BA 98 F8 FF: call 0x500e67
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x98
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], 1
        lea edx, [ebp - 48h]
        push edx
        lea eax, [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 35ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes FF 92 00 01 00 00: call dword ptr [edx + 0x100]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 75 0D: jne 0x5775e3
        __asm _emit 0x75
        __asm _emit 0x0d
        push 576e50h
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 90 2E FC FF: call 0x53a473
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x2e
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes E8 16 E0 FB FF: call 0x535600
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xe0
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 18 7E F7 FF: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x7e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 35ch]
        push eax
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 CD 06 00 00: call 0x577cd0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0ch
        lea ecx, [ebp - 0dch]
        ; Exact mapped bytes E8 F5 98 FB FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x98
        __asm _emit 0xfb
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0dh
        lea ecx, [ebp - 0f4h]
        ; Exact mapped bytes E8 89 99 FB FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        push 0c9h
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 B7 75 F7 FF: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x75
        __asm _emit 0xf7
        __asm _emit 0xff
        lea ecx, [ebp - 358h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 0B BA F5 FF: call 0x4d304c
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xba
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 370h], eax
        mov edx, dword ptr [ebp - 370h]
        mov dword ptr [ebp - 374h], edx
        mov byte ptr [ebp - 4], 0eh
        mov ecx, dword ptr [ebp - 374h]
        ; Exact mapped bytes E8 48 99 FB FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x99
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        push 0cah
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 76 75 F7 FF: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x75
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0dh
        lea ecx, [ebp - 358h]
        ; Exact mapped bytes E8 CA 61 F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x61
        __asm _emit 0xf7
        __asm _emit 0xff
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 20 99 FB FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x99
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 0d4h]
        push eax
        lea ecx, [ebp - 0dch]
        push ecx
        ; Exact mapped bytes E8 E1 45 FA FF: call 0x51bc7f
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x45
        __asm _emit 0xfa
        __asm _emit 0xff
        lea ecx, [ebp - 0dch]
        ; Exact mapped bytes E8 01 99 FB FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x99
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        push 0cbh
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 2F 75 F7 FF: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x75
        __asm _emit 0xf7
        __asm _emit 0xff
        push 5
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 68 7C F7 FF: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x7c
        __asm _emit 0xf7
        __asm _emit 0xff
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 42 4D FC FF: call 0x53c414
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x4d
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 0F 85 C8 00 00 00: jne 0x5777a4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 0f0h]
        push edx
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 BF 2C FC FF: call 0x53a3aa
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x2c
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, -1
        ; Exact mapped bytes 0F 85 B0 00 00 00: jne 0x5777a4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes E8 05 DF FB FF: call 0x535600
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xdf
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 07 7D F7 FF: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x7d
        __asm _emit 0xf7
        __asm _emit 0xff
        lea eax, [ebp - 48h]
        push eax
        lea ecx, [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp - 35ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes FF 90 08 01 00 00: call dword ptr [eax + 0x108]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 C9 B6 F7 FF: call 0x4f2df2
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xb6
        __asm _emit 0xf7
        __asm _emit 0xff
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 EC 97 F8 FF: call 0x500f1d
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x97
        __asm _emit 0xf8
        __asm _emit 0xff
        push -1
        push 0
        push 0f106h
        ; Exact mapped bytes E8 8A 61 F9 FF: call 0x50d8c9
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x61
        __asm _emit 0xf9
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0ch
        lea ecx, [ebp - 0dch]
        ; Exact mapped bytes E8 FE 60 F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x60
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0bh
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 E3 05 00 00: call 0x577d40
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 9
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 2E 98 F8 FF: call 0x500f97
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x98
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 D7 60 F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x60
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0f4h]
        ; Exact mapped bytes E8 C8 60 F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x60
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 BC 60 F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x60
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 7C 04 00 00: call 0x577c1b
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 38 03 00 00: jmp 0x577adc
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 A9 CF FB FF: call 0x534755
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 85 CF FB FF: call 0x53473c
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 48 CF FB FF: call 0x53470a
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes 73 0B: jae 0x5777d2
        __asm _emit 0x73
        __asm _emit 0x0b
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 3B CF FB FF: call 0x53470a
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 49 CF FB FF: call 0x534723
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes 76 0B: jbe 0x5777ea
        __asm _emit 0x76
        __asm _emit 0x0b
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 3C CF FB FF: call 0x534723
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 18 CF FB FF: call 0x53470a
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [ebp - 64h], eax
        ; Exact mapped bytes 73 0B: jae 0x577802
        __asm _emit 0x73
        __asm _emit 0x0b
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 0B CF FB FF: call 0x53470a
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 19 CF FB FF: call 0x534723
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [ebp - 64h], eax
        ; Exact mapped bytes 76 0B: jbe 0x57781a
        __asm _emit 0x76
        __asm _emit 0x0b
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 0C CF FB FF: call 0x534723
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 6ch]
        cmp ecx, dword ptr [ebp - 64h]
        sbb edx, edx
        and edx, 0fffffffeh
        add edx, 1
        mov dword ptr [ebp - 0d8h], edx
        cmp dword ptr [ebp - 6ch], 0ffffh
        ; Exact mapped bytes 75 0C: jne 0x577843
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 378h], 0ffffh
        ; Exact mapped bytes EB 0F: jmp 0x577852
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 6ch]
        add eax, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 378h], eax
        mov ecx, dword ptr [ebp - 378h]
        mov dword ptr [ebp - 6ch], ecx
        push 0f043h
        lea ecx, [ebp - 0dch]
        ; Exact mapped bytes E8 15 33 F8 FF: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x33
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x577883
        __asm _emit 0x75
        __asm _emit 0x14
        push 10ch
        push 5d0900h
        ; Exact mapped bytes E8 82 D1 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xd1
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x577883
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x57785b
        __asm _emit 0x75
        __asm _emit 0xd2
        mov dword ptr [ebp - 60h], 0
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 3D: je 0x5778d3
        __asm _emit 0x74
        __asm _emit 0x3d
        lea eax, [ebp - 48h]
        push eax
        lea ecx, [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp - 35ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes FF 90 E4 00 00 00: call dword ptr [eax + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 48h]
        push ecx
        lea edx, [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp - 35ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes FF 92 04 01 00 00: call dword ptr [edx + 0x104]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 4E 01 00 00: jmp 0x577a21
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 0C: jmp 0x5778e7
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 34h]
        add ecx, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 34h]
        cmp edx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes 0F 84 2E 01 00 00: je 0x577a21
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 48h]
        push eax
        lea ecx, [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp - 35ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes FF 90 E4 00 00 00: call dword ptr [eax + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 75 05: jne 0x57791a
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 07 01 00 00: jmp 0x577a21
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        lea ecx, [ebp - 0dch]
        ; Exact mapped bytes E8 81 96 FB FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x96
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 34ch]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 34ch]
        push eax
        push 0cch
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 98 72 F7 FF: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x72
        __asm _emit 0xf7
        __asm _emit 0xff
        push 0ah
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 C1 00 FC FF: call 0x537a1c
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        push 8
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 B6 00 FC FF: call 0x537a1c
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        push 0
        push 0
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 8A E6 FB FF: call 0x535ffd
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xe6
        __asm _emit 0xfb
        __asm _emit 0xff
        lea ecx, [ebp - 24h]
        push ecx
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 02 0A FC FF: call 0x538381
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x0a
        __asm _emit 0xfc
        __asm _emit 0xff
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 6A 2A FC FF: call 0x53a3f1
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x2a
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7D 0C: jge 0x577997
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 60h], 1
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x577a21
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 00 E9 5D 00 00: cmp dword ptr [0x5de900], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1C: je 0x5779bc
        __asm _emit 0x74
        __asm _emit 0x1c
        lea edx, [ebp - 48h]
        push edx
        lea eax, [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 35ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes FF 92 E4 00 00 00: call dword ptr [edx + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 75 14: jne 0x5779d6
        __asm _emit 0x75
        __asm _emit 0x14
        push 13ah
        push 5d0900h
        ; Exact mapped bytes E8 2F D0 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xd0
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5779d6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5779bc
        __asm _emit 0x75
        __asm _emit 0xe0
        lea ecx, [ebp - 48h]
        push ecx
        lea edx, [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp - 35ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes FF 92 04 01 00 00: call dword ptr [edx + 0x104]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 32 2A FC FF: call 0x53a432
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x2a
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x577a13
        __asm _emit 0x7c
        __asm _emit 0x0f
        push 0
        mov eax, dword ptr [ebp - 58h]
        push eax
        ; Exact mapped bytes E8 41 F4 FF FF: call 0x576e50
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x577a1c
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 60h], 1
        ; Exact mapped bytes EB 05: jmp 0x577a21
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 BA FE FF FF: jmp 0x5778db
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 75 18: jne 0x577a3f
        __asm _emit 0x75
        __asm _emit 0x18
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 75 0A: jne 0x577a37
        __asm _emit 0x75
        __asm _emit 0x0a
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 C6 2A FC FF: call 0x53a4fb
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x2a
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 08: jmp 0x577a3f
        __asm _emit 0xeb
        __asm _emit 0x08
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 7B 2A FC FF: call 0x53a4ba
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x2a
        __asm _emit 0xfc
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes E8 BA DB FB FF: call 0x535600
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xdb
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BC 79 F7 FF: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x79
        __asm _emit 0xf7
        __asm _emit 0xff
        lea ecx, [ebp - 48h]
        push ecx
        lea edx, [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp - 35ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes FF 92 08 01 00 00: call dword ptr [edx + 0x108]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 7E B3 F7 FF: call 0x4f2df2
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xb3
        __asm _emit 0xf7
        __asm _emit 0xff
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 A1 94 F8 FF: call 0x500f1d
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0ch
        lea ecx, [ebp - 0dch]
        ; Exact mapped bytes E8 C1 5D F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x5d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0bh
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 A6 02 00 00: call 0x577d40
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 9
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 F1 94 F8 FF: call 0x500f97
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x94
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 9A 5D F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x5d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0f4h]
        ; Exact mapped bytes E8 8B 5D F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x5d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 7F 5D F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x5d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 3F 01 00 00: call 0x577c1b
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        mov esp, ebp
        pop ebp
        ret
    }
}
