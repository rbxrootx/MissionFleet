// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879B820 .. +0x6D9 bytes.
extern "C" __declspec(naked) void FUN_5879b820_5879B820() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58891d31h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 108h
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
        lea eax, [ebp - 0a0h]
        lea esi, [ecx + 8]
        push eax
        push 588b73c8h
        mov ecx, esi
        ; Exact mapped bytes E8 7D DA FF FF: call 0x587992e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 36 E4 FF FF: call 0x58799ca0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 88h]
        mov dword ptr [ebp - 4], 0
        push eax
        push 588b73d4h
        mov ecx, esi
        ; Exact mapped bytes E8 5C DA FF FF: call 0x587992e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 15 E4 FF FF: call 0x58799ca0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 70h]
        mov byte ptr [ebp - 4], 1
        push eax
        push 588b73e4h
        mov ecx, esi
        ; Exact mapped bytes E8 41 DA FF FF: call 0x587992e0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FA E3 FF FF: call 0x58799ca0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b73f4h
        mov ecx, esi
        mov byte ptr [ebp - 4], 2
        ; Exact mapped bytes E8 2A DA FF FF: call 0x587992e0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B3 DE FF FF: call 0x58799770
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b740ch
        mov ecx, esi
        mov byte ptr [ebp - 0a1h], al
        ; Exact mapped bytes E8 11 DA FF FF: call 0x587992e0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9A DE FF FF: call 0x58799770
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b7424h
        mov ecx, esi
        mov byte ptr [ebp - 0a2h], al
        ; Exact mapped bytes E8 F8 D9 FF FF: call 0x587992e0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 81 DE FF FF: call 0x58799770
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b7438h
        mov ecx, esi
        mov byte ptr [ebp - 0a3h], al
        ; Exact mapped bytes E8 DF D9 FF FF: call 0x587992e0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 68 DE FF FF: call 0x58799770
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b7444h
        mov ecx, esi
        mov byte ptr [ebp - 0a4h], al
        ; Exact mapped bytes E8 C6 D9 FF FF: call 0x587992e0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DF E4 FF FF: call 0x58799e00
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        lea eax, [ebp - 88h]
        push 588b7450h
        push eax
        ; Exact mapped bytes E8 2C 58 D6 FF: call 0x58501160
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x58
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        test al, al
        ; Exact mapped bytes 74 0C: je 0x5879b947
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 0a8h], 2
        ; Exact mapped bytes EB 26: jmp 0x5879b96d
        __asm _emit 0xeb
        __asm _emit 0x26
        lea eax, [ebp - 88h]
        push 588b7454h
        push eax
        ; Exact mapped bytes E8 08 58 D6 FF: call 0x58501160
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x58
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        test al, al
        ; Exact mapped bytes 0F 84 53 05 00 00: je 0x5879beb6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a8h], 0
        lea eax, [ebp - 70h]
        push 588b7484h
        push eax
        ; Exact mapped bytes E8 E5 57 D6 FF: call 0x58501160
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x57
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        test al, al
        ; Exact mapped bytes 74 0C: je 0x5879b98e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes EB 23: jmp 0x5879b9b1
        __asm _emit 0xeb
        __asm _emit 0x23
        lea eax, [ebp - 70h]
        push 588b7490h
        push eax
        ; Exact mapped bytes E8 C4 57 D6 FF: call 0x58501160
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        test al, al
        ; Exact mapped bytes 0F 84 38 05 00 00: je 0x5879bedf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ach], 1
        ; Exact mapped bytes 66 A1 A8 73 8B 58: mov ax, word ptr [0x588b73a8]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x73
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 11 45 D8: movups xmmword ptr [ebp - 0x28], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 66 89 45 D8: mov word ptr [ebp - 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes A0 AA 73 8B 58: mov al, byte ptr [0x588b73aa]
        __asm _emit 0xa0
        __asm _emit 0xaa
        __asm _emit 0x73
        __asm _emit 0x8b
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], 3
        mov dword ptr [ebp - 14h], 0fh
        mov byte ptr [ebp - 26h], al
        mov byte ptr [ebp - 25h], 0
        cmp byte ptr [ebp - 0a1h], 0
        ; Exact mapped bytes 74 16: je 0x5879b9fb
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, 203ah
        mov dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 66 89 45 D8: mov word ptr [ebp - 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        mov byte ptr [ebp - 26h], 0
        ; Exact mapped bytes EB 16: jmp 0x5879ba11
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 75 0D: jne 0x5879ba11
        __asm _emit 0x75
        __asm _emit 0x0d
        mov dword ptr [ebp - 18h], 1
        ; Exact mapped bytes 66 C7 45 D8 3A 00: mov word ptr [ebp - 0x28], 0x3a
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xd8
        __asm _emit 0x3a
        __asm _emit 0x00
        ; Exact mapped bytes A1 54 73 8B 58: mov eax, dword ptr [0x588b7354]
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0x73
        __asm _emit 0x8b
        __asm _emit 0x58
        mov edi, 0fh
        ; Exact mapped bytes 0F 11 45 A8: movups xmmword ptr [ebp - 0x58], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xa8
        mov dword ptr [ebp - 48h], 4
        mov dword ptr [ebp - 44h], edi
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 54h], 0
        cmp byte ptr [ebp - 0a2h], 0
        ; Exact mapped bytes 74 0B: je 0x5879ba44
        __asm _emit 0x74
        __asm _emit 0x0b
        mov dword ptr [ebp - 48h], 0
        mov byte ptr [ebp - 58h], 0
        mov eax, 11h
        mov dword ptr [ebp - 30h], 0
        cmp esi, eax
        mov dword ptr [ebp - 2ch], 0fh
        ; Exact mapped bytes 0F 11 45 C0: movups xmmword ptr [ebp - 0x40], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xc0
        cmova esi, eax
        mov byte ptr [ebp - 40h], 0
        mov dword ptr [ebp - 0b0h], esi
        push 0a0h
        mov byte ptr [ebp - 4], 7
        ; Exact mapped bytes E8 8C 55 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x55
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [ebp - 114h], esi
        mov byte ptr [ebp - 4], 8
        test esi, esi
        ; Exact mapped bytes 0F 84 53 03 00 00: je 0x5879bde2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 40h]
        push eax
        lea ecx, [ebp - 110h]
        ; Exact mapped bytes E8 82 DF D0 FF: call 0x584a9a20
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xdf
        __asm _emit 0xd0
        __asm _emit 0xff
        lea eax, [ebp - 58h]
        mov byte ptr [ebp - 4], 9
        push eax
        lea ecx, [ebp - 0f8h]
        ; Exact mapped bytes E8 6F DF D0 FF: call 0x584a9a20
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xdf
        __asm _emit 0xd0
        __asm _emit 0xff
        lea eax, [ebp - 28h]
        mov byte ptr [ebp - 4], 0ah
        push eax
        lea ecx, [ebp - 0e0h]
        ; Exact mapped bytes E8 5C DF D0 FF: call 0x584a9a20
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xdf
        __asm _emit 0xd0
        __asm _emit 0xff
        lea eax, [ebp - 0a0h]
        mov byte ptr [ebp - 4], 0bh
        push eax
        lea ecx, [ebp - 0c8h]
        ; Exact mapped bytes E8 46 DF D0 FF: call 0x584a9a20
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xdf
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [esi + 4], 0
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov dword ptr [esi], 588b73c0h
        mov dword ptr [esi + 8], 0
        mov dword ptr [esi + 0ch], 0
        mov dword ptr [esi + 10h], 0
        ; Exact mapped bytes 0F 11 46 14: movups xmmword ptr [esi + 0x14], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x46
        __asm _emit 0x14
        mov dword ptr [esi + 24h], 0
        mov dword ptr [esi + 28h], 0fh
        mov byte ptr [esi + 14h], 0
        mov dword ptr [esi + 2ch], 4ah
        ; Exact mapped bytes 0F 11 46 30: movups xmmword ptr [esi + 0x30], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x46
        __asm _emit 0x30
        mov dword ptr [esi + 40h], 0
        mov dword ptr [esi + 44h], 0
        ; Exact mapped bytes 0F 10 85 38 FF FF FF: movups xmm0, xmmword ptr [ebp - 0xc8]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0a8h]
        mov cl, byte ptr [ebp - 0a3h]
        ; Exact mapped bytes 0F 11 46 30: movups xmmword ptr [esi + 0x30], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x46
        __asm _emit 0x30
        ; Exact mapped bytes F3 0F 7E 85 48 FF FF FF: movq xmm0, qword ptr [ebp - 0xb8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F D6 46 40: movq qword ptr [esi + 0x40], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x46
        __asm _emit 0x40
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov dword ptr [ebp - 0b8h], 0
        mov dword ptr [ebp - 0b4h], 0fh
        mov byte ptr [ebp - 0c8h], 0
        mov dword ptr [esi + 48h], eax
        ; Exact mapped bytes 0F 11 46 4C: movups xmmword ptr [esi + 0x4c], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x46
        __asm _emit 0x4c
        mov dword ptr [esi + 5ch], 0
        mov dword ptr [esi + 60h], 0
        ; Exact mapped bytes 0F 10 85 20 FF FF FF: movups xmm0, xmmword ptr [ebp - 0xe0]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 11 46 4C: movups xmmword ptr [esi + 0x4c], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x46
        __asm _emit 0x4c
        ; Exact mapped bytes F3 0F 7E 85 30 FF FF FF: movq xmm0, qword ptr [ebp - 0xd0]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F D6 46 5C: movq qword ptr [esi + 0x5c], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x46
        __asm _emit 0x5c
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov dword ptr [ebp - 0d0h], 0
        mov dword ptr [ebp - 0cch], 0fh
        mov byte ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 0F 11 46 64: movups xmmword ptr [esi + 0x64], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x46
        __asm _emit 0x64
        mov dword ptr [esi + 74h], 0
        mov dword ptr [esi + 78h], 0
        ; Exact mapped bytes 0F 10 85 08 FF FF FF: movups xmm0, xmmword ptr [ebp - 0xf8]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 11 46 64: movups xmmword ptr [esi + 0x64], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x46
        __asm _emit 0x64
        ; Exact mapped bytes F3 0F 7E 85 18 FF FF FF: movq xmm0, qword ptr [ebp - 0xe8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F D6 46 74: movq qword ptr [esi + 0x74], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x46
        __asm _emit 0x74
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov dword ptr [ebp - 0e8h], 0
        mov dword ptr [ebp - 0e4h], 0fh
        mov byte ptr [ebp - 0f8h], 0
        ; Exact mapped bytes 0F 11 46 7C: movups xmmword ptr [esi + 0x7c], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x46
        __asm _emit 0x7c
        mov dword ptr [esi + 8ch], 0
        mov dword ptr [esi + 90h], 0
        ; Exact mapped bytes 0F 10 85 F0 FE FF FF: movups xmm0, xmmword ptr [ebp - 0x110]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 11 46 7C: movups xmmword ptr [esi + 0x7c], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x46
        __asm _emit 0x7c
        ; Exact mapped bytes F3 0F 7E 85 00 FF FF FF: movq xmm0, qword ptr [ebp - 0x100]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F D6 86 8C 00 00 00: movq qword ptr [esi + 0x8c], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 100h], 0
        mov dword ptr [ebp - 0fch], 0fh
        mov byte ptr [ebp - 110h], 0
        mov al, byte ptr [esi + 94h]
        and al, 0f8h
        shl cl, 2
        or al, cl
        mov cl, byte ptr [ebp - 0a4h]
        and al, 0f7h
        shl cl, 3
        or al, cl
        mov byte ptr [esi + 94h], al
        mov eax, dword ptr [ebp - 0b0h]
        mov dword ptr [esi + 98h], eax
        mov eax, dword ptr [ebp - 0ach]
        mov dword ptr [esi + 9ch], eax
        mov ecx, dword ptr [ebp - 0b4h]
        cmp ecx, 0fh
        ; Exact mapped bytes 76 2F: jbe 0x5879bcc3
        __asm _emit 0x76
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 0c8h]
        inc ecx
        mov eax, edx
        cmp ecx, 1000h
        ; Exact mapped bytes 72 14: jb 0x5879bcb9
        __asm _emit 0x72
        __asm _emit 0x14
        mov edx, dword ptr [eax - 4]
        add ecx, 23h
        sub eax, edx
        add eax, -4
        cmp eax, 1fh
        ; Exact mapped bytes 0F 87 17 02 00 00: ja 0x5879bed0
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push edx
        ; Exact mapped bytes E8 74 53 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x53
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 0b8h], 0
        mov dword ptr [ebp - 0b4h], 0fh
        mov byte ptr [ebp - 0c8h], 0
        cmp ecx, 0fh
        ; Exact mapped bytes 76 2F: jbe 0x5879bd18
        __asm _emit 0x76
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 0e0h]
        inc ecx
        mov eax, edx
        cmp ecx, 1000h
        ; Exact mapped bytes 72 14: jb 0x5879bd0e
        __asm _emit 0x72
        __asm _emit 0x14
        mov edx, dword ptr [eax - 4]
        add ecx, 23h
        sub eax, edx
        add eax, -4
        cmp eax, 1fh
        ; Exact mapped bytes 0F 87 C2 01 00 00: ja 0x5879bed0
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push edx
        ; Exact mapped bytes E8 1F 53 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x53
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 0d0h], 0
        mov dword ptr [ebp - 0cch], 0fh
        mov byte ptr [ebp - 0e0h], 0
        cmp ecx, 0fh
        ; Exact mapped bytes 76 2F: jbe 0x5879bd6d
        __asm _emit 0x76
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 0f8h]
        inc ecx
        mov eax, edx
        cmp ecx, 1000h
        ; Exact mapped bytes 72 14: jb 0x5879bd63
        __asm _emit 0x72
        __asm _emit 0x14
        mov edx, dword ptr [eax - 4]
        add ecx, 23h
        sub eax, edx
        add eax, -4
        cmp eax, 1fh
        ; Exact mapped bytes 0F 87 6D 01 00 00: ja 0x5879bed0
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push edx
        ; Exact mapped bytes E8 CA 52 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x52
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 0fch]
        mov dword ptr [ebp - 0e8h], 0
        mov dword ptr [ebp - 0e4h], 0fh
        mov byte ptr [ebp - 0f8h], 0
        cmp ecx, 0fh
        ; Exact mapped bytes 76 2F: jbe 0x5879bdc2
        __asm _emit 0x76
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 110h]
        inc ecx
        mov eax, edx
        cmp ecx, 1000h
        ; Exact mapped bytes 72 14: jb 0x5879bdb8
        __asm _emit 0x72
        __asm _emit 0x14
        mov edx, dword ptr [eax - 4]
        add ecx, 23h
        sub eax, edx
        add eax, -4
        cmp eax, 1fh
        ; Exact mapped bytes 0F 87 18 01 00 00: ja 0x5879bed0
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push edx
        ; Exact mapped bytes E8 75 52 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x52
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        mov edi, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 100h], 0
        mov dword ptr [ebp - 0fch], 0fh
        mov byte ptr [ebp - 110h], 0
        ; Exact mapped bytes EB 02: jmp 0x5879bde4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov ecx, dword ptr [ebp - 2ch]
        cmp ecx, 0fh
        ; Exact mapped bytes 76 2C: jbe 0x5879be18
        __asm _emit 0x76
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 40h]
        inc ecx
        mov eax, edx
        cmp ecx, 1000h
        ; Exact mapped bytes 72 14: jb 0x5879be0e
        __asm _emit 0x72
        __asm _emit 0x14
        mov edx, dword ptr [eax - 4]
        add ecx, 23h
        sub eax, edx
        add eax, -4
        cmp eax, 1fh
        ; Exact mapped bytes 0F 87 C2 00 00 00: ja 0x5879bed0
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push edx
        ; Exact mapped bytes E8 1F 52 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x52
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        cmp edi, 0fh
        ; Exact mapped bytes 76 2E: jbe 0x5879be4b
        __asm _emit 0x76
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 58h]
        lea ecx, [edi + 1]
        mov eax, edx
        cmp ecx, 1000h
        ; Exact mapped bytes 72 14: jb 0x5879be41
        __asm _emit 0x72
        __asm _emit 0x14
        mov edx, dword ptr [eax - 4]
        add ecx, 23h
        sub eax, edx
        add eax, -4
        cmp eax, 1fh
        ; Exact mapped bytes 0F 87 8F 00 00 00: ja 0x5879bed0
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push edx
        ; Exact mapped bytes E8 EC 51 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x51
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, 0fh
        ; Exact mapped bytes 76 28: jbe 0x5879be7b
        __asm _emit 0x76
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 28h]
        inc ecx
        mov eax, edx
        cmp ecx, 1000h
        ; Exact mapped bytes 72 10: jb 0x5879be71
        __asm _emit 0x72
        __asm _emit 0x10
        mov edx, dword ptr [eax - 4]
        add ecx, 23h
        sub eax, edx
        add eax, -4
        cmp eax, 1fh
        ; Exact mapped bytes 77 5F: ja 0x5879bed0
        __asm _emit 0x77
        __asm _emit 0x5f
        push ecx
        push edx
        ; Exact mapped bytes E8 BC 51 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x51
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 AD DE D0 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xde
        __asm _emit 0xd0
        __asm _emit 0xff
        lea ecx, [ebp - 88h]
        ; Exact mapped bytes E8 A2 DE D0 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xde
        __asm _emit 0xd0
        __asm _emit 0xff
        lea ecx, [ebp - 0a0h]
        ; Exact mapped bytes E8 97 DE D0 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xde
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, esi
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
        ; Exact mapped bytes E8 9E 51 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x51
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
        push 588b745ch
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 0D DC D0 FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0xd0
        __asm _emit 0xff
        lea eax, [ebp - 40h]
        mov byte ptr [ebp - 4], 3
        push eax
        ; Exact mapped bytes E8 90 EE FF FF: call 0x5879ad60
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 FA 50 0B 00: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x50
        __asm _emit 0x0b
        __asm _emit 0x00
        push 588b7498h
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 E4 DB D0 FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xdb
        __asm _emit 0xd0
        __asm _emit 0xff
        lea eax, [ebp - 40h]
        mov byte ptr [ebp - 4], 4
        push eax
        ; Exact mapped bytes E8 67 EE FF FF: call 0x5879ad60
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
