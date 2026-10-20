// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58664830 .. +0x3CB bytes.
extern "C" __declspec(naked) void FUN_58664830_58664830() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1b0h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 198h], ecx
        push 589604e0h
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 44 02 00 00: jne 0x58664aa7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 589604e0h
        lea ecx, [ebp - 63h]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E2 7C FB FF: call 0x5861c560
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x7c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 18ch], eax
        mov edx, dword ptr [ebp - 18ch]
        sub edx, 2
        mov dword ptr [ebp - 18ch], edx
        cmp dword ptr [ebp - 18ch], 3
        ; Exact mapped bytes 77 39: ja 0x586648d5
        __asm _emit 0x77
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 18ch]
        ; Exact mapped bytes FF 24 85 FC 4B 66 58: jmp dword ptr [eax*4 + 0x58664bfc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x4b
        __asm _emit 0x66
        __asm _emit 0x58
        mov ecx, 2
        ; Exact mapped bytes 66 89 4D B6: mov word ptr [ebp - 0x4a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xb6
        ; Exact mapped bytes EB 2A: jmp 0x586648de
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, 3
        ; Exact mapped bytes 66 89 55 B6: mov word ptr [ebp - 0x4a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xb6
        ; Exact mapped bytes EB 1F: jmp 0x586648de
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov eax, 5
        ; Exact mapped bytes 66 89 45 B6: mov word ptr [ebp - 0x4a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb6
        ; Exact mapped bytes EB 14: jmp 0x586648de
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, 6
        ; Exact mapped bytes 66 89 4D B6: mov word ptr [ebp - 0x4a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xb6
        ; Exact mapped bytes EB 09: jmp 0x586648de
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, 1
        ; Exact mapped bytes 66 89 55 B6: mov word ptr [ebp - 0x4a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xb6
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 B3 E4 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xb3
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 19ch], eax
        cmp dword ptr [ebp - 19ch], 0
        ; Exact mapped bytes 0F 84 69 01 00 00: je 0x58664a65
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 59 01 E2 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0xe2
        __asm _emit 0xff
        add eax, 0ch
        push eax
        lea eax, [ebp - 48h]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 188h], 0
        mov dword ptr [ebp - 190h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5866493a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 190h]
        add ecx, 1
        mov dword ptr [ebp - 190h], ecx
        cmp dword ptr [ebp - 190h], 20h
        ; Exact mapped bytes 7D 53: jge 0x58664996
        __asm _emit 0x7d
        __asm _emit 0x53
        mov edx, dword ptr [ebp - 190h]
        push edx
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 BB B1 E4 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb1
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 1a0h], eax
        cmp dword ptr [ebp - 1a0h], 0
        ; Exact mapped bytes 74 30: je 0x58664994
        __asm _emit 0x74
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 01 B3 E4 FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xb3
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx eax, al
        xor eax, 55h
        cmp eax, dword ptr [ebp - 188h]
        ; Exact mapped bytes 7E 17: jle 0x58664994
        __asm _emit 0x7e
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 E8 B2 E4 FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx ecx, al
        xor ecx, 55h
        mov dword ptr [ebp - 188h], ecx
        ; Exact mapped bytes EB 95: jmp 0x5866492b
        __asm _emit 0xeb
        __asm _emit 0x95
        cmp dword ptr [ebp - 188h], 11h
        ; Exact mapped bytes 7D 0C: jge 0x586649ab
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x58664a63
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 188h], 18h
        ; Exact mapped bytes 7D 0C: jge 0x586649c0
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 30h], 1
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x58664a63
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 188h], 1fh
        ; Exact mapped bytes 7D 0C: jge 0x586649d5
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 30h], 2
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x58664a63
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 188h], 26h
        ; Exact mapped bytes 7D 09: jge 0x586649e7
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 3
        ; Exact mapped bytes EB 7C: jmp 0x58664a63
        __asm _emit 0xeb
        __asm _emit 0x7c
        cmp dword ptr [ebp - 188h], 2fh
        ; Exact mapped bytes 7D 09: jge 0x586649f9
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 4
        ; Exact mapped bytes EB 6A: jmp 0x58664a63
        __asm _emit 0xeb
        __asm _emit 0x6a
        cmp dword ptr [ebp - 188h], 38h
        ; Exact mapped bytes 7D 09: jge 0x58664a0b
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 5
        ; Exact mapped bytes EB 58: jmp 0x58664a63
        __asm _emit 0xeb
        __asm _emit 0x58
        cmp dword ptr [ebp - 188h], 41h
        ; Exact mapped bytes 7D 09: jge 0x58664a1d
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 6
        ; Exact mapped bytes EB 46: jmp 0x58664a63
        __asm _emit 0xeb
        __asm _emit 0x46
        cmp dword ptr [ebp - 188h], 4ch
        ; Exact mapped bytes 7D 09: jge 0x58664a2f
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 7
        ; Exact mapped bytes EB 34: jmp 0x58664a63
        __asm _emit 0xeb
        __asm _emit 0x34
        cmp dword ptr [ebp - 188h], 57h
        ; Exact mapped bytes 7D 09: jge 0x58664a41
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 8
        ; Exact mapped bytes EB 22: jmp 0x58664a63
        __asm _emit 0xeb
        __asm _emit 0x22
        cmp dword ptr [ebp - 188h], 62h
        ; Exact mapped bytes 7D 09: jge 0x58664a53
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 9
        ; Exact mapped bytes EB 10: jmp 0x58664a63
        __asm _emit 0xeb
        __asm _emit 0x10
        cmp dword ptr [ebp - 188h], 7dh
        ; Exact mapped bytes 7D 07: jge 0x58664a63
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0ah
        ; Exact mapped bytes EB 16: jmp 0x58664a7b
        __asm _emit 0xeb
        __asm _emit 0x16
        push 588af94eh
        lea edx, [ebp - 48h]
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 30h], 0ffffffffh
        push 24h
        push 58960530h
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 05 7E 1E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x7e
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 64h]
        push edx
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 6F 01 00 00: call 0x58664c10
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 44 01 00 00: jmp 0x58664beb
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        movzx ecx, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x58664b42
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 47 E5 FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x47
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 1a8h], eax
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        push edx
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 28 3D 00 00: call 0x58668800
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 194h], eax
        cmp dword ptr [ebp - 194h], 0
        ; Exact mapped bytes 75 24: jne 0x58664b0b
        __asm _emit 0x75
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        push eax
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 44 E5 FF: call 0x584b8f50
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x44
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 50 E5 FF: call 0x584b9b80
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x50
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 194h], 0
        ; Exact mapped bytes 74 29: je 0x58664b3d
        __asm _emit 0x74
        __asm _emit 0x29
        lea ecx, [ebp - 0c4h]
        push ecx
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 3A FC E5 FF: call 0x584c4760
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xfc
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [ebp - 0c4h]
        push eax
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 D4 00 00 00: call 0x58664c10
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A9 00 00 00: jmp 0x58664beb
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        movzx edx, byte ptr [ecx]
        cmp edx, 1
        ; Exact mapped bytes 75 54: jne 0x58664ba1
        __asm _emit 0x75
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 47 E5 FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x47
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], eax
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 30 3C 00 00: call 0x586687a0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1b0h], eax
        lea ecx, [ebp - 124h]
        push ecx
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 D8 FB E5 FF: call 0x584c4760
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xfb
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [ebp - 124h]
        push eax
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 72 00 00 00: call 0x58664c10
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4A: jmp 0x58664beb
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        push ecx
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9D 43 E5 FF: call 0x584b8f50
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x43
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 1a4h], eax
        cmp dword ptr [ebp - 1a4h], 0
        ; Exact mapped bytes 74 29: je 0x58664beb
        __asm _emit 0x74
        __asm _emit 0x29
        lea edx, [ebp - 184h]
        push edx
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 8C FB E5 FF: call 0x584c4760
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xfb
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 184h]
        push ecx
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 26 00 00 00: call 0x58664c10
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 5B C4 1C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xc4
        __asm _emit 0x1c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
