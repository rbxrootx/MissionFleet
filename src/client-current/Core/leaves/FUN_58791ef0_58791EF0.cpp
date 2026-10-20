// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58791EF0 .. +0x2A3 bytes.
extern "C" __declspec(naked) void FUN_58791ef0_58791EF0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588911b9h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 58h
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
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 37 03 CF FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b6ae4h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 60h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 64h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 68h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 6ch], 0
        push 54h
        ; Exact mapped bytes E8 8C F0 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 35: je 0x58791fbd
        __asm _emit 0x74
        __asm _emit 0x35
        push 1
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B 2B CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x2b
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 64h
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 68 03 CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x58791fc4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 38h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [edx + 6ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 3ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 C3 35 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x35
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 0F F0 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 35: je 0x5879203a
        __asm _emit 0x74
        __asm _emit 0x35
        push 0
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E 2B CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x2b
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 64h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EB 02 CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x02
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58792041
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 44h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [eax + 68h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 48h], eax
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 39 3D CF FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 4ch], edx
        push 0f0h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 C3 34 02 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 7F EF 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xef
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 35: je 0x587920ca
        __asm _emit 0x74
        __asm _emit 0x35
        push 3
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E 2A CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x2a
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 64h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 5B 02 CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x587920d1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 54h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [eax + 64h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 58h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 B6 34 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 02 EF 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xef
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 35: je 0x58792147
        __asm _emit 0x74
        __asm _emit 0x35
        push 2
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 2A CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x2a
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 64h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 DE 01 CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x5879214e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ecx + 60h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 64h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 39 34 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        nop
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
