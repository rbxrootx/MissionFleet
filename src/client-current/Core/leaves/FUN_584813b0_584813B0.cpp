// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584813B0 .. +0xEB1 bytes.
extern "C" __declspec(naked) void FUN_584813b0_584813B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887d5a5h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1bch
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
        ; Exact mapped bytes E8 74 0E 00 00: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58894c74h
        push 198h
        ; Exact mapped bytes E8 EE FB 3A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xfb
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 16: je 0x5848143c
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 58894680h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 79 EF 2F 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xef
        __asm _emit 0x2f
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x58481443
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 0c4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0c4h]
        mov dword ptr [edx + 0f4h], eax
        mov byte ptr [ebp - 29h], 0
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 64h
        ; Exact mapped bytes 66 89 4D E4: mov word ptr [ebp - 0x1c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 0c8h
        ; Exact mapped bytes 66 89 55 DC: mov word ptr [ebp - 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xdc
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 12ch
        ; Exact mapped bytes 66 89 45 E8: mov word ptr [ebp - 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 190h
        ; Exact mapped bytes 66 89 4D D0: mov word ptr [ebp - 0x30], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 1f4h
        ; Exact mapped bytes 66 89 55 D8: mov word ptr [ebp - 0x28], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xd8
        push 54h
        ; Exact mapped bytes E8 58 FB 3A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xfb
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 20: je 0x584814dc
        __asm _emit 0x74
        __asm _emit 0x20
        movzx eax, word ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 49 0E 00 00: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x584814e3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0c8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0c8h]
        mov dword ptr [edx + 8ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 0cch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 92 40 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x40
        __asm _emit 0x33
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 DE FA 3A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xfa
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 20: je 0x58481556
        __asm _emit 0x74
        __asm _emit 0x20
        movzx eax, word ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 CF 0D 00 00: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x5848155d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0d0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0d0h]
        mov dword ptr [edx + 90h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 0d4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 0B 48 00 00: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 0d8h], ecx
        push 0f0h
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 8C 3F 33 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x3f
        __asm _emit 0x33
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 48 FA 3A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xfa
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 20: je 0x584815ec
        __asm _emit 0x74
        __asm _emit 0x20
        movzx edx, word ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 39 0D 00 00: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x584815f3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 0dch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0dch]
        mov dword ptr [ecx + 94h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 0e0h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 82 3F 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x3f
        __asm _emit 0x33
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 CE F9 3A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xf9
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 20: je 0x58481666
        __asm _emit 0x74
        __asm _emit 0x20
        movzx edx, word ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 BF 0C 00 00: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x5848166d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 0e4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0e4h]
        mov dword ptr [ecx + 98h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 0e8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 FB 46 00 00: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 0ech], eax
        push 0f0h
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 7C 3E 33 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x3e
        __asm _emit 0x33
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x584816d7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0bh
        ; Exact mapped bytes 0F 8D AF 00 00 00: jge 0x58481790
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 1C F9 3A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf9
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 4E: je 0x58481746
        __asm _emit 0x74
        __asm _emit 0x4e
        push 0
        push 0
        push 0ffffffh
        imul edx, dword ptr [ebp - 14h], 14h
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 46h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 21ch
        push edx
        imul eax, dword ptr [ebp - 14h], 14h
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 32h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0a0h
        push eax
        ; Exact mapped bytes 8B 0D 44 20 96 58: mov ecx, dword ptr [0x58962044]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 6F 0C 00 00: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x5848174d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 0f0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0f0h]
        mov dword ptr [edx + ecx*4 + 60h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 60h]
        mov dword ptr [ebp - 0f4h], eax
        movzx ecx, word ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 F6 46 00 00: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 3E FF FF FF: jmp 0x584816ce
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x584817a2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0ah
        ; Exact mapped bytes 0F 8D 0B 01 00 00: jge 0x584818b7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 4E F8 3A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xf8
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 41: je 0x58481807
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 14h]
        add eax, 2
        push eax
        ; Exact mapped bytes 8B 0D CC 07 96 58: mov ecx, dword ptr [0x589607cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 32 00 00: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0f8h], eax
        movzx ecx, word ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0f8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 DE A4 04 00: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x5848180e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 0fch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0fch]
        mov dword ptr [edx + ecx*4 + 0c0h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0c0h]
        mov dword ptr [ebp - 100h], eax
        push 0
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 92 45 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0c0h]
        mov dword ptr [ebp - 104h], eax
        push 0
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 72 46 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0c0h]
        mov dword ptr [ebp - 108h], eax
        push 101h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 1F 3D 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x3d
        __asm _emit 0x33
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0c0h]
        mov dword ptr [ebp - 10ch], eax
        push 0
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 8F 45 00 00: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E2 FE FF FF: jmp 0x58481799
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 43 F7 3A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf7
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 45: je 0x58481916
        __asm _emit 0x74
        __asm _emit 0x45
        push 0ch
        ; Exact mapped bytes 8B 0D CC 07 96 58: mov ecx, dword ptr [0x589607cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 31 00 00: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 110h], eax
        movzx ecx, word ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 168h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 72h
        push eax
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 CF A3 04 00: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x5848191d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 114h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 0e8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 118h], ecx
        push 0
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 8B 44 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0e8h]
        mov dword ptr [ebp - 11ch], eax
        push 0
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 6F 45 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 120h], edx
        push 101h
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 20 3C 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x3c
        __asm _emit 0x33
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 124h], ecx
        push 0
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 94 44 00 00: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 20h
        ; Exact mapped bytes E8 50 F6 3A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xf6
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 27: je 0x584819eb
        __asm _emit 0x74
        __asm _emit 0x27
        push 9
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF 30 00 00: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 128h], eax
        mov edx, dword ptr [ebp - 128h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 3A C0 0E 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xc0
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x584819f2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 12ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [ecx + 104h], edx
        mov dword ptr [ebp - 20h], 104h
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58481a27
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D BD 01 00 00: jge 0x58481bee
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 CC F5 3A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xf5
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 48: je 0x58481a90
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0ah
        push ecx
        ; Exact mapped bytes 8B 0D CC 07 96 58: mov ecx, dword ptr [0x589607cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 30 00 00: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 130h], eax
        ; Exact mapped bytes 0F BF 55 DC: movsx edx, word ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xdc
        add edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0f0h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 130h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 95 08 00 00: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x58481a97
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov ecx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 134h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 134h]
        mov dword ptr [eax + edx*4 + 0ach], ecx
        push 54h
        ; Exact mapped bytes E8 46 F5 3A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xf5
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 4F: je 0x58481b23
        __asm _emit 0x74
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 14h]
        add edx, 0ah
        push edx
        ; Exact mapped bytes 8B 0D CC 07 96 58: mov ecx, dword ptr [0x589607cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A 30 00 00: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 138h], eax
        ; Exact mapped bytes 0F BF 45 DC: movsx eax, word ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xdc
        add eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 113h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 138h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 05 08 00 00: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58481b2d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 13ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 13ch]
        mov dword ptr [ecx + eax*4 + 9ch], edx
        push 54h
        ; Exact mapped bytes E8 AD F4 3A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf4
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 4F: je 0x58481bbc
        __asm _emit 0x74
        __asm _emit 0x4f
        mov eax, dword ptr [ebp - 14h]
        add eax, 0ah
        push eax
        ; Exact mapped bytes 8B 0D CC 07 96 58: mov ecx, dword ptr [0x589607cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 2F 00 00: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 140h], eax
        ; Exact mapped bytes 0F BF 4D DC: movsx ecx, word ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xdc
        add ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 136h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 140h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 6C 07 00 00: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58481bc6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov eax, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 144h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 144h]
        mov dword ptr [edx + ecx*4 + 0a4h], eax
        ; Exact mapped bytes E9 30 FE FF FF: jmp 0x58481a1e
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 70h
        ; Exact mapped bytes E8 0F F4 3A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf4
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 52: je 0x58481c5d
        __asm _emit 0x74
        __asm _emit 0x52
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 109h
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 78h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0fah
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 0ah]
        push edx
        ; Exact mapped bytes A1 3C 20 96 58: mov eax, dword ptr [0x5896203c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 5B 07 00 00: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58481c67
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov edx, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 148h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 148h]
        mov dword ptr [eax + 100h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 100h]
        mov dword ptr [ebp - 14ch], eax
        push 0
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 3E 44 00 00: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 100h]
        mov dword ptr [ebp - 150h], edx
        push 0
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 52 42 00 00: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 100h]
        mov dword ptr [ebp - 154h], ecx
        movzx edx, word ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 A3 41 00 00: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 100h]
        mov dword ptr [ebp - 158h], ecx
        push 0
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 E7 40 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 100h]
        mov dword ptr [ebp - 15ch], eax
        push 0
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 CB 41 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 70h
        ; Exact mapped bytes E8 E7 F2 3A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xf2
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 52: je 0x58481d85
        __asm _emit 0x74
        __asm _emit 0x52
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 12ch
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 78h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 11dh
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 0ah]
        push edx
        ; Exact mapped bytes A1 3C 20 96 58: mov eax, dword ptr [0x5896203c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 33 06 00 00: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58481d8f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 160h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 160h]
        mov dword ptr [eax + 0f8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 164h], eax
        push 0
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 16 43 00 00: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 168h], edx
        push 0
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 2A 41 00 00: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0f8h]
        mov dword ptr [ebp - 16ch], ecx
        movzx edx, word ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 7B 40 00 00: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0f8h]
        mov dword ptr [ebp - 170h], ecx
        push 0
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 BF 3F 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 174h], eax
        push 0
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 A3 40 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 70h
        ; Exact mapped bytes E8 BF F1 3A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf1
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 52: je 0x58481ead
        __asm _emit 0x74
        __asm _emit 0x52
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 14fh
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 78h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 140h
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 0ah]
        push edx
        ; Exact mapped bytes A1 3C 20 96 58: mov eax, dword ptr [0x5896203c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 0B 05 00 00: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58481eb7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov edx, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 178h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 178h]
        mov dword ptr [eax + 0fch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0fch]
        mov dword ptr [ebp - 17ch], eax
        push 0
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 EE 41 00 00: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0fch]
        mov dword ptr [ebp - 180h], edx
        push 0
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 02 40 00 00: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0fch]
        mov dword ptr [ebp - 184h], ecx
        movzx edx, word ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 53 3F 00 00: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0fch]
        mov dword ptr [ebp - 188h], ecx
        push 0
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 97 3E 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0fch]
        mov dword ptr [ebp - 18ch], eax
        push 0
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 7B 3F 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A 24 01 00 00: mov word ptr [edx + 0x124], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 22 01 00 00: mov word ptr [ecx + 0x122], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 90 20 01 00 00: mov word ptr [eax + 0x120], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 71 F0 3A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xf0
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 70: je 0x58482019
        __asm _emit 0x74
        __asm _emit 0x70
        push 0
        ; Exact mapped bytes 8B 0D CC 07 96 58: mov ecx, dword ptr [0x589607cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A 2B 00 00: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 190h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 194h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 198h], edx
        movzx eax, word ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0a0h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0d2h
        push edx
        mov eax, dword ptr [ebp - 190h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 194h]
        push edx
        mov eax, dword ptr [ebp - 198h]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 CF 9C 04 00: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58482023
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov ecx, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 19ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 19ch]
        mov dword ptr [edx + 0b4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 1a0h], edx
        push 0
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 02 3D 00 00: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 9B EF 3A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xef
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 6E: je 0x584820ed
        __asm _emit 0x74
        __asm _emit 0x6e
        push 0dh
        ; Exact mapped bytes 8B 0D CC 07 96 58: mov ecx, dword ptr [0x589607cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 2A 00 00: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1a4h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1a8h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1ach], ecx
        movzx edx, word ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0a0h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0d2h
        push ecx
        mov edx, dword ptr [ebp - 1a4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1a8h]
        push ecx
        mov edx, dword ptr [ebp - 1ach]
        push edx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 FB 9B 04 00: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584820f7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b8h], 0
        mov eax, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 1b0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1b0h]
        mov dword ptr [ecx + 0b8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 1b4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 2E 3C 00 00: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 C7 EE 3A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xee
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0bch], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 6E: je 0x584821c1
        __asm _emit 0x74
        __asm _emit 0x6e
        push 1
        ; Exact mapped bytes 8B 0D CC 07 96 58: mov ecx, dword ptr [0x589607cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 29 00 00: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1b8h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1bch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1c0h], eax
        movzx ecx, word ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 16dh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 11ah
        push eax
        mov ecx, dword ptr [ebp - 1b8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 1bch]
        push eax
        mov ecx, dword ptr [ebp - 1c0h]
        push ecx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 27 9B 04 00: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584821cb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 0
        mov edx, dword ptr [ebp - 0c0h]
        mov dword ptr [ebp - 1c4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1c4h]
        mov dword ptr [eax + 0bch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 1c8h], eax
        push 0
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 5A 3B 00 00: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A 28 01 00 00: mov word ptr [edx + 0x128], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 26 01 00 00: mov word ptr [ecx + 0x126], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 68 3D 00 00: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
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
