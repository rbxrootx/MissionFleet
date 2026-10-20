// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858E190 .. +0x201 bytes.
extern "C" __declspec(naked) void FUN_5858e190_5858E190() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58884244h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 40h
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
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5858e1ca
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 0F 84 AC 01 00 00: je 0x5858e380
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + ecx*4 + 40h], 0
        ; Exact mapped bytes 0F 85 89 00 00 00: jne 0x5858e26e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 18 2E 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x2e
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 4E: je 0x5858e24d
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 DE EF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xde
        __asm _emit 0xef
        __asm _emit 0xff
        add eax, 12ch
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 87 EF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x87
        __asm _emit 0xef
        __asm _emit 0xff
        add eax, 12ch
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes A1 10 06 96 58: mov eax, dword ptr [0x58960610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 38h], eax
        push 2710h
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D8 40 EF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x40
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5858e254
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 3ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [eax + edx*4 + 40h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 40h]
        mov dword ptr [ebp - 40h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x5858e28a
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0fffffeffh
        ; Exact mapped bytes EB 07: jmp 0x5858e291
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 101h
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 13 73 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x73
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + eax*4 + 40h]
        mov dword ptr [ebp - 44h], edx
        movzx eax, byte ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 29 7C EF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x7c
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x5858e37b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx*4 + 40h]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 14h]
        movzx edx, byte ptr [ecx + 0dh]
        sub edx, 1
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 4]
        movzx eax, byte ptr [edx + eax + 2]
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x5858e2f6
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 50h
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes EB 66: jmp 0x5858e35c
        __asm _emit 0xeb
        __asm _emit 0x66
        mov edx, dword ptr [ebp - 14h]
        movzx eax, byte ptr [edx + 0dh]
        sub eax, 1
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        movzx ecx, byte ptr [eax + ecx + 2]
        cmp ecx, 1
        ; Exact mapped bytes 75 0B: jne 0x5858e31e
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 10h]
        add edx, 52h
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes EB 38: jmp 0x5858e356
        __asm _emit 0xeb
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 14h]
        movzx ecx, byte ptr [eax + 0dh]
        sub ecx, 1
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        movzx edx, byte ptr [ecx + edx + 2]
        cmp edx, 0ffh
        ; Exact mapped bytes 75 0B: jne 0x5858e349
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 10h]
        add eax, 54h
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5858e350
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 56h
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes 8B 0D D4 06 96 58: mov ecx, dword ptr [0x589606d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 67 EF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x67
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 B6 7B EF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x7b
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 41 FE FF FF: jmp 0x5858e1c1
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
