// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58646C80 .. +0x34F bytes.
extern "C" __declspec(naked) void FUN_58646c80_58646C80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0d8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 88h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E 4A E7 FF: call 0x584bb720
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x4a
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 75 2B: jne 0x58646cec
        __asm _emit 0x75
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 88h]
        mov byte ptr [ecx + 309h], 6
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA 60 F3 FF: call 0x5857cd90
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x60
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D2 02 00 00: jmp 0x58646fbe
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        add eax, 24h
        push eax
        push 588af388h
        ; Exact mapped bytes E8 F3 B2 ED FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xb2
        __asm _emit 0xed
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        push -1
        lea edx, [ebp - 84h]
        push edx
        push 0
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 5F FD FF: call 0x5861cc30
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x5f
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 88h]
        add eax, 24ch
        mov dword ptr [ebp - 98h], eax
        lea ecx, [ebp - 8ch]
        push ecx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 35 13 E4 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x13
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 15: jmp 0x58646d63
        __asm _emit 0xeb
        __asm _emit 0x15
        push 0
        lea edx, [ebp - 0c8h]
        push edx
        lea ecx, [ebp - 8ch]
        ; Exact mapped bytes E8 1E 0D E4 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 88h]
        add eax, 24ch
        mov dword ptr [ebp - 9ch], eax
        lea ecx, [ebp - 0cch]
        push ecx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 0A 14 E4 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x14
        __asm _emit 0xe4
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8ch]
        ; Exact mapped bytes E8 3E 0C E4 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x0c
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 5E: je 0x58646df7
        __asm _emit 0x74
        __asm _emit 0x5e
        lea ecx, [ebp - 8ch]
        ; Exact mapped bytes E8 9C 0C E4 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0xe4
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 2dh
        push ecx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 3A: jne 0x58646df2
        __asm _emit 0x75
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 88h]
        add edx, 24ch
        mov dword ptr [ebp - 0a4h], edx
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 0a0h], eax
        mov ecx, dword ptr [ebp - 0a0h]
        push ecx
        lea edx, [ebp - 0d0h]
        push edx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 C1 31 E7 FF: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x31
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 05: jmp 0x58646df7
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 57 FF FF FF: jmp 0x58646d4e
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 88h]
        add eax, 190h
        mov dword ptr [ebp - 0a8h], eax
        lea ecx, [ebp - 90h]
        push ecx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 66 12 E4 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x12
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 15: jmp 0x58646e32
        __asm _emit 0xeb
        __asm _emit 0x15
        push 0
        lea edx, [ebp - 0d4h]
        push edx
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 DF FD FF FF: call 0x58646c10
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 88h]
        add eax, 190h
        mov dword ptr [ebp - 0ach], eax
        lea ecx, [ebp - 0d8h]
        push ecx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 3B 13 E4 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x13
        __asm _emit 0xe4
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 6F 0B E4 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x0b
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 2A: je 0x58646e92
        __asm _emit 0x74
        __asm _emit 0x2a
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 CD 0B E4 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x0b
        __asm _emit 0xe4
        __asm _emit 0xff
        add eax, 2dh
        push eax
        mov eax, dword ptr [ebp - 94h]
        add eax, 2dh
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x58646e90
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 2E 01 00 00: jmp 0x58646fbe
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 8B: jmp 0x58646e1d
        __asm _emit 0xeb
        __asm _emit 0x8b
        mov ecx, dword ptr [ebp - 94h]
        add ecx, 2dh
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 2dh
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 88h]
        add eax, 190h
        mov dword ptr [ebp - 0b0h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 17 40 00 00: call 0x5864aee0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 88h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 D6 00 00 00: jne 0x58646fbe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 240h]
        mov dword ptr [ebp - 0b4h], eax
        push 0add783h
        push 0
        mov ecx, dword ptr [ebp + 8]
        add ecx, 2dh
        push ecx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 0D 96 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x96
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 244h]
        mov dword ptr [ebp - 0b8h], eax
        push 0ffffffh
        push -1
        push 588af31fh
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 E4 95 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x95
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 248h]
        mov dword ptr [ebp - 0bch], edx
        push 0ffffffh
        push -1
        push 588af323h
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 BB 95 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x95
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + eax + 20ch]
        mov dword ptr [ebp - 0c4h], edx
        mov ecx, dword ptr [ebp - 88h]
        add ecx, 24ch
        ; Exact mapped bytes E8 B0 12 E4 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0xe4
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 88h]
        add ecx, 190h
        ; Exact mapped bytes E8 9D 3F 00 00: call 0x5864af40
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, eax
        mov dword ptr [ebp - 0c0h], esi
        mov eax, dword ptr [ebp - 0c0h]
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 D3 41 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x41
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 87 A0 1E 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xa0
        __asm _emit 0x1e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
