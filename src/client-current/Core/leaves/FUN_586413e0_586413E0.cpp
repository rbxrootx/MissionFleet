// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586413E0 .. +0x48F bytes.
extern "C" __declspec(naked) void FUN_586413e0_586413E0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888810ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 8ch
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
        ; Exact mapped bytes E8 44 0E E4 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x0e
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588af200h
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 35 E4 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x35
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 60h], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5864145f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 71: jge 0x586414d6
        __asm _emit 0x7d
        __asm _emit 0x71
        push 54h
        ; Exact mapped bytes E8 98 FB 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xfb
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 3A: je 0x586414b6
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 73h
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 8C 36 E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x36
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 54h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6F 0E E4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x0e
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586414bd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 58h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [eax + edx*4 + 64h], ecx
        ; Exact mapped bytes EB 80: jmp 0x58641456
        __asm _emit 0xeb
        __asm _emit 0x80
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 64h]
        mov dword ptr [ebp - 5ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 BB 40 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x40
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 64h]
        mov dword ptr [ebp - 60h], edx
        push 101h
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 9C 40 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x40
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        push 70h
        ; Exact mapped bytes E8 E8 FA 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 49: je 0x58641575
        __asm _emit 0x74
        __asm _emit 0x49
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 0a7h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 20dh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 9ah
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 182h
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 40 0E E4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x0e
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5864157c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ecx + 6ch], edx
        push 70h
        ; Exact mapped bytes E8 6E FA 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xfa
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 49: je 0x586415ef
        __asm _emit 0x74
        __asm _emit 0x49
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 0bbh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 20dh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0aeh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 182h
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 C6 0D E4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586415f6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ecx + 70h], edx
        push 70h
        ; Exact mapped bytes E8 F4 F9 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf9
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 49: je 0x58641669
        __asm _emit 0x74
        __asm _emit 0x49
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 0e9h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 20dh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0dch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 182h
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 4C 0D E4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x58641670
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ecx + 74h], edx
        push 70h
        ; Exact mapped bytes E8 7A F9 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf9
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 49: je 0x586416e3
        __asm _emit 0x74
        __asm _emit 0x49
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 0fdh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 20dh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0f0h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 182h
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 D2 0C E4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x0c
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586416ea
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ecx + 78h], edx
        push 0ach
        ; Exact mapped bytes E8 FD F8 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xf8
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 5A: je 0x58641771
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 74h], ecx
        push 15h
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 A6 33 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x33
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 7ch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 80h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 157h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1ceh
        push edx
        mov eax, dword ptr [ebp - 78h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov eax, dword ptr [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 74 A5 E8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xa5
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x58641778
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 84h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [edx + 7ch], eax
        push 0ach
        ; Exact mapped bytes E8 69 F8 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf8
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 71: je 0x5864181c
        __asm _emit 0x74
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 88h], edx
        push 16h
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 0C 33 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x33
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 94h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 157h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1ffh
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 C9 A4 E8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xa4
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58641823
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 98h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 98h]
        mov dword ptr [eax + 80h], ecx
        push 5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 17 45 E4 FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3D 47 E4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x47
        __asm _emit 0xe4
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
