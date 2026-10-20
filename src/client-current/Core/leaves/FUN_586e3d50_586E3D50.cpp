// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E3D50 .. +0x457 bytes.
extern "C" __declspec(naked) void FUN_586e3d50_586E3D50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888c7ffh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 64h
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
        ; Exact mapped bytes E8 D7 E4 D9 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xe4
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b3034h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 50h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 54h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 58h], 100h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 5ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 578h], 40h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 57ch], 40h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0d4h], 1900h
        push 8
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 580h
        push ecx
        ; Exact mapped bytes E8 07 90 16 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x90
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 0ch
        push 15h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 0D DA FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x0d
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4e4h], eax
        push 80h
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 4e8h
        push eax
        ; Exact mapped bytes E8 D9 8F 16 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x8f
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 568h], 0
        push 0ffff40h
        push 1
        push 0
        ; Exact mapped bytes FF 15 B8 40 89 58: call dword ptr [0x588940b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 68h], eax
        push 8
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 74h
        push eax
        ; Exact mapped bytes E8 A4 8F 16 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x8f
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 0ch
        push 8
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        push ecx
        ; Exact mapped bytes E8 91 8F 16 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x8f
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 0ch
        push 28h
        push 0
        mov edx, dword ptr [ebp - 10h]
        add edx, 84h
        push edx
        ; Exact mapped bytes E8 7B 8F 16 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x8f
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 18h], 19h
        push 84h
        ; Exact mapped bytes E8 5B D1 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xd1
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 4B: je 0x586e3f04
        __asm _emit 0x74
        __asm _emit 0x4b
        push 4ffh
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 0C DA FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x0c
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 0ffh
        mov eax, dword ptr [ebp + 10h]
        sub eax, dword ptr [ebp - 18h]
        push eax
        push -0ah
        push 0eh
        push 1
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        sub ecx, 1eh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, dword ptr [ebp - 18h]
        push edx
        push 64h
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 01 9B DE FF: call 0x584cda00
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x9b
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x586e3f0b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 40h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [eax + 588h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 588h]
        ; Exact mapped bytes E8 A1 A0 DE FF: call 0x584cdfd0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 588h]
        mov dword ptr [ebp - 44h], ecx
        push 0b4h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 F8 15 0D 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x15
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 588h]
        mov dword ptr [ebp - 48h], eax
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 42 1E DA FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x1e
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], 11h
        push 84h
        ; Exact mapped bytes E8 95 D0 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xd0
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 4A: je 0x586e3fc9
        __asm _emit 0x74
        __asm _emit 0x4a
        push 500h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 0B DA FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x0b
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        push 0dch
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, dword ptr [ebp - 18h]
        push ecx
        push -5
        push 0eh
        mov edx, dword ptr [ebp - 4ch]
        push edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, dword ptr [ebp - 18h]
        push ecx
        push 64h
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 3C 9A DE FF: call 0x584cda00
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x9a
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x586e3fd0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 54h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [edx + 58ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 58ch]
        ; Exact mapped bytes E8 DC 9F DE FF: call 0x584cdfd0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x9f
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 58ch]
        mov dword ptr [ebp - 58h], eax
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 96 1D DA FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x1d
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586e4023
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 6
        ; Exact mapped bytes 0F 8D 1D 01 00 00: jge 0x586e414a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 D0 CF 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xcf
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 1F: je 0x586e4063
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 64h
        push edx
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 C2 E2 D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xe2
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x586e406a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 5ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [eax + edx*4 + 5a0h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 5a0h]
        mov dword ptr [ebp - 60h], ecx
        push 0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 02 1D DA FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x1d
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 5a0h]
        mov dword ptr [ebp - 64h], ecx
        push 0
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 28 1E DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x1e
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 44 CF 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xcf
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 1F: je 0x586e40ef
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 66h
        push edx
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 36 E2 D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xe2
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x586e40f6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 68h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [eax + edx*4 + 5b8h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 5b8h]
        mov dword ptr [ebp - 6ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 76 1C DA FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x1c
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 5b8h]
        mov dword ptr [ebp - 70h], ecx
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 9C 1D DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x1d
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D0 FE FF FF: jmp 0x586e401a
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 590h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 594h], 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 22 1E DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x1e
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 500h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
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
