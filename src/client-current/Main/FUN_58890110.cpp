// Complete Ghidra body ranges for the selected function.
// 18 discontiguous segments; total 12987 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58890110 .. +0x5D2 bytes.
extern "C" __declspec(naked) void FUN_58890110_segment_00() {
    __asm {
        ; Exact mapped bytes B8 5C 22 00 00: mov eax, 0x225c
        __asm _emit 0xb8
        __asm _emit 0x5c
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 46 CD 0E 00: call 0x5897ce60
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xcd
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 33 C4: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xc4
        ; Exact mapped bytes 89 84 24 58 22 00 00: mov dword ptr [esp + 0x2258], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B E9: mov ebp, ecx
        __asm _emit 0x8b
        __asm _emit 0xe9
        ; Exact mapped bytes 66 8B 45 24: mov ax, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x24
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B B4 24 6C 22 00 00: mov esi, dword ptr [esp + 0x226c]
        __asm _emit 0x8b
        __asm _emit 0xb4
        __asm _emit 0x24
        __asm _emit 0x6c
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes A8 02: test al, 2
        __asm _emit 0xa8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 94 32 00 00: je 0x588933d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 3C: mov eax, dword ptr [ebp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x3c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 25: je 0x5889016d
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 8B 40 34: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x34
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 17: je 0x58890166
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 42 10: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 4D 3C: mov ecx, dword ptr [ebp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x3c
        ; Exact mapped bytes 3B 41 34: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3b
        __asm _emit 0x41
        __asm _emit 0x34
        ; Exact mapped bytes 74 0B: je 0x5889016d
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 EA: jne 0x58890150
        __asm _emit 0x75
        __asm _emit 0xea
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 6B 32 00 00: jmp 0x588933d8
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 3D 00 02 00 00: cmp eax, 0x200
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 87 6F 2D 00 00: ja 0x58892eea
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 6E 2B 00 00: je 0x58892cef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2D 00 01 00 00: sub eax, 0x100
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 53 2B 00 00: je 0x58892cdf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 02: sub eax, 2
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 40 32 00 00: jne 0x588933d5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D A8 45 A2 58: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 44 F7 FF: call 0x588045b0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x44
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 83 BD 0C 01 00 00 00: cmp dword ptr [ebp + 0x10c], 0
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 21: je 0x588901ca
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 84 47 A2 58: mov ecx, dword ptr [0x58a24784]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 D5 77 07 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x77
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 84 47 A2 58: mov ecx, dword ptr [0x58a24784]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 80 7E 08 0D: cmp byte ptr [esi + 8], 0xd
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x08
        __asm _emit 0x0d
        ; Exact mapped bytes 0F 85 04 2B 00 00: jne 0x58892cd8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BD 0C 01 00 00 00: cmp dword ptr [ebp + 0x10c], 0
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1E: jne 0x588901fb
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 8D 50 01 00 00: mov ecx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 36 14 EA FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x14
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes C7 85 0C 01 00 00 02 00 00 00: mov dword ptr [ebp + 0x10c], 2
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 DD 31 00 00: jmp 0x588933d8
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 B4 00 00 00: mov eax, dword ptr [ebp + 0xb4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 3D 00 00 10 00: cmp eax, 0x100000
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 0F 94 C1: sete cl
        __asm _emit 0x0f
        __asm _emit 0x94
        __asm _emit 0xc1
        ; Exact mapped bytes 89 4C 24 20: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 3D 00 00 02 00: cmp eax, 0x20000
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 BB 31 00 00: jne 0x588933d5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbb
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 95 50 01 00 00: mov edx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 80 00 00 00: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 38 2F: cmp byte ptr [eax], 0x2f
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 68 27 00 00: jne 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 8D 71 01: lea esi, [ecx + 1]
        __asm _emit 0x8d
        __asm _emit 0x71
        __asm _emit 0x01
        ; Exact mapped bytes 8A 11: mov dl, byte ptr [ecx]
        __asm _emit 0x8a
        __asm _emit 0x11
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 75 F9: jne 0x58890234
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 2B CE: sub ecx, esi
        __asm _emit 0x2b
        __asm _emit 0xce
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes B9 01 00 00 00: mov ecx, 1
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B F1: cmp esi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 7E 2E: jle 0x58890276
        __asm _emit 0x7e
        __asm _emit 0x2e
        ; Exact mapped bytes 8A 14 08: mov dl, byte ptr [eax + ecx]
        __asm _emit 0x8a
        __asm _emit 0x14
        __asm _emit 0x08
        ; Exact mapped bytes 80 FA 41: cmp dl, 0x41
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x41
        ; Exact mapped bytes 7C 09: jl 0x58890259
        __asm _emit 0x7c
        __asm _emit 0x09
        ; Exact mapped bytes 80 FA 5A: cmp dl, 0x5a
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x5a
        ; Exact mapped bytes 7F 04: jg 0x58890259
        __asm _emit 0x7f
        __asm _emit 0x04
        ; Exact mapped bytes 80 04 08 20: add byte ptr [eax + ecx], 0x20
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x20
        ; Exact mapped bytes 8B 85 50 01 00 00: mov eax, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 80 00 00 00: mov eax, dword ptr [eax + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 14 08: mov dl, byte ptr [eax + ecx]
        __asm _emit 0x8a
        __asm _emit 0x14
        __asm _emit 0x08
        ; Exact mapped bytes 80 FA 20: cmp dl, 0x20
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x20
        ; Exact mapped bytes 74 09: je 0x58890276
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 74 05: je 0x58890276
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 3B CE: cmp ecx, esi
        __asm _emit 0x3b
        __asm _emit 0xce
        ; Exact mapped bytes 7C D2: jl 0x58890248
        __asm _emit 0x7c
        __asm _emit 0xd2
        ; Exact mapped bytes 8B BD 50 01 00 00: mov edi, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0xbd
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B B7 80 00 00 00: mov esi, dword ptr [edi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0xb7
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 16: mov dl, byte ptr [esi]
        __asm _emit 0x8a
        __asm _emit 0x16
        ; Exact mapped bytes B3 68: mov bl, 0x68
        __asm _emit 0xb3
        __asm _emit 0x68
        ; Exact mapped bytes B0 77: mov al, 0x77
        __asm _emit 0xb0
        __asm _emit 0x77
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 75 0B: jne 0x58890298
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 38 46 01: cmp byte ptr [esi + 1], al
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0x01
        ; Exact mapped bytes 75 06: jne 0x58890298
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 80 7E 02 20: cmp byte ptr [esi + 2], 0x20
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x20
        ; Exact mapped bytes 74 58: je 0x588902f0
        __asm _emit 0x74
        __asm _emit 0x58
        ; Exact mapped bytes B1 70: mov cl, 0x70
        __asm _emit 0xb1
        __asm _emit 0x70
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 04 0D 00 00: jne 0x58890fa7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 38 46 01: cmp byte ptr [esi + 1], al
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 3E 04 00 00: jne 0x588906ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 38 5E 02: cmp byte ptr [esi + 2], bl
        __asm _emit 0x38
        __asm _emit 0x5e
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 35 04 00 00: jne 0x588906ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 03 69: cmp byte ptr [esi + 3], 0x69
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x69
        ; Exact mapped bytes 0F 85 2B 04 00 00: jne 0x588906ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 04 73: cmp byte ptr [esi + 4], 0x73
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x73
        ; Exact mapped bytes 0F 85 21 04 00 00: jne 0x588906ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 38 4E 05: cmp byte ptr [esi + 5], cl
        __asm _emit 0x38
        __asm _emit 0x4e
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 18 04 00 00: jne 0x588906ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 06 65: cmp byte ptr [esi + 6], 0x65
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x06
        __asm _emit 0x65
        ; Exact mapped bytes 0F 85 0E 04 00 00: jne 0x588906ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 07 72: cmp byte ptr [esi + 7], 0x72
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x07
        __asm _emit 0x72
        ; Exact mapped bytes 0F 85 04 04 00 00: jne 0x588906ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 08 20: cmp byte ptr [esi + 8], 0x20
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x08
        __asm _emit 0x20
        ; Exact mapped bytes 0F 85 FA 03 00 00: jne 0x588906ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 04 00 00: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8C 24 6C 02 00 00: lea ecx, [esp + 0x26c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 44 C9 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xc9
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 97 80 00 00 00: mov edx, dword ptr [edi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 24 74 02 00 00: lea eax, [esp + 0x274]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes BE 00 04 00 00: mov esi, 0x400
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B D1: sub edx, ecx
        __asm _emit 0x2b
        __asm _emit 0xd1
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E FE FB FF 7F: lea ecx, [esi + 0x7ffffbfe]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5889033b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0C 02: mov cl, byte ptr [edx + eax]
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x02
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0A: je 0x5889033b
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x58890320
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5889033f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x58890340
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 24 68 02 00 00: lea eax, [esp + 0x268]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 50 01: lea edx, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8A 08: mov cl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 75 F9: jne 0x58890350
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 85 50 01 00 00: mov eax, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 FC 05 00 00 FF FF FF FF: mov dword ptr [ebp + 0x5fc], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 88 80 00 00 00: mov ecx, dword ptr [eax + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 38 59 02: cmp byte ptr [ecx + 2], bl
        __asm _emit 0x38
        __asm _emit 0x59
        __asm _emit 0x02
        ; Exact mapped bytes 0F 95 C2: setne dl
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc2
        ; Exact mapped bytes 4A: dec edx
        __asm _emit 0x4a
        ; Exact mapped bytes 83 E2 06: and edx, 6
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x06
        ; Exact mapped bytes 83 C2 03: add edx, 3
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x03
        ; Exact mapped bytes 8B DA: mov ebx, edx
        __asm _emit 0x8b
        __asm _emit 0xda
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 00 26 00 00: je 0x5889298c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 8E F1 25 00 00: jle 0x5889298c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf1
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 50 01 00 00: mov eax, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 80 00 00 00: mov eax, dword ptr [eax + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7C 18 FF 20: cmp byte ptr [eax + ebx - 1], 0x20
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0x20
        ; Exact mapped bytes 0F 85 DA 25 00 00: jne 0x5889298c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 30: push 0x30
        __asm _emit 0x6a
        __asm _emit 0x30
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4C 24 2C: lea ecx, [esp + 0x2c]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 89 84 24 B0 01 00 00: mov dword ptr [esp + 0x1b0], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 B4 01 00 00: mov dword ptr [esp + 0x1b4], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 B8 01 00 00: mov dword ptr [esp + 0x1b8], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 BC 01 00 00: mov dword ptr [esp + 0x1bc], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 C0 01 00 00: mov dword ptr [esp + 0x1c0], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 C4 01 00 00: mov dword ptr [esp + 0x1c4], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 5D C8 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc8
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8A 84 1C 74 02 00 00: mov al, byte ptr [esp + ebx + 0x274]
        __asm _emit 0x8a
        __asm _emit 0x84
        __asm _emit 0x1c
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 3C 20: cmp al, 0x20
        __asm _emit 0x3c
        __asm _emit 0x20
        ; Exact mapped bytes 74 28: je 0x58890421
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 74 1D: je 0x58890421
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 88 84 34 A4 01 00 00: mov byte ptr [esp + esi + 0x1a4], al
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 83 FE 0E: cmp esi, 0xe
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x0e
        ; Exact mapped bytes 0F 8F 76 25 00 00: jg 0x5889298c
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x76
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 84 1C 68 02 00 00: mov al, byte ptr [esp + ebx + 0x268]
        __asm _emit 0x8a
        __asm _emit 0x84
        __asm _emit 0x1c
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3C 20: cmp al, 0x20
        __asm _emit 0x3c
        __asm _emit 0x20
        ; Exact mapped bytes 75 DF: jne 0x58890400
        __asm _emit 0x75
        __asm _emit 0xdf
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 83 FE 0E: cmp esi, 0xe
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x0e
        ; Exact mapped bytes 0F 8D 60 25 00 00: jge 0x5889298c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x60
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B FB: sub edi, ebx
        __asm _emit 0x2b
        __asm _emit 0xfb
        ; Exact mapped bytes 89 7C 24 10: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 79 08: jns 0x5889043c
        __asm _emit 0x79
        __asm _emit 0x08
        ; Exact mapped bytes C7 44 24 10 00 00 00 00: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 74 24 10: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 83 C6 31: add esi, 0x31
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x31
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 89 74 24 14: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 E1 10 0E 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 7C 24 24: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes E8 EC C7 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xc7
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 50 B4 A0 58: mov edx, dword ptr [0x58a0b450]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 58 B4 A0 58: mov ecx, dword ptr [0x58a0b458]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes A1 54 B4 A0 58: mov eax, dword ptr [0x58a0b454]
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 54 24 34: mov dword ptr [esp + 0x34], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 8B 15 5C B4 A0 58: mov edx, dword ptr [0x58a0b45c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 4C 24 3C: mov dword ptr [esp + 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 64 B4 A0 58: mov ecx, dword ptr [0x58a0b464]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 44 24 38: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes A1 60 B4 A0 58: mov eax, dword ptr [0x58a0b460]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 54 24 40: mov dword ptr [esp + 0x40], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 8B 94 24 B4 01 00 00: mov edx, dword ptr [esp + 0x1b4]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4C 24 48: mov dword ptr [esp + 0x48], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 8B 8C 24 BC 01 00 00: mov ecx, dword ptr [esp + 0x1bc]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 44: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 8B 84 24 B8 01 00 00: mov eax, dword ptr [esp + 0x1b8]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 54 24 4C: mov dword ptr [esp + 0x4c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 94 24 C0 01 00 00: mov edx, dword ptr [esp + 0x1c0]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4C 24 54: mov dword ptr [esp + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x54
        ; Exact mapped bytes 8B 8C 24 C8 01 00 00: mov ecx, dword ptr [esp + 0x1c8]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 50: mov dword ptr [esp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes 8B 84 24 C4 01 00 00: mov eax, dword ptr [esp + 0x1c4]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 54 24 58: mov dword ptr [esp + 0x58], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 8B 54 24 20: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 89 4C 24 60: mov dword ptr [esp + 0x60], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x60
        ; Exact mapped bytes 89 44 24 5C: mov dword ptr [esp + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes B9 0C 00 00 00: mov ecx, 0xc
        __asm _emit 0xb9
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 74 24 34: lea esi, [esp + 0x34]
        __asm _emit 0x8d
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 8B 4C 24 24: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 83 C2 D0: add edx, -0x30
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0xd0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 84 1C 7C 02 00 00: lea eax, [esp + ebx + 0x27c]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x1c
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 83 C1 30: add ecx, 0x30
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x30
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 4C C8 0E 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xc8
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9D 7C 05 00 00: lea ebx, [ebp + 0x57c]
        __asm _emit 0x8d
        __asm _emit 0x9d
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 1C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x1c
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 8B FB: mov edi, ebx
        __asm _emit 0x8b
        __asm _emit 0xfb
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 3C: lea edx, [esp + 0x3c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF 15 A4 C1 98 58: call dword ptr [0x5898c1a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 76: je 0x58890596
        __asm _emit 0x74
        __asm _emit 0x76
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes 83 C7 18: add edi, 0x18
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x18
        ; Exact mapped bytes 83 FE 04: cmp esi, 4
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x04
        ; Exact mapped bytes 7C E7: jl 0x58890510
        __asm _emit 0x7c
        __asm _emit 0xe7
        ; Exact mapped bytes B9 03 00 00 00: mov ecx, 3
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 DC 05 00 00: lea eax, [ebp + 0x5dc]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 50 E8: mov edx, dword ptr [eax - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0xe8
        ; Exact mapped bytes 89 10: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        ; Exact mapped bytes 8B 50 EC: mov edx, dword ptr [eax - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0xec
        ; Exact mapped bytes 89 50 04: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 F0: mov edx, dword ptr [eax - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0xf0
        ; Exact mapped bytes 89 50 08: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B 50 F4: mov edx, dword ptr [eax - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0xf4
        ; Exact mapped bytes 89 50 0C: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 F8: mov edx, dword ptr [eax - 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0xf8
        ; Exact mapped bytes 89 50 10: mov dword ptr [eax + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 8B 50 FC: mov edx, dword ptr [eax - 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0xfc
        ; Exact mapped bytes 89 50 14: mov dword ptr [eax + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 83 E8 18: sub eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x18
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7D D5: jge 0x58890534
        __asm _emit 0x7d
        __asm _emit 0xd5
        ; Exact mapped bytes 8D 74 24 3C: lea esi, [esp + 0x3c]
        __asm _emit 0x8d
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes BA 18 00 00 00: mov edx, 0x18
        __asm _emit 0xba
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C3: mov eax, ebx
        __asm _emit 0x8b
        __asm _emit 0xc3
        ; Exact mapped bytes 2B F3: sub esi, ebx
        __asm _emit 0x2b
        __asm _emit 0xf3
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8A E6 FF FF 7F: lea ecx, [edx + 0x7fffffe6]
        __asm _emit 0x8d
        __asm _emit 0x8a
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 F4 00 00 00: je 0x58890672
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 0C 06: mov cl, byte ptr [esi + eax]
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x06
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 E9 00 00 00: je 0x58890672
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 DF: jne 0x58890570
        __asm _emit 0x75
        __asm _emit 0xdf
        ; Exact mapped bytes E9 E0 00 00 00: jmp 0x58890676
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 84 24 BC 01 00 00: mov dword ptr [esp + 0x1bc], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 C0 01 00 00: mov dword ptr [esp + 0x1c0], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 C4 01 00 00: mov dword ptr [esp + 0x1c4], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 C8 01 00 00: mov dword ptr [esp + 0x1c8], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 CC 01 00 00: mov dword ptr [esp + 0x1cc], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 D0 01 00 00: mov dword ptr [esp + 0x1d0], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 78 18: lea edi, [eax + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0x18
        ; Exact mapped bytes 8D 84 24 BC 01 00 00: lea eax, [esp + 0x1bc]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D3: mov edx, ebx
        __asm _emit 0x8b
        __asm _emit 0xd3
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 2B D1: sub edx, ecx
        __asm _emit 0x2b
        __asm _emit 0xd1
        ; Exact mapped bytes 8D 8F E6 FF FF 7F: lea ecx, [edi + 0x7fffffe6]
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x588905ed
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0C 02: mov cl, byte ptr [edx + eax]
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x02
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0A: je 0x588905ed
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 EF 01: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x588905d2
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x588905f1
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 01: jne 0x588905f2
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 8D 14 76: lea edx, [esi + esi*2]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x76
        ; Exact mapped bytes 8D 94 D5 7C 05 00 00: lea edx, [ebp + edx*8 + 0x57c]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0xd5
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F2: mov esi, edx
        __asm _emit 0x8b
        __asm _emit 0xf2
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF 18 00 00 00: mov edi, 0x18
        __asm _emit 0xbf
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C3: mov eax, ebx
        __asm _emit 0x8b
        __asm _emit 0xc3
        ; Exact mapped bytes 2B F3: sub esi, ebx
        __asm _emit 0x2b
        __asm _emit 0xf3
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8F E6 FF FF 7F: lea ecx, [edi + 0x7fffffe6]
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5889062b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0C 06: mov cl, byte ptr [esi + eax]
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x06
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0A: je 0x5889062b
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 EF 01: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x58890610
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5889062f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 01: jne 0x58890630
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 8D B4 24 BC 01 00 00: lea esi, [esp + 0x1bc]
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0x24
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF 18 00 00 00: mov edi, 0x18
        __asm _emit 0xbf
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 2B F2: sub esi, edx
        __asm _emit 0x2b
        __asm _emit 0xf2
        ; Exact mapped bytes 8D 97 E6 FF FF 7F: lea edx, [edi + 0x7fffffe6]
        __asm _emit 0x8d
        __asm _emit 0x97
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 18: je 0x58890665
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 8A 0C 06: mov cl, byte ptr [esi + eax]
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x06
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x58890665
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 EF 01: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x58890643
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 FA FE FF FF: jmp 0x5889055f
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 01: jne 0x5889066a
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 ED FE FF FF: jmp 0x5889055f
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 01: jne 0x58890677
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 8B 54 24 10: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 74 24 14: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes BF 01 00 00 00: mov edi, 1
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 78 7A F2 FF: call 0x587b8110
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x7a
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 50 01 00 00: mov ecx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9D F2 EC FF: call 0x5875f940
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xf2
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 54 01 00 00: mov ecx, dword ptr [ebp + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 24 A4 01 00 00: lea eax, [esp + 0x1a4]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 CA 03 EE FF: call 0x58770a80
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x03
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD B8 00 00 00: mov dword ptr [ebp + 0xb8], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD BC 00 00 00: mov dword ptr [ebp + 0xbc], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 B0 55 F5 FF: call 0x587e5c80
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x55
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 84 75 F5 FF: call 0x587e7c60
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 60 C5 0E 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xc5
        __asm _emit 0x0e
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588906E2 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_58890110_segment_01() {
    __asm {
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes E9 AD 22 00 00: jmp 0x58892997
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588906EA .. +0x248 bytes.
extern "C" __declspec(naked) void FUN_58890110_segment_02() {
    __asm {
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 B4 08 00 00: jne 0x58890fa7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 01 72: cmp byte ptr [esi + 1], 0x72
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x72
        ; Exact mapped bytes 75 06: jne 0x588906ff
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 80 7E 02 20: cmp byte ptr [esi + 2], 0x20
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x20
        ; Exact mapped bytes 74 44: je 0x58890743
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 9F 08 00 00: jne 0x58890fa7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 01 72: cmp byte ptr [esi + 1], 0x72
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x72
        ; Exact mapped bytes 0F 85 28 02 00 00: jne 0x5889093a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 02 65: cmp byte ptr [esi + 2], 0x65
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x65
        ; Exact mapped bytes 0F 85 1E 02 00 00: jne 0x5889093a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 38 4E 03: cmp byte ptr [esi + 3], cl
        __asm _emit 0x38
        __asm _emit 0x4e
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 15 02 00 00: jne 0x5889093a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 04 6C: cmp byte ptr [esi + 4], 0x6c
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x6c
        ; Exact mapped bytes 0F 85 0B 02 00 00: jne 0x5889093a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 05 79: cmp byte ptr [esi + 5], 0x79
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x05
        __asm _emit 0x79
        ; Exact mapped bytes 0F 85 01 02 00 00: jne 0x5889093a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 06 20: cmp byte ptr [esi + 6], 0x20
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x06
        __asm _emit 0x20
        ; Exact mapped bytes 0F 85 F7 01 00 00: jne 0x5889093a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 FC 05 00 00 FF FF FF FF: mov dword ptr [ebp + 0x5fc], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8F 80 00 00 00: mov ecx, dword ptr [edi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 80 79 02 65: cmp byte ptr [ecx + 2], 0x65
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x65
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 94 C2: sete dl
        __asm _emit 0x0f
        __asm _emit 0x94
        __asm _emit 0xc2
        ; Exact mapped bytes 8D 58 01: lea ebx, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 8D 14 95 03 00 00 00: lea edx, [edx*4 + 3]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F2: mov esi, edx
        __asm _emit 0x8b
        __asm _emit 0xf2
        ; Exact mapped bytes 89 74 24 14: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 8A 10: mov dl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x10
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 75 F9: jne 0x58890770
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 3B C6: cmp eax, esi
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 86 0B 22 00 00: jbe 0x5889298c
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x0b
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7C 31 FF 20: cmp byte ptr [ecx + esi - 1], 0x20
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0x20
        ; Exact mapped bytes 0F 85 00 22 00 00: jne 0x5889298c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 30: push 0x30
        __asm _emit 0x6a
        __asm _emit 0x30
        ; Exact mapped bytes 8D 84 24 88 00 00 00: lea eax, [esp + 0x88]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 AB C4 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xc4
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8D 04 05 00 00: lea ecx, [ebp + 0x504]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 13: je 0x588907bd
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 83 BD F4 05 00 00 00: cmp dword ptr [ebp + 0x5f4], 0
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0xf4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7D 0A: jge 0x588907bd
        __asm _emit 0x7d
        __asm _emit 0x0a
        ; Exact mapped bytes C7 85 F4 05 00 00 00 00 00 00: mov dword ptr [ebp + 0x5f4], 0
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 54 B4 A0 58: mov eax, dword ptr [0x58a0b454]
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 50 B4 A0 58: mov edx, dword ptr [0x58a0b450]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 58 B4 A0 58: mov ecx, dword ptr [0x58a0b458]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 84 24 88 00 00 00: mov dword ptr [esp + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 60 B4 A0 58: mov eax, dword ptr [0x58a0b460]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 94 24 84 00 00 00: mov dword ptr [esp + 0x84], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 5C B4 A0 58: mov edx, dword ptr [0x58a0b45c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 84 24 94 00 00 00: mov dword ptr [esp + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 F4 05 00 00: mov eax, dword ptr [ebp + 0x5f4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8C 24 8C 00 00 00: mov dword ptr [esp + 0x8c], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 64 B4 A0 58: mov ecx, dword ptr [0x58a0b464]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 94 24 90 00 00 00: mov dword ptr [esp + 0x90], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 14 40: lea edx, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x40
        ; Exact mapped bytes 8D 84 D5 04 05 00 00: lea eax, [ebp + edx*8 + 0x504]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 8C 24 98 00 00 00: mov dword ptr [esp + 0x98], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 89 8C 24 9C 00 00 00: mov dword ptr [esp + 0x9c], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 89 94 24 A0 00 00 00: mov dword ptr [esp + 0xa0], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 50 0C: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 89 8C 24 A4 00 00 00: mov dword ptr [esp + 0xa4], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 10: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x10
        ; Exact mapped bytes 89 94 24 A8 00 00 00: mov dword ptr [esp + 0xa8], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 8B 85 50 01 00 00: mov eax, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 80 00 00 00: mov eax, dword ptr [eax + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8C 24 AC 00 00 00: mov dword ptr [esp + 0xac], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 94 24 B0 00 00 00: mov dword ptr [esp + 0xb0], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 48 01: lea ecx, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0x01
        ; Exact mapped bytes 8A 10: mov dl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x10
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 75 F9: jne 0x58890863
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 2B 44 24 14: sub eax, dword ptr [esp + 0x14]
        __asm _emit 0x2b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 31: add eax, 0x31
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x31
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 89 74 24 1C: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes E8 AF 0C 0E 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x0c
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 BE C3 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xc3
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes B9 0C 00 00 00: mov ecx, 0xc
        __asm _emit 0xb9
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D B4 24 94 00 00 00: lea esi, [esp + 0x94]
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B FB: mov edi, ebx
        __asm _emit 0x8b
        __asm _emit 0xfb
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 8B 8D 50 01 00 00: mov ecx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 74 24 28: mov esi, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 8B 91 80 00 00 00: mov edx, dword ptr [ecx + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 54 24 24: add edx, dword ptr [esp + 0x24]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8D 46 D0: lea eax, [esi - 0x30]
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0xd0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 43 30: lea eax, [ebx + 0x30]
        __asm _emit 0x8d
        __asm _emit 0x43
        __asm _emit 0x30
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 90 C4 0E 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 1C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x1c
        ; Exact mapped bytes BF 01 00 00 00: mov edi, 1
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 3B 78 F2 FF: call 0x587b8110
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x78
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD B8 00 00 00: mov dword ptr [ebp + 0xb8], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD BC 00 00 00: mov dword ptr [ebp + 0xbc], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 91 53 F5 FF: call 0x587e5c80
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x53
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 65 73 F5 FF: call 0x587e7c60
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x73
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 50 01 00 00: mov ecx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 3A F0 EC FF: call 0x5875f940
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xf0
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 F4 05 00 00: mov eax, dword ptr [ebp + 0x5f4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 0C 40: lea ecx, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x40
        ; Exact mapped bytes 8D 94 CD 04 05 00 00: lea edx, [ebp + ecx*8 + 0x504]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0xcd
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 54 01 00 00: mov ecx, dword ptr [ebp + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 5E 01 EE FF: call 0x58770a80
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes C7 85 F4 05 00 00 FF FF FF FF: mov dword ptr [ebp + 0x5f4], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 10 C3 0E 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xc3
        __asm _emit 0x0e
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58890932 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_58890110_segment_03() {
    __asm {
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes E9 5D 20 00 00: jmp 0x58892997
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5889093A .. +0x1E5 bytes.
extern "C" __declspec(naked) void FUN_58890110_segment_04() {
    __asm {
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 64 06 00 00: jne 0x58890fa7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 01 61: cmp byte ptr [esi + 1], 0x61
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x61
        ; Exact mapped bytes 75 0B: jne 0x58890954
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8A 46 02: mov al, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x02
        ; Exact mapped bytes 3C 20: cmp al, 0x20
        __asm _emit 0x3c
        __asm _emit 0x20
        ; Exact mapped bytes 74 3B: je 0x5889098b
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 74 37: je 0x5889098b
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 4A 06 00 00: jne 0x58890fa7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 01 61: cmp byte ptr [esi + 1], 0x61
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x61
        ; Exact mapped bytes 0F 85 20 02 00 00: jne 0x58890b87
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 46 02: mov al, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x02
        ; Exact mapped bytes 3C 6C: cmp al, 0x6c
        __asm _emit 0x3c
        __asm _emit 0x6c
        ; Exact mapped bytes 0F 85 15 02 00 00: jne 0x58890b87
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 38 46 03: cmp byte ptr [esi + 3], al
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 0C 02 00 00: jne 0x58890b87
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 4E 04: mov cl, byte ptr [esi + 4]
        __asm _emit 0x8a
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 80 F9 20: cmp cl, 0x20
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x20
        ; Exact mapped bytes 74 08: je 0x5889098b
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 85 FC 01 00 00: jne 0x58890b87
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 80 45 A2 58: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 9C 45 A2 58: cmp ecx, dword ptr [0x58a2459c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 27: je 0x588909c0
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 3B 0D A8 45 A2 58: cmp ecx, dword ptr [0x58a245a8]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 1F: je 0x588909c0
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 58 FC 99 58: push 0x5899fc58
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0xfc
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E9 C7 1F 00 00: jmp 0x58892987
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 3C 6C: cmp al, 0x6c
        __asm _emit 0x3c
        __asm _emit 0x6c
        ; Exact mapped bytes 0F 94 C1: sete cl
        __asm _emit 0x0f
        __asm _emit 0x94
        __asm _emit 0xc1
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 8D 58 01: lea ebx, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 8D 4C 09 03: lea ecx, [ecx + ecx + 3]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x03
        ; Exact mapped bytes 89 4C 24 14: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8A 10: mov dl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x10
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 75 F9: jne 0x588909d4
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 86 42 01 00 00: jbe 0x58890b27
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7C 0E FF 20: cmp byte ptr [esi + ecx - 1], 0x20
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0x20
        ; Exact mapped bytes 0F 85 37 01 00 00: jne 0x58890b27
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 30: push 0x30
        __asm _emit 0x6a
        __asm _emit 0x30
        ; Exact mapped bytes 8D 84 24 48 01 00 00: lea eax, [esp + 0x148]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 47 C2 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xc2
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes A1 58 B4 A0 58: mov eax, dword ptr [0x58a0b458]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 50 B4 A0 58: mov ecx, dword ptr [0x58a0b450]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 54 B4 A0 58: mov edx, dword ptr [0x58a0b454]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 84 24 58 01 00 00: mov dword ptr [esp + 0x158], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 64 B4 A0 58: mov eax, dword ptr [0x58a0b464]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 8C 24 50 01 00 00: mov dword ptr [esp + 0x150], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 5C B4 A0 58: mov ecx, dword ptr [0x58a0b45c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 94 24 54 01 00 00: mov dword ptr [esp + 0x154], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 60 B4 A0 58: mov edx, dword ptr [0x58a0b460]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 84 24 64 01 00 00: mov dword ptr [esp + 0x164], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 89 8C 24 50 01 00 00: mov dword ptr [esp + 0x150], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 94 24 54 01 00 00: mov dword ptr [esp + 0x154], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 46 01: lea eax, [esi + 1]
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x01
        ; Exact mapped bytes 8A 0E: mov cl, byte ptr [esi]
        __asm _emit 0x8a
        __asm _emit 0x0e
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 75 F9: jne 0x58890a53
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 2B F0: sub esi, eax
        __asm _emit 0x2b
        __asm _emit 0xf0
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 2B 44 24 14: sub eax, dword ptr [esp + 0x14]
        __asm _emit 0x2b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 31: add eax, 0x31
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x31
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 89 74 24 1C: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes E8 BD 0A 0E 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x0a
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 CC C1 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xc1
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes B9 0C 00 00 00: mov ecx, 0xc
        __asm _emit 0xb9
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D B4 24 54 01 00 00: lea esi, [esp + 0x154]
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0x24
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B FB: mov edi, ebx
        __asm _emit 0x8b
        __asm _emit 0xfb
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 8B 95 50 01 00 00: mov edx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 74 24 28: mov esi, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 8B 82 80 00 00 00: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 44 24 24: add eax, dword ptr [esp + 0x24]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8D 4E D0: lea ecx, [esi - 0x30]
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0xd0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4B 30: lea ecx, [ebx + 0x30]
        __asm _emit 0x8d
        __asm _emit 0x4b
        __asm _emit 0x30
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 9E C2 0E 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xc2
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 1C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x1c
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes E8 4C 76 F2 FF: call 0x587b8110
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x76
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes C7 85 B8 00 00 00 02 00 00 00: mov dword ptr [ebp + 0xb8], 2
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 BC 00 00 00 01 00 00 00: mov dword ptr [ebp + 0xbc], 1
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 7B 71 F5 FF: call 0x587e7c60
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x71
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 68 74 A2 99 58: push 0x5899a274
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0xa2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8D 54 01 00 00: mov ecx, dword ptr [ebp + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 81 FF ED FF: call 0x58770a80
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 51 F5 FF: call 0x587e5c80
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x51
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 50 01 00 00: mov ecx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 27 EE EC FF: call 0x5875f940
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xee
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 23 C1 0E 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xc1
        __asm _emit 0x0e
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58890B1F .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_58890110_segment_05() {
    __asm {
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes E9 70 1E 00 00: jmp 0x58892997
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58890B27 .. +0x593 bytes.
extern "C" __declspec(naked) void FUN_58890110_segment_06() {
    __asm {
        ; Exact mapped bytes 8A 4C 0E FF: mov cl, byte ptr [esi + ecx - 1]
        __asm _emit 0x8a
        __asm _emit 0x4c
        __asm _emit 0x0e
        __asm _emit 0xff
        ; Exact mapped bytes 80 F9 20: cmp cl, 0x20
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x20
        ; Exact mapped bytes 74 08: je 0x58890b38
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 85 5F 1E 00 00: jne 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5f
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 B8 00 00 00 02 00 00 00: mov dword ptr [ebp + 0xb8], 2
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 BC 00 00 00 01 00 00 00: mov dword ptr [ebp + 0xbc], 1
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 07 71 F5 FF: call 0x587e7c60
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x71
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 68 74 A2 99 58: push 0x5899a274
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0xa2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8D 54 01 00 00: mov ecx, dword ptr [ebp + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 0D FF ED FF: call 0x58770a80
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes E8 FE 50 F5 FF: call 0x587e5c80
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x50
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 05 1E 00 00: jmp 0x5889298c
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 17 04 00 00: jne 0x58890fa7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 01 74: cmp byte ptr [esi + 1], 0x74
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x74
        ; Exact mapped bytes 75 0B: jne 0x58890ba1
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8A 46 02: mov al, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x02
        ; Exact mapped bytes 3C 20: cmp al, 0x20
        __asm _emit 0x3c
        __asm _emit 0x20
        ; Exact mapped bytes 74 46: je 0x58890be3
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 74 42: je 0x58890be3
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 FD 03 00 00: jne 0x58890fa7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 01 74: cmp byte ptr [esi + 1], 0x74
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x74
        ; Exact mapped bytes 0F 85 58 02 00 00: jne 0x58890e0c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 46 02: mov al, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x02
        ; Exact mapped bytes 3C 65: cmp al, 0x65
        __asm _emit 0x3c
        __asm _emit 0x65
        ; Exact mapped bytes 0F 85 4D 02 00 00: jne 0x58890e0c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 03 61: cmp byte ptr [esi + 3], 0x61
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x61
        ; Exact mapped bytes 0F 85 43 02 00 00: jne 0x58890e0c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 04 6D: cmp byte ptr [esi + 4], 0x6d
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x6d
        ; Exact mapped bytes 0F 85 39 02 00 00: jne 0x58890e0c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 4E 05: mov cl, byte ptr [esi + 5]
        __asm _emit 0x8a
        __asm _emit 0x4e
        __asm _emit 0x05
        ; Exact mapped bytes 80 F9 20: cmp cl, 0x20
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x20
        ; Exact mapped bytes 74 08: je 0x58890be3
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 85 29 02 00 00: jne 0x58890e0c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3C 69: cmp al, 0x69
        __asm _emit 0x3c
        __asm _emit 0x69
        ; Exact mapped bytes 0F 84 21 02 00 00: je 0x58890e0c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 80 45 A2 58: mov edx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 9C 45 A2 58: cmp edx, dword ptr [0x58a2459c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 F0 01 00 00: jne 0x58890ded
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 66 0F B6 8A 54 03 00 00: movzx cx, byte ptr [edx + 0x354]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x8a
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 D1: movzx edx, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xd1
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 3C 65: cmp al, 0x65
        __asm _emit 0x3c
        __asm _emit 0x65
        ; Exact mapped bytes 0F 95 C1: setne cl
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc1
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 89 54 24 10: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8D 58 01: lea ebx, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 83 E1 03: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x03
        ; Exact mapped bytes 83 C1 03: add ecx, 3
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x03
        ; Exact mapped bytes 89 4C 24 14: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 8A 10: mov dl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x10
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 75 F9: jne 0x58890c30
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 86 39 01 00 00: jbe 0x58890d7a
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7C 0E FF 20: cmp byte ptr [esi + ecx - 1], 0x20
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0x20
        ; Exact mapped bytes 0F 85 2E 01 00 00: jne 0x58890d7a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 30: push 0x30
        __asm _emit 0x6a
        __asm _emit 0x30
        ; Exact mapped bytes 8D 84 24 18 01 00 00: lea eax, [esp + 0x118]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 EB BF 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xbf
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes A1 58 B4 A0 58: mov eax, dword ptr [0x58a0b458]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 50 B4 A0 58: mov ecx, dword ptr [0x58a0b450]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 54 B4 A0 58: mov edx, dword ptr [0x58a0b454]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 84 24 28 01 00 00: mov dword ptr [esp + 0x128], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 64 B4 A0 58: mov eax, dword ptr [0x58a0b464]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 8C 24 20 01 00 00: mov dword ptr [esp + 0x120], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 5C B4 A0 58: mov ecx, dword ptr [0x58a0b45c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 94 24 24 01 00 00: mov dword ptr [esp + 0x124], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 60 B4 A0 58: mov edx, dword ptr [0x58a0b460]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 84 24 34 01 00 00: mov dword ptr [esp + 0x134], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 89 8C 24 20 01 00 00: mov dword ptr [esp + 0x120], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 94 24 24 01 00 00: mov dword ptr [esp + 0x124], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 46 01: lea eax, [esi + 1]
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x01
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8A 0E: mov cl, byte ptr [esi]
        __asm _emit 0x8a
        __asm _emit 0x0e
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 75 F9: jne 0x58890cb0
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 2B F0: sub esi, eax
        __asm _emit 0x2b
        __asm _emit 0xf0
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 2B 44 24 14: sub eax, dword ptr [esp + 0x14]
        __asm _emit 0x2b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 31: add eax, 0x31
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x31
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 89 74 24 1C: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes E8 60 08 0E 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 6F BF 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xbf
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes B9 0C 00 00 00: mov ecx, 0xc
        __asm _emit 0xb9
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D B4 24 24 01 00 00: lea esi, [esp + 0x124]
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B FB: mov edi, ebx
        __asm _emit 0x8b
        __asm _emit 0xfb
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 8B 95 50 01 00 00: mov edx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 74 24 28: mov esi, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 8B 82 80 00 00 00: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 44 24 24: add eax, dword ptr [esp + 0x24]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8D 4E D0: lea ecx, [esi - 0x30]
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0xd0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4B 30: lea ecx, [ebx + 0x30]
        __asm _emit 0x8d
        __asm _emit 0x4b
        __asm _emit 0x30
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 41 C0 0E 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xc0
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 1C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x1c
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes E8 EC 73 F2 FF: call 0x587b8110
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x73
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes C7 85 B8 00 00 00 03 00 00 00: mov dword ptr [ebp + 0xb8], 3
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 BC 00 00 00 01 00 00 00: mov dword ptr [ebp + 0xbc], 1
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 1B 6F F5 FF: call 0x587e7c60
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x6f
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 68 08 C2 99 58: push 0x5899c208
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0xc2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8D 54 01 00 00: mov ecx, dword ptr [ebp + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 21 FD ED FF: call 0x58770a80
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xfd
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 0F B6 91 54 03 00 00: movzx dx, byte ptr [ecx + 0x354]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 C2: movzx eax, dx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc2
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes E9 89 FD FF FF: jmp 0x58890b03
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8A 4C 0E FF: mov cl, byte ptr [esi + ecx - 1]
        __asm _emit 0x8a
        __asm _emit 0x4c
        __asm _emit 0x0e
        __asm _emit 0xff
        ; Exact mapped bytes 80 F9 20: cmp cl, 0x20
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x20
        ; Exact mapped bytes 74 08: je 0x58890d8b
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 85 0C 1C 00 00: jne 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 B8 00 00 00 03 00 00 00: mov dword ptr [ebp + 0xb8], 3
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 BC 00 00 00 01 00 00 00: mov dword ptr [ebp + 0xbc], 1
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 B4 6E F5 FF: call 0x587e7c60
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x6e
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 68 08 C2 99 58: push 0x5899c208
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0xc2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8D 54 01 00 00: mov ecx, dword ptr [ebp + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 BA FC ED FF: call 0x58770a80
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xfc
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 66 0F B6 82 54 03 00 00: movzx ax, byte ptr [edx + 0x354]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x82
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 C8: movzx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes E8 98 4E F5 FF: call 0x587e5c80
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x4e
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 9F 1B 00 00: jmp 0x5889298c
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 A0 FF 99 58: push 0x5899ffa0
        __asm _emit 0x68
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E9 7B 1B 00 00: jmp 0x58892987
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 92 01 00 00: jne 0x58890fa7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 01 69: cmp byte ptr [esi + 1], 0x69
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x69
        ; Exact mapped bytes 75 06: jne 0x58890e21
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 80 7E 02 20: cmp byte ptr [esi + 2], 0x20
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x20
        ; Exact mapped bytes 74 45: je 0x58890e66
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 7D 01 00 00: jne 0x58890fa7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 01 69: cmp byte ptr [esi + 1], 0x69
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x69
        ; Exact mapped bytes 0F 85 73 01 00 00: jne 0x58890fa7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 02 6E: cmp byte ptr [esi + 2], 0x6e
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x6e
        ; Exact mapped bytes 0F 85 69 01 00 00: jne 0x58890fa7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 03 76: cmp byte ptr [esi + 3], 0x76
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x76
        ; Exact mapped bytes 0F 85 5F 01 00 00: jne 0x58890fa7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 04 69: cmp byte ptr [esi + 4], 0x69
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x69
        ; Exact mapped bytes 0F 85 55 01 00 00: jne 0x58890fa7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 05 74: cmp byte ptr [esi + 5], 0x74
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x05
        __asm _emit 0x74
        ; Exact mapped bytes 0F 85 4B 01 00 00: jne 0x58890fa7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 06 65: cmp byte ptr [esi + 6], 0x65
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x06
        __asm _emit 0x65
        ; Exact mapped bytes 0F 85 41 01 00 00: jne 0x58890fa7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 04 00 00: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8D 94 24 6C 06 00 00: lea edx, [esp + 0x66c]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 CD BD 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xbd
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 50 01 00 00: mov eax, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 90 80 00 00 00: mov edx, dword ptr [eax + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 24 74 06 00 00: lea eax, [esp + 0x674]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F2: mov esi, edx
        __asm _emit 0x8b
        __asm _emit 0xf2
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes BB 00 04 00 00: mov ebx, 0x400
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B F1: sub esi, ecx
        __asm _emit 0x2b
        __asm _emit 0xf1
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8B FE FB FF 7F: lea ecx, [ebx + 0x7ffffbfe]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x58890ebb
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0C 06: mov cl, byte ptr [esi + eax]
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x06
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0A: je 0x58890ebb
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 EB 01: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xeb
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x58890ea0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x58890ebf
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 75 01: jne 0x58890ec0
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 80 7A 02 6E: cmp byte ptr [edx + 2], 0x6e
        __asm _emit 0x80
        __asm _emit 0x7a
        __asm _emit 0x02
        __asm _emit 0x6e
        ; Exact mapped bytes 0F 95 C0: setne al
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc0
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 83 E0 05: and eax, 5
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x05
        ; Exact mapped bytes 83 C0 03: add eax, 3
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x03
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 8D 58 01: lea ebx, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 08: mov cl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 75 F9: jne 0x58890ee0
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 3B C6: cmp eax, esi
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 86 A6 1A 00 00: jbe 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xa6
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7C 16 FF 20: cmp byte ptr [esi + edx - 1], 0x20
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0x20
        ; Exact mapped bytes 0F 85 9B 1A 00 00: jne 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8D B4 34 68 06 00 00: lea esi, [esp + esi + 0x668]
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0x34
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 1C 02 00 00: mov dword ptr [esp + 0x21c], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 20 02 00 00: mov dword ptr [esp + 0x220], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 24 02 00 00: mov dword ptr [esp + 0x224], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 28 02 00 00: mov dword ptr [esp + 0x228], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 2C 02 00 00: mov dword ptr [esp + 0x22c], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 30 02 00 00: mov dword ptr [esp + 0x230], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 38 06: cmp byte ptr [esi], al
        __asm _emit 0x38
        __asm _emit 0x06
        ; Exact mapped bytes 74 17: je 0x58890f4a
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 8A 08: mov cl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x08
        ; Exact mapped bytes 88 8C 3C 1C 02 00 00: mov byte ptr [esp + edi + 0x21c], cl
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x3c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 FF 18: cmp edi, 0x18
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x18
        ; Exact mapped bytes 7F 46: jg 0x58890f8b
        __asm _emit 0x7f
        __asm _emit 0x46
        ; Exact mapped bytes 80 38 00: cmp byte ptr [eax], 0
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 75 EB: jne 0x58890f35
        __asm _emit 0x75
        __asm _emit 0xeb
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 83 FF 18: cmp edi, 0x18
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x18
        ; Exact mapped bytes 7D 3B: jge 0x58890f8b
        __asm _emit 0x7d
        __asm _emit 0x3b
        ; Exact mapped bytes A1 A8 45 A2 58: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 05 80 45 A2 58: cmp dword ptr [0x58a24580], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 2E: jne 0x58890f8b
        __asm _emit 0x75
        __asm _emit 0x2e
        ; Exact mapped bytes 0F B7 88 04 02 00 00: movzx ecx, word ptr [eax + 0x204]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 94 24 1C 02 00 00: lea edx, [esp + 0x21c]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 90 A0 00 00 00: mov edx, dword ptr [eax + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 9C 00 00 00: mov eax, dword ptr [eax + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 CA 92 F2 FF: call 0x587ba250
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x92
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes E9 01 1A 00 00: jmp 0x5889298c
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 EC 01 00 00: push 0x1ec
        __asm _emit 0x68
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 55 AB ED FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xab
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 8E 3D ED FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x3d
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes E9 E5 19 00 00: jmp 0x5889298c
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B0 6A: mov al, 0x6a
        __asm _emit 0xb0
        __asm _emit 0x6a
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 8B 01 00 00: jne 0x5889113d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 38 46 01: cmp byte ptr [esi + 1], al
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0x01
        ; Exact mapped bytes 74 2F: je 0x58890fe6
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 3A D2: cmp dl, dl
        __asm _emit 0x3a
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 85 7E 01 00 00: jne 0x5889113d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 38 46 01: cmp byte ptr [esi + 1], al
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 55 01 00 00: jne 0x5889111d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 02 6F: cmp byte ptr [esi + 2], 0x6f
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x6f
        ; Exact mapped bytes 0F 85 4B 01 00 00: jne 0x5889111d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 03 69: cmp byte ptr [esi + 3], 0x69
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x69
        ; Exact mapped bytes 0F 85 41 01 00 00: jne 0x5889111d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 04 6E: cmp byte ptr [esi + 4], 0x6e
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x6e
        ; Exact mapped bytes 0F 85 37 01 00 00: jne 0x5889111d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 04 00 00: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8D 8C 24 6C 16 00 00: lea ecx, [esp + 0x166c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x6c
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 4D BC 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xbc
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 50 01 00 00: mov eax, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 90 80 00 00 00: mov edx, dword ptr [eax + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 24 74 16 00 00: lea eax, [esp + 0x1674]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F2: mov esi, edx
        __asm _emit 0x8b
        __asm _emit 0xf2
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes BB 00 04 00 00: mov ebx, 0x400
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B F1: sub esi, ecx
        __asm _emit 0x2b
        __asm _emit 0xf1
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8B FE FB FF 7F: lea ecx, [ebx + 0x7ffffbfe]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5889103b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0C 06: mov cl, byte ptr [esi + eax]
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x06
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0A: je 0x5889103b
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 EB 01: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xeb
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x58891020
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5889103f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 75 01: jne 0x58891040
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 80 7A 02 6F: cmp byte ptr [edx + 2], 0x6f
        __asm _emit 0x80
        __asm _emit 0x7a
        __asm _emit 0x02
        __asm _emit 0x6f
        ; Exact mapped bytes 0F 95 C0: setne al
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc0
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 83 E0 03: and eax, 3
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x03
        ; Exact mapped bytes 83 C0 03: add eax, 3
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x03
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 8D 58 01: lea ebx, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 08: mov cl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 75 F9: jne 0x58891060
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 3B C6: cmp eax, esi
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 86 26 19 00 00: jbe 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x26
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7C 16 FF 20: cmp byte ptr [esi + edx - 1], 0x20
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0x20
        ; Exact mapped bytes 0F 85 1B 19 00 00: jne 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1b
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 38 8C 34 68 16 00 00: cmp byte ptr [esp + esi + 0x1668], cl
        __asm _emit 0x38
        __asm _emit 0x8c
        __asm _emit 0x34
        __asm _emit 0x68
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 04 02 00 00: mov dword ptr [esp + 0x204], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 08 02 00 00: mov dword ptr [esp + 0x208], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 0C 02 00 00: mov dword ptr [esp + 0x20c], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 10 02 00 00: mov dword ptr [esp + 0x210], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 14 02 00 00: mov dword ptr [esp + 0x214], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 18 02 00 00: mov dword ptr [esp + 0x218], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 34 68 16 00 00: lea eax, [esp + esi + 0x1668]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x68
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1D: je 0x588910d5
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes EB 06: jmp 0x588910c0
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588910C0 .. +0x18D bytes.
extern "C" __declspec(naked) void FUN_58890110_segment_07() {
    __asm {
        ; Exact mapped bytes 8A 08: mov cl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x08
        ; Exact mapped bytes 88 8C 3C 04 02 00 00: mov byte ptr [esp + edi + 0x204], cl
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x3c
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 FF 18: cmp edi, 0x18
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x18
        ; Exact mapped bytes 7F 31: jg 0x58891101
        __asm _emit 0x7f
        __asm _emit 0x31
        ; Exact mapped bytes 80 38 00: cmp byte ptr [eax], 0
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 75 EB: jne 0x588910c0
        __asm _emit 0x75
        __asm _emit 0xeb
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 83 FF 18: cmp edi, 0x18
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x18
        ; Exact mapped bytes 7D 26: jge 0x58891101
        __asm _emit 0x7d
        __asm _emit 0x26
        ; Exact mapped bytes 8B 15 80 45 A2 58: mov edx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 A0 45 A2 58: cmp edx, dword ptr [0x58a245a0]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 18: jne 0x58891101
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 84 24 04 02 00 00: lea eax, [esp + 0x204]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D4 91 F2 FF: call 0x587ba2d0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x91
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes E9 8B 18 00 00: jmp 0x5889298c
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 EB 01 00 00: push 0x1eb
        __asm _emit 0x68
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 DF A9 ED FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xa9
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 18 3C ED FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x3c
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes E9 6F 18 00 00: jmp 0x5889298c
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 75 1B: jne 0x5889113d
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8A 56 01: mov dl, byte ptr [esi + 1]
        __asm _emit 0x8a
        __asm _emit 0x56
        __asm _emit 0x01
        ; Exact mapped bytes 80 FA 66: cmp dl, 0x66
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x66
        ; Exact mapped bytes 75 13: jne 0x5889113d
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8A 46 02: mov al, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x02
        ; Exact mapped bytes 3C 20: cmp al, 0x20
        __asm _emit 0x3c
        __asm _emit 0x20
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x588911db
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x588911db
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 3E 2F: cmp byte ptr [esi], 0x2f
        __asm _emit 0x80
        __asm _emit 0x3e
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 84 09 00 00: jne 0x58891aca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 56 01: mov dl, byte ptr [esi + 1]
        __asm _emit 0x8a
        __asm _emit 0x56
        __asm _emit 0x01
        ; Exact mapped bytes 80 FA 66: cmp dl, 0x66
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x66
        ; Exact mapped bytes 75 25: jne 0x58891173
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes 8A 46 02: mov al, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x02
        ; Exact mapped bytes 3C 6C: cmp al, 0x6c
        __asm _emit 0x3c
        __asm _emit 0x6c
        ; Exact mapped bytes 75 1E: jne 0x58891173
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 80 7E 03 65: cmp byte ptr [esi + 3], 0x65
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x65
        ; Exact mapped bytes 75 18: jne 0x58891173
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 80 7E 04 65: cmp byte ptr [esi + 4], 0x65
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x65
        ; Exact mapped bytes 75 12: jne 0x58891173
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 80 7E 05 74: cmp byte ptr [esi + 5], 0x74
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x05
        __asm _emit 0x74
        ; Exact mapped bytes 75 0C: jne 0x58891173
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8A 4E 06: mov cl, byte ptr [esi + 6]
        __asm _emit 0x8a
        __asm _emit 0x4e
        __asm _emit 0x06
        ; Exact mapped bytes 80 F9 20: cmp cl, 0x20
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x20
        ; Exact mapped bytes 74 6C: je 0x588911db
        __asm _emit 0x74
        __asm _emit 0x6c
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 68: je 0x588911db
        __asm _emit 0x74
        __asm _emit 0x68
        ; Exact mapped bytes 80 3E 2F: cmp byte ptr [esi], 0x2f
        __asm _emit 0x80
        __asm _emit 0x3e
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 4E 09 00 00: jne 0x58891aca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 56 01: mov dl, byte ptr [esi + 1]
        __asm _emit 0x8a
        __asm _emit 0x56
        __asm _emit 0x01
        ; Exact mapped bytes 80 FA A4: cmp dl, 0xa4
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xa4
        ; Exact mapped bytes 75 13: jne 0x58891197
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8A 46 02: mov al, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x02
        ; Exact mapped bytes 3C A9: cmp al, 0xa9
        __asm _emit 0x3c
        __asm _emit 0xa9
        ; Exact mapped bytes 75 0C: jne 0x58891197
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8A 4E 03: mov cl, byte ptr [esi + 3]
        __asm _emit 0x8a
        __asm _emit 0x4e
        __asm _emit 0x03
        ; Exact mapped bytes 80 F9 20: cmp cl, 0x20
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x20
        ; Exact mapped bytes 74 48: je 0x588911db
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 44: je 0x588911db
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 80 3E 2F: cmp byte ptr [esi], 0x2f
        __asm _emit 0x80
        __asm _emit 0x3e
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 2A 09 00 00: jne 0x58891aca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 56 01: mov dl, byte ptr [esi + 1]
        __asm _emit 0x8a
        __asm _emit 0x56
        __asm _emit 0x01
        ; Exact mapped bytes 80 FA C7: cmp dl, 0xc7
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 85 74 02 00 00: jne 0x58891420
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 46 02: mov al, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x02
        ; Exact mapped bytes 3C D4: cmp al, 0xd4
        __asm _emit 0x3c
        __asm _emit 0xd4
        ; Exact mapped bytes 0F 85 69 02 00 00: jne 0x58891420
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 03 B4: cmp byte ptr [esi + 3], 0xb4
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0xb4
        ; Exact mapped bytes 0F 85 5F 02 00 00: jne 0x58891420
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 04 EB: cmp byte ptr [esi + 4], 0xeb
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0xeb
        ; Exact mapped bytes 0F 85 55 02 00 00: jne 0x58891420
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 4E 05: mov cl, byte ptr [esi + 5]
        __asm _emit 0x8a
        __asm _emit 0x4e
        __asm _emit 0x05
        ; Exact mapped bytes 80 F9 20: cmp cl, 0x20
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x20
        ; Exact mapped bytes 74 08: je 0x588911db
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 85 45 02 00 00: jne 0x58891420
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A0 B4 A0 58 00: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 19 02 00 00: je 0x58891401
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BD 3C 06 00 00 00: cmp dword ptr [ebp + 0x63c], 0
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 2B: jne 0x5889121c
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 C0 C5 99 58: push 0x5899c5c0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0xc5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 44 C0 FF FF: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 50 01 00 00: mov ecx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 29 E7 EC FF: call 0x5875f940
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xe7
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes E9 B9 21 00 00: jmp 0x588933d5
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 FA A4: cmp dl, 0xa4
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xa4
        ; Exact mapped bytes 75 07: jne 0x58891228
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x58891242
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes 80 FA C7: cmp dl, 0xc7
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xc7
        ; Exact mapped bytes 75 07: jne 0x58891234
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes BA 06 00 00 00: mov edx, 6
        __asm _emit 0xba
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x58891242
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 3C 6C: cmp al, 0x6c
        __asm _emit 0x3c
        __asm _emit 0x6c
        ; Exact mapped bytes 0F 94 C2: sete dl
        __asm _emit 0x0f
        __asm _emit 0x94
        __asm _emit 0xc2
        ; Exact mapped bytes 8D 14 95 03 00 00 00: lea edx, [edx*4 + 3]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 89 54 24 10: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8D 58 01: lea ebx, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes EB 03: jmp 0x58891250
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891250 .. +0x8F9 bytes.
extern "C" __declspec(naked) void FUN_58890110_segment_08() {
    __asm {
        ; Exact mapped bytes 8A 08: mov cl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 75 F9: jne 0x58891250
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 3B C2: cmp eax, edx
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 86 45 01 00 00: jbe 0x588913a6
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7C 16 FF 20: cmp byte ptr [esi + edx - 1], 0x20
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0x20
        ; Exact mapped bytes 0F 85 3A 01 00 00: jne 0x588913a6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 30: push 0x30
        __asm _emit 0x6a
        __asm _emit 0x30
        ; Exact mapped bytes 8D 8C 24 78 01 00 00: lea ecx, [esp + 0x178]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 CB B9 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xb9
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 58 B4 A0 58: mov ecx, dword ptr [0x58a0b458]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 50 B4 A0 58: mov edx, dword ptr [0x58a0b450]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes A1 54 B4 A0 58: mov eax, dword ptr [0x58a0b454]
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 8C 24 88 01 00 00: mov dword ptr [esp + 0x188], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 64 B4 A0 58: mov ecx, dword ptr [0x58a0b464]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 94 24 80 01 00 00: mov dword ptr [esp + 0x180], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 5C B4 A0 58: mov edx, dword ptr [0x58a0b45c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 84 24 84 01 00 00: mov dword ptr [esp + 0x184], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 60 B4 A0 58: mov eax, dword ptr [0x58a0b460]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 8C 24 94 01 00 00: mov dword ptr [esp + 0x194], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 89 94 24 80 01 00 00: mov dword ptr [esp + 0x180], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 84 01 00 00: mov dword ptr [esp + 0x184], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4E 01: lea ecx, [esi + 1]
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0x01
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8A 06: mov al, byte ptr [esi]
        __asm _emit 0x8a
        __asm _emit 0x06
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 F9: jne 0x588912d0
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 2B F1: sub esi, ecx
        __asm _emit 0x2b
        __asm _emit 0xf1
        ; Exact mapped bytes 2B 74 24 10: sub esi, dword ptr [esp + 0x10]
        __asm _emit 0x2b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 83 C6 31: add esi, 0x31
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x31
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 89 74 24 18: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes E8 44 02 0E 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 53 B9 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb9
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes B9 0C 00 00 00: mov ecx, 0xc
        __asm _emit 0xb9
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D B4 24 84 01 00 00: lea esi, [esp + 0x184]
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B FB: mov edi, ebx
        __asm _emit 0x8b
        __asm _emit 0xfb
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 8B 85 50 01 00 00: mov eax, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 74 24 24: mov esi, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 88 80 00 00 00: mov ecx, dword ptr [eax + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 4C 24 20: add ecx, dword ptr [esp + 0x20]
        __asm _emit 0x03
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8D 56 D0: lea edx, [esi - 0x30]
        __asm _emit 0x8d
        __asm _emit 0x56
        __asm _emit 0xd0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 53 30: lea edx, [ebx + 0x30]
        __asm _emit 0x8d
        __asm _emit 0x53
        __asm _emit 0x30
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 25 BA 0E 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xba
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 1C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x1c
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 57 6F F2 FF: call 0x587b8290
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x6f
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 1F: jne 0x5889135c
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 98 C5 99 58: push 0x5899c598
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xc5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F4 BE FF FF: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes BE 02 00 00 00: mov esi, 2
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 70 C5 99 58: push 0x5899c570
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xc5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 89 B5 BC 00 00 00: mov dword ptr [ebp + 0xbc], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 B5 B8 00 00 00: mov dword ptr [ebp + 0xb8], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8D 54 01 00 00: mov ecx, dword ptr [ebp + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F9 F6 ED FF: call 0x58770a80
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xf6
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 EB 48 F5 FF: call 0x587e5c80
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x48
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 BF 68 F5 FF: call 0x587e7c60
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 68 F7 FF FF: jmp 0x58890b0e
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8A 54 16 FF: mov dl, byte ptr [esi + edx - 1]
        __asm _emit 0x8a
        __asm _emit 0x54
        __asm _emit 0x16
        __asm _emit 0xff
        ; Exact mapped bytes 80 FA 20: cmp dl, 0x20
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x20
        ; Exact mapped bytes 74 08: je 0x588913b7
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 85 E0 15 00 00: jne 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BE 02 00 00 00: mov esi, 2
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 70 C5 99 58: push 0x5899c570
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xc5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 89 B5 B8 00 00 00: mov dword ptr [ebp + 0xb8], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 B5 BC 00 00 00: mov dword ptr [ebp + 0xbc], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8D 54 01 00 00: mov ecx, dword ptr [ebp + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 9E F6 ED FF: call 0x58770a80
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xf6
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 90 48 F5 FF: call 0x587e5c80
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x48
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 64 68 F5 FF: call 0x587e7c60
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x68
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 8B 15 00 00: jmp 0x5889298c
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 4C C5 99 58: push 0x5899c54c
        __asm _emit 0x68
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E9 67 15 00 00: jmp 0x58892987
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 3E 2F: cmp byte ptr [esi], 0x2f
        __asm _emit 0x80
        __asm _emit 0x3e
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 A1 06 00 00: jne 0x58891aca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 56 01: mov dl, byte ptr [esi + 1]
        __asm _emit 0x8a
        __asm _emit 0x56
        __asm _emit 0x01
        ; Exact mapped bytes 80 FA 73: cmp dl, 0x73
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x73
        ; Exact mapped bytes 75 13: jne 0x58891444
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8A 46 02: mov al, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x02
        ; Exact mapped bytes 3C 20: cmp al, 0x20
        __asm _emit 0x3c
        __asm _emit 0x20
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x588914f4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x588914f4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 3E 2F: cmp byte ptr [esi], 0x2f
        __asm _emit 0x80
        __asm _emit 0x3e
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 7D 06 00 00: jne 0x58891aca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 56 01: mov dl, byte ptr [esi + 1]
        __asm _emit 0x8a
        __asm _emit 0x56
        __asm _emit 0x01
        ; Exact mapped bytes 80 FA 73: cmp dl, 0x73
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x73
        ; Exact mapped bytes 75 37: jne 0x5889148c
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes 8A 46 02: mov al, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x02
        ; Exact mapped bytes 3C 71: cmp al, 0x71
        __asm _emit 0x3c
        __asm _emit 0x71
        ; Exact mapped bytes 75 30: jne 0x5889148c
        __asm _emit 0x75
        __asm _emit 0x30
        ; Exact mapped bytes 80 7E 03 75: cmp byte ptr [esi + 3], 0x75
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x75
        ; Exact mapped bytes 75 2A: jne 0x5889148c
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes 80 7E 04 61: cmp byte ptr [esi + 4], 0x61
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x61
        ; Exact mapped bytes 75 24: jne 0x5889148c
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 80 7E 05 64: cmp byte ptr [esi + 5], 0x64
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x05
        __asm _emit 0x64
        ; Exact mapped bytes 75 1E: jne 0x5889148c
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 80 7E 06 72: cmp byte ptr [esi + 6], 0x72
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x06
        __asm _emit 0x72
        ; Exact mapped bytes 75 18: jne 0x5889148c
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 80 7E 07 6F: cmp byte ptr [esi + 7], 0x6f
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x07
        __asm _emit 0x6f
        ; Exact mapped bytes 75 12: jne 0x5889148c
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 80 7E 08 6E: cmp byte ptr [esi + 8], 0x6e
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x08
        __asm _emit 0x6e
        ; Exact mapped bytes 75 0C: jne 0x5889148c
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8A 4E 09: mov cl, byte ptr [esi + 9]
        __asm _emit 0x8a
        __asm _emit 0x4e
        __asm _emit 0x09
        ; Exact mapped bytes 80 F9 20: cmp cl, 0x20
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x20
        ; Exact mapped bytes 74 6C: je 0x588914f4
        __asm _emit 0x74
        __asm _emit 0x6c
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 68: je 0x588914f4
        __asm _emit 0x74
        __asm _emit 0x68
        ; Exact mapped bytes 80 3E 2F: cmp byte ptr [esi], 0x2f
        __asm _emit 0x80
        __asm _emit 0x3e
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 35 06 00 00: jne 0x58891aca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x35
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 56 01: mov dl, byte ptr [esi + 1]
        __asm _emit 0x8a
        __asm _emit 0x56
        __asm _emit 0x01
        ; Exact mapped bytes 80 FA A4: cmp dl, 0xa4
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xa4
        ; Exact mapped bytes 75 13: jne 0x588914b0
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8A 46 02: mov al, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x02
        ; Exact mapped bytes 3A C2: cmp al, dl
        __asm _emit 0x3a
        __asm _emit 0xc2
        ; Exact mapped bytes 75 0C: jne 0x588914b0
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8A 4E 03: mov cl, byte ptr [esi + 3]
        __asm _emit 0x8a
        __asm _emit 0x4e
        __asm _emit 0x03
        ; Exact mapped bytes 80 F9 20: cmp cl, 0x20
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x20
        ; Exact mapped bytes 74 48: je 0x588914f4
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 44: je 0x588914f4
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 80 3E 2F: cmp byte ptr [esi], 0x2f
        __asm _emit 0x80
        __asm _emit 0x3e
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 11 06 00 00: jne 0x58891aca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x11
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 56 01: mov dl, byte ptr [esi + 1]
        __asm _emit 0x8a
        __asm _emit 0x56
        __asm _emit 0x01
        ; Exact mapped bytes 80 FA C0: cmp dl, 0xc0
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 55 02 00 00: jne 0x5889171a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 46 02: mov al, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x02
        ; Exact mapped bytes 3C FC: cmp al, 0xfc
        __asm _emit 0x3c
        __asm _emit 0xfc
        ; Exact mapped bytes 0F 85 4A 02 00 00: jne 0x5889171a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 03 B4: cmp byte ptr [esi + 3], 0xb4
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0xb4
        ; Exact mapped bytes 0F 85 40 02 00 00: jne 0x5889171a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 04 EB: cmp byte ptr [esi + 4], 0xeb
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0xeb
        ; Exact mapped bytes 0F 85 36 02 00 00: jne 0x5889171a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 4E 05: mov cl, byte ptr [esi + 5]
        __asm _emit 0x8a
        __asm _emit 0x4e
        __asm _emit 0x05
        ; Exact mapped bytes 80 F9 20: cmp cl, 0x20
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x20
        ; Exact mapped bytes 74 08: je 0x588914f4
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 85 26 02 00 00: jne 0x5889171a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A4 B4 A0 58 00: cmp dword ptr [0x58a0b4a4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 FA 01 00 00: je 0x588916fb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BD 44 06 00 00 00: cmp dword ptr [ebp + 0x644], 0
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 E3 FC FF FF: je 0x588911f1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 80 FA A4: cmp dl, 0xa4
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xa4
        ; Exact mapped bytes 75 07: jne 0x5889151a
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes B9 04 00 00 00: mov ecx, 4
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x58891534
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes 80 FA C0: cmp dl, 0xc0
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xc0
        ; Exact mapped bytes 75 07: jne 0x58891526
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes B9 06 00 00 00: mov ecx, 6
        __asm _emit 0xb9
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x58891534
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 3C 71: cmp al, 0x71
        __asm _emit 0x3c
        __asm _emit 0x71
        ; Exact mapped bytes 0F 95 C1: setne cl
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc1
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 83 E1 07: and ecx, 7
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x07
        ; Exact mapped bytes 83 C1 03: add ecx, 3
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x03
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 89 4C 24 10: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8D 58 01: lea ebx, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8A 10: mov dl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x10
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 75 F9: jne 0x58891540
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 86 4A 01 00 00: jbe 0x5889169b
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7C 0E FF 20: cmp byte ptr [esi + ecx - 1], 0x20
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0x20
        ; Exact mapped bytes 0F 85 3F 01 00 00: jne 0x5889169b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 30: push 0x30
        __asm _emit 0x6a
        __asm _emit 0x30
        ; Exact mapped bytes 8D 84 24 B8 00 00 00: lea eax, [esp + 0xb8]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 DB B6 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xb6
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 50 B4 A0 58: mov ecx, dword ptr [0x58a0b450]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 54 B4 A0 58: mov edx, dword ptr [0x58a0b454]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes A1 58 B4 A0 58: mov eax, dword ptr [0x58a0b458]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 8C 24 C0 00 00 00: mov dword ptr [esp + 0xc0], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 5C B4 A0 58: mov ecx, dword ptr [0x58a0b45c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 94 24 C4 00 00 00: mov dword ptr [esp + 0xc4], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 60 B4 A0 58: mov edx, dword ptr [0x58a0b460]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 84 24 C8 00 00 00: mov dword ptr [esp + 0xc8], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 64 B4 A0 58: mov eax, dword ptr [0x58a0b464]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 8C 24 CC 00 00 00: mov dword ptr [esp + 0xcc], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 89 94 24 C4 00 00 00: mov dword ptr [esp + 0xc4], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 24 C8 00 00 00: mov dword ptr [esp + 0xc8], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4E 01: lea ecx, [esi + 1]
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0x01
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8A 06: mov al, byte ptr [esi]
        __asm _emit 0x8a
        __asm _emit 0x06
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 F9: jne 0x588915c0
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 2B F1: sub esi, ecx
        __asm _emit 0x2b
        __asm _emit 0xf1
        ; Exact mapped bytes 2B 74 24 10: sub esi, dword ptr [esp + 0x10]
        __asm _emit 0x2b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 83 C6 31: add esi, 0x31
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x31
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 89 74 24 18: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes E8 54 FF 0D 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 63 B6 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xb6
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes B9 0C 00 00 00: mov ecx, 0xc
        __asm _emit 0xb9
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D B4 24 C4 00 00 00: lea esi, [esp + 0xc4]
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0x24
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B FB: mov edi, ebx
        __asm _emit 0x8b
        __asm _emit 0xfb
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 8B 95 50 01 00 00: mov edx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 74 24 24: mov esi, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 82 80 00 00 00: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 44 24 20: add eax, dword ptr [esp + 0x20]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8D 4E D0: lea ecx, [esi - 0x30]
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0xd0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4B 30: lea ecx, [ebx + 0x30]
        __asm _emit 0x8d
        __asm _emit 0x4b
        __asm _emit 0x30
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 35 B7 0E 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xb7
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 1C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x1c
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 D7 6C F2 FF: call 0x587b8300
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x6c
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 1F: jne 0x5889164c
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 98 C5 99 58: push 0x5899c598
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xc5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 04 BC FF FF: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 00 C6 99 58: push 0x5899c600
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xc6
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes C7 85 BC 00 00 00 03 00 00 00: mov dword ptr [ebp + 0xbc], 3
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 B8 00 00 00 02 00 00 00: mov dword ptr [ebp + 0xb8], 2
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8D 54 01 00 00: mov ecx, dword ptr [ebp + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 06 F4 ED FF: call 0x58770a80
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf4
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes E8 F7 45 F5 FF: call 0x587e5c80
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x45
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes E8 CA 65 F5 FF: call 0x587e7c60
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x65
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 73 F4 FF FF: jmp 0x58890b0e
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8A 4C 0E FF: mov cl, byte ptr [esi + ecx - 1]
        __asm _emit 0x8a
        __asm _emit 0x4c
        __asm _emit 0x0e
        __asm _emit 0xff
        ; Exact mapped bytes 80 F9 20: cmp cl, 0x20
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x20
        ; Exact mapped bytes 74 08: je 0x588916ac
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 85 EB 12 00 00: jne 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 C6 99 58: push 0x5899c600
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xc6
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes C7 85 B8 00 00 00 02 00 00 00: mov dword ptr [ebp + 0xb8], 2
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 BC 00 00 00 03 00 00 00: mov dword ptr [ebp + 0xbc], 3
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8D 54 01 00 00: mov ecx, dword ptr [ebp + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 A6 F3 ED FF: call 0x58770a80
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf3
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes E8 97 45 F5 FF: call 0x587e5c80
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x45
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes E8 6A 65 F5 FF: call 0x587e7c60
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x65
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 91 12 00 00: jmp 0x5889298c
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 DC C5 99 58: push 0x5899c5dc
        __asm _emit 0x68
        __asm _emit 0xdc
        __asm _emit 0xc5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E9 6D 12 00 00: jmp 0x58892987
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 3E 2F: cmp byte ptr [esi], 0x2f
        __asm _emit 0x80
        __asm _emit 0x3e
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 A7 03 00 00: jne 0x58891aca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 56 01: mov dl, byte ptr [esi + 1]
        __asm _emit 0x8a
        __asm _emit 0x56
        __asm _emit 0x01
        ; Exact mapped bytes 80 FA 64: cmp dl, 0x64
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x64
        ; Exact mapped bytes 75 1C: jne 0x58891747
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 8A 5E 02: mov bl, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x5e
        __asm _emit 0x02
        ; Exact mapped bytes 80 FB 66: cmp bl, 0x66
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0x66
        ; Exact mapped bytes 75 14: jne 0x58891747
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8A 4E 03: mov cl, byte ptr [esi + 3]
        __asm _emit 0x8a
        __asm _emit 0x4e
        __asm _emit 0x03
        ; Exact mapped bytes 80 F9 20: cmp cl, 0x20
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x20
        ; Exact mapped bytes 0F 84 4B 01 00 00: je 0x5889188a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 43 01 00 00: je 0x5889188a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 3E 2F: cmp byte ptr [esi], 0x2f
        __asm _emit 0x80
        __asm _emit 0x3e
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 7A 03 00 00: jne 0x58891aca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 56 01: mov dl, byte ptr [esi + 1]
        __asm _emit 0x8a
        __asm _emit 0x56
        __asm _emit 0x01
        ; Exact mapped bytes 80 FA 64: cmp dl, 0x64
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x64
        ; Exact mapped bytes 75 59: jne 0x588917b1
        __asm _emit 0x75
        __asm _emit 0x59
        ; Exact mapped bytes 8A 5E 02: mov bl, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x5e
        __asm _emit 0x02
        ; Exact mapped bytes 80 FB 69: cmp bl, 0x69
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0x69
        ; Exact mapped bytes 75 51: jne 0x588917b1
        __asm _emit 0x75
        __asm _emit 0x51
        ; Exact mapped bytes 8A 4E 03: mov cl, byte ptr [esi + 3]
        __asm _emit 0x8a
        __asm _emit 0x4e
        __asm _emit 0x03
        ; Exact mapped bytes 80 F9 72: cmp cl, 0x72
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x72
        ; Exact mapped bytes 75 49: jne 0x588917b1
        __asm _emit 0x75
        __asm _emit 0x49
        ; Exact mapped bytes 80 7E 04 65: cmp byte ptr [esi + 4], 0x65
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x65
        ; Exact mapped bytes 75 43: jne 0x588917b1
        __asm _emit 0x75
        __asm _emit 0x43
        ; Exact mapped bytes 80 7E 05 63: cmp byte ptr [esi + 5], 0x63
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x05
        __asm _emit 0x63
        ; Exact mapped bytes 75 3D: jne 0x588917b1
        __asm _emit 0x75
        __asm _emit 0x3d
        ; Exact mapped bytes 80 7E 06 74: cmp byte ptr [esi + 6], 0x74
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x06
        __asm _emit 0x74
        ; Exact mapped bytes 75 37: jne 0x588917b1
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes 80 7E 07 20: cmp byte ptr [esi + 7], 0x20
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x07
        __asm _emit 0x20
        ; Exact mapped bytes 75 31: jne 0x588917b1
        __asm _emit 0x75
        __asm _emit 0x31
        ; Exact mapped bytes 80 7E 08 66: cmp byte ptr [esi + 8], 0x66
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x08
        __asm _emit 0x66
        ; Exact mapped bytes 75 2B: jne 0x588917b1
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 80 7E 09 6C: cmp byte ptr [esi + 9], 0x6c
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x09
        __asm _emit 0x6c
        ; Exact mapped bytes 75 25: jne 0x588917b1
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes 80 7E 0A 65: cmp byte ptr [esi + 0xa], 0x65
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x0a
        __asm _emit 0x65
        ; Exact mapped bytes 75 1F: jne 0x588917b1
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 80 7E 0B 65: cmp byte ptr [esi + 0xb], 0x65
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x0b
        __asm _emit 0x65
        ; Exact mapped bytes 75 19: jne 0x588917b1
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 80 7E 0C 74: cmp byte ptr [esi + 0xc], 0x74
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x0c
        __asm _emit 0x74
        ; Exact mapped bytes 75 13: jne 0x588917b1
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8A 46 0D: mov al, byte ptr [esi + 0xd]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x0d
        ; Exact mapped bytes 3C 20: cmp al, 0x20
        __asm _emit 0x3c
        __asm _emit 0x20
        ; Exact mapped bytes 0F 84 E1 00 00 00: je 0x5889188a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 D9 00 00 00: je 0x5889188a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 3E 2F: cmp byte ptr [esi], 0x2f
        __asm _emit 0x80
        __asm _emit 0x3e
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 10 03 00 00: jne 0x58891aca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 56 01: mov dl, byte ptr [esi + 1]
        __asm _emit 0x8a
        __asm _emit 0x56
        __asm _emit 0x01
        ; Exact mapped bytes 80 FA A4: cmp dl, 0xa4
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xa4
        ; Exact mapped bytes 75 28: jne 0x588917ea
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes 8A 5E 02: mov bl, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x5e
        __asm _emit 0x02
        ; Exact mapped bytes 80 FB B7: cmp bl, 0xb7
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0xb7
        ; Exact mapped bytes 75 20: jne 0x588917ea
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 8A 4E 03: mov cl, byte ptr [esi + 3]
        __asm _emit 0x8a
        __asm _emit 0x4e
        __asm _emit 0x03
        ; Exact mapped bytes 3A CA: cmp cl, dl
        __asm _emit 0x3a
        __asm _emit 0xca
        ; Exact mapped bytes 75 19: jne 0x588917ea
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 80 7E 04 A9: cmp byte ptr [esi + 4], 0xa9
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0xa9
        ; Exact mapped bytes 75 13: jne 0x588917ea
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8A 46 05: mov al, byte ptr [esi + 5]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x05
        ; Exact mapped bytes 3C 20: cmp al, 0x20
        __asm _emit 0x3c
        __asm _emit 0x20
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x5889188a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x5889188a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 3E 2F: cmp byte ptr [esi], 0x2f
        __asm _emit 0x80
        __asm _emit 0x3e
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 D7 02 00 00: jne 0x58891aca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 56 01: mov dl, byte ptr [esi + 1]
        __asm _emit 0x8a
        __asm _emit 0x56
        __asm _emit 0x01
        ; Exact mapped bytes 80 FA C1: cmp dl, 0xc1
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xc1
        ; Exact mapped bytes 75 21: jne 0x5889181c
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 8A 5E 02: mov bl, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x5e
        __asm _emit 0x02
        ; Exact mapped bytes 80 FB F7: cmp bl, 0xf7
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0xf7
        ; Exact mapped bytes 75 19: jne 0x5889181c
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 8A 4E 03: mov cl, byte ptr [esi + 3]
        __asm _emit 0x8a
        __asm _emit 0x4e
        __asm _emit 0x03
        ; Exact mapped bytes 80 F9 C7: cmp cl, 0xc7
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0xc7
        ; Exact mapped bytes 75 11: jne 0x5889181c
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 80 7E 04 D4: cmp byte ptr [esi + 4], 0xd4
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0xd4
        ; Exact mapped bytes 75 0B: jne 0x5889181c
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8A 46 05: mov al, byte ptr [esi + 5]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x05
        ; Exact mapped bytes 3C 20: cmp al, 0x20
        __asm _emit 0x3c
        __asm _emit 0x20
        ; Exact mapped bytes 74 72: je 0x5889188a
        __asm _emit 0x74
        __asm _emit 0x72
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 74 6E: je 0x5889188a
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes 80 3E 2F: cmp byte ptr [esi], 0x2f
        __asm _emit 0x80
        __asm _emit 0x3e
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 A5 02 00 00: jne 0x58891aca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 56 01: mov dl, byte ptr [esi + 1]
        __asm _emit 0x8a
        __asm _emit 0x56
        __asm _emit 0x01
        ; Exact mapped bytes 80 FA C1: cmp dl, 0xc1
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 85 99 02 00 00: jne 0x58891aca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 5E 02: mov bl, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x5e
        __asm _emit 0x02
        ; Exact mapped bytes 80 FB F7: cmp bl, 0xf7
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0xf7
        ; Exact mapped bytes 0F 85 8D 02 00 00: jne 0x58891aca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 4E 03: mov cl, byte ptr [esi + 3]
        __asm _emit 0x8a
        __asm _emit 0x4e
        __asm _emit 0x03
        ; Exact mapped bytes 80 F9 BC: cmp cl, 0xbc
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 85 81 02 00 00: jne 0x58891aca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 04 D3: cmp byte ptr [esi + 4], 0xd3
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0xd3
        ; Exact mapped bytes 0F 85 77 02 00 00: jne 0x58891aca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 05 C7: cmp byte ptr [esi + 5], 0xc7
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x05
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 85 6D 02 00 00: jne 0x58891aca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 06 D4: cmp byte ptr [esi + 6], 0xd4
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x06
        __asm _emit 0xd4
        ; Exact mapped bytes 0F 85 63 02 00 00: jne 0x58891aca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 07 B4: cmp byte ptr [esi + 7], 0xb4
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x07
        __asm _emit 0xb4
        ; Exact mapped bytes 0F 85 59 02 00 00: jne 0x58891aca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 08 EB: cmp byte ptr [esi + 8], 0xeb
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x08
        __asm _emit 0xeb
        ; Exact mapped bytes 0F 85 4F 02 00 00: jne 0x58891aca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 46 09: mov al, byte ptr [esi + 9]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x09
        ; Exact mapped bytes 3C 20: cmp al, 0x20
        __asm _emit 0x3c
        __asm _emit 0x20
        ; Exact mapped bytes 74 08: je 0x5889188a
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 40 02 00 00: jne 0x58891aca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A0 B4 A0 58 00: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 14 02 00 00: je 0x58891aab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A4 B4 A0 58 00: cmp dword ptr [0x58a0b4a4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 07 02 00 00: jne 0x58891aab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BD 40 06 00 00 00: cmp dword ptr [ebp + 0x640], 0
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 40 F9 FF FF: je 0x588911f1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 80 FA A4: cmp dl, 0xa4
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xa4
        ; Exact mapped bytes 74 2B: je 0x588918e1
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 80 FA C1: cmp dl, 0xc1
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xc1
        ; Exact mapped bytes 75 15: jne 0x588918d0
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 80 F9 C7: cmp cl, 0xc7
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0xc7
        ; Exact mapped bytes 74 21: je 0x588918e1
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 3A D2: cmp dl, dl
        __asm _emit 0x3a
        __asm _emit 0xd2
        ; Exact mapped bytes 75 0C: jne 0x588918d0
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 80 F9 BC: cmp cl, 0xbc
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0xbc
        ; Exact mapped bytes 75 07: jne 0x588918d0
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes BA 0A 00 00 00: mov edx, 0xa
        __asm _emit 0xba
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 16: jmp 0x588918e6
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 80 FB 69: cmp bl, 0x69
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0x69
        ; Exact mapped bytes 0F 95 C2: setne dl
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc2
        ; Exact mapped bytes 4A: dec edx
        __asm _emit 0x4a
        ; Exact mapped bytes 83 E2 0A: and edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0a
        ; Exact mapped bytes 83 C2 04: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x04
        ; Exact mapped bytes EB 05: jmp 0x588918e6
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes BA 06 00 00 00: mov edx, 6
        __asm _emit 0xba
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 89 54 24 10: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8D 58 01: lea ebx, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8A 08: mov cl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 75 F9: jne 0x588918f0
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 3B C2: cmp eax, edx
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 86 4A 01 00 00: jbe 0x58891a4b
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7C 16 FF 20: cmp byte ptr [esi + edx - 1], 0x20
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0x20
        ; Exact mapped bytes 0F 85 3F 01 00 00: jne 0x58891a4b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 30: push 0x30
        __asm _emit 0x6a
        __asm _emit 0x30
        ; Exact mapped bytes 8D 94 24 E8 00 00 00: lea edx, [esp + 0xe8]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 2B B3 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xb3
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 54 B4 A0 58: mov ecx, dword ptr [0x58a0b454]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes A1 50 B4 A0 58: mov eax, dword ptr [0x58a0b450]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 58 B4 A0 58: mov edx, dword ptr [0x58a0b458]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 8C 24 F4 00 00 00: mov dword ptr [esp + 0xf4], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 60 B4 A0 58: mov ecx, dword ptr [0x58a0b460]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 84 24 F0 00 00 00: mov dword ptr [esp + 0xf0], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 5C B4 A0 58: mov eax, dword ptr [0x58a0b45c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 94 24 F8 00 00 00: mov dword ptr [esp + 0xf8], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 64 B4 A0 58: mov edx, dword ptr [0x58a0b464]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 8C 24 00 01 00 00: mov dword ptr [esp + 0x100], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 89 84 24 F0 00 00 00: mov dword ptr [esp + 0xf0], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 94 24 F8 00 00 00: mov dword ptr [esp + 0xf8], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4E 01: lea ecx, [esi + 1]
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0x01
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8A 06: mov al, byte ptr [esi]
        __asm _emit 0x8a
        __asm _emit 0x06
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 F9: jne 0x58891970
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 2B F1: sub esi, ecx
        __asm _emit 0x2b
        __asm _emit 0xf1
        ; Exact mapped bytes 2B 74 24 10: sub esi, dword ptr [esp + 0x10]
        __asm _emit 0x2b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 83 C6 31: add esi, 0x31
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x31
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 89 74 24 18: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes E8 A4 FB 0D 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xfb
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 B3 B2 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xb2
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes B9 0C 00 00 00: mov ecx, 0xc
        __asm _emit 0xb9
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D B4 24 F4 00 00 00: lea esi, [esp + 0xf4]
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0x24
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B FB: mov edi, ebx
        __asm _emit 0x8b
        __asm _emit 0xfb
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 8B 8D 50 01 00 00: mov ecx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 74 24 24: mov esi, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 91 80 00 00 00: mov edx, dword ptr [ecx + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 54 24 20: add edx, dword ptr [esp + 0x20]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8D 46 D0: lea eax, [esi - 0x30]
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0xd0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 43 30: lea eax, [ebx + 0x30]
        __asm _emit 0x8d
        __asm _emit 0x43
        __asm _emit 0x30
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 85 B3 0E 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 1C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x1c
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 97 69 F2 FF: call 0x587b8370
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x69
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 1F: jne 0x588919fc
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 98 C5 99 58: push 0x5899c598
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xc5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 54 B8 FF FF: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 54 C6 99 58: push 0x5899c654
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0xc6
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes C7 85 BC 00 00 00 04 00 00 00: mov dword ptr [ebp + 0xbc], 4
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 B8 00 00 00 02 00 00 00: mov dword ptr [ebp + 0xb8], 2
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8D 54 01 00 00: mov ecx, dword ptr [ebp + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 56 F0 ED FF: call 0x58770a80
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf0
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes E8 47 42 F5 FF: call 0x587e5c80
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x42
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes E8 1A 62 F5 FF: call 0x587e7c60
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x62
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 C3 F0 FF FF: jmp 0x58890b0e
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8A 54 16 FF: mov dl, byte ptr [esi + edx - 1]
        __asm _emit 0x8a
        __asm _emit 0x54
        __asm _emit 0x16
        __asm _emit 0xff
        ; Exact mapped bytes 80 FA 20: cmp dl, 0x20
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x20
        ; Exact mapped bytes 74 08: je 0x58891a5c
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 85 3B 0F 00 00: jne 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3b
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 54 C6 99 58: push 0x5899c654
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0xc6
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes C7 85 B8 00 00 00 02 00 00 00: mov dword ptr [ebp + 0xb8], 2
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 BC 00 00 00 04 00 00 00: mov dword ptr [ebp + 0xbc], 4
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8D 54 01 00 00: mov ecx, dword ptr [ebp + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F6 EF ED FF: call 0x58770a80
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xef
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes E8 E7 41 F5 FF: call 0x587e5c80
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x41
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes E8 BA 61 F5 FF: call 0x587e7c60
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x61
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 E1 0E 00 00: jmp 0x5889298c
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 28 C6 99 58: push 0x5899c628
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0xc6
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E9 BD 0E 00 00: jmp 0x58892987
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 16: mov dl, byte ptr [esi]
        __asm _emit 0x8a
        __asm _emit 0x16
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 21 04 00 00: jne 0x58891ef6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 4E 01: mov cl, byte ptr [esi + 1]
        __asm _emit 0x8a
        __asm _emit 0x4e
        __asm _emit 0x01
        ; Exact mapped bytes 80 F9 30: cmp cl, 0x30
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x30
        ; Exact mapped bytes 0F 8C B8 03 00 00: jl 0x58891e99
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 F9 39: cmp cl, 0x39
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x39
        ; Exact mapped bytes 0F 8F AF 03 00 00: jg 0x58891e99
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xaf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 89 44 24 10: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 80 F9 20: cmp cl, 0x20
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x20
        ; Exact mapped bytes 74 37: je 0x58891b31
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 0C 06: mov cl, byte ptr [esi + eax]
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x06
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 26: je 0x58891b2d
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 80 F9 30: cmp cl, 0x30
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x30
        ; Exact mapped bytes 0F 8C 87 0E 00 00: jl 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x87
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 F9 39: cmp cl, 0x39
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x39
        ; Exact mapped bytes 0F 8F 7E 0E 00 00: jg 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x7e
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 50 01 00 00: mov ecx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 80 00 00 00: mov edx, dword ptr [ecx + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 80 3C 10 20: cmp byte ptr [eax + edx], 0x20
        __asm _emit 0x80
        __asm _emit 0x3c
        __asm _emit 0x10
        __asm _emit 0x20
        ; Exact mapped bytes 75 D3: jne 0x58891b00
        __asm _emit 0x75
        __asm _emit 0xd3
        ; Exact mapped bytes 89 44 24 10: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes BE 01 00 00 00: mov esi, 1
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B DE: cmp ebx, esi
        __asm _emit 0x3b
        __asm _emit 0xde
        ; Exact mapped bytes C7 85 F0 00 00 00 00 00 00 00: mov dword ptr [ebp + 0xf0], 0
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 55: jl 0x58891b99
        __asm _emit 0x7c
        __asm _emit 0x55
        ; Exact mapped bytes 8D 7B FF: lea edi, [ebx - 1]
        __asm _emit 0x8d
        __asm _emit 0x7b
        __asm _emit 0xff
        ; Exact mapped bytes EB 07: jmp 0x58891b50
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891B50 .. +0x285 bytes.
extern "C" __declspec(naked) void FUN_58890110_segment_09() {
    __asm {
        ; Exact mapped bytes DD 05 38 CB 98 58: fld qword ptr [0x5898cb38]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 83 EC 08: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x08
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 CE 8B EA FF: call 0x5873a730
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x8b
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 50 01 00 00: mov eax, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 80 00 00 00: mov eax, dword ptr [eax + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 0C 06: movsx ecx, byte ptr [esi + eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x06
        ; Exact mapped bytes 83 E9 30: sub ecx, 0x30
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x30
        ; Exact mapped bytes 89 4C 24 20: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DE C9: fmulp st(1)
        __asm _emit 0xde
        __asm _emit 0xc9
        ; Exact mapped bytes DA 85 F0 00 00 00: fiadd dword ptr [ebp + 0xf0]
        __asm _emit 0xda
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 13 B1 0E 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xb1
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes 4F: dec edi
        __asm _emit 0x4f
        ; Exact mapped bytes 3B F3: cmp esi, ebx
        __asm _emit 0x3b
        __asm _emit 0xf3
        ; Exact mapped bytes 89 85 F0 00 00 00: mov dword ptr [ebp + 0xf0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E B7: jle 0x58891b50
        __asm _emit 0x7e
        __asm _emit 0xb7
        ; Exact mapped bytes 8D 9D C0 00 00 00: lea ebx, [ebp + 0xc0]
        __asm _emit 0x8d
        __asm _emit 0x9d
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 03: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes 89 43 04: mov dword ptr [ebx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x04
        ; Exact mapped bytes 89 43 08: mov dword ptr [ebx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x08
        ; Exact mapped bytes 89 43 0C: mov dword ptr [ebx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x0c
        ; Exact mapped bytes 89 43 10: mov dword ptr [ebx + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x10
        ; Exact mapped bytes 89 43 14: mov dword ptr [ebx + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x14
        ; Exact mapped bytes 8B 95 F0 00 00 00: mov edx, dword ptr [ebp + 0xf0]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 68 8C D1 98 58: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0xd1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 6A 18: push 0x18
        __asm _emit 0x6a
        __asm _emit 0x18
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 9A 9E EB FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x9e
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 39 0D 80 45 A2 58: cmp dword ptr [0x58a24580], ecx
        __asm _emit 0x39
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 06: jne 0x58891bdd
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 C3 C9 FF FF: call 0x5888e5a0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 87 5C F2 FF: call 0x587b7870
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x5c
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 89 02 00 00: je 0x58891e7a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B B5 50 01 00 00: mov esi, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0xb5
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 80 00 00 00: mov edx, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 8D 78 01: lea edi, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0x01
        ; Exact mapped bytes 8A 08: mov cl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 75 F9: jne 0x58891c02
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 2B C7: sub eax, edi
        __asm _emit 0x2b
        __asm _emit 0xc7
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 86 C6 01 00 00: jbe 0x58891ddd
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 3C 0A 20: cmp byte ptr [edx + ecx], 0x20
        __asm _emit 0x80
        __asm _emit 0x3c
        __asm _emit 0x0a
        __asm _emit 0x20
        ; Exact mapped bytes 0F 85 BC 01 00 00: jne 0x58891ddd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 30: push 0x30
        __asm _emit 0x6a
        __asm _emit 0x30
        ; Exact mapped bytes 8D 44 24 58: lea eax, [esp + 0x58]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 19 B0 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xb0
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes A1 58 B4 A0 58: mov eax, dword ptr [0x58a0b458]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 50 B4 A0 58: mov ecx, dword ptr [0x58a0b450]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 54 B4 A0 58: mov edx, dword ptr [0x58a0b454]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 44 24 68: mov dword ptr [esp + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        ; Exact mapped bytes A1 64 B4 A0 58: mov eax, dword ptr [0x58a0b464]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 4C 24 60: mov dword ptr [esp + 0x60], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x60
        ; Exact mapped bytes 8B 0D 5C B4 A0 58: mov ecx, dword ptr [0x58a0b45c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 54 24 64: mov dword ptr [esp + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x64
        ; Exact mapped bytes 8B 15 60 B4 A0 58: mov edx, dword ptr [0x58a0b460]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 44 24 74: mov dword ptr [esp + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x74
        ; Exact mapped bytes 8B 43 08: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x08
        ; Exact mapped bytes 89 4C 24 6C: mov dword ptr [esp + 0x6c], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x6c
        ; Exact mapped bytes 8B 0B: mov ecx, dword ptr [ebx]
        __asm _emit 0x8b
        __asm _emit 0x0b
        ; Exact mapped bytes 89 54 24 70: mov dword ptr [esp + 0x70], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x70
        ; Exact mapped bytes 8B 53 04: mov edx, dword ptr [ebx + 4]
        __asm _emit 0x8b
        __asm _emit 0x53
        __asm _emit 0x04
        ; Exact mapped bytes 89 84 24 80 00 00 00: mov dword ptr [esp + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 43 14: mov eax, dword ptr [ebx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x14
        ; Exact mapped bytes 89 4C 24 78: mov dword ptr [esp + 0x78], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x78
        ; Exact mapped bytes 8B 4B 0C: mov ecx, dword ptr [ebx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0x0c
        ; Exact mapped bytes 89 54 24 7C: mov dword ptr [esp + 0x7c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x7c
        ; Exact mapped bytes 8B 53 10: mov edx, dword ptr [ebx + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x53
        __asm _emit 0x10
        ; Exact mapped bytes 89 84 24 8C 00 00 00: mov dword ptr [esp + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 80 00 00 00: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 89 4C 24 78: mov dword ptr [esp + 0x78], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x78
        ; Exact mapped bytes 89 54 24 7C: mov dword ptr [esp + 0x7c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x7c
        ; Exact mapped bytes 8D 70 01: lea esi, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0x01
        ; Exact mapped bytes 8A 08: mov cl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 75 F9: jne 0x58891ca4
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 2B C6: sub eax, esi
        __asm _emit 0x2b
        __asm _emit 0xc6
        ; Exact mapped bytes 2B 44 24 10: sub eax, dword ptr [esp + 0x10]
        __asm _emit 0x2b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 83 C0 30: add eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x30
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 89 74 24 1C: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes E8 6E F8 0D 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf8
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 7C 24 24: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes E8 79 AF 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xaf
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes B9 0C 00 00 00: mov ecx, 0xc
        __asm _emit 0xb9
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 74 24 64: lea esi, [esp + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x64
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 8B 74 24 28: mov esi, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 8B 95 50 01 00 00: mov edx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 80 00 00 00: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7C 24 24: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8D 4E D0: lea ecx, [esi - 0x30]
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0xd0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 24: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8D 54 08 01: lea edx, [eax + ecx + 1]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x01
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 47 30: lea eax, [edi + 0x30]
        __asm _emit 0x8d
        __asm _emit 0x47
        __asm _emit 0x30
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 48 B0 0E 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xb0
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 1C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x1c
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 8A 64 F2 FF: call 0x587b81a0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x64
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 1F: jne 0x58891d39
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 98 C5 99 58: push 0x5899c598
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xc5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 17 B5 FF FF: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 BC 00 00 00 05 00 00 00: mov dword ptr [ebp + 0xbc], 5
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 B8 00 00 00 02 00 00 00: mov dword ptr [ebp + 0xb8], 2
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes E8 24 3F F5 FF: call 0x587e5c80
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x3f
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes E8 F7 5E F5 FF: call 0x587e7c60
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x5e
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF 03 00 00: push 0x3ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8C 24 6D 12 00 00: lea ecx, [esp + 0x126d]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x6d
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes C6 84 24 74 12 00 00 00: mov byte ptr [esp + 0x1274], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C3 AE 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xae
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 B8 C0 99 58: push 0x5899c0b8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0xc0
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 94 24 70 12 00 00: lea edx, [esp + 0x1270]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 04 00 00: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 B6 9C EB FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x9c
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 54 01 00 00: mov ecx, dword ptr [ebp + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 8D 84 24 68 12 00 00: lea eax, [esp + 0x1268]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 C0 EC ED FF: call 0x58770a80
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xec
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 50 01 00 00: mov ecx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 75 DB EC FF: call 0x5875f940
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xdb
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 24 14: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 6D AE 0E 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xae
        __asm _emit 0x0e
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891DD5 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_58890110_segment_10() {
    __asm {
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes E9 BA 0B 00 00: jmp 0x58892997
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891DDD .. +0x34C bytes.
extern "C" __declspec(naked) void FUN_58890110_segment_11() {
    __asm {
        ; Exact mapped bytes 8A 54 0A 01: mov dl, byte ptr [edx + ecx + 1]
        __asm _emit 0x8a
        __asm _emit 0x54
        __asm _emit 0x0a
        __asm _emit 0x01
        ; Exact mapped bytes 80 FA 20: cmp dl, 0x20
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x20
        ; Exact mapped bytes 74 08: je 0x58891dee
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 85 A9 0B 00 00: jne 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa9
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 B8 00 00 00 02 00 00 00: mov dword ptr [ebp + 0xb8], 2
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 BC 00 00 00 05 00 00 00: mov dword ptr [ebp + 0xbc], 5
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes E8 6F 3E F5 FF: call 0x587e5c80
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x3e
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes E8 42 5E F5 FF: call 0x587e7c60
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x5e
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF 03 00 00: push 0x3ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 94 24 6D 0A 00 00: lea edx, [esp + 0xa6d]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x6d
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes C6 84 24 74 0A 00 00 00: mov byte ptr [esp + 0xa74], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0E AE 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xae
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 B8 C0 99 58: push 0x5899c0b8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0xc0
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 84 24 70 0A 00 00: lea eax, [esp + 0xa70]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 04 00 00: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 01 9C EB FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x9c
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 8D 8C 24 68 0A 00 00: lea ecx, [esp + 0xa68]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 54 01 00 00: mov ecx, dword ptr [ebp + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0B EC ED FF: call 0x58770a80
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xec
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes E9 12 0B 00 00: jmp 0x5889298c
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 80 C6 99 58: push 0x5899c680
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0xc6
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E9 EE 0A 00 00: jmp 0x58892987
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 75 58: jne 0x58891ef6
        __asm _emit 0x75
        __asm _emit 0x58
        ; Exact mapped bytes 8A 4E 01: mov cl, byte ptr [esi + 1]
        __asm _emit 0x8a
        __asm _emit 0x4e
        __asm _emit 0x01
        ; Exact mapped bytes 80 F9 65: cmp cl, 0x65
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x65
        ; Exact mapped bytes 75 0B: jne 0x58891eb1
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8A 46 02: mov al, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x02
        ; Exact mapped bytes 3C 20: cmp al, 0x20
        __asm _emit 0x3c
        __asm _emit 0x20
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x58891f34
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 75 40: jne 0x58891ef6
        __asm _emit 0x75
        __asm _emit 0x40
        ; Exact mapped bytes 8A 4E 01: mov cl, byte ptr [esi + 1]
        __asm _emit 0x8a
        __asm _emit 0x4e
        __asm _emit 0x01
        ; Exact mapped bytes 80 F9 65: cmp cl, 0x65
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x65
        ; Exact mapped bytes 75 1E: jne 0x58891edc
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 8A 46 02: mov al, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x02
        ; Exact mapped bytes 3C 6E: cmp al, 0x6e
        __asm _emit 0x3c
        __asm _emit 0x6e
        ; Exact mapped bytes 75 17: jne 0x58891edc
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes 80 7E 03 74: cmp byte ptr [esi + 3], 0x74
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x74
        ; Exact mapped bytes 75 11: jne 0x58891edc
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 38 4E 04: cmp byte ptr [esi + 4], cl
        __asm _emit 0x38
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 75 0C: jne 0x58891edc
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 80 7E 05 72: cmp byte ptr [esi + 5], 0x72
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x05
        __asm _emit 0x72
        ; Exact mapped bytes 75 06: jne 0x58891edc
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 80 7E 06 20: cmp byte ptr [esi + 6], 0x20
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x06
        __asm _emit 0x20
        ; Exact mapped bytes 74 58: je 0x58891f34
        __asm _emit 0x74
        __asm _emit 0x58
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 75 15: jne 0x58891ef6
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 8A 4E 01: mov cl, byte ptr [esi + 1]
        __asm _emit 0x8a
        __asm _emit 0x4e
        __asm _emit 0x01
        ; Exact mapped bytes 80 F9 A4: cmp cl, 0xa4
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0xa4
        ; Exact mapped bytes 75 0D: jne 0x58891ef6
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes 8A 46 02: mov al, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x02
        ; Exact mapped bytes 3C A7: cmp al, 0xa7
        __asm _emit 0x3c
        __asm _emit 0xa7
        ; Exact mapped bytes 75 06: jne 0x58891ef6
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 80 7E 03 20: cmp byte ptr [esi + 3], 0x20
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x20
        ; Exact mapped bytes 74 3E: je 0x58891f34
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes B3 E5: mov bl, 0xe5
        __asm _emit 0xb3
        __asm _emit 0xe5
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 96 0A 00 00: jne 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 4E 01: mov cl, byte ptr [esi + 1]
        __asm _emit 0x8a
        __asm _emit 0x4e
        __asm _emit 0x01
        ; Exact mapped bytes 80 F9 C0: cmp cl, 0xc0
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 8B 03 00 00: jne 0x58892298
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 46 02: mov al, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x02
        ; Exact mapped bytes 3C D4: cmp al, 0xd4
        __asm _emit 0x3c
        __asm _emit 0xd4
        ; Exact mapped bytes 0F 85 80 03 00 00: jne 0x58892298
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 38 4E 03: cmp byte ptr [esi + 3], cl
        __asm _emit 0x38
        __asm _emit 0x4e
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 77 03 00 00: jne 0x58892298
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 38 5E 04: cmp byte ptr [esi + 4], bl
        __asm _emit 0x38
        __asm _emit 0x5e
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 6E 03 00 00: jne 0x58892298
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 05 20: cmp byte ptr [esi + 5], 0x20
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x05
        __asm _emit 0x20
        ; Exact mapped bytes 0F 85 64 03 00 00: jne 0x58892298
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 3C 6E: cmp al, 0x6e
        __asm _emit 0x3c
        __asm _emit 0x6e
        ; Exact mapped bytes 75 05: jne 0x58891f3f
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes 8D 5F 07: lea ebx, [edi + 7]
        __asm _emit 0x8d
        __asm _emit 0x5f
        __asm _emit 0x07
        ; Exact mapped bytes EB 1B: jmp 0x58891f5a
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 80 F9 A4: cmp cl, 0xa4
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0xa4
        ; Exact mapped bytes 75 07: jne 0x58891f4b
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes BB 04 00 00 00: mov ebx, 4
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0F: jmp 0x58891f5a
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 80 F9 C0: cmp cl, 0xc0
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 95 C3: setne bl
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc3
        ; Exact mapped bytes 4B: dec ebx
        __asm _emit 0x4b
        ; Exact mapped bytes 83 E3 03: and ebx, 3
        __asm _emit 0x83
        __asm _emit 0xe3
        __asm _emit 0x03
        ; Exact mapped bytes 83 C3 03: add ebx, 3
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x03
        ; Exact mapped bytes 8A 14 1E: mov dl, byte ptr [esi + ebx]
        __asm _emit 0x8a
        __asm _emit 0x14
        __asm _emit 0x1e
        ; Exact mapped bytes 03 F3: add esi, ebx
        __asm _emit 0x03
        __asm _emit 0xf3
        ; Exact mapped bytes 80 FA 20: cmp dl, 0x20
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x20
        ; Exact mapped bytes 0F 84 2F 0A 00 00: je 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 84 1F 0A 00 00: je 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 01: mov al, byte ptr [ecx]
        __asm _emit 0x8a
        __asm _emit 0x01
        ; Exact mapped bytes 3C 20: cmp al, 0x20
        __asm _emit 0x3c
        __asm _emit 0x20
        ; Exact mapped bytes 74 2D: je 0x58891fab
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 74 29: je 0x58891fab
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 3C 30: cmp al, 0x30
        __asm _emit 0x3c
        __asm _emit 0x30
        ; Exact mapped bytes 0F 8C 0D 0A 00 00: jl 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x0d
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3C 39: cmp al, 0x39
        __asm _emit 0x3c
        __asm _emit 0x39
        ; Exact mapped bytes 0F 8F 05 0A 00 00: jg 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x05
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 50 01 00 00: mov eax, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 80 00 00 00: mov eax, dword ptr [eax + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 80 3C 03 20: cmp byte ptr [ebx + eax], 0x20
        __asm _emit 0x80
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x20
        ; Exact mapped bytes 75 CA: jne 0x58891f70
        __asm _emit 0x75
        __asm _emit 0xca
        ; Exact mapped bytes E9 EC 09 00 00: jmp 0x58892997
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 04 00 00: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8C 24 6C 0E 00 00: lea ecx, [esp + 0xe6c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x6c
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 89 7C 24 1C: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes E8 85 AC 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 95 F0 00 00 00: mov edx, dword ptr [ebp + 0xf0]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D BD D8 00 00 00: lea edi, [ebp + 0xd8]
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 95 F4 00 00 00: mov dword ptr [ebp + 0xf4], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 F0 00 00 00 00 00 00 00: mov dword ptr [ebp + 0xf0], 0
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 07: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        ; Exact mapped bytes 89 47 04: mov dword ptr [edi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 08: mov dword ptr [edi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8D B5 C0 00 00 00: lea esi, [ebp + 0xc0]
        __asm _emit 0x8d
        __asm _emit 0xb5
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 47 10: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 89 47 14: mov dword ptr [edi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x14
        ; Exact mapped bytes C7 44 24 18 18 00 00 00: mov dword ptr [esp + 0x18], 0x18
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 2B CF: sub ecx, edi
        __asm _emit 0x2b
        __asm _emit 0xcf
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 18: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 81 C2 E6 FF FF 7F: add edx, 0x7fffffe6
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 74 13: je 0x5889202f
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 8A 14 01: mov dl, byte ptr [ecx + eax]
        __asm _emit 0x8a
        __asm _emit 0x14
        __asm _emit 0x01
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 74 0C: je 0x5889202f
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 88 10: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 6C 24 18 01: sub dword ptr [esp + 0x18], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        ; Exact mapped bytes 75 E3: jne 0x58892010
        __asm _emit 0x75
        __asm _emit 0xe3
        ; Exact mapped bytes EB 07: jmp 0x58892036
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 83 7C 24 18 00: cmp dword ptr [esp + 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 75 01: jne 0x58892037
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes C7 44 24 18 00 00 00 00: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 8E 6A 00 00 00: jle 0x588920b8
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 44 24 14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DD 05 38 CB 98 58: fld qword ptr [0x5898cb38]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 83 EC 08: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x08
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 C7 86 EA FF: call 0x5873a730
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 50 01 00 00: mov eax, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 80 00 00 00: mov ecx, dword ptr [eax + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 4C 24 24: add ecx, dword ptr [esp + 0x24]
        __asm _emit 0x03
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 0F BE 14 19: movsx edx, byte ptr [ecx + ebx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x19
        ; Exact mapped bytes 83 EA 30: sub edx, 0x30
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x30
        ; Exact mapped bytes 89 54 24 1C: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DB 44 24 1C: fild dword ptr [esp + 0x1c]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DE C9: fmulp st(1)
        __asm _emit 0xde
        __asm _emit 0xc9
        ; Exact mapped bytes DA 85 F0 00 00 00: fiadd dword ptr [ebp + 0xf0]
        __asm _emit 0xda
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 08 AC 0E 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xac
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 3D FF FF 00 00: cmp eax, 0xffff
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 F0 00 00 00: mov dword ptr [ebp + 0xf0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 13: jg 0x588920b8
        __asm _emit 0x7f
        __asm _emit 0x13
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes FF 4C 24 14: dec dword ptr [esp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 3B 44 24 10: cmp eax, dword ptr [esp + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 7C 9B: jl 0x58892053
        __asm _emit 0x7c
        __asm _emit 0x9b
        ; Exact mapped bytes A1 80 45 A2 58: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 9C 45 A2 58: cmp eax, dword ptr [0x58a2459c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 42: jne 0x58892107
        __asm _emit 0x75
        __asm _emit 0x42
        ; Exact mapped bytes 81 BD F0 00 00 00 FF FF 00 00: cmp dword ptr [ebp + 0xf0], 0xffff
        __asm _emit 0x81
        __asm _emit 0xbd
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 36: jg 0x58892107
        __asm _emit 0x7f
        __asm _emit 0x36
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 06: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        ; Exact mapped bytes 89 46 04: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 89 46 08: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 89 46 0C: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0c
        ; Exact mapped bytes 89 46 10: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        ; Exact mapped bytes 89 46 14: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        ; Exact mapped bytes 8B 8D F0 00 00 00: mov ecx, dword ptr [ebp + 0xf0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 68 8C D1 98 58: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0xd1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 6A 18: push 0x18
        __asm _emit 0x6a
        __asm _emit 0x18
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 68 99 EB FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 99 C4 FF FF: call 0x5888e5a0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 50 01 00 00: mov ecx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 80 00 00 00: mov eax, dword ptr [ecx + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 3C 18 20: cmp byte ptr [eax + ebx], 0x20
        __asm _emit 0x80
        __asm _emit 0x3c
        __asm _emit 0x18
        __asm _emit 0x20
        ; Exact mapped bytes 75 36: jne 0x5889214f
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 80 3C 18 00: cmp byte ptr [eax + ebx], 0
        __asm _emit 0x80
        __asm _emit 0x3c
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 74 2F: je 0x5889214f
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 8D 84 24 68 0E 00 00: lea eax, [esp + 0xe68]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x58892130
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892130 .. +0x9DA bytes.
extern "C" __declspec(naked) void FUN_58890110_segment_12() {
    __asm {
        ; Exact mapped bytes 8B 91 80 00 00 00: mov edx, dword ptr [ecx + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 14 13: mov dl, byte ptr [ebx + edx]
        __asm _emit 0x8a
        __asm _emit 0x14
        __asm _emit 0x13
        ; Exact mapped bytes 88 10: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        ; Exact mapped bytes 8B 95 50 01 00 00: mov edx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 92 80 00 00 00: mov edx, dword ptr [edx + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 80 3C 13 00: cmp byte ptr [ebx + edx], 0
        __asm _emit 0x80
        __asm _emit 0x3c
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 75 E1: jne 0x58892130
        __asm _emit 0x75
        __asm _emit 0xe1
        ; Exact mapped bytes 81 BD F0 00 00 00 FF FF 00 00: cmp dword ptr [ebp + 0xf0], 0xffff
        __asm _emit 0x81
        __asm _emit 0xbd
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 6B: jg 0x588921c6
        __asm _emit 0x7f
        __asm _emit 0x6b
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 06: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        ; Exact mapped bytes 89 46 04: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 89 46 08: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 89 46 0C: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0c
        ; Exact mapped bytes 89 46 10: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        ; Exact mapped bytes 89 46 14: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        ; Exact mapped bytes 8B 85 F0 00 00 00: mov eax, dword ptr [ebp + 0xf0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 8C D1 98 58: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0xd1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 6A 18: push 0x18
        __asm _emit 0x6a
        __asm _emit 0x18
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 DE 98 EB FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x98
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 8D 84 24 78 0E 00 00: lea eax, [esp + 0xe78]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x78
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 8D 50 01: lea edx, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8A 08: mov cl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 75 F9: jne 0x58892190
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 12: jne 0x588921ad
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 C8 5C F2 FF: call 0x587b7e70
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x5c
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes E9 DF 07 00 00: jmp 0x5889298c
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8C 24 68 0E 00 00: lea ecx, [esp + 0xe68]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 AF 5C F2 FF: call 0x587b7e70
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x5c
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes E9 C6 07 00 00: jmp 0x5889298c
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 FE 56 F2 FF: call 0x587b78d0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x56
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 6A: je 0x58892240
        __asm _emit 0x74
        __asm _emit 0x6a
        ; Exact mapped bytes 8B 95 F4 00 00 00: mov edx, dword ptr [ebp + 0xf4]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 95 F0 00 00 00: mov dword ptr [ebp + 0xf0], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 06: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        ; Exact mapped bytes 89 46 04: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 89 46 08: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 89 46 0C: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0c
        ; Exact mapped bytes 89 46 10: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        ; Exact mapped bytes 89 46 14: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        ; Exact mapped bytes BA 18 00 00 00: mov edx, 0x18
        __asm _emit 0xba
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 2B FE: sub edi, esi
        __asm _emit 0x2b
        __asm _emit 0xfe
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 8D 8A E6 FF FF 7F: lea ecx, [edx + 0x7fffffe6]
        __asm _emit 0x8d
        __asm _emit 0x8a
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5889221b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0C 38: mov cl, byte ptr [eax + edi]
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x38
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0A: je 0x5889221b
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x58892200
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5889221f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 01: jne 0x58892220
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 0D 80 45 A2 58: cmp dword ptr [0x58a24580], ecx
        __asm _emit 0x39
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 62 07 00 00: jne 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x62
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 65 C3 FF FF: call 0x5888e5a0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 57 07 00 00: jmp 0x58892997
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 04 00 00: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 94 24 6C 1A 00 00: lea edx, [esp + 0x1a6c]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x6c
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 F4 A9 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xa9
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 68 FF FF 00 00: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 AC C6 99 58: push 0x5899c6ac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0xc6
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 84 24 70 1A 00 00: lea eax, [esp + 0x1a70]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 04 00 00: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E3 97 EB FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x97
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 8D 8C 24 68 1A 00 00: lea ecx, [esp + 0x1a68]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E9 EF 06 00 00: jmp 0x58892987
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 F6 06 00 00: jne 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 4E 01: mov cl, byte ptr [esi + 1]
        __asm _emit 0x8a
        __asm _emit 0x4e
        __asm _emit 0x01
        ; Exact mapped bytes 80 F9 78: cmp cl, 0x78
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x78
        ; Exact mapped bytes 75 0B: jne 0x588922b4
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8A 46 02: mov al, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x02
        ; Exact mapped bytes 3C 20: cmp al, 0x20
        __asm _emit 0x3c
        __asm _emit 0x20
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x58892339
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 DA 06 00 00: jne 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 4E 01: mov cl, byte ptr [esi + 1]
        __asm _emit 0x8a
        __asm _emit 0x4e
        __asm _emit 0x01
        ; Exact mapped bytes 80 F9 65: cmp cl, 0x65
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x65
        ; Exact mapped bytes 75 19: jne 0x588922de
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 8A 46 02: mov al, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x02
        ; Exact mapped bytes 3C 78: cmp al, 0x78
        __asm _emit 0x3c
        __asm _emit 0x78
        ; Exact mapped bytes 75 12: jne 0x588922de
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 80 7E 03 69: cmp byte ptr [esi + 3], 0x69
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x69
        ; Exact mapped bytes 75 0C: jne 0x588922de
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 80 7E 04 74: cmp byte ptr [esi + 4], 0x74
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x74
        ; Exact mapped bytes 75 06: jne 0x588922de
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 80 7E 05 20: cmp byte ptr [esi + 5], 0x20
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x05
        __asm _emit 0x20
        ; Exact mapped bytes 74 5B: je 0x58892339
        __asm _emit 0x74
        __asm _emit 0x5b
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 B0 06 00 00: jne 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 4E 01: mov cl, byte ptr [esi + 1]
        __asm _emit 0x8a
        __asm _emit 0x4e
        __asm _emit 0x01
        ; Exact mapped bytes 80 F9 A4: cmp cl, 0xa4
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0xa4
        ; Exact mapped bytes 75 0D: jne 0x588922fc
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes 8A 46 02: mov al, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x02
        ; Exact mapped bytes 3C BC: cmp al, 0xbc
        __asm _emit 0x3c
        __asm _emit 0xbc
        ; Exact mapped bytes 75 06: jne 0x588922fc
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 80 7E 03 20: cmp byte ptr [esi + 3], 0x20
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x20
        ; Exact mapped bytes 74 3D: je 0x58892339
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 92 06 00 00: jne 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 4E 01: mov cl, byte ptr [esi + 1]
        __asm _emit 0x8a
        __asm _emit 0x4e
        __asm _emit 0x01
        ; Exact mapped bytes 80 F9 C5: cmp cl, 0xc5
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 85 51 01 00 00: jne 0x58892462
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 46 02: mov al, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x02
        ; Exact mapped bytes 3C F0: cmp al, 0xf0
        __asm _emit 0x3c
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 85 46 01 00 00: jne 0x58892462
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 03 C0: cmp byte ptr [esi + 3], 0xc0
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 3C 01 00 00: jne 0x58892462
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 38 5E 04: cmp byte ptr [esi + 4], bl
        __asm _emit 0x38
        __asm _emit 0x5e
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 33 01 00 00: jne 0x58892462
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 05 20: cmp byte ptr [esi + 5], 0x20
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x05
        __asm _emit 0x20
        ; Exact mapped bytes 0F 85 29 01 00 00: jne 0x58892462
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3C 78: cmp al, 0x78
        __asm _emit 0x3c
        __asm _emit 0x78
        ; Exact mapped bytes 75 07: jne 0x58892344
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes BB 06 00 00 00: mov ebx, 6
        __asm _emit 0xbb
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1B: jmp 0x5889235f
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 80 F9 A4: cmp cl, 0xa4
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0xa4
        ; Exact mapped bytes 75 07: jne 0x58892350
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes BB 04 00 00 00: mov ebx, 4
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0F: jmp 0x5889235f
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 80 F9 C5: cmp cl, 0xc5
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 95 C3: setne bl
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc3
        ; Exact mapped bytes 4B: dec ebx
        __asm _emit 0x4b
        ; Exact mapped bytes 83 E3 03: and ebx, 3
        __asm _emit 0x83
        __asm _emit 0xe3
        __asm _emit 0x03
        ; Exact mapped bytes 83 C3 03: add ebx, 3
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x03
        ; Exact mapped bytes 8A 14 1E: mov dl, byte ptr [esi + ebx]
        __asm _emit 0x8a
        __asm _emit 0x14
        __asm _emit 0x1e
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes 80 FA 20: cmp dl, 0x20
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x20
        ; Exact mapped bytes 0F 84 2A 06 00 00: je 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 84 1F 06 00 00: je 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 04 0E: mov al, byte ptr [esi + ecx]
        __asm _emit 0x8a
        __asm _emit 0x04
        __asm _emit 0x0e
        ; Exact mapped bytes 3C 20: cmp al, 0x20
        __asm _emit 0x3c
        __asm _emit 0x20
        ; Exact mapped bytes 74 2C: je 0x588923ab
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x588923ab
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 3C 30: cmp al, 0x30
        __asm _emit 0x3c
        __asm _emit 0x30
        ; Exact mapped bytes 0F 8C 0C 06 00 00: jl 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3C 39: cmp al, 0x39
        __asm _emit 0x3c
        __asm _emit 0x39
        ; Exact mapped bytes 0F 8F 04 06 00 00: jg 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 50 01 00 00: mov eax, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 80 00 00 00: mov eax, dword ptr [eax + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 80 3C 03 20: cmp byte ptr [ebx + eax], 0x20
        __asm _emit 0x80
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x20
        ; Exact mapped bytes 75 CA: jne 0x58892370
        __asm _emit 0x75
        __asm _emit 0xca
        ; Exact mapped bytes E9 EC 05 00 00: jmp 0x58892997
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B D9: cmp ebx, ecx
        __asm _emit 0x3b
        __asm _emit 0xd9
        ; Exact mapped bytes 89 4C 24 10: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 7D 4D: jge 0x58892406
        __asm _emit 0x7d
        __asm _emit 0x4d
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 2B FB: sub edi, ebx
        __asm _emit 0x2b
        __asm _emit 0xfb
        ; Exact mapped bytes 4F: dec edi
        __asm _emit 0x4f
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes DD 05 38 CB 98 58: fld qword ptr [0x5898cb38]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 83 EC 08: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x08
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 5E 83 EA FF: call 0x5873a730
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 0F BE 0C 1E: movsx ecx, byte ptr [esi + ebx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x1e
        ; Exact mapped bytes 83 E9 30: sub ecx, 0x30
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x30
        ; Exact mapped bytes 89 4C 24 28: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes DB 44 24 1C: fild dword ptr [esp + 0x1c]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DE C9: fmulp st(1)
        __asm _emit 0xde
        __asm _emit 0xc9
        ; Exact mapped bytes DA 44 24 14: fiadd dword ptr [esp + 0x14]
        __asm _emit 0xda
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 B1 A8 0E 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa8
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 4F: dec edi
        __asm _emit 0x4f
        ; Exact mapped bytes 3B 5C 24 10: cmp ebx, dword ptr [esp + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 7C C5: jl 0x588923c0
        __asm _emit 0x7c
        __asm _emit 0xc5
        ; Exact mapped bytes 3D FF FF 00 00: cmp eax, 0xffff
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8F 86 05 00 00: jg 0x5889298c
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 68 8C D1 98 58: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0xd1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8D 94 24 DC 01 00 00: lea edx, [esp + 0x1dc]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 18: push 0x18
        __asm _emit 0x6a
        __asm _emit 0x18
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 89 8C 24 E4 01 00 00: mov dword ptr [esp + 0x1e4], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8C 24 E8 01 00 00: mov dword ptr [esp + 0x1e8], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8C 24 EC 01 00 00: mov dword ptr [esp + 0x1ec], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8C 24 F0 01 00 00: mov dword ptr [esp + 0x1f0], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8C 24 F4 01 00 00: mov dword ptr [esp + 0x1f4], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8C 24 F8 01 00 00: mov dword ptr [esp + 0x1f8], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 19 96 EB FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x96
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 8D 84 24 D4 01 00 00: lea eax, [esp + 0x1d4]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 73 5B F2 FF: call 0x587b7fd0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x5b
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes E9 2A 05 00 00: jmp 0x5889298c
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 2C 05 00 00: jne 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 01 75: cmp byte ptr [esi + 1], 0x75
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x75
        ; Exact mapped bytes 75 18: jne 0x58892489
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 80 7E 02 73: cmp byte ptr [esi + 2], 0x73
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x73
        ; Exact mapped bytes 75 12: jne 0x58892489
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 80 7E 03 65: cmp byte ptr [esi + 3], 0x65
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x65
        ; Exact mapped bytes 75 0C: jne 0x58892489
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 80 7E 04 72: cmp byte ptr [esi + 4], 0x72
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x72
        ; Exact mapped bytes 75 06: jne 0x58892489
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 80 7E 05 20: cmp byte ptr [esi + 5], 0x20
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x05
        __asm _emit 0x20
        ; Exact mapped bytes 74 3B: je 0x588924c4
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 05 05 00 00: jne 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 01 C0: cmp byte ptr [esi + 1], 0xc0
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 2F 03 00 00: jne 0x588927cb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 02 AF: cmp byte ptr [esi + 2], 0xaf
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0xaf
        ; Exact mapped bytes 0F 85 25 03 00 00: jne 0x588927cb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 03 C0: cmp byte ptr [esi + 3], 0xc0
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 1B 03 00 00: jne 0x588927cb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 04 FA: cmp byte ptr [esi + 4], 0xfa
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0xfa
        ; Exact mapped bytes 0F 85 11 03 00 00: jne 0x588927cb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 05 20: cmp byte ptr [esi + 5], 0x20
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x05
        __asm _emit 0x20
        ; Exact mapped bytes 0F 85 07 03 00 00: jne 0x588927cb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 32: push 0x32
        __asm _emit 0x6a
        __asm _emit 0x32
        ; Exact mapped bytes 8D 8C 24 38 02 00 00: lea ecx, [esp + 0x238]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 73 A7 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xa7
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 83 C0 06: add eax, 6
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x06
        ; Exact mapped bytes BE 32 00 00 00: mov esi, 0x32
        __asm _emit 0xbe
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8C 24 34 02 00 00: lea ecx, [esp + 0x234]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 96 CC FF FF 7F: lea edx, [esi + 0x7fffffcc]
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 11: je 0x5889250b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 10: mov dl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x10
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 74 0B: je 0x5889250b
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 11: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x588924f0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5889250f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x58892510
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 8D 84 24 34 02 00 00: lea eax, [esp + 0x234]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 32: push 0x32
        __asm _emit 0x6a
        __asm _emit 0x32
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes C6 01 00: mov byte ptr [ecx], 0
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 D4 AA 0E 00: call 0x5897cff6
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xaa
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 A4 C1 98 58: mov esi, dword ptr [0x5898c1a4]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 68 58 C1 99 58: push 0x5899c158
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0xc1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8D 8C 24 38 02 00 00: lea ecx, [esp + 0x238]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 75 02 00 00: je 0x588927b7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 50 C1 99 58: push 0x5899c150
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xc1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8D 94 24 38 02 00 00: lea edx, [esp + 0x238]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 5E 02 00 00: je 0x588927b7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 48 C1 99 58: push 0x5899c148
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xc1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8D 84 24 38 02 00 00: lea eax, [esp + 0x238]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 47 02 00 00: je 0x588927b7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 44 C1 99 58: mov ecx, 0x5899c144
        __asm _emit 0xb9
        __asm _emit 0x44
        __asm _emit 0xc1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8D 84 24 34 02 00 00: lea eax, [esp + 0x234]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 8A 10: mov dl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x10
        ; Exact mapped bytes 3A 11: cmp dl, byte ptr [ecx]
        __asm _emit 0x3a
        __asm _emit 0x11
        ; Exact mapped bytes 75 1A: jne 0x588925a0
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 74 12: je 0x5889259c
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8A 50 01: mov dl, byte ptr [eax + 1]
        __asm _emit 0x8a
        __asm _emit 0x50
        __asm _emit 0x01
        ; Exact mapped bytes 3A 51 01: cmp dl, byte ptr [ecx + 1]
        __asm _emit 0x3a
        __asm _emit 0x51
        __asm _emit 0x01
        ; Exact mapped bytes 75 0E: jne 0x588925a0
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 83 C0 02: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x02
        ; Exact mapped bytes 83 C1 02: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x02
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 75 E4: jne 0x58892580
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 05: jmp 0x588925a5
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes 1B C0: sbb eax, eax
        __asm _emit 0x1b
        __asm _emit 0xc0
        ; Exact mapped bytes 83 D8 FF: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xd8
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 0A 02 00 00: je 0x588927b7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 40 C1 99 58: push 0x5899c140
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xc1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8D 8C 24 38 02 00 00: lea ecx, [esp + 0x238]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 DF 01 00 00: je 0x588927a3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 30 C1 99 58: push 0x5899c130
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0xc1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8D 94 24 38 02 00 00: lea edx, [esp + 0x238]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 C8 01 00 00: je 0x588927a3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 28 C1 99 58: push 0x5899c128
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0xc1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8D 84 24 38 02 00 00: lea eax, [esp + 0x238]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 B1 01 00 00: je 0x588927a3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 1C C1 99 58: push 0x5899c11c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0xc1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8D 8C 24 38 02 00 00: lea ecx, [esp + 0x238]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 9A 01 00 00: je 0x588927a3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 14 C1 99 58: push 0x5899c114
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0xc1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8D 94 24 38 02 00 00: lea edx, [esp + 0x238]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 83 01 00 00: je 0x588927a3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 10 C1 99 58: push 0x5899c110
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0xc1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8D 84 24 38 02 00 00: lea eax, [esp + 0x238]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 58 01 00 00: je 0x5889278f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 04 C1 99 58: push 0x5899c104
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0xc1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8D 8C 24 38 02 00 00: lea ecx, [esp + 0x238]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 41 01 00 00: je 0x5889278f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC C0 99 58: push 0x5899c0fc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0xc0
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8D 94 24 38 02 00 00: lea edx, [esp + 0x238]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 2A 01 00 00: je 0x5889278f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 F8 C0 99 58: push 0x5899c0f8
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0xc0
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8D 84 24 38 02 00 00: lea eax, [esp + 0x238]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 13 01 00 00: je 0x5889278f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 50 01 00 00: mov ecx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 80 00 00 00: mov ecx, dword ptr [ecx + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8D 59 06: lea ebx, [ecx + 6]
        __asm _emit 0x8d
        __asm _emit 0x59
        __asm _emit 0x06
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 80 3B 20: cmp byte ptr [ebx], 0x20
        __asm _emit 0x80
        __asm _emit 0x3b
        __asm _emit 0x20
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 74 2D: je 0x588926c5
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 8A 0C 33: mov cl, byte ptr [ebx + esi]
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x33
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 26: je 0x588926c5
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 80 F9 30: cmp cl, 0x30
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x30
        ; Exact mapped bytes 0F 8C D2 00 00 00: jl 0x5889277a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 F9 39: cmp cl, 0x39
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x39
        ; Exact mapped bytes 0F 8F C9 00 00 00: jg 0x5889277a
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 95 50 01 00 00: mov edx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8A 80 00 00 00: mov ecx, dword ptr [edx + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes 80 7C 31 06 20: cmp byte ptr [ecx + esi + 6], 0x20
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x31
        __asm _emit 0x06
        __asm _emit 0x20
        ; Exact mapped bytes 75 D3: jne 0x58892698
        __asm _emit 0x75
        __asm _emit 0xd3
        ; Exact mapped bytes 3B F0: cmp esi, eax
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 7E 4F: jle 0x5889271c
        __asm _emit 0x7e
        __asm _emit 0x4f
        ; Exact mapped bytes 8D 7E FF: lea edi, [esi - 1]
        __asm _emit 0x8d
        __asm _emit 0x7e
        __asm _emit 0xff
        ; Exact mapped bytes DD 05 38 CB 98 58: fld qword ptr [0x5898cb38]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 83 EC 08: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x08
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 4E 80 EA FF: call 0x5873a730
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x80
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 0F BE 13: movsx edx, byte ptr [ebx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x13
        ; Exact mapped bytes 83 EA 30: sub edx, 0x30
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x30
        ; Exact mapped bytes 89 54 24 28: mov dword ptr [esp + 0x28], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes DB 44 24 1C: fild dword ptr [esp + 0x1c]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DE C9: fmulp st(1)
        __asm _emit 0xde
        __asm _emit 0xc9
        ; Exact mapped bytes DA 44 24 14: fiadd dword ptr [esp + 0x14]
        __asm _emit 0xda
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 A2 A5 0E 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xa5
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 3D FF FF 00 00: cmp eax, 0xffff
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 0F 8F 7F 02 00 00: jg 0x5889298c
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 18: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 4F: dec edi
        __asm _emit 0x4f
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 3B CE: cmp ecx, esi
        __asm _emit 0x3b
        __asm _emit 0xce
        ; Exact mapped bytes 89 4C 24 18: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 7C B4: jl 0x588926d0
        __asm _emit 0x7c
        __asm _emit 0xb4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 68 8C D1 98 58: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0xd1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8D 84 24 F4 01 00 00: lea eax, [esp + 0x1f4]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 18: push 0x18
        __asm _emit 0x6a
        __asm _emit 0x18
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 89 8C 24 FC 01 00 00: mov dword ptr [esp + 0x1fc], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8C 24 00 02 00 00: mov dword ptr [esp + 0x200], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8C 24 04 02 00 00: mov dword ptr [esp + 0x204], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8C 24 08 02 00 00: mov dword ptr [esp + 0x208], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8C 24 0C 02 00 00: mov dword ptr [esp + 0x20c], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8C 24 10 02 00 00: mov dword ptr [esp + 0x210], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 03 93 EB FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x93
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 8D 8C 24 EC 01 00 00: lea ecx, [esp + 0x1ec]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes E8 8B 4F F2 FF: call 0x587b7700
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes E9 12 02 00 00: jmp 0x5889298c
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 7C A1 99 58: push 0x5899a17c
        __asm _emit 0x68
        __asm _emit 0x7c
        __asm _emit 0xa1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E9 F2 01 00 00: jmp 0x58892981
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes E8 62 4F F2 FF: call 0x587b7700
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x4f
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes E9 E9 01 00 00: jmp 0x5889298c
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes E8 4E 4F F2 FF: call 0x587b7700
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x4f
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes E9 D5 01 00 00: jmp 0x5889298c
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes E8 3A 4F F2 FF: call 0x587b7700
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x4f
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes E9 C1 01 00 00: jmp 0x5889298c
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 C3 01 00 00: jne 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 01 63: cmp byte ptr [esi + 1], 0x63
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x63
        ; Exact mapped bytes 75 0B: jne 0x588927e5
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8A 46 02: mov al, byte ptr [esi + 2]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x02
        ; Exact mapped bytes 3C 20: cmp al, 0x20
        __asm _emit 0x3c
        __asm _emit 0x20
        ; Exact mapped bytes 74 36: je 0x58892817
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 74 32: je 0x58892817
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 A9 01 00 00: jne 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 01 63: cmp byte ptr [esi + 1], 0x63
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x63
        ; Exact mapped bytes 75 33: jne 0x58892827
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes 80 7E 02 6C: cmp byte ptr [esi + 2], 0x6c
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x6c
        ; Exact mapped bytes 75 2D: jne 0x58892827
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes 80 7E 03 65: cmp byte ptr [esi + 3], 0x65
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x65
        ; Exact mapped bytes 75 27: jne 0x58892827
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes 80 7E 04 61: cmp byte ptr [esi + 4], 0x61
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x61
        ; Exact mapped bytes 75 21: jne 0x58892827
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 80 7E 05 72: cmp byte ptr [esi + 5], 0x72
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x05
        __asm _emit 0x72
        ; Exact mapped bytes 75 1B: jne 0x58892827
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8A 46 06: mov al, byte ptr [esi + 6]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x06
        ; Exact mapped bytes 3C 20: cmp al, 0x20
        __asm _emit 0x3c
        __asm _emit 0x20
        ; Exact mapped bytes 74 04: je 0x58892817
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 10: jne 0x58892827
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE A5 FF FF: call 0x5888ce00
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 65 01 00 00: jmp 0x5889298c
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 FA 2F: cmp dl, 0x2f
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x2f
        ; Exact mapped bytes 0F 85 67 01 00 00: jne 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 01 3F: cmp byte ptr [esi + 1], 0x3f
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x3f
        ; Exact mapped bytes 0F 85 5D 01 00 00: jne 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7E 02 00: cmp byte ptr [esi + 2], 0
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 53 01 00 00: jne 0x58892997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 30 C0 98 58: mov esi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 D1 99 58: push 0x5899d100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 EF A9 FF FF: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 DC D0 99 58: push 0x5899d0dc
        __asm _emit 0x68
        __asm _emit 0xdc
        __asm _emit 0xd0
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 D8 A9 FF FF: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 B8 D0 99 58: push 0x5899d0b8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0xd0
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 C1 A9 FF FF: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 94 D0 99 58: push 0x5899d094
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0xd0
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 AA A9 FF FF: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 70 D0 99 58: push 0x5899d070
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xd0
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 93 A9 FF FF: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 4C D0 99 58: push 0x5899d04c
        __asm _emit 0x68
        __asm _emit 0x4c
        __asm _emit 0xd0
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 7C A9 FF FF: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 28 D0 99 58: push 0x5899d028
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0xd0
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 65 A9 FF FF: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 04 D0 99 58: push 0x5899d004
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0xd0
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 4E A9 FF FF: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 E0 CF 99 58: push 0x5899cfe0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0xcf
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 37 A9 FF FF: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 BC CF 99 58: push 0x5899cfbc
        __asm _emit 0x68
        __asm _emit 0xbc
        __asm _emit 0xcf
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 20 A9 FF FF: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 98 CF 99 58: push 0x5899cf98
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xcf
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 09 A9 FF FF: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 74 CF 99 58: push 0x5899cf74
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0xcf
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 F2 A8 FF FF: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 50 CF 99 58: push 0x5899cf50
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xcf
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 DB A8 FF FF: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 2C CF 99 58: push 0x5899cf2c
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0xcf
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 C4 A8 FF FF: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 50 01 00 00: mov ecx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A9 CF EC FF: call 0x5875f940
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xcf
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 95 50 01 00 00: mov edx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 80 00 00 00: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 8D 71 01: lea esi, [ecx + 1]
        __asm _emit 0x8d
        __asm _emit 0x71
        __asm _emit 0x01
        ; Exact mapped bytes 8A 11: mov dl, byte ptr [ecx]
        __asm _emit 0x8a
        __asm _emit 0x11
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 75 F9: jne 0x588929a8
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 2B CE: sub ecx, esi
        __asm _emit 0x2b
        __asm _emit 0xce
        ; Exact mapped bytes 0F 84 21 03 00 00: je 0x58892cd8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 50 01: lea edx, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 08: mov cl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 75 F9: jne 0x588929c0
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 8D 78 31: lea edi, [eax + 0x31]
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0x31
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 7C 24 14: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 58 EB 0D 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xeb
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 67 A2 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xa2
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 83 7C 24 20 00: cmp dword ptr [esp + 0x20], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 87 02 00 00: jne 0x58892c76
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 48 A2 58: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4D 60: mov ecx, dword ptr [ebp + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x60
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 93 4F 07 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x4f
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 60: mov ecx, dword ptr [ebp + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x60
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 8D 50 01 00 00: mov ecx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 80 00 00 00: mov edx, dword ptr [ecx + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 75 78: lea esi, [ebp + 0x78]
        __asm _emit 0x8d
        __asm _emit 0x75
        __asm _emit 0x78
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 3E A4 FF FF: call 0x5888ce60
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 AC 00 00 00: mov eax, dword ptr [ebp + 0xac]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 14 00 00 00 00: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 08: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 74 05: je 0x58892a3a
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 83 F8 09: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 75 2A: jne 0x58892a64
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes 83 BD B8 00 00 00 01: cmp dword ptr [ebp + 0xb8], 1
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 21: je 0x58892a64
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes C7 85 B8 00 00 00 04 00 00 00: mov dword ptr [ebp + 0xb8], 4
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 0F B6 91 54 03 00 00: movzx dx, byte ptr [ecx + 0x354]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 C2: movzx eax, dx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc2
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 83 BD B8 00 00 00 03: cmp dword ptr [ebp + 0xb8], 3
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 75 18: jne 0x58892a85
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 66 0F B6 82 54 03 00 00: movzx ax, byte ptr [edx + 0x354]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x82
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 C8: movzx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc8
        ; Exact mapped bytes 89 4C 24 14: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 95 50 01 00 00: mov edx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 80 00 00 00: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 38 2F: cmp byte ptr [eax], 0x2f
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x2f
        ; Exact mapped bytes B9 01 00 00 00: mov ecx, 1
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4C 24 18: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 75 06: jne 0x58892aa5
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 89 4C 24 18: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 83 BD BC 00 00 00 05: cmp dword ptr [ebp + 0xbc], 5
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 C4 00 00 00: jne 0x58892b76
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 30: push 0x30
        __asm _emit 0x6a
        __asm _emit 0x30
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 8C A1 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa1
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes BA 50 B4 A0 58: mov edx, 0x58a0b450
        __asm _emit 0xba
        __asm _emit 0x50
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes BF 18 00 00 00: mov edi, 0x18
        __asm _emit 0xbf
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 2B D6: sub edx, esi
        __asm _emit 0x2b
        __asm _emit 0xd6
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8F E6 FF FF 7F: lea ecx, [edi + 0x7fffffe6]
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x58892aeb
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0C 10: mov cl, byte ptr [eax + edx]
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x10
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0A: je 0x58892aeb
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 EF 01: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x58892ad0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x58892aef
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 01: jne 0x58892af0
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 90 00 00 00: lea eax, [ebp + 0x90]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes BA 18 00 00 00: mov edx, 0x18
        __asm _emit 0xba
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D B9 C0 00 00 00: lea edi, [ecx + 0xc0]
        __asm _emit 0x8d
        __asm _emit 0xb9
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x58892b10
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892B10 .. +0x188 bytes.
extern "C" __declspec(naked) void FUN_58890110_segment_13() {
    __asm {
        ; Exact mapped bytes 8D 8A E6 FF FF 7F: lea ecx, [edx + 0x7fffffe6]
        __asm _emit 0x8d
        __asm _emit 0x8a
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x58892b2b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0C 38: mov cl, byte ptr [eax + edi]
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x38
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0A: je 0x58892b2b
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x58892b10
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x58892b2f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 01: jne 0x58892b30
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 8B 54 24 10: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 08 A1 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xa1
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes B9 0C 00 00 00: mov ecx, 0xc
        __asm _emit 0xb9
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B FB: mov edi, ebx
        __asm _emit 0x8b
        __asm _emit 0xfb
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 8B 85 50 01 00 00: mov eax, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B B0 80 00 00 00: mov esi, dword ptr [eax + 0x80]
        __asm _emit 0x8b
        __asm _emit 0xb0
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4B 30: lea ecx, [ebx + 0x30]
        __asm _emit 0x8d
        __asm _emit 0x4b
        __asm _emit 0x30
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 E1 A1 0E 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xa1
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 24: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 7C 24 1C: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 85 BC 00 00 00: mov eax, dword ptr [ebp + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 83 F8 04: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 0F 87 E5 00 00 00: ja 0x58892c6b
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 F4 33 89 58: jmp dword ptr [eax*4 + 0x588933f4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x33
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes A1 80 45 A2 58: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 98 45 A2 58: cmp eax, dword ptr [0x58a24598]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 08: je 0x58892ba2
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 3B 05 A0 45 A2 58: cmp eax, dword ptr [0x58a245a0]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 1C: jne 0x58892bbe
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 83 BD B8 00 00 00 01: cmp dword ptr [ebp + 0xb8], 1
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 13: je 0x58892bbe
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0F: je 0x58892bbe
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 58 FC 99 58: push 0x5899fc58
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0xfc
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E9 98 00 00 00: jmp 0x58892c56
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 14: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 0F B7 85 B8 00 00 00: movzx eax, word ptr [ebp + 0xb8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 37 55 F2 FF: call 0x587b8110
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x55
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 6D: jmp 0x58892c48
        __asm _emit 0xeb
        __asm _emit 0x6d
        ; Exact mapped bytes 83 BD 3C 06 00 00 00: cmp dword ptr [ebp + 0x63c], 0
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x58892bf8
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 C0 C5 99 58: push 0x5899c5c0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0xc5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes EB 6A: jmp 0x58892c62
        __asm _emit 0xeb
        __asm _emit 0x6a
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 8A 56 F2 FF: call 0x587b8290
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x56
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 40: jmp 0x58892c48
        __asm _emit 0xeb
        __asm _emit 0x40
        ; Exact mapped bytes 83 BD 44 06 00 00 00: cmp dword ptr [ebp + 0x644], 0
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 D3: je 0x58892be4
        __asm _emit 0x74
        __asm _emit 0xd3
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 E1 56 F2 FF: call 0x587b8300
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x56
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 27: jmp 0x58892c48
        __asm _emit 0xeb
        __asm _emit 0x27
        ; Exact mapped bytes 83 BD 40 06 00 00 00: cmp dword ptr [ebp + 0x640], 0
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 BA: je 0x58892be4
        __asm _emit 0x74
        __asm _emit 0xba
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 38 57 F2 FF: call 0x587b8370
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x57
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 0E: jmp 0x58892c48
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 58 55 F2 FF: call 0x587b81a0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x55
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 1F: jne 0x58892c6b
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 68 98 C5 99 58: push 0x5899c598
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xc5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E5 A5 FF FF: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D C4 04 00 00: mov ecx, dword ptr [ebp + 0x4c4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FA 5B 07 00: call 0x58908870
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x5b
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 50 01 00 00: mov ecx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 80 00 00 00: mov eax, dword ptr [ecx + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 50 01: lea edx, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        ; Exact mapped bytes 8A 08: mov cl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 75 F9: jne 0x58892c85
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7E 2E: jle 0x58892cc4
        __asm _emit 0x7e
        __asm _emit 0x2e
        ; Exact mapped bytes EB 08: jmp 0x58892ca0
        __asm _emit 0xeb
        __asm _emit 0x08
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892CA0 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_58890110_segment_14() {
    __asm {
        ; Exact mapped bytes 8B 95 50 01 00 00: mov edx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 92 80 00 00 00: mov edx, dword ptr [edx + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 02 00: mov byte ptr [edx], 0
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 95 50 01 00 00: mov edx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 92 80 00 00 00: mov edx, dword ptr [edx + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 04 10 00: mov byte ptr [eax + edx], 0
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 7C DC: jl 0x58892ca0
        __asm _emit 0x7c
        __asm _emit 0xdc
        ; Exact mapped bytes 8B 8D 50 01 00 00: mov ecx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 71 CC EC FF: call 0x5875f940
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xcc
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 6D 9F 0E 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x9f
        __asm _emit 0x0e
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892CD5 .. +0x3 bytes.
extern "C" __declspec(naked) void FUN_58890110_segment_15() {
    __asm {
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892CD8 .. +0x595 bytes.
extern "C" __declspec(naked) void FUN_58890110_segment_16() {
    __asm {
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 F9 06 00 00: jmp 0x588933d8
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D A8 45 A2 58: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 18 F7 FF: call 0x588045b0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x18
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 E6 06 00 00: jmp 0x588933d5
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 85 5C 01 00 00 00 00 10 00: test dword ptr [ebp + 0x15c], 0x100000
        __asm _emit 0xf7
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 D6 06 00 00: je 0x588933d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 A4 04 00 00: mov eax, dword ptr [ebp + 0x4a4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 78 50 03: cmp dword ptr [eax + 0x50], 3
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 CA 00 00 00: jne 0x58892dd9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D C4 04 00 00: mov ecx, dword ptr [ebp + 0x4c4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B B1 88 00 00 00: mov esi, dword ptr [ecx + 0x88]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 EE 09: sub esi, 9
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x09
        ; Exact mapped bytes E8 4D 54 07 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x54
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 8E B3 00 00 00: jle 0x58892de0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 5D 08: mov ebx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x5d
        __asm _emit 0x08
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 40 08: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x08
        ; Exact mapped bytes 8D 4B F2: lea ecx, [ebx - 0xe]
        __asm _emit 0x8d
        __asm _emit 0x4b
        __asm _emit 0xf2
        ; Exact mapped bytes 83 C3 9E: add ebx, -0x62
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x9e
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 7F 03: jg 0x58892d45
        __asm _emit 0x7f
        __asm _emit 0x03
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes EB 0B: jmp 0x58892d50
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 7C 03: jl 0x58892d4c
        __asm _emit 0x7c
        __asm _emit 0x03
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes EB 04: jmp 0x58892d50
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 83 C0 FD: add eax, -3
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0xfd
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D A4 04 00 00: mov ecx, dword ptr [ebp + 0x4a4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 05 06 07 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x06
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D A4 04 00 00: mov ecx, dword ptr [ebp + 0x4a4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 08: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x08
        ; Exact mapped bytes 2B CB: sub ecx, ebx
        __asm _emit 0x2b
        __asm _emit 0xcb
        ; Exact mapped bytes 0F AF CE: imul ecx, esi
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xce
        ; Exact mapped bytes B8 31 0C C3 30: mov eax, 0x30c30c31
        __asm _emit 0xb8
        __asm _emit 0x31
        __asm _emit 0x0c
        __asm _emit 0xc3
        __asm _emit 0x30
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 04: sar edx, 4
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x04
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes C1 E9 1F: shr ecx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x1f
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 7E 2B: jle 0x58892da9
        __asm _emit 0x7e
        __asm _emit 0x2b
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 33 C2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 45: jle 0x58892dd0
        __asm _emit 0x7e
        __asm _emit 0x45
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D C4 04 00 00: mov ecx, dword ptr [ebp + 0x4c4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B5 58 07 00: call 0x58908650
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 F0: jne 0x58892d90
        __asm _emit 0x75
        __asm _emit 0xf0
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 19 A8 FF FF: call 0x5888d5c0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 37: jmp 0x58892de0
        __asm _emit 0xeb
        __asm _emit 0x37
        ; Exact mapped bytes 7D 25: jge 0x58892dd0
        __asm _emit 0x7d
        __asm _emit 0x25
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 33 C2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 18: jle 0x58892dd0
        __asm _emit 0x7e
        __asm _emit 0x18
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D C4 04 00 00: mov ecx, dword ptr [ebp + 0x4c4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 25 59 07 00: call 0x589086f0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x59
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 F0: jne 0x58892dc0
        __asm _emit 0x75
        __asm _emit 0xf0
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 E9 A7 FF FF: call 0x5888d5c0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 07: jmp 0x58892de0
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes C7 40 50 02 00 00 00: mov dword ptr [eax + 0x50], 2
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 A8 04 00 00: mov eax, dword ptr [ebp + 0x4a8]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 78 50 03: cmp dword ptr [eax + 0x50], 3
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 EE 00 00 00: jne 0x58892ede
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D C8 04 00 00: mov ecx, dword ptr [ebp + 0x4c8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B B1 88 00 00 00: mov esi, dword ptr [ecx + 0x88]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 EE 06: sub esi, 6
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x06
        ; Exact mapped bytes E8 6C 53 07 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x53
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 8E C7 05 00 00: jle 0x588933d5
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 58 9E: lea ebx, [eax - 0x62]
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0x9e
        ; Exact mapped bytes 8D 48 F2: lea ecx, [eax - 0xe]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xf2
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 7F 03: jg 0x58892e27
        __asm _emit 0x7f
        __asm _emit 0x03
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes EB 0B: jmp 0x58892e32
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 7C 03: jl 0x58892e2e
        __asm _emit 0x7c
        __asm _emit 0x03
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes EB 04: jmp 0x58892e32
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 83 C0 FD: add eax, -3
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0xfd
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D A8 04 00 00: mov ecx, dword ptr [ebp + 0x4a8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 23 05 07 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 A8 04 00 00: mov eax, dword ptr [ebp + 0x4a8]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 2B CB: sub ecx, ebx
        __asm _emit 0x2b
        __asm _emit 0xcb
        ; Exact mapped bytes 0F AF CE: imul ecx, esi
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xce
        ; Exact mapped bytes B8 31 0C C3 30: mov eax, 0x30c30c31
        __asm _emit 0xb8
        __asm _emit 0x31
        __asm _emit 0x0c
        __asm _emit 0xc3
        __asm _emit 0x30
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 04: sar edx, 4
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x04
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes C1 E9 1F: shr ecx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x1f
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 7E 3E: jle 0x58892e9e
        __asm _emit 0x7e
        __asm _emit 0x3e
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 33 C2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 65: jle 0x58892ed2
        __asm _emit 0x7e
        __asm _emit 0x65
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B 8D C8 04 00 00: mov ecx, dword ptr [ebp + 0x4c8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D5 57 07 00: call 0x58908650
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x57
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D CC 04 00 00: mov ecx, dword ptr [ebp + 0x4cc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CA 57 07 00: call 0x58908650
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x57
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 53 A0 FF FF: call 0x5888cee0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 DE: jne 0x58892e70
        __asm _emit 0x75
        __asm _emit 0xde
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 27 A7 FF FF: call 0x5888d5c0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 37 05 00 00: jmp 0x588933d5
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7D 32: jge 0x58892ed2
        __asm _emit 0x7d
        __asm _emit 0x32
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 33 C2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 25: jle 0x58892ed2
        __asm _emit 0x7e
        __asm _emit 0x25
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B 8D C8 04 00 00: mov ecx, dword ptr [ebp + 0x4c8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 35 58 07 00: call 0x589086f0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D CC 04 00 00: mov ecx, dword ptr [ebp + 0x4cc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 2A 58 07 00: call 0x589086f0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 13 A0 FF FF: call 0x5888cee0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 DE: jne 0x58892eb0
        __asm _emit 0x75
        __asm _emit 0xde
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 E7 A6 FF FF: call 0x5888d5c0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F7 04 00 00: jmp 0x588933d5
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 50 02 00 00 00: mov dword ptr [eax + 0x50], 2
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 EB 04 00 00: jmp 0x588933d5
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2D 01 02 00 00: sub eax, 0x201
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 09: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 0F 87 DD 04 00 00: ja 0x588933d5
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 08 34 89 58: jmp dword ptr [eax*4 + 0x58893408]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x34
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F7 85 5C 01 00 00 00 00 10 00: test dword ptr [ebp + 0x15c], 0x100000
        __asm _emit 0xf7
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 C6 04 00 00: je 0x588933d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 46 0A: movzx eax, word ptr [esi + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x46
        __asm _emit 0x0a
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 8E 7D 00 00 00: jle 0x58892f99
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 C8 84 A2 58: mov esi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B BD C8 04 00 00: mov edi, dword ptr [ebp + 0x4c8]
        __asm _emit 0x8b
        __asm _emit 0xbd
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C6 04: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x04
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 0D E6 E9 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe6
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 3B: jne 0x58892f72
        __asm _emit 0x75
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 8D CC 04 00 00: mov ecx, dword ptr [ebp + 0x4cc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 FD E5 E9 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xe5
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 2B: jne 0x58892f72
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 8B BD C4 04 00 00: mov edi, dword ptr [ebp + 0x4c4]
        __asm _emit 0x8b
        __asm _emit 0xbd
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 EB E5 E9 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xe5
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 78 04 00 00: je 0x588933d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 EC 56 07 00: call 0x58908650
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x56
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 55 A6 FF FF: call 0x5888d5c0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 66 04 00 00: jmp 0x588933d8
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 D7 56 07 00: call 0x58908650
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x56
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D CC 04 00 00: mov ecx, dword ptr [ebp + 0x4cc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CC 56 07 00: call 0x58908650
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x56
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 55 9F FF FF: call 0x5888cee0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 2E A6 FF FF: call 0x5888d5c0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 3F 04 00 00: jmp 0x588933d8
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8D 36 04 00 00: jge 0x588933d5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x36
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 C8 84 A2 58: mov esi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B BD C8 04 00 00: mov edi, dword ptr [ebp + 0x4c8]
        __asm _emit 0x8b
        __asm _emit 0xbd
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C6 04: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x04
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 8A E5 E9 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xe5
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 3B: jne 0x58892ff5
        __asm _emit 0x75
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 8D CC 04 00 00: mov ecx, dword ptr [ebp + 0x4cc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 7A E5 E9 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xe5
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 2B: jne 0x58892ff5
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 8B BD C4 04 00 00: mov edi, dword ptr [ebp + 0x4c4]
        __asm _emit 0x8b
        __asm _emit 0xbd
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 68 E5 E9 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xe5
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 F5 03 00 00: je 0x588933d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 09 57 07 00: call 0x589086f0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x57
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 D2 A5 FF FF: call 0x5888d5c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 E3 03 00 00: jmp 0x588933d8
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 F4 56 07 00: call 0x589086f0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D CC 04 00 00: mov ecx, dword ptr [ebp + 0x4cc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E9 56 07 00: call 0x589086f0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 78 FF FF FF: jmp 0x58892f84
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 35 C8 84 A2 58: mov esi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8D B0 04 00 00: mov ecx, dword ptr [ebp + 0x4b0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C6 04: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x04
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 1F E5 E9 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xe5
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 30: jne 0x58893055
        __asm _emit 0x75
        __asm _emit 0x30
        ; Exact mapped bytes 8B 8D B4 04 00 00: mov ecx, dword ptr [ebp + 0x4b4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 0F E5 E9 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xe5
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 20: jne 0x58893055
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 8B 8D B8 04 00 00: mov ecx, dword ptr [ebp + 0x4b8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 FF E4 E9 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xe4
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 10: jne 0x58893055
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 8B 8D BC 04 00 00: mov ecx, dword ptr [ebp + 0x4bc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 EF E4 E9 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xe4
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0A: je 0x5889305f
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes C7 85 AC 04 00 00 01 00 00 00: mov dword ptr [ebp + 0x4ac], 1
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B B5 C8 04 00 00: mov esi, dword ptr [ebp + 0x4c8]
        __asm _emit 0x8b
        __asm _emit 0xb5
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 CA E4 E9 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xe4
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 57 03 00 00: je 0x588933d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 2B 6E EC FF: call 0x58759eb0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x6e
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 94 24 6C 1E 00 00: lea edx, [esp + 0x1e6c]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x6c
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 C0 FD 99 58: push 0x5899fdc0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8D 50 01 00 00: mov ecx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 84 24 68 1E 00 00: lea eax, [esp + 0x1e68]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D1 D9 ED FF: call 0x58770a80
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xd9
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes E9 21 03 00 00: jmp 0x588933d5
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BD AC 04 00 00 00: cmp dword ptr [ebp + 0x4ac], 0
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x588930c7
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes C7 85 AC 04 00 00 00 00 00 00: mov dword ptr [ebp + 0x4ac], 0
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D A8 04 00 00: mov ecx, dword ptr [ebp + 0x4a8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 02 00 00 00: mov eax, 2
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 8B 95 A4 04 00 00: mov edx, dword ptr [ebp + 0x4a4]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 42 50: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        ; Exact mapped bytes E9 F2 02 00 00: jmp 0x588933d5
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8D 50 01 00 00: mov ecx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 49 E4 E9 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xe4
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 27: je 0x58893122
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 8D 54 01 00 00: mov ecx, dword ptr [ebp + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 18 E5 E9 FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xe5
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 50 01 00 00: mov ecx, dword ptr [ebp + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 0B E5 E9 FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe5
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes BB 02 00 00 00: mov ebx, 2
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D 0C 01 00 00: mov dword ptr [ebp + 0x10c], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x58893127
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes BB 02 00 00 00: mov ebx, 2
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 00 05 00 00: mov ecx, dword ptr [ebp + 0x500]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 41 24: mov al, byte ptr [ecx + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 24 0F: and al, 0xf
        __asm _emit 0x24
        __asm _emit 0x0f
        ; Exact mapped bytes 3C 05: cmp al, 5
        __asm _emit 0x3c
        __asm _emit 0x05
        ; Exact mapped bytes 74 0F: je 0x58893145
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0B: je 0x58893145
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 3C 04: cmp al, 4
        __asm _emit 0x3c
        __asm _emit 0x04
        ; Exact mapped bytes 74 07: je 0x58893145
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 8D 20 06 00 00: mov ecx, dword ptr [ebp + 0x620]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 41 24: mov al, byte ptr [ecx + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 24 0F: and al, 0xf
        __asm _emit 0x24
        __asm _emit 0x0f
        ; Exact mapped bytes 3C 05: cmp al, 5
        __asm _emit 0x3c
        __asm _emit 0x05
        ; Exact mapped bytes 74 0F: je 0x58893163
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0B: je 0x58893163
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 3C 04: cmp al, 4
        __asm _emit 0x3c
        __asm _emit 0x04
        ; Exact mapped bytes 74 07: je 0x58893163
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes F7 85 5C 01 00 00 00 00 10 00: test dword ptr [ebp + 0x15c], 0x100000
        __asm _emit 0xf7
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 62 02 00 00: je 0x588933d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 C8 84 A2 58: mov esi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B BD A8 04 00 00: mov edi, dword ptr [ebp + 0x4a8]
        __asm _emit 0x8b
        __asm _emit 0xbd
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C6 04: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x04
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 B6 E3 E9 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xe3
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 16: jne 0x588931a4
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B BD A4 04 00 00: mov edi, dword ptr [ebp + 0x4a4]
        __asm _emit 0x8b
        __asm _emit 0xbd
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 A4 E3 E9 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xe3
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 31 02 00 00: je 0x588933d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 5F 50: cmp dword ptr [edi + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x5f
        __asm _emit 0x50
        ; Exact mapped bytes 0F 85 28 02 00 00: jne 0x588933d5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 47 50 03 00 00 00: mov dword ptr [edi + 0x50], 3
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 1C 02 00 00: jmp 0x588933d5
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 00 05 00 00: mov ecx, dword ptr [ebp + 0x500]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B B5 C8 04 00 00: mov esi, dword ptr [ebp + 0x4c8]
        __asm _emit 0x8b
        __asm _emit 0xb5
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 63 E3 E9 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xe3
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 F0 01 00 00: je 0x588933d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 C4 6C EC FF: call 0x58759eb0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x6c
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 E1 01 00 00: je 0x588933d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B BA DC 00 00 00: mov edi, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0xba
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 A9 6C EC FF: call 0x58759eb0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x6c
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 DD F0 EB FF: call 0x587522f0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xf0
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 33: jne 0x5889324a
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes 8B 8D C8 04 00 00: mov ecx, dword ptr [ebp + 0x4c8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 8E 6C EC FF: call 0x58759eb0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x6c
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D2 ED EB FF: call 0x58752000
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xed
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D C8 04 00 00: mov ecx, dword ptr [ebp + 0x4c8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 77 6C EC FF: call 0x58759eb0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x6c
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 CB F1 EB FF: call 0x58752410
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf1
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes E9 8B 01 00 00: jmp 0x588933d5
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 9D C8 04 00 00: mov ebx, dword ptr [ebp + 0x4c8]
        __asm _emit 0x8b
        __asm _emit 0x9d
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 59 6C EC FF: call 0x58759eb0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x6c
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 76 01 00 00: je 0x588933d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes BE 50 B4 A0 58: mov esi, 0x58a0b450
        __asm _emit 0xbe
        __asm _emit 0x50
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 6C EC FF: call 0x58759eb0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x6c
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 03: jmp 0x58893270
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58893270 .. +0x183 bytes.
extern "C" __declspec(naked) void FUN_58890110_segment_17() {
    __asm {
        ; Exact mapped bytes 8A 08: mov cl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x08
        ; Exact mapped bytes 3A 0E: cmp cl, byte ptr [esi]
        __asm _emit 0x3a
        __asm _emit 0x0e
        ; Exact mapped bytes 75 1A: jne 0x58893290
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 12: je 0x5889328c
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8A 48 01: mov cl, byte ptr [eax + 1]
        __asm _emit 0x8a
        __asm _emit 0x48
        __asm _emit 0x01
        ; Exact mapped bytes 3A 4E 01: cmp cl, byte ptr [esi + 1]
        __asm _emit 0x3a
        __asm _emit 0x4e
        __asm _emit 0x01
        ; Exact mapped bytes 75 0E: jne 0x58893290
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 83 C0 02: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x02
        ; Exact mapped bytes 83 C6 02: add esi, 2
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x02
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 75 E4: jne 0x58893270
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 05: jmp 0x58893295
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes 1B C0: sbb eax, eax
        __asm _emit 0x1b
        __asm _emit 0xc0
        ; Exact mapped bytes 83 D8 FF: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xd8
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 38 01 00 00: je 0x588933d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 8B 40 08: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 9F 54 07 00: call 0x58908750
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x54
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 1B 01 00 00: je 0x588933d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 00 05 00 00: mov eax, dword ptr [ebp + 0x500]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BE 01 00 00 00: mov esi, 1
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 B0 D0 00 00 00: mov dword ptr [eax + 0xd0], esi
        __asm _emit 0x89
        __asm _emit 0xb0
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 00 05 00 00: mov ecx, dword ptr [ebp + 0x500]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 B1 D4 00 00 00: mov dword ptr [ecx + 0xd4], esi
        __asm _emit 0x89
        __asm _emit 0xb1
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 80 45 A2 58: mov edx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 5E 02: lea ebx, [esi + 2]
        __asm _emit 0x8d
        __asm _emit 0x5e
        __asm _emit 0x02
        ; Exact mapped bytes 3B 15 A0 45 A2 58: cmp edx, dword ptr [0x58a245a0]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 2C: jne 0x58893314
        __asm _emit 0x75
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 8D C8 04 00 00: mov ecx, dword ptr [ebp + 0x4c8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BD 6B EC FF: call 0x58759eb0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x6b
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F1 EF EB FF: call 0x587522f0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xef
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 66 39 98 9E 00 00 00: cmp word ptr [eax + 0x9e], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x58893314
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 85 00 05 00 00: mov eax, dword ptr [ebp + 0x500]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 B0 D8 00 00 00: mov dword ptr [eax + 0xd8], esi
        __asm _emit 0x89
        __asm _emit 0xb0
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D C8 04 00 00: mov ecx, dword ptr [ebp + 0x4c8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 91 6B EC FF: call 0x58759eb0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x6b
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 39 FC FA FF: call 0x58842f60
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xfc
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0E: jne 0x58893339
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 8D 00 05 00 00: mov ecx, dword ptr [ebp + 0x500]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 B1 E0 00 00 00: mov dword ptr [ecx + 0xe0], esi
        __asm _emit 0x89
        __asm _emit 0xb1
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x58893345
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 95 00 05 00 00: mov edx, dword ptr [ebp + 0x500]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 B2 E4 00 00 00: mov dword ptr [edx + 0xe4], esi
        __asm _emit 0x89
        __asm _emit 0xb2
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D C8 04 00 00: mov ecx, dword ptr [ebp + 0x4c8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 60 6B EC FF: call 0x58759eb0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x6b
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 94 EF EB FF: call 0x587522f0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xef
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 66 39 98 80 00 00 00: cmp word ptr [eax + 0x80], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 16: jne 0x5889337b
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 66 83 3D A8 B4 A0 58 00: cmp word ptr [0x58a0b4a8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x5889337b
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 85 00 05 00 00: mov eax, dword ptr [ebp + 0x500]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 B0 E8 00 00 00: mov dword ptr [eax + 0xe8], esi
        __asm _emit 0x89
        __asm _emit 0xb0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D C8 04 00 00: mov ecx, dword ptr [ebp + 0x4c8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 2A 6B EC FF: call 0x58759eb0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x6b
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 5E EF EB FF: call 0x587522f0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xef
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 B8 80 00 00 00 06: cmp word ptr [eax + 0x80], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        ; Exact mapped bytes 75 15: jne 0x588933b1
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 66 39 1D A8 B4 A0 58: cmp word ptr [0x58a0b4a8], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 75 0C: jne 0x588933b1
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 8D 00 05 00 00: mov ecx, dword ptr [ebp + 0x500]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 B1 EC 00 00 00: mov dword ptr [ecx + 0xec], esi
        __asm _emit 0x89
        __asm _emit 0xb1
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D C8 04 00 00: mov ecx, dword ptr [ebp + 0x4c8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F4 6A EC FF: call 0x58759eb0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x6a
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 00 05 00 00: mov ecx, dword ptr [ebp + 0x500]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D8 10 01 00: call 0x588a44a0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 00 05 00 00: mov ecx, dword ptr [ebp + 0x500]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 45 34: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x34
        ; Exact mapped bytes 8B 8C 24 68 22 00 00: mov ecx, dword ptr [esp + 0x2268]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 33 CC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xcc
        ; Exact mapped bytes E8 F0 97 0E 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x97
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 81 C4 5C 22 00 00: add esp, 0x225c
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x5c
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
