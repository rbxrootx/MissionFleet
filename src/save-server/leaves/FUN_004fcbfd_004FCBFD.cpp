// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FCBFD .. +0x33C bytes.
extern "C" __declspec(naked) void FUN_004fcbfd_004FCBFD() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d6e3h
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
        sub esp, 0b0h
        mov dword ptr [ebp - 0bch], ecx
        push 60dh
        push 674fe8h
        mov eax, dword ptr [ebp - 0bch]
        push eax
        ; Exact mapped bytes E8 29 D6 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xd6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0bch]
        push ecx
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 2D BD FE FF: call 0x4e8973
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 72 55 03 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x55
        __asm _emit 0x03
        __asm _emit 0x00
        lea edx, [ebp - 80h]
        push edx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 F7 EE 02 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xee
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [eax + 64h]
        neg ecx
        push ecx
        mov edx, dword ptr [ebp - 0bch]
        mov eax, dword ptr [edx + 60h]
        neg eax
        push eax
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 6A 58 03 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x58
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 3B 55 03 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x55
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 70h]
        push ecx
        mov edx, dword ptr [ebp - 0bch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes FF 90 08 01 00 00: call dword ptr [eax + 0x108]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0bch]
        cmp dword ptr [ecx + 74h], 0
        ; Exact mapped bytes 74 59: je 0x4fcd09
        __asm _emit 0x74
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 0bch]
        mov eax, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [edx + 68h]
        cmp ecx, dword ptr [eax + 40h]
        ; Exact mapped bytes 7D 45: jge 0x4fcd09
        __asm _emit 0x7d
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 0bch]
        mov eax, dword ptr [ebp - 7ch]
        add eax, dword ptr [edx + 4ch]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov eax, dword ptr [ebp - 68h]
        ; Exact mapped bytes 03 05 10 6E 68 00: add eax, dword ptr [0x686e10]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 E7 54 03 00: call 0x5321d5
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        push 0
        lea ecx, [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp - 0bch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes FF 90 C8 00 00 00: call dword ptr [eax + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0bch]
        cmp dword ptr [ecx + 70h], 0
        ; Exact mapped bytes 74 59: je 0x4fcd6e
        __asm _emit 0x74
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 0bch]
        mov eax, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [edx + 6ch]
        cmp ecx, dword ptr [eax + 44h]
        ; Exact mapped bytes 7D 45: jge 0x4fcd6e
        __asm _emit 0x7d
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 74h]
        push edx
        mov eax, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [ebp - 80h]
        add ecx, dword ptr [eax + 48h]
        push ecx
        mov edx, dword ptr [ebp - 64h]
        ; Exact mapped bytes 03 15 10 6E 68 00: add edx, dword ptr [0x686e10]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        mov eax, dword ptr [ebp - 80h]
        push eax
        lea ecx, [ebp - 0b8h]
        ; Exact mapped bytes E8 82 54 03 00: call 0x5321d5
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        push 0
        lea ecx, [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp - 0bch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes FF 90 C8 00 00 00: call dword ptr [eax + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        lea eax, [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 0bch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes FF 92 18 01 00 00: call dword ptr [edx + 0x118]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 81 01 00 00: jne 0x4fcf1c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 0bch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes FF 92 08 01 00 00: call dword ptr [edx + 0x108]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 07 56 03 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 1C A5 FE FF: call 0x4e72e0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 F8 53 03 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x53
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 8ch], eax
        mov dword ptr [ebp - 94h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4fcdf3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 94h]
        add ecx, 1
        mov dword ptr [ebp - 94h], ecx
        mov edx, dword ptr [ebp - 0bch]
        mov eax, dword ptr [edx + 68h]
        sub eax, 1
        cmp dword ptr [ebp - 94h], eax
        ; Exact mapped bytes 0F 8D 11 01 00 00: jge 0x4fcf1c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 94h]
        imul ecx, ecx, 0ch
        mov edx, dword ptr [ebp - 0bch]
        mov eax, dword ptr [edx + 7ch]
        mov ecx, dword ptr [eax + ecx + 8]
        mov edx, dword ptr [ebp - 0bch]
        add ecx, dword ptr [edx + 54h]
        mov eax, dword ptr [ebp - 8ch]
        add eax, ecx
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp - 0bch]
        mov edx, dword ptr [ebp - 8ch]
        add edx, dword ptr [ecx + 4ch]
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 90h], eax
        mov dword ptr [ebp - 98h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4fce71
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 98h]
        add ecx, 1
        mov dword ptr [ebp - 98h], ecx
        mov edx, dword ptr [ebp - 0bch]
        mov eax, dword ptr [edx + 6ch]
        sub eax, 1
        cmp dword ptr [ebp - 98h], eax
        ; Exact mapped bytes 7D 7D: jge 0x4fcf02
        __asm _emit 0x7d
        __asm _emit 0x7d
        mov ecx, dword ptr [ebp - 98h]
        imul ecx, ecx, 0ch
        mov edx, dword ptr [ebp - 0bch]
        mov eax, dword ptr [edx + 78h]
        mov ecx, dword ptr [eax + ecx + 8]
        mov edx, dword ptr [ebp - 0bch]
        add ecx, dword ptr [edx + 50h]
        mov eax, dword ptr [ebp - 90h]
        add eax, ecx
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 0bch]
        mov edx, dword ptr [ebp - 90h]
        add edx, dword ptr [ecx + 48h]
        mov dword ptr [ebp - 88h], edx
        lea eax, [ebp - 90h]
        push eax
        push 2
        lea ecx, [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp - 0bch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes FF 90 C8 00 00 00: call dword ptr [eax + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0bch]
        mov edx, dword ptr [ebp - 88h]
        add edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 90h], edx
        ; Exact mapped bytes E9 60 FF FF FF: jmp 0x4fce62
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [ebp - 84h]
        add ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 8ch], ecx
        ; Exact mapped bytes E9 C8 FE FF FF: jmp 0x4fcde4
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 0C BB FE FF: call 0x4e8a37
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xbb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
