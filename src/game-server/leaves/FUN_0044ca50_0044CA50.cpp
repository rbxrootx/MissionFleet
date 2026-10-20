// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044CA50 .. +0x4E4 bytes.
extern "C" __declspec(naked) void FUN_0044ca50_0044CA50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b089h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 14h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 20h], ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 B5 C5 07 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xc5
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E0 4C FF FF: call 0x441780
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 44 48 FF FF: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes 8B 15 04 78 5D 00: mov edx, dword ptr [0x5d7804]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 50 48 FF FF: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes 8B 0D 04 78 5D 00: mov ecx, dword ptr [0x5d7804]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 88 38 FF FF: call 0x440360
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 9C 06 00 00: call 0x44d180
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 0ch]
        add edx, 1
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 0ch], edx
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp + 10h]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 74 39: je 0x44cb37
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 3B 05 04 78 5D 00: cmp eax, dword ptr [0x5d7804]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 75 2E: jne 0x44cb37
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 6E FE FF FF: call 0x44c980
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        mov edx, dword ptr [ebp + 14h]
        push edx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 0E FE FF FF: call 0x44c930
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        ; Exact mapped bytes E8 22 FE FF FF: call 0x44c950
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 56: je 0x44cb8d
        __asm _emit 0x74
        __asm _emit 0x56
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 B0 47 FF FF: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 10h]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 75 1C: jne 0x44cb6f
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 35 46 FF FF: call 0x441190
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F8 45 FF FF: call 0x441160
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 1C: jmp 0x44cb8b
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B9 45 FF FF: call 0x441130
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 75 0D: jne 0x44cb8b
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 AA 45 FF FF: call 0x441130
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 2D: jmp 0x44cbba
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 7A 47 FF FF: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 BA 45 FF FF: call 0x441160
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 10h]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 0D: jne 0x44cbba
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 AB 45 FF FF: call 0x441160
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp + 0ch], edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 C8 45 FF FF: call 0x441190
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 0F 84 08 03 00 00: je 0x44cedb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 24 47 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 F9 46 FF FF: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 85 E8 02 00 00: jne 0x44cedb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 04 47 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 F6 46 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 EB 46 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 D0 46 FF FF: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [esi]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 0F 85 57 01 00 00: jne 0x44cd84
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 CA 46 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 BF 46 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 C4 46 FF FF: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        mov dword ptr [ebp + 10h], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 83 46 FF FF: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 78: jne 0x44ccdd
        __asm _emit 0x75
        __asm _emit 0x78
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 92 46 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 67 46 FF FF: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [eax], 1
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 55 46 FF FF: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [eax], 1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 63 46 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 58 46 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 2D 46 FF FF: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [eax], 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 3B 46 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 30 46 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x44cd7f
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 1A 46 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 1F 46 FF FF: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 75 1D: jne 0x44cd18
        __asm _emit 0x75
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 FC 45 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 08 46 FF FF: call 0x441320
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 DF 45 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 B4 45 FF FF: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [eax], 1
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 C2 45 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 B7 45 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 8C 45 FF FF: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 9A 45 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 8F 45 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 71 48 FF FF: call 0x4415f0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 52 01 00 00: jmp 0x44ced6
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 73 45 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 68 45 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 4D 45 FF FF: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 2C 45 FF FF: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 78: jne 0x44ce34
        __asm _emit 0x75
        __asm _emit 0x78
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 3B 45 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 10 45 FF FF: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [eax], 1
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 FE 44 FF FF: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [eax], 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 0C 45 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 01 45 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 D6 44 FF FF: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [eax], 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 E4 44 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 D9 44 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x44ced6
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 C3 44 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 A8 44 FF FF: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 1D: jne 0x44ce6f
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 A5 44 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 81 47 FF FF: call 0x4415f0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 88 44 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 5D 44 FF FF: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [eax], 1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 6B 44 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 60 44 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 35 44 FF FF: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [eax], 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 43 44 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 38 44 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 4A 44 FF FF: call 0x441320
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 E5 FC FF FF: jmp 0x44cbc0
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 AD 42 FF FF: call 0x441190
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 F5 43 FF FF: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [eax], 1
        mov eax, dword ptr [ebp - 10h]
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 B0 43 FF FF: call 0x4412b0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 0A C2 07 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xc2
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 B2 B8 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
