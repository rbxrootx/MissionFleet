// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043A503 .. +0x518 bytes.
extern "C" __declspec(naked) void FUN_0043a503_0043A503() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a4a0h
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
        mov eax, 0a120h
        ; Exact mapped bytes E8 9B F2 06 00: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x00
        push edi
        push ecx
        lea edi, [ebp - 0a12ch]
        mov ecx, 2848h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 0a120h], ecx
        mov dword ptr [ebp - 0a0f4h], 0
        lea ecx, [ebp - 0a0f0h]
        ; Exact mapped bytes E8 5B C1 FF FF: call 0x4366b0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        push 0a0dch
        push 0
        lea eax, [ebp - 0a0f0h]
        push eax
        ; Exact mapped bytes E8 08 EE 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xee
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 0a114h]
        push ecx
        ; Exact mapped bytes E8 20 4E 09 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0a0f0h]
        ; Exact mapped bytes E8 2B 71 0F 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x71
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0d78h]
        mov cl, byte ptr [eax + 50h]
        and cl, 7fh
        mov byte ptr [ebp - 0a040h], cl
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0d78h]
        mov ecx, dword ptr [eax + 104h]
        add ecx, 1
        mov dword ptr [ebp - 0a03ch], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0d78h]
        mov cl, byte ptr [eax + 64h]
        mov byte ptr [ebp - 0a038h], cl
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0d78h]
        ; Exact mapped bytes 66 8B 88 EC 00 00 00: mov cx, word ptr [eax + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8D CA 5F FF FF: mov word ptr [ebp - 0xa036], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xca
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [edx + 40c78h]
        mov dword ptr [ebp - 0a048h], eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 2A 6D FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x6d
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 0F 84 29 02 00 00: je 0x43a82c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 12 6D FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x6d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        mov edx, dword ptr [ecx + 1b4h]
        add edx, 1
        mov dword ptr [ebp - 0a0f8h], edx
        mov eax, dword ptr [ebp - 0a0f8h]
        mov dword ptr [ebp - 0a044h], eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 E6 6C FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        mov edx, dword ptr [ebp - 0a0f8h]
        mov dword ptr [ecx + 1b4h], edx
        mov dword ptr [ebp - 0a0fch], 0
        ; Exact mapped bytes EB 0F: jmp 0x43a667
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0a0fch]
        add eax, 1
        mov dword ptr [ebp - 0a0fch], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov al, byte ptr [edx + 0b2h]
        and al, 0fh
        and eax, 0ffh
        cmp dword ptr [ebp - 0a0fch], eax
        ; Exact mapped bytes 0F 8D 6C 01 00 00: jge 0x43a7f5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0a0fch]
        imul ecx, ecx, 1404h
        mov edx, dword ptr [ebp - 0a0fch]
        mov dword ptr [ebp + ecx - 0a034h], edx
        mov eax, dword ptr [ebp - 0a0fch]
        shl eax, 6
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + eax + 0cd4h], 0
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x43a7d1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0a0fch]
        shl edx, 6
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + edx + 0cd4h]
        mov dword ptr [ebp - 0a104h], ecx
        mov dword ptr [ebp - 0a100h], 0
        ; Exact mapped bytes EB 0F: jmp 0x43a6f0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0a100h]
        add edx, 1
        mov dword ptr [ebp - 0a100h], edx
        cmp dword ptr [ebp - 0a100h], 80h
        ; Exact mapped bytes 0F 8D D1 00 00 00: jge 0x43a7d1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0a104h], 0
        ; Exact mapped bytes 0F 84 C4 00 00 00: je 0x43a7d1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        mov eax, dword ptr [ebp - 0a104h]
        add eax, 150h
        push eax
        mov ecx, dword ptr [ebp - 0a0fch]
        imul ecx, ecx, 1404h
        lea edx, [ebp + ecx - 0a034h]
        mov eax, dword ptr [ebp - 0a100h]
        imul eax, eax, 18h
        lea ecx, [edx + eax + 4]
        push ecx
        ; Exact mapped bytes E8 DF E8 06 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 0a108h]
        ; Exact mapped bytes E8 B8 67 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 0a10ch]
        push edx
        lea eax, [ebp - 0a108h]
        push eax
        mov ecx, dword ptr [ebp - 0a104h]
        ; Exact mapped bytes E8 68 D8 04 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        push 10h
        lea ecx, [ebp - 0a108h]
        ; Exact mapped bytes E8 2E 68 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x68
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 0a0fch]
        imul ecx, ecx, 1404h
        lea edx, [ebp + ecx - 0a034h]
        mov eax, dword ptr [ebp - 0a100h]
        shl eax, 4
        lea ecx, [edx + eax + 0c04h]
        push ecx
        ; Exact mapped bytes E8 7A E8 06 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0a104h]
        ; Exact mapped bytes E8 2C BF FF FF: call 0x4366e0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0a104h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 0a108h]
        ; Exact mapped bytes E8 80 30 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x30
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 10 FF FF FF: jmp 0x43a6e1
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0a0f8h]
        push edx
        mov eax, dword ptr [ebp - 0a0fch]
        shl eax, 6
        mov ecx, dword ptr [ebp + 8]
        lea ecx, [ecx + eax + 0cb0h]
        ; Exact mapped bytes E8 F3 1B 04 00: call 0x47c3e3
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 63 FE FF FF: jmp 0x43a658
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0a0dch
        lea edx, [ebp - 0a0f0h]
        push edx
        push 0
        push 2
        push 80018002h
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 09 6B FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x6b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 10 CA 04 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0a0f4h], 1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D3 66 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0d78h]
        xor edx, edx
        mov dl, byte ptr [ecx + 64h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov edx, dword ptr [ecx + 104h]
        add edx, 1
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov dl, byte ptr [ecx + 50h]
        and dl, 7fh
        and edx, 0ffh
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 24 8B FC FF: call 0x40339f
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x8b
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        push 5b6050h
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 D2 40 09 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 18h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0d78h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 EC 00 00 00: mov ax, word ptr [edx + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a124h], eax
        cmp dword ptr [ebp - 0a124h], 0
        ; Exact mapped bytes 74 14: je 0x43a8c2
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 0a124h], 1
        ; Exact mapped bytes 74 1A: je 0x43a8d1
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp - 0a124h], 2
        ; Exact mapped bytes 74 20: je 0x43a8e0
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes EB 2B: jmp 0x43a8ed
        __asm _emit 0xeb
        __asm _emit 0x2b
        push 5b6064h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 86 36 0B 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x36
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes EB 1C: jmp 0x43a8ed
        __asm _emit 0xeb
        __asm _emit 0x1c
        push 5b606ch
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 77 36 0B 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x36
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x43a8ed
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5b6074h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 68 36 0B 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x36
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x43a8ff
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0d78h]
        mov cl, byte ptr [eax + 0b2h]
        and cl, 0fh
        and ecx, 0ffh
        cmp dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 0F 8D 9A 00 00 00: jge 0x43a9ba
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0a110h]
        ; Exact mapped bytes E8 DC 65 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x65
        __asm _emit 0x0f
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 14h]
        push edx
        push 5b607ch
        lea eax, [ebp - 0a110h]
        push eax
        ; Exact mapped bytes E8 18 40 09 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 0a110h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 78 36 0B 00: call 0x4edfce
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x36
        __asm _emit 0x0b
        __asm _emit 0x00
        lea edx, [ebp - 0a118h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        shl eax, 6
        mov ecx, dword ptr [ebp + 8]
        lea ecx, [ecx + eax + 0cb0h]
        ; Exact mapped bytes E8 14 19 04 00: call 0x47c286
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x19
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0a128h], eax
        mov edx, dword ptr [ebp - 0a128h]
        mov dword ptr [ebp - 0a12ch], edx
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 0a12ch]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 37 36 0B 00: call 0x4edfce
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x36
        __asm _emit 0x0b
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 0a118h]
        ; Exact mapped bytes E8 A6 2E 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x2e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0a110h]
        ; Exact mapped bytes E8 97 2E 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x2e
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 3C FF FF FF: jmp 0x43a8f6
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 34 36 0B 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x36
        __asm _emit 0x0b
        __asm _emit 0x00
        push eax
        push 5d66e0h
        ; Exact mapped bytes E8 87 D7 01 00: call 0x458156
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 0a0f4h], 1
        mov ecx, dword ptr [ebp - 0a0f4h]
        mov dword ptr [ebp - 0a11ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 55 2E 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x2e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0a11ch]
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
        add esp, 0a12ch
        cmp ebp, esp
        ; Exact mapped bytes E8 CB DD 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xdd
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
