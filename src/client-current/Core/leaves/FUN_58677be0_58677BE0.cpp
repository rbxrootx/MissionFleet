// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58677BE0 .. +0x1E73 bytes.
extern "C" __declspec(naked) void FUN_58677be0_58677BE0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58889d19h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 364h
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
        ; Exact mapped bytes E8 44 A6 E0 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xa6
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588affe0h
        mov ecx, 578h
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 4A 60: mov word ptr [edx + 0x60], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x60
        mov eax, 4b0h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 41 62: mov word ptr [ecx + 0x62], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x62
        mov edx, 5aah
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 50 64: mov word ptr [eax + 0x64], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 2dch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 2e0h], ecx
        push 20h
        ; Exact mapped bytes E8 85 93 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 27: je 0x58677cb6
        __asm _emit 0x74
        __asm _emit 0x27
        push 7
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 CD E0 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xcd
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        mov edx, dword ptr [ebp - 15ch]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 DF 37 14 00: call 0x587bb490
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x37
        __asm _emit 0x14
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x58677cbd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 160h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 160h]
        mov dword ptr [ecx + 68h], edx
        push 54h
        ; Exact mapped bytes E8 27 93 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x93
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 46: je 0x58677d33
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 48 60: mov cx, word ptr [eax + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x60
        ; Exact mapped bytes 66 89 4D E6: mov word ptr [ebp - 0x1a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe6
        push 129h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 18 CE E0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xce
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        movzx edx, word ptr [ebp - 1ah]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 164h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 F2 A5 E0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xa5
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x58677d3a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 168h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 168h]
        mov dword ptr [edx + 6ch], eax
        push 54h
        ; Exact mapped bytes E8 AA 92 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x92
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 49: je 0x58677db3
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 60: movsx edx, word ptr [ecx + 0x60]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x60
        add edx, 33h
        ; Exact mapped bytes 66 89 55 E4: mov word ptr [ebp - 0x1c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe4
        push 12ah
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 CD E0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xcd
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        movzx eax, word ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 16ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 72 A5 E0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xa5
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x58677dba
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 170h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 170h]
        mov dword ptr [eax + 70h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 174h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 C1 D7 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xd7
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 178h], edx
        push 0
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 38 E0 E0 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xe0
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 17ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 7F DF E0 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xdf
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        push 0c4h
        ; Exact mapped bytes E8 D8 91 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x91
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 1B: je 0x58677e57
        __asm _emit 0x74
        __asm _emit 0x1b
        push 40h
        push 0
        push 0
        push -3ch
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 4E AC 06 00: call 0x586e2aa0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x58677e5e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 180h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 180h]
        mov dword ptr [ecx + 0c4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 184h], ecx
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 60h]
        push eax
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 E4 DF E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xdf
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [ebp - 188h], edx
        push 0
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 98 7D E8 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x7d
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58677ecb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 20h
        ; Exact mapped bytes 0F 8D 9D 00 00 00: jge 0x58677f72
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 28 91 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x91
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 39: je 0x58677f25
        __asm _emit 0x74
        __asm _emit 0x39
        push 7
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 CB E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xcb
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 18ch], eax
        push 0fa0h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 3dh
        push ecx
        push 0
        mov edx, dword ptr [ebp - 18ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 F0 E8 E0 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x58677f2c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 190h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 190h]
        mov dword ptr [eax + edx*4 + 108h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 108h]
        mov dword ptr [ebp - 194h], ecx
        push 0
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 E4 75 E2 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x75
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 50 FF FF FF: jmp 0x58677ec2
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58677f84
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 0F 8D 72 02 00 00: jge 0x58678200
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 6C 90 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x90
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x5867802e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 60: movsx ecx, word ptr [eax + 0x60]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x60
        add ecx, 0ah
        ; Exact mapped bytes 66 89 4D E2: mov word ptr [ebp - 0x1e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        add eax, 6ah
        mov dword ptr [ebp - 198h], eax
        push 9
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA CA E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xca
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 19ch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1a0h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1a4h], edx
        movzx eax, word ptr [ebp - 1eh]
        push eax
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        imul edx, dword ptr [ebp - 14h], 4ch
        add edx, 78h
        push edx
        mov eax, dword ptr [ebp - 19ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 1a0h]
        push edx
        mov eax, dword ptr [ebp - 1a4h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 B7 3C E5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x3c
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x58678035
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 1a8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1a8h]
        mov dword ptr [eax + edx*4 + 0c8h], ecx
        push 0b8h
        ; Exact mapped bytes E8 A5 8F 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x8f
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 26: je 0x58678095
        __asm _emit 0x74
        __asm _emit 0x26
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebp + 10h]
        add edx, 68h
        push edx
        imul eax, dword ptr [ebp - 14h], 4ch
        add eax, 3dh
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 F0 E6 00 00: call 0x58686780
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x5867809c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 1ach], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 7ch]
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 1ach]
        mov dword ptr [edx + ecx], eax
        push 0bch
        ; Exact mapped bytes E8 36 8F 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x8f
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 29: je 0x58678107
        __asm _emit 0x74
        __asm _emit 0x29
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 9ah
        push ecx
        imul edx, dword ptr [ebp - 14h], 4ch
        add edx, 3dh
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 CE A8 01 00: call 0x586929d0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x5867810e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov ecx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 1b0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 7ch]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 1b0h]
        mov dword ptr [ecx + edx], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 1b4h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 60: movsx edx, word ptr [ecx + 0x60]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x60
        add edx, 32h
        push edx
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 19 DD E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xdd
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 7ch]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 1b8h], ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 60: movsx eax, word ptr [edx + 0x60]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x60
        add eax, 32h
        push eax
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 E8 DC E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 1bch], eax
        push 0
        push 0
        push 0
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 57 7C 00 00: call 0x5867fe20
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 7ch]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 1c0h], eax
        push 0
        push 0
        push 0
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 26 7C 00 00: call 0x5867fe20
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 7B FD FF FF: jmp 0x58677f7b
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 FD 8D 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x8d
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 3E: je 0x58678255
        __asm _emit 0x74
        __asm _emit 0x3e
        push 4
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC C8 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xc8
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 1c4h], eax
        push 0bb8h
        mov edx, dword ptr [ebp + 10h]
        add edx, 3bh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0ch
        push eax
        mov ecx, dword ptr [ebp - 1c4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 C0 E5 E0 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xe5
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x5867825c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 1c8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 188h]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 1c8h]
        mov dword ptr [ecx + eax], edx
        push 58h
        ; Exact mapped bytes E8 71 8D 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x8d
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 3E: je 0x586782e1
        __asm _emit 0x74
        __asm _emit 0x3e
        push 3
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 C8 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xc8
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 1cch], eax
        push 0bb8h
        mov eax, dword ptr [ebp + 10h]
        add eax, 6dh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2
        push ecx
        mov edx, dword ptr [ebp - 1cch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 34 E5 E0 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xe5
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x586782e8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov ecx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 1d0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 188h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 1d0h]
        mov dword ptr [edx + eax], ecx
        push 58h
        ; Exact mapped bytes E8 E5 8C 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x8c
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 46: je 0x5867837b
        __asm _emit 0x74
        __asm _emit 0x46
        push 6
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E C7 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xc7
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 1d4h], eax
        push 0bb8h
        mov edx, dword ptr [ebp + 10h]
        add edx, 3bh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 17ah
        push eax
        mov ecx, dword ptr [ebp - 1d4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 9D E4 E0 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xe4
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58678385
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 1d8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 188h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 1d8h]
        mov dword ptr [eax + edx], ecx
        push 58h
        ; Exact mapped bytes E8 45 8C 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x8c
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 46: je 0x5867841b
        __asm _emit 0x74
        __asm _emit 0x46
        push 5
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE C6 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xc6
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 1dch], eax
        push 0bb8h
        mov edx, dword ptr [ebp + 10h]
        add edx, 6ch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 179h
        push eax
        mov ecx, dword ptr [ebp - 1dch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 FD E3 E0 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xe3
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58678425
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov eax, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 1e0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 188h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 1e0h]
        mov dword ptr [eax + ecx], edx
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 188h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 1e4h], eax
        push 0
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 C8 70 E2 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x70
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 188h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 1e8h], eax
        push 0
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 98 70 E2 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x70
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 188h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 1ech], eax
        push 0
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 68 70 E2 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 188h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 1f0h], edx
        push 0
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 38 70 E2 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x70
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 E1 8A 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x8a
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 41: je 0x5867857a
        __asm _emit 0x74
        __asm _emit 0x41
        push 0eh
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A C5 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xc5
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 1f4h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 5ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 14h
        push ecx
        push 2
        mov edx, dword ptr [ebp - 1f4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 FE 23 14 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x23
        __asm _emit 0x14
        __asm _emit 0x00
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58678584
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov ecx, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 1f8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 198h]
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 1f8h]
        mov dword ptr [edx + ecx], eax
        push 0fch
        ; Exact mapped bytes E8 43 8A 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x8a
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 44: je 0x5867861b
        __asm _emit 0x74
        __asm _emit 0x44
        push 0eh
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC C4 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xc4
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 1fch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 8dh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0ch
        push edx
        push 2
        mov eax, dword ptr [ebp - 1fch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 5D 23 14 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x23
        __asm _emit 0x14
        __asm _emit 0x00
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58678625
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 200h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 198h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 200h]
        mov dword ptr [eax + ecx], edx
        push 0fch
        ; Exact mapped bytes E8 A2 89 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x89
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 44: je 0x586786bc
        __asm _emit 0x74
        __asm _emit 0x44
        push 0fh
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B C4 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xc4
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 204h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 5ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 17ch
        push ecx
        push 2
        mov edx, dword ptr [ebp - 204h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 BC 22 14 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x22
        __asm _emit 0x14
        __asm _emit 0x00
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586786c6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov ecx, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 208h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 198h]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 208h]
        mov dword ptr [ecx + eax], edx
        push 0fch
        ; Exact mapped bytes E8 01 89 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x89
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 46: je 0x5867875f
        __asm _emit 0x74
        __asm _emit 0x46
        push 0fh
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA C3 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xc3
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 20ch], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 8dh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 17ch
        push ecx
        push 2
        mov edx, dword ptr [ebp - 20ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 19 22 14 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x22
        __asm _emit 0x14
        __asm _emit 0x00
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58678769
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov ecx, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 210h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 198h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 210h]
        mov dword ptr [ecx + edx], eax
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 198h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 214h], ecx
        push 1194h
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 B1 D6 E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xd6
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 198h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 218h], ecx
        push 1194h
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 7E D6 E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xd6
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 198h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 21ch], ecx
        push 1194h
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 4B D6 E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xd6
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 198h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 220h], eax
        push 1194h
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 18 D6 E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd6
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        push 5ch
        ; Exact mapped bytes E8 94 87 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x87
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 21: je 0x586788a7
        __asm _emit 0x74
        __asm _emit 0x21
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 D1 B0 E4 FF: call 0x584c3970
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xb0
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586788b1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b8h], 0
        mov edx, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 224h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 224h]
        mov dword ptr [eax + 2e8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2e8h]
        mov dword ptr [ebp - 228h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 82 B1 E4 FF: call 0x584c3a70
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xb1
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2e8h]
        mov dword ptr [ebp - 22ch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 190h
        push ecx
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 1E CE 13 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xce
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2e8h]
        mov dword ptr [ebp - 230h], eax
        push 1194h
        mov ecx, dword ptr [ebp - 230h]
        ; Exact mapped bytes E8 4F D5 E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xd5
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 CB 86 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x86
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0bch], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 66: je 0x586789b5
        __asm _emit 0x74
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 60: movsx edx, word ptr [ecx + 0x60]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x60
        add edx, 64h
        ; Exact mapped bytes 66 89 55 E0: mov word ptr [ebp - 0x20], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe0
        push 2eeh
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B3 C1 E0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 234h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 2e8h]
        mov dword ptr [ebp - 238h], ecx
        movzx edx, word ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 323h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 234h]
        push edx
        mov eax, dword ptr [ebp - 238h]
        push eax
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 73 99 E0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x99
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586789bf
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 0
        mov ecx, dword ptr [ebp - 0c0h]
        mov dword ptr [ebp - 23ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 23ch]
        mov dword ptr [ecx + eax + 2a8h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 2a8h]
        mov dword ptr [ebp - 240h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 240h]
        ; Exact mapped bytes E8 A1 CB 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xcb
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 ED 85 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x85
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c4h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 74 64: je 0x58678a91
        __asm _emit 0x74
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 60: movsx edx, word ptr [ecx + 0x60]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x60
        add edx, 64h
        ; Exact mapped bytes 66 89 55 DE: mov word ptr [ebp - 0x22], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xde
        push 2efh
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 C0 E0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xc0
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 244h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 2e8h]
        mov dword ptr [ebp - 248h], ecx
        movzx edx, word ptr [ebp - 22h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 6
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 244h]
        push edx
        mov eax, dword ptr [ebp - 248h]
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 97 98 E0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x98
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58678a9b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c8h], 0
        mov ecx, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 24ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 24ch]
        mov dword ptr [eax + edx + 2a8h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 2a8h]
        mov dword ptr [ebp - 250h], edx
        push 0
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 68 71 E8 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x71
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 2a8h]
        mov dword ptr [ebp - 254h], edx
        push 0
        mov ecx, dword ptr [ebp - 254h]
        ; Exact mapped bytes E8 43 71 E8 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x71
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        push 6ch
        ; Exact mapped bytes E8 EF 84 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0cch], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 74 61: je 0x58678b8c
        __asm _emit 0x74
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 60: movsx ecx, word ptr [eax + 0x60]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x60
        add ecx, 64h
        ; Exact mapped bytes 66 89 4D DC: mov word ptr [ebp - 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xdc
        push 2ah
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A BF E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xbf
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 258h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2e8h]
        mov dword ptr [ebp - 25ch], eax
        movzx ecx, word ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 6
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 258h]
        push ecx
        mov edx, dword ptr [ebp - 25ch]
        push edx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 7C BD EB FF: call 0x58534900
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xbd
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58678b96
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d0h], 0
        mov eax, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 260h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 260h]
        mov dword ptr [ecx + 2b0h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 2b0h]
        ; Exact mapped bytes E8 6D C1 EB FF: call 0x58534d30
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xc1
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 2b0h]
        mov dword ptr [ebp - 264h], edx
        push 0
        mov ecx, dword ptr [ebp - 264h]
        ; Exact mapped bytes E8 71 70 E8 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x70
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        push 6ch
        ; Exact mapped bytes E8 1D 84 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d4h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 61: je 0x58678c5e
        __asm _emit 0x74
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 60: movsx ecx, word ptr [eax + 0x60]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x60
        add ecx, 64h
        ; Exact mapped bytes 66 89 4D DA: mov word ptr [ebp - 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xda
        push 29h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 BE E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xbe
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 268h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2e8h]
        mov dword ptr [ebp - 26ch], eax
        movzx ecx, word ptr [ebp - 26h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 6
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 268h]
        push ecx
        mov edx, dword ptr [ebp - 26ch]
        push edx
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 AA BC EB FF: call 0x58534900
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xbc
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58678c68
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0
        mov eax, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 270h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 270h]
        mov dword ptr [ecx + 2b4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 2b4h]
        ; Exact mapped bytes E8 9B C0 EB FF: call 0x58534d30
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xc0
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 2b4h]
        mov dword ptr [ebp - 274h], edx
        push 0
        mov ecx, dword ptr [ebp - 274h]
        ; Exact mapped bytes E8 9F 6F E8 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x6f
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 4B 83 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x83
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0dch], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 61: je 0x58678d30
        __asm _emit 0x74
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 60: movsx ecx, word ptr [eax + 0x60]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x60
        add ecx, 64h
        ; Exact mapped bytes 66 89 4D D8: mov word ptr [ebp - 0x28], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd8
        push 2
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 BD E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xbd
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 278h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2e8h]
        mov dword ptr [ebp - 27ch], eax
        movzx ecx, word ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 6
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 278h]
        push ecx
        mov edx, dword ptr [ebp - 27ch]
        push edx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 E8 DA E0 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58678d3a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e0h], 0
        mov eax, dword ptr [ebp - 0e0h]
        mov dword ptr [ebp - 280h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 280h]
        mov dword ptr [ecx + 2b8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 2b8h]
        mov dword ptr [ebp - 284h], ecx
        push 0
        mov ecx, dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 DB 67 E2 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x67
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2b8h]
        mov dword ptr [ebp - 288h], eax
        push 0
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 BF 6E E8 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x6e
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 6B 82 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x82
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e4h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 74 6C: je 0x58678e1b
        __asm _emit 0x74
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 60: movsx edx, word ptr [ecx + 0x60]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x60
        add edx, 3ch
        ; Exact mapped bytes 66 89 55 D6: mov word ptr [ebp - 0x2a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xd6
        push 4fdh
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 BD E0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xbd
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 28ch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 2e8h]
        mov dword ptr [ebp - 290h], ecx
        movzx edx, word ptr [ebp - 2ah]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 84h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 332h
        push ecx
        mov edx, dword ptr [ebp - 28ch]
        push edx
        mov eax, dword ptr [ebp - 290h]
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 0D 95 E0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x95
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58678e25
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e8h], 0
        mov ecx, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 294h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 294h]
        mov dword ptr [edx + 304h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 304h]
        mov dword ptr [ebp - 298h], edx
        push 0
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes E8 F0 6D E8 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x6d
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 9C 81 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x81
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ech], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 74 6C: je 0x58678eea
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 60: movsx ecx, word ptr [eax + 0x60]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x60
        add ecx, 50h
        ; Exact mapped bytes 66 89 4D D4: mov word ptr [ebp - 0x2c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd4
        push 4feh
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 BC E0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 29ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2e8h]
        mov dword ptr [ebp - 2a0h], eax
        movzx ecx, word ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 84h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 39ah
        push eax
        mov ecx, dword ptr [ebp - 29ch]
        push ecx
        mov edx, dword ptr [ebp - 2a0h]
        push edx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 3E 94 E0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x94
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58678ef4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f0h], 0
        mov eax, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 2a4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2a4h]
        mov dword ptr [ecx + 308h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 308h]
        mov dword ptr [ebp - 2a8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes E8 21 6D E8 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x6d
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        add edx, 364h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 314h], edx
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 84h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 318h], ecx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 367h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 30ch], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 84h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 310h], edx
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 31ch], 0
        push 0cch
        ; Exact mapped bytes E8 77 80 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x80
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f4h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 74 36: je 0x58678fd9
        __asm _emit 0x74
        __asm _emit 0x36
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebp + 10h]
        add edx, 90h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 36ah
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 2e8h]
        push edx
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 0F DB F0 FF: call 0x58586ae0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58678fe3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f8h], 0
        mov eax, dword ptr [ebp - 0f8h]
        mov dword ptr [ebp - 2ach], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2ach]
        mov dword ptr [ecx + 2bch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 2bch]
        mov dword ptr [ebp - 2b0h], ecx
        push 11c6h
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 5F CE E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xce
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2bch]
        mov dword ptr [ebp - 2b4h], eax
        push 4
        push 0
        push 3
        push 14h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebp - 2b4h]
        ; Exact mapped bytes E8 B6 DF F0 FF: call 0x58587000
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xdf
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2bch]
        mov dword ptr [ebp - 2b8h], eax
        push 2
        mov ecx, dword ptr [ebp - 2b8h]
        ; Exact mapped bytes E8 7A E5 F0 FF: call 0x585875e0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xe5
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 2bch]
        mov dword ptr [ebp - 2bch], edx
        push 0
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 CE 6B E8 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x6b
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 7A 7F 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x7f
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0fch], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 74 44: je 0x586790e4
        __asm _emit 0x74
        __asm _emit 0x44
        push 2d0h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 BA E0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xba
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 2c0h], eax
        push 1176h
        mov eax, dword ptr [ebp + 10h]
        add eax, 9
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 2c0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 44 92 E0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x92
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586790ee
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 100h], 0
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 2c4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2c4h]
        mov dword ptr [edx + 74h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 2c8h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes E8 8A C4 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xc4
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 2cch], ecx
        push 0
        mov ecx, dword ptr [ebp - 2cch]
        ; Exact mapped bytes E8 A1 CD E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xcd
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 2d0h], eax
        push 0
        mov ecx, dword ptr [ebp - 2d0h]
        ; Exact mapped bytes E8 F8 6A E8 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x6a
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 A4 7E 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x7e
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 104h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 104h], 0
        ; Exact mapped bytes 74 44: je 0x586791ba
        __asm _emit 0x74
        __asm _emit 0x44
        push 2d1h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A B9 E0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xb9
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 2d4h], eax
        push 1176h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 9
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 2d4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 6E 91 E0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x91
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586791c4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 108h], 0
        mov edx, dword ptr [ebp - 108h]
        mov dword ptr [ebp - 2d8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2d8h]
        mov dword ptr [eax + 78h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 2dch], eax
        push 0
        mov ecx, dword ptr [ebp - 2dch]
        ; Exact mapped bytes E8 E7 CC E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xcc
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 2e0h], edx
        push 0
        mov ecx, dword ptr [ebp - 2e0h]
        ; Exact mapped bytes E8 3E 6A E8 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x6a
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        push 5d0h
        ; Exact mapped bytes E8 E7 7D 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x7d
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10ch], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 74 2E: je 0x58679261
        __asm _emit 0x74
        __asm _emit 0x2e
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        add eax, 14h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 323h
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 F7 AA 06 00: call 0x586e3d50
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xaa
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5867926b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 110h], 0
        mov eax, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 2e4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2e4h]
        mov dword ptr [ecx + 2c0h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 2c0h]
        mov dword ptr [ebp - 2e8h], ecx
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 62h]
        push eax
        mov ecx, dword ptr [ebp - 2e8h]
        ; Exact mapped bytes E8 D4 CB E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xcb
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 2c0h]
        mov dword ptr [ebp - 2ech], edx
        push 0
        mov ecx, dword ptr [ebp - 2ech]
        ; Exact mapped bytes E8 88 69 E8 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x69
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        push 0ab4h
        ; Exact mapped bytes E8 31 7D 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x7d
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 2B: je 0x58679314
        __asm _emit 0x74
        __asm _emit 0x2b
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1c6h
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 64 6B 00 00: call 0x5867fe70
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5867931e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 118h], 0
        mov eax, dword ptr [ebp - 118h]
        mov dword ptr [ebp - 2f0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2f0h]
        mov dword ptr [ecx + 9ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 2f4h], ecx
        push 0dh
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 2f4h]
        ; Exact mapped bytes E8 C1 6A 00 00: call 0x5867fe20
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 2f8h], eax
        push 11adh
        mov ecx, dword ptr [ebp - 2f8h]
        ; Exact mapped bytes E8 02 CB E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xcb
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        push 768h
        ; Exact mapped bytes E8 7B 7C 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x7c
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 11ch], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 2B: je 0x586793ca
        __asm _emit 0x74
        __asm _emit 0x2b
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1c7h
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 6E 16 01 00: call 0x5868aa30
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 120h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586793d4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 120h], 0
        mov ecx, dword ptr [ebp - 120h]
        mov dword ptr [ebp - 2fch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2fch]
        mov dword ptr [edx + 0a0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 300h], edx
        push 11adh
        mov ecx, dword ptr [ebp - 300h]
        ; Exact mapped bytes E8 6E CA E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xca
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2f0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2ech], 0
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 2fch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 300h], 0
        push 124h
        ; Exact mapped bytes E8 B7 7B 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x7b
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 124h], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 74 42: je 0x586794a5
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 60: movsx edx, word ptr [ecx + 0x60]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x60
        add edx, 3e8h
        push edx
        push 2feh
        mov eax, dword ptr [ebp + 0ch]
        add eax, 341h
        push eax
        push 25eh
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1aeh
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 C3 DE 00 00: call 0x58687360
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586794af
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 128h], 0
        mov eax, dword ptr [ebp - 128h]
        mov dword ptr [ebp - 304h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 304h]
        mov dword ptr [ecx + 0a4h], edx
        push 0ach
        ; Exact mapped bytes E8 2C 7B 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x7b
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 12ch], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes 74 76: je 0x58679564
        __asm _emit 0x74
        __asm _emit 0x76
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 60: movsx ecx, word ptr [eax + 0x60]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x60
        add ecx, 7d0h
        ; Exact mapped bytes 66 89 4D D2: mov word ptr [ebp - 0x2e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd2
        push 2
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 B5 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xb5
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 308h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 30ch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 310h], eax
        movzx ecx, word ptr [ebp - 2eh]
        push ecx
        push 2d0h
        push 0dbh
        mov edx, dword ptr [ebp - 308h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 30ch]
        push ecx
        mov edx, dword ptr [ebp - 310h]
        push edx
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 84 27 E5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5867956e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 130h], 0
        mov eax, dword ptr [ebp - 130h]
        mov dword ptr [ebp - 314h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 0a8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ach], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2e4h], 0
        push 0ach
        ; Exact mapped bytes E8 53 7A 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x7a
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 134h], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 134h], 0
        ; Exact mapped bytes 74 5A: je 0x58679621
        __asm _emit 0x74
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 60: movsx eax, word ptr [edx + 0x60]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x60
        add eax, 7d0h
        ; Exact mapped bytes 66 89 45 D0: mov word ptr [ebp - 0x30], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd0
        push 6
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC B4 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xb4
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 318h], eax
        movzx ecx, word ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 57h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 34fh
        push eax
        mov ecx, dword ptr [ebp - 318h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 C7 26 E5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x26
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5867962b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 138h], 0
        mov eax, dword ptr [ebp - 138h]
        mov dword ptr [ebp - 31ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 31ch]
        mov dword ptr [ecx + 2f8h], edx
        push 0fch
        ; Exact mapped bytes E8 B0 79 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x79
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 13ch], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes 74 44: je 0x586796ae
        __asm _emit 0x74
        __asm _emit 0x44
        push 2dh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 B4 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xb4
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 320h], eax
        mov eax, dword ptr [ebp + 10h]
        sub eax, 4bh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 394h
        push ecx
        push 5
        mov edx, dword ptr [ebp - 320h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 CA 12 14 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x12
        __asm _emit 0x14
        __asm _emit 0x00
        mov dword ptr [ebp - 140h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586796b8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 140h], 0
        mov ecx, dword ptr [ebp - 140h]
        mov dword ptr [ebp - 324h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 324h]
        mov dword ptr [edx + 2f4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 2f4h]
        mov dword ptr [ebp - 328h], edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 60: movsx ecx, word ptr [eax + 0x60]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x60
        add ecx, 7d2h
        push ecx
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 81 C7 E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xc7
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2f8h]
        mov dword ptr [ebp - 32ch], eax
        push 0
        mov ecx, dword ptr [ebp - 32ch]
        ; Exact mapped bytes E8 C5 C7 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xc7
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 2f8h]
        mov dword ptr [ebp - 330h], edx
        push 0
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 19 65 E8 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x65
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 2f4h]
        mov dword ptr [ebp - 334h], ecx
        push 0
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 8D C7 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xc7
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2f4h]
        mov dword ptr [ebp - 338h], eax
        push 0
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 E1 64 E8 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x64
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        push 60h
        ; Exact mapped bytes E8 8D 78 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 144h], eax
        mov byte ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 144h], 0
        ; Exact mapped bytes 74 27: je 0x586797b4
        __asm _emit 0x74
        __asm _emit 0x27
        push 40h
        push 0
        push 0
        push 500h
        push 1beh
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 C4 8A E0 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x8a
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586797be
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 148h], 0
        mov edx, dword ptr [ebp - 148h]
        mov dword ptr [ebp - 33ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 33ch]
        mov dword ptr [eax + 0b0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 340h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 60: movsx edx, word ptr [ecx + 0x60]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x60
        add edx, 3e8h
        push edx
        mov ecx, dword ptr [ebp - 340h]
        ; Exact mapped bytes E8 7B C6 E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xc6
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58679818
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 0F 8D 65 01 00 00: jge 0x58679987
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 DB 77 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x77
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14ch], eax
        mov byte ptr [ebp - 4], 24h
        cmp dword ptr [ebp - 14ch], 0
        ; Exact mapped bytes 74 54: je 0x58679893
        __asm _emit 0x74
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 32h
        push ecx
        ; Exact mapped bytes 8B 0D 9C 07 96 58: mov ecx, dword ptr [0x5896079c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF B2 E0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xb2
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 344h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 348h], eax
        push 40h
        push 500h
        push 1beh
        mov ecx, dword ptr [ebp - 344h]
        push ecx
        mov edx, dword ptr [ebp - 348h]
        push edx
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 95 8A E0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x8a
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 150h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5867989d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 150h], 0
        mov eax, dword ptr [ebp - 150h]
        mov dword ptr [ebp - 34ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 34ch]
        mov dword ptr [edx + ecx*4 + 0b4h], eax
        push 54h
        ; Exact mapped bytes E8 3D 77 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x77
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 154h], eax
        mov byte ptr [ebp - 4], 25h
        cmp dword ptr [ebp - 154h], 0
        ; Exact mapped bytes 74 54: je 0x58679931
        __asm _emit 0x74
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 34h
        push ecx
        ; Exact mapped bytes 8B 0D 9C 07 96 58: mov ecx, dword ptr [0x5896079c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 31 B2 E0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xb2
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 350h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 354h], eax
        push 40h
        push 500h
        push 1beh
        mov ecx, dword ptr [ebp - 350h]
        push ecx
        mov edx, dword ptr [ebp - 354h]
        push edx
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 F7 89 E0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x89
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5867993b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 158h], 0
        mov eax, dword ptr [ebp - 158h]
        mov dword ptr [ebp - 358h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 358h]
        mov dword ptr [edx + ecx*4 + 0bch], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0b4h]
        mov dword ptr [ebp - 35ch], eax
        push 0c8h
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes E8 BF BB 13 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xbb
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 88 FE FF FF: jmp 0x5867980f
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0b4h]
        mov dword ptr [ebp - 360h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 360h]
        ; Exact mapped bytes E8 01 BC 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xbc
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0bch]
        mov dword ptr [ebp - 364h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 364h]
        ; Exact mapped bytes E8 D9 BB 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xbb
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0bch]
        mov dword ptr [ebp - 368h], edx
        push 101h
        mov ecx, dword ptr [ebp - 368h]
        ; Exact mapped bytes E8 B1 BB 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xbb
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 36ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 36ch]
        ; Exact mapped bytes E8 25 C4 E0 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xc4
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 370h], eax
        push 0
        mov ecx, dword ptr [ebp - 370h]
        ; Exact mapped bytes E8 69 C3 E0 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xc3
        __asm _emit 0xe0
        __asm _emit 0xff
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
