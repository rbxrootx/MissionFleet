// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58529920 .. +0x5FA bytes.
extern "C" __declspec(naked) void FUN_58529920_58529920() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58881dbbh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1a0h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 114h], ecx
        mov dword ptr [ebp - 11ch], 0
        push 100h
        push 0
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes E8 A2 34 32 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x34
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 128h], ecx
        cmp dword ptr [ebp - 128h], 20h
        ; Exact mapped bytes 0F 87 9C 05 00 00: ja 0x58529f23
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x9c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 128h]
        movzx eax, byte ptr [edx + 58529f60h]
        ; Exact mapped bytes FF 24 85 40 9F 52 58: jmp dword ptr [eax*4 + 0x58529f40]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0x9f
        __asm _emit 0x52
        __asm _emit 0x58
        push 588a4b68h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        lea ecx, [ebp - 1ach]
        ; Exact mapped bytes E8 E1 E0 26 00: call 0x58797a90
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xe0
        __asm _emit 0x26
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 114h]
        sub edx, 60h
        mov dword ptr [ebp - 138h], edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        lea ecx, [ebp - 1ach]
        ; Exact mapped bytes E8 0C E5 26 00: call 0x58797ee0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xe5
        __asm _emit 0x26
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 20 E5 FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 120h], 1
        ; Exact mapped bytes EB 0F: jmp 0x585299fc
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 120h]
        add ecx, 1
        mov dword ptr [ebp - 120h], ecx
        lea ecx, [ebp - 1ach]
        ; Exact mapped bytes E8 49 4F FA FF: call 0x584ce950
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x4f
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [ebp - 120h], eax
        ; Exact mapped bytes 7D 2D: jge 0x58529a3c
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 114h]
        sub edx, 60h
        mov dword ptr [ebp - 13ch], edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        lea ecx, [ebp - 1ach]
        ; Exact mapped bytes E8 03 E5 26 00: call 0x58797f30
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xe5
        __asm _emit 0x26
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 C7 E4 FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B1: jmp 0x585299ed
        __asm _emit 0xeb
        __asm _emit 0xb1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ach]
        ; Exact mapped bytes E8 A2 E1 26 00: call 0x58797bf0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xe1
        __asm _emit 0x26
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 CF 04 00 00: jmp 0x58529f23
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ach]
        ; Exact mapped bytes E8 8A E1 26 00: call 0x58797bf0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xe1
        __asm _emit 0x26
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 114h]
        sub ecx, 60h
        mov dword ptr [ebp - 140h], ecx
        push 0
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 5D C3 F5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc3
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 120d4h]
        mov dword ptr [ebp - 144h], eax
        push 0
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 3E C4 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 120d8h]
        mov dword ptr [ebp - 148h], edx
        push 0
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 1F C4 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 120c4h]
        mov dword ptr [ebp - 14ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 00 C4 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 120c8h]
        mov dword ptr [ebp - 150h], eax
        push 0
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 E1 C3 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xc3
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 118h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58529b1b
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 118h]
        add ecx, 1
        mov dword ptr [ebp - 118h], ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [ebp - 118h]
        cmp eax, dword ptr [edx + 1f0h]
        ; Exact mapped bytes 7D 4F: jge 0x58529b7e
        __asm _emit 0x7d
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 118h]
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + ecx*4 + 11ebch]
        mov dword ptr [ebp - 154h], eax
        push 1
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 8B C3 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xc3
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 118h]
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + ecx*4 + 11a08h]
        mov dword ptr [ebp - 158h], eax
        push 0
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 65 C3 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xc3
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 8E: jmp 0x58529b0c
        __asm _emit 0xeb
        __asm _emit 0x8e
        ; Exact mapped bytes E9 A0 03 00 00: jmp 0x58529f23
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 114h]
        sub ecx, 60h
        mov dword ptr [ebp - 15ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 41 C2 F5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xc2
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 120d4h]
        mov dword ptr [ebp - 160h], eax
        push 1
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 22 C3 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xc3
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 120d8h]
        mov dword ptr [ebp - 164h], edx
        push 1
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 03 C3 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xc3
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 120c4h]
        mov dword ptr [ebp - 168h], ecx
        push 1
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 E4 C2 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xc2
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 120c8h]
        mov dword ptr [ebp - 16ch], eax
        push 1
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 C5 C2 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xc2
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 118h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58529c37
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 118h]
        add ecx, 1
        mov dword ptr [ebp - 118h], ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [ebp - 118h]
        cmp eax, dword ptr [edx + 1f0h]
        ; Exact mapped bytes 7D 29: jge 0x58529c74
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 118h]
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + ecx*4 + 11a08h]
        mov dword ptr [ebp - 170h], eax
        push 1
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 6F C2 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xc2
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B4: jmp 0x58529c28
        __asm _emit 0xeb
        __asm _emit 0xb4
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 1f0h], 2
        ; Exact mapped bytes 7C 3C: jl 0x58529cbf
        __asm _emit 0x7c
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 1ech], -1
        ; Exact mapped bytes 7E 2D: jle 0x58529cbf
        __asm _emit 0x7e
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 1ech]
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + ecx*4 + 11ebch]
        mov dword ptr [ebp - 174h], eax
        push 0
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 22 C2 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xc2
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 5F 02 00 00: jmp 0x58529f23
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 124h], 0
        ; Exact mapped bytes E8 ED 3E FC FF: call 0x584edbc0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x3e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        mov ecx, dword ptr [ebp - 124h]
        push ecx
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes E8 A4 3E FC FF: call 0x584edb90
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x3e
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 12ch], eax
        cmp dword ptr [ebp - 12ch], 1
        ; Exact mapped bytes 74 0B: je 0x58529d0f
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 12ch], 2
        ; Exact mapped bytes 74 2B: je 0x58529d38
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes EB 50: jmp 0x58529d5f
        __asm _emit 0xeb
        __asm _emit 0x50
        ; Exact mapped bytes E8 DC D4 FA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xd4
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        push 0
        push 0
        lea ecx, [ebp - 110h]
        push ecx
        push 4b0h
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 8B 7A FB FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x7a
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 27: jmp 0x58529d5f
        __asm _emit 0xeb
        __asm _emit 0x27
        ; Exact mapped bytes E8 B3 D4 FA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xd4
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        push 0
        push 0
        lea edx, [ebp - 110h]
        push edx
        push 4b0h
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 62 7A FB FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x7a
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 BF 01 00 00: jmp 0x58529f23
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes E8 1E 3E FC FF: call 0x584edb90
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x3e
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        push 588a4b68h
        lea ecx, [ebp - 110h]
        push ecx
        lea ecx, [ebp - 198h]
        ; Exact mapped bytes E8 04 DD 26 00: call 0x58797a90
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xdd
        __asm _emit 0x26
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        lea ecx, [ebp - 198h]
        ; Exact mapped bytes E8 B2 4B FA FF: call 0x584ce950
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x4b
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 8E 89 00 00 00: jle 0x58529e2f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        sub edx, 60h
        mov dword ptr [ebp - 180h], edx
        push 0ffffffh
        lea ecx, [ebp - 198h]
        ; Exact mapped bytes E8 1B E1 26 00: call 0x58797ee0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xe1
        __asm _emit 0x26
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 2F E1 FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 11ch]
        add eax, 1
        mov dword ptr [ebp - 11ch], eax
        lea ecx, [ebp - 198h]
        ; Exact mapped bytes E8 65 4B FA FF: call 0x584ce950
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x4b
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes 7D 3C: jge 0x58529e2f
        __asm _emit 0x7d
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 114h]
        sub ecx, 60h
        mov dword ptr [ebp - 184h], ecx
        push 0ffffffh
        lea ecx, [ebp - 198h]
        ; Exact mapped bytes E8 1E E1 26 00: call 0x58797f30
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe1
        __asm _emit 0x26
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 E2 E0 FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 11ch]
        add edx, 1
        mov dword ptr [ebp - 11ch], edx
        ; Exact mapped bytes EB B1: jmp 0x58529de0
        __asm _emit 0xeb
        __asm _emit 0xb1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 198h]
        ; Exact mapped bytes E8 AF DD 26 00: call 0x58797bf0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xdd
        __asm _emit 0x26
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 DC 00 00 00: jmp 0x58529f23
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 198h]
        ; Exact mapped bytes E8 97 DD 26 00: call 0x58797bf0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xdd
        __asm _emit 0x26
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 130h], 0
        ; Exact mapped bytes E8 57 3D FC FF: call 0x584edbc0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        mov eax, dword ptr [ebp - 130h]
        mov dword ptr [ebp - 134h], eax
        cmp dword ptr [ebp - 134h], 1
        ; Exact mapped bytes 74 0B: je 0x58529e8f
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 134h], 2
        ; Exact mapped bytes 74 31: je 0x58529ebe
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes EB 39: jmp 0x58529ec8
        __asm _emit 0xeb
        __asm _emit 0x39
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes E8 45 3D FC FF: call 0x584edbe0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        push 1
        push 588a4b64h
        push 0
        lea edx, [ebp - 110h]
        push edx
        push 588a4b6ch
        push 0
        ; Exact mapped bytes FF 15 24 44 89 58: call dword ptr [0x58894424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 0A: jmp 0x58529ec8
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 1
        ; Exact mapped bytes E8 9B 3C FC FF: call 0x584edb60
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x3c
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        push 0
        push 0
        push 2
        ; Exact mapped bytes A1 1C 5F 96 58: mov eax, dword ptr [0x58965f1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF 15 E0 44 89 58: call dword ptr [0x588944e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B A2 FD FF: call 0x585040f0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xa2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        sub ecx, 60h
        ; Exact mapped bytes E8 CD E2 FF FF: call 0x585281c0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x58529f23
        __asm _emit 0xeb
        __asm _emit 0x2d
        push 0
        push 0
        push 2
        ; Exact mapped bytes 8B 0D 1C 5F 96 58: mov ecx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes FF 15 E0 44 89 58: call dword ptr [0x588944e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC A1 FD FF: call 0x585040f0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xa1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
    }
}
