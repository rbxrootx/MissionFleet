// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586ABA50 .. +0x3A7 bytes.
extern "C" __declspec(naked) void FUN_586aba50_586ABA50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 78h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 70 A3 DD FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xa3
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 BA 3D DF FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x3d
        __asm _emit 0xdf
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF 8E DD FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x8e
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 2E 01 00 00: je 0x586abbcc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AA 68 0A 00: call 0x58752350
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x68
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x586abad7
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [ebp - 20h], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 20 A3 DD FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xa3
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 24h], ecx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 6A 3D DF FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x3d
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586abae9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 0F 8D CD 00 00 00: jge 0x586abbc0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 11 40 E0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x40
        __asm _emit 0xe0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x586abbbb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FD 3F E0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x3f
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 26 8F DD FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x8f
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [ecx + edx*4 + 0f8h]
        ; Exact mapped bytes 74 45: je 0x586abb70
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0f8h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C9 3F E0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x3f
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 1A 32 E0 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x32
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AE 3F E0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x3f
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 91 38 E5 FF: call 0x584ff400
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x38
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 0f8h]
        ; Exact mapped bytes E8 7E 8E DD FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x8e
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 70h], ecx
        mov dword ptr [ebp - 6ch], edx
        mov eax, dword ptr [ebp - 70h]
        sub eax, 1eh
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 6ch]
        sub ecx, 37h
        mov dword ptr [ebp - 6ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 65 3F E0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x3f
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        lea eax, [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 76 38 DF FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x38
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 20 FF FF FF: jmp 0x586abae0
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 8F F0 FF: call 0x585b4b10
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x8f
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, 9
        mov dword ptr [ebp - 78h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        add ecx, 3ah
        mov dword ptr [ebp - 74h], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A 08 00 00: call 0x586ac460
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x586abc06
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AD 04 DE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 44 01 00 00: je 0x586abd54
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C8 02 DE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 21 8E DD FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x8e
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 36: je 0x586abc5c
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B2 02 DE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0xde
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 39 31 E0 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x31
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A1 02 DE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x02
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4A 36 E5 FF: call 0x584ff290
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x36
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 92 02 DE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 F5 3F E5 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x3f
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7C 02 DE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, dword ptr [eax + 190h]
        imul edx, ecx, 43h
        add edx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 94 99 10 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x99
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [edx + 190h]
        ; Exact mapped bytes 7C 29: jl 0x586abcc4
        __asm _emit 0x7c
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 190h]
        add edx, 7
        cmp dword ptr [ebp - 14h], edx
        ; Exact mapped bytes 7D 18: jge 0x586abcc4
        __asm _emit 0x7d
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2C 02 DE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 CF A2 DD FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xa2
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 16: jmp 0x586abcda
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 14 02 DE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 B7 A2 DD FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xa2
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FE 01 DE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 87 76 E1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x76
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [eax + 64h]
        and eax, 10000000h
        ; Exact mapped bytes 74 53: je 0x586abd46
        __asm _emit 0x74
        __asm _emit 0x53
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 19: je 0x586abd12
        __asm _emit 0x74
        __asm _emit 0x19
        push 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DB 01 DE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0xde
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A2 58 0A 00: call 0x587515b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x586abd2d
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C6 01 DE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        push 100h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 16 98 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x98
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x586abd46
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AB 01 DE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        push 80h
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 FB 97 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x97
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E9 A7 FE FF FF: jmp 0x586abbfb
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0e4h]
        mov dword ptr [ebp - 58h], edx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C 78 FC FF: call 0x586735b0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x78
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF 06 00 00: call 0x586ac480
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        sub esi, eax
        mov dword ptr [ebp - 54h], esi
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 FE F3 10 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xf3
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0e4h]
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE 06 00 00: call 0x586ac480
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 CF F3 10 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xf3
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ech]
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 77 FC FF: call 0x586735b0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x77
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 A9 F3 10 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf3
        __asm _emit 0x10
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6F 11 00 00: call 0x586acf60
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
