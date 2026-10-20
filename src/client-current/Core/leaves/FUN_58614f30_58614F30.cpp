// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58614F30 .. +0x317 bytes.
extern "C" __declspec(naked) void FUN_58614f30_58614F30() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58886c71h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 60h
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
        ; Exact mapped bytes E8 F7 D2 E6 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xd2
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588ae150h
        push 198h
        ; Exact mapped bytes E8 71 C0 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xc0
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 16: je 0x58614fb9
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588ae124h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 FC B3 16 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xb3
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58614fc0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 40h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [edx + 60h], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58614fe5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x58615078
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 0E C0 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xc0
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 1D: je 0x58615023
        __asm _emit 0x74
        __asm _emit 0x1d
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 02 D3 E6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xd3
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5861502a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 44h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + eax*4 + 64h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 64h]
        mov dword ptr [ebp - 48h], edx
        push 0c8h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 E5 04 1A 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x04
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 64h]
        mov dword ptr [ebp - 4ch], edx
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 2E 0D E7 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x0d
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 64 FF FF FF: jmp 0x58614fdc
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 64h]
        mov dword ptr [ebp - 50h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 19 05 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x05
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 65 BF 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xbf
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 19: je 0x586150c8
        __asm _emit 0x74
        __asm _emit 0x19
        push 40h
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 5D D2 E6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xd2
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586150cf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 54h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [eax + 6ch], ecx
        push 0ach
        ; Exact mapped bytes E8 18 BF 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xbf
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 26: je 0x58615122
        __asm _emit 0x74
        __asm _emit 0x26
        push 40h
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 C3 6B EB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x6b
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x58615129
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 58h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [eax + 70h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 5ch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 5E 04 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x04
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 60h], edx
        push 101h
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 48 04 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 74h], 1
        push 0ach
        ; Exact mapped bytes E8 88 BE 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xbe
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 41: je 0x586151cd
        __asm _emit 0x74
        __asm _emit 0x41
        push 5
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 F9 E6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xf9
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 64h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 10h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1a4h
        push eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 18 6B EB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x6b
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586151d4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ecx + 78h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 6ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 E6 0C E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x0c
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 7ch], 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 82 0D E7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x0d
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 500h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
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
