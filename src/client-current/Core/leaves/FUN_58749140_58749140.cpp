// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58749140 .. +0x512 bytes.
extern "C" __declspec(naked) void FUN_58749140_58749140() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888f5fbh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 3ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        movzx eax, word ptr [ebp + 3ch]
        push eax
        mov ecx, dword ptr [ebp + 38h]
        push ecx
        mov edx, dword ptr [ebp + 34h]
        push edx
        mov eax, dword ptr [ebp + 30h]
        push eax
        mov ecx, dword ptr [ebp + 2ch]
        push ecx
        mov edx, dword ptr [ebp + 28h]
        push edx
        mov eax, dword ptr [ebp + 24h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B3 A8 E3 FF: call 0x58583a40
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xa8
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 588b4e98h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 230h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 234h], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 238h], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 74h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 78h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 7ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ecx + 80h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [eax + 84h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 38h]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 60h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 64h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 68h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 6ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 28h]
        mov dword ptr [edx + 1e8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 2ch]
        mov dword ptr [ecx + 1ech], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1f0h], 0c8h
        ; Exact mapped bytes 6B 05 64 77 94 58 64: imul eax, dword ptr [0x58947764], 0x64
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x64
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 10h]
        imul eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 88h], eax
        ; Exact mapped bytes 6B 05 64 77 94 58 75: imul eax, dword ptr [0x58947764], 0x75
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x75
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 10h]
        imul eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 90h], 0c8h
        ; Exact mapped bytes 6B 05 64 77 94 58 64: imul eax, dword ptr [0x58947764], 0x64
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x64
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 10h]
        imul eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a4h], eax
        ; Exact mapped bytes 6B 05 64 77 94 58 75: imul eax, dword ptr [0x58947764], 0x75
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x75
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 10h]
        imul eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a8h], eax
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ach], 0c8h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 204h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0b0h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1e0h], 40000000h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1e4h], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ecx + 0a0h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 23ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 240h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 200h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1f8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 20h]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx + 94h], eax
        mov ecx, dword ptr [ebp + 20h]
        mov edx, dword ptr [ecx + 4]
        neg edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 98h], edx
        mov ecx, dword ptr [ebp + 20h]
        mov edx, dword ptr [ecx + 8]
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 9ch], edx
        mov ecx, 0bh
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A B8 01 00 00: mov word ptr [edx + 0x1b8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1d4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1b4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1dch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1bch], 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1c0h], 55h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1c4h], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1c8h], 64h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1cch], 64h
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C8 04: or ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x04
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1d0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 228h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 22ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 250h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 258h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 254h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 25ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 260h], 0
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x5874951d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 22h
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C B6 D3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xb6
        __asm _emit 0xd3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1f8h], eax
        push 54h
        ; Exact mapped bytes E8 60 7B 0E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x7b
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 47: je 0x587494fb
        __asm _emit 0x74
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 0ah
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 2ch], eax
        push 0
        ; Exact mapped bytes 8B 0D 58 07 96 58: mov ecx, dword ptr [0x58960758]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A B6 D3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xb6
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        push 0fa0h
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2A 8E D3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x8e
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x58749502
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 34h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [eax + 1f4h], ecx
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x587495ae
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D 54 07 96 58: mov ecx, dword ptr [0x58960754]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 B5 D3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xb5
        __asm _emit 0xd3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1f8h], eax
        push 54h
        ; Exact mapped bytes E8 CA 7A 0E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x7a
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 47: je 0x58749591
        __asm _emit 0x74
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 0ah
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 3ch], eax
        push 1
        ; Exact mapped bytes 8B 0D 54 07 96 58: mov ecx, dword ptr [0x58960754]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 B5 D3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xb5
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        push 0fa0h
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 94 8D D3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x8d
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58749598
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 44h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [eax + 1f4h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 D4 D3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xd4
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x587495e3
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 D3 D3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd3
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 81 2B D4 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x2b
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0a0h], eax
        ; Exact mapped bytes 75 09: jne 0x587495e3
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes EB 07: jmp 0x587495ea
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax + 220h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 1f8h]
        ; Exact mapped bytes E8 CC 96 D3 FF: call 0x58482cd0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x96
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 10h], edx
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1f4h]
        mov dword ptr [ebp - 48h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 85 BF 06 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 24ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 38 00: ret 0x38
        __asm _emit 0xc2
        __asm _emit 0x38
        __asm _emit 0x00
    }
}
