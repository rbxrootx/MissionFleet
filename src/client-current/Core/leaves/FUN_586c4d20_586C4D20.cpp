// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C4D20 .. +0x746 bytes.
extern "C" __declspec(naked) void FUN_586c4d20_586C4D20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ech
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 0F BF 45 08: movsx eax, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x08
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 E9 04 00 00: je 0x586c5226
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes 74 0F: je 0x586c4d52
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 0F 84 4E 02 00 00: je 0x586c4f9b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D4 04 00 00: jmp 0x586c5226
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586c4d64
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7D 37: jge 0x586c4da1
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 22ch]
        mov dword ptr [ebp - 10h], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5C 10 DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x10
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 22ch]
        mov dword ptr [ebp - 14h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 42 11 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x11
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BA: jmp 0x586c4d5b
        __asm _emit 0xeb
        __asm _emit 0xba
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 240h]
        mov dword ptr [ebp - 18h], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 29 11 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x11
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 240h]
        mov dword ptr [ebp - 1ch], edx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 13 10 DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x10
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 244h]
        mov dword ptr [ebp - 20h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 FD 10 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x10
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 244h]
        mov dword ptr [ebp - 24h], eax
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 E7 0F DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x0f
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 248h]
        mov dword ptr [ebp - 28h], edx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 D1 10 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x10
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 248h]
        mov dword ptr [ebp - 2ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 BB 0F DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x0f
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 130h]
        mov dword ptr [ebp - 30h], edx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 9C 0F DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x0f
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 130h]
        mov dword ptr [ebp - 34h], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 7D 10 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x10
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 124h]
        mov dword ptr [ebp - 38h], ecx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 5E 0F DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x0f
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 124h]
        mov dword ptr [ebp - 3ch], edx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 3F 10 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x10
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 130h]
        mov dword ptr [ebp - 40h], edx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 20 0F DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x0f
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 130h]
        mov dword ptr [ebp - 44h], edx
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 01 10 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x10
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 124h]
        mov dword ptr [ebp - 48h], edx
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 E2 0E DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x0e
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 124h]
        mov dword ptr [ebp - 4ch], edx
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 C3 0F DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x0f
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 130h]
        mov dword ptr [ebp - 50h], edx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 A5 0E DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x0e
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 130h]
        mov dword ptr [ebp - 54h], edx
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 87 0F DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x0f
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 124h]
        mov dword ptr [ebp - 58h], edx
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 69 0E DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x0e
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 124h]
        mov dword ptr [ebp - 5ch], edx
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 4B 0F DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x0f
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C5 04 00 00: jmp 0x586c5460
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586c4fad
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7D 37: jge 0x586c4fea
        __asm _emit 0x7d
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 22ch]
        mov dword ptr [ebp - 60h], eax
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 13 0E DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x0e
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 22ch]
        mov dword ptr [ebp - 64h], eax
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 F9 0E DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x0e
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BA: jmp 0x586c4fa4
        __asm _emit 0xeb
        __asm _emit 0xba
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 240h]
        mov dword ptr [ebp - 68h], edx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 E0 0E DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x0e
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 240h]
        mov dword ptr [ebp - 6ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 CA 0D DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 244h]
        mov dword ptr [ebp - 70h], eax
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 B4 0E DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x0e
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 244h]
        mov dword ptr [ebp - 74h], edx
        push 1
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 9E 0D DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 248h]
        mov dword ptr [ebp - 78h], ecx
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 88 0E DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x0e
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 248h]
        mov dword ptr [ebp - 7ch], eax
        push 1
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 72 0D DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 130h]
        mov dword ptr [ebp - 80h], ecx
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 53 0D DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 130h]
        mov dword ptr [ebp - 84h], edx
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 2E 0E DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x0e
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 124h]
        mov dword ptr [ebp - 88h], eax
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 09 0D DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 124h]
        mov dword ptr [ebp - 8ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 E4 0D DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 130h]
        mov dword ptr [ebp - 90h], ecx
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 BF 0C DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 130h]
        mov dword ptr [ebp - 94h], ecx
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 9A 0D DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 124h]
        mov dword ptr [ebp - 98h], ecx
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 75 0C DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x0c
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 124h]
        mov dword ptr [ebp - 9ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 50 0D DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 130h]
        mov dword ptr [ebp - 0a0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 2C 0C DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x0c
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 130h]
        mov dword ptr [ebp - 0a4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 08 0D DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 124h]
        mov dword ptr [ebp - 0a8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 E4 0B DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x0b
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 124h]
        mov dword ptr [ebp - 0ach], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 C0 0C DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 3A 02 00 00: jmp 0x586c5460
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586c5238
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7D 43: jge 0x586c5281
        __asm _emit 0x7d
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 22ch]
        mov dword ptr [ebp - 0b0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 82 0B DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x0b
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 22ch]
        mov dword ptr [ebp - 0b4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 62 0C DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x0c
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB AE: jmp 0x586c522f
        __asm _emit 0xeb
        __asm _emit 0xae
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 240h]
        mov dword ptr [ebp - 0b8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 43 0C DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x0c
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 240h]
        mov dword ptr [ebp - 0bch], eax
        push 0
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 27 0B DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x0b
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 244h]
        mov dword ptr [ebp - 0c0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 0B 0C DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x0c
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 244h]
        mov dword ptr [ebp - 0c4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 EF 0A DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x0a
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 248h]
        mov dword ptr [ebp - 0c8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 D3 0B DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x0b
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 248h]
        mov dword ptr [ebp - 0cch], edx
        push 0
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 B7 0A DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x0a
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 130h]
        mov dword ptr [ebp - 0d0h], eax
        push 1
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 92 0A DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x0a
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 130h]
        mov dword ptr [ebp - 0d4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 6D 0B DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x0b
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 124h]
        mov dword ptr [ebp - 0d8h], edx
        push 1
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 48 0A DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x0a
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 124h]
        mov dword ptr [ebp - 0dch], eax
        push 1
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 23 0B DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x0b
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 09: jmp 0x586c53d0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 0F 8D 86 00 00 00: jge 0x586c5460
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 130h]
        mov dword ptr [ebp - 0e0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 E6 09 DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x09
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 130h]
        mov dword ptr [ebp - 0e4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 C6 0A DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x0a
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 124h]
        mov dword ptr [ebp - 0e8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 A6 09 DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x09
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 124h]
        mov dword ptr [ebp - 0ech], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 86 0A DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x0a
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 67 FF FF FF: jmp 0x586c53c7
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
