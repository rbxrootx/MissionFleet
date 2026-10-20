// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043A1A4 .. +0x35F bytes.
extern "C" __declspec(naked) void FUN_0043a1a4_0043A1A4() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a469h
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
        mov eax, 0a100h
        ; Exact mapped bytes E8 FA F5 06 00: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xf5
        __asm _emit 0x06
        __asm _emit 0x00
        push edi
        push ecx
        lea edi, [ebp - 0a10ch]
        mov ecx, 2840h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 0a10ch], ecx
        mov dword ptr [ebp - 0a0ech], 0
        lea ecx, [ebp - 0a0e8h]
        ; Exact mapped bytes E8 BA C4 FF FF: call 0x4366b0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        push 0a0dch
        push 0
        lea eax, [ebp - 0a0e8h]
        push eax
        ; Exact mapped bytes E8 67 F1 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xf1
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 0a108h]
        push ecx
        ; Exact mapped bytes E8 7F 51 09 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x51
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0a0e8h]
        ; Exact mapped bytes E8 8A 74 0F 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x74
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0d78h]
        mov cl, byte ptr [eax + 50h]
        and cl, 7fh
        mov byte ptr [ebp - 0a038h], cl
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0d78h]
        mov ecx, dword ptr [eax + 104h]
        add ecx, 1
        mov dword ptr [ebp - 0a034h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0d78h]
        mov cl, byte ptr [eax + 64h]
        mov byte ptr [ebp - 0a030h], cl
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
        ; Exact mapped bytes 66 89 8D D2 5F FF FF: mov word ptr [ebp - 0xa02e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xd2
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
        mov dword ptr [ebp - 0a040h], eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 89 70 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 0F 84 3B 02 00 00: je 0x43a4df
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3b
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
        ; Exact mapped bytes E8 71 70 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x70
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        mov edx, dword ptr [ecx + 1b4h]
        add edx, 1
        mov dword ptr [ebp - 0a0f0h], edx
        mov eax, dword ptr [ebp - 0a0f0h]
        mov dword ptr [ebp - 0a03ch], eax
        mov ecx, dword ptr [ebp - 0a0f0h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 73 93 FC FF: call 0x403652
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x93
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 36 70 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x70
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0fd0h]
        mov eax, dword ptr [ebp - 0a0f0h]
        mov dword ptr [edx + 1b4h], eax
        mov dword ptr [ebp - 0a0f4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x43a317
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0a0f4h]
        add ecx, 1
        mov dword ptr [ebp - 0a0f4h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0d78h]
        mov cl, byte ptr [eax + 0b2h]
        and cl, 0fh
        and ecx, 0ffh
        cmp dword ptr [ebp - 0a0f4h], ecx
        ; Exact mapped bytes 0F 8D 6D 01 00 00: jge 0x43a4a8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0a0f4h]
        imul edx, edx, 1404h
        mov eax, dword ptr [ebp - 0a0f4h]
        mov dword ptr [ebp + edx - 0a02ch], eax
        mov ecx, dword ptr [ebp - 0a0f4h]
        shl ecx, 6
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + ecx + 0cd4h], 0
        ; Exact mapped bytes 0F 84 16 01 00 00: je 0x43a484
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0a0f4h]
        shl eax, 6
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + eax + 0cd4h]
        mov dword ptr [ebp - 0a0fch], edx
        mov dword ptr [ebp - 0a0f8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x43a3a2
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0a0f8h]
        add eax, 1
        mov dword ptr [ebp - 0a0f8h], eax
        cmp dword ptr [ebp - 0a0f8h], 80h
        ; Exact mapped bytes 0F 8D D2 00 00 00: jge 0x43a484
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0a0fch], 0
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x43a484
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        mov ecx, dword ptr [ebp - 0a0fch]
        add ecx, 150h
        push ecx
        mov edx, dword ptr [ebp - 0a0f4h]
        imul edx, edx, 1404h
        lea eax, [ebp + edx - 0a02ch]
        mov ecx, dword ptr [ebp - 0a0f8h]
        imul ecx, ecx, 18h
        lea edx, [eax + ecx + 4]
        push edx
        ; Exact mapped bytes E8 2C EC 06 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 0a100h]
        ; Exact mapped bytes E8 05 6B 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x6b
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 0a104h]
        push eax
        lea ecx, [ebp - 0a100h]
        push ecx
        mov ecx, dword ptr [ebp - 0a0fch]
        ; Exact mapped bytes E8 B5 DB 04 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xdb
        __asm _emit 0x04
        __asm _emit 0x00
        push 10h
        lea ecx, [ebp - 0a100h]
        ; Exact mapped bytes E8 7B 6B 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x6b
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 0a0f4h]
        imul edx, edx, 1404h
        lea eax, [ebp + edx - 0a02ch]
        mov ecx, dword ptr [ebp - 0a0f8h]
        shl ecx, 4
        lea edx, [eax + ecx + 0c04h]
        push edx
        ; Exact mapped bytes E8 C7 EB 06 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xeb
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0a0fch]
        ; Exact mapped bytes E8 79 C2 FF FF: call 0x4366e0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0fch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 0a100h]
        ; Exact mapped bytes E8 CD 33 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x33
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 0F FF FF FF: jmp 0x43a393
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0a0f0h]
        push eax
        mov ecx, dword ptr [ebp - 0a0f4h]
        shl ecx, 6
        mov edx, dword ptr [ebp + 8]
        lea ecx, [edx + ecx + 0cb0h]
        ; Exact mapped bytes E8 40 1F 04 00: call 0x47c3e3
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x1f
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 60 FE FF FF: jmp 0x43a308
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0a0dch
        lea eax, [ebp - 0a0e8h]
        push eax
        push 0
        push 1
        push 80018002h
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 56 6E FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x6e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 5D CD 04 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xcd
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0a0ech], 1
        mov eax, dword ptr [ebp - 0a0ech]
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
        add esp, 0a10ch
        cmp ebp, esp
        ; Exact mapped bytes E8 E3 E2 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xe2
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
