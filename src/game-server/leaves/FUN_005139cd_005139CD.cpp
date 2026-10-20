// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005139CD .. +0x33C bytes.
extern "C" __declspec(naked) void FUN_005139cd_005139CD() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57db83h
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
        push 5c84b0h
        mov eax, dword ptr [ebp - 0bch]
        push eax
        ; Exact mapped bytes E8 59 77 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0bch]
        push ecx
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 A9 FF FE FF: call 0x5039bf
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 2C 23 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        lea edx, [ebp - 80h]
        push edx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 C7 86 02 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x86
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
        ; Exact mapped bytes E8 42 26 02 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 F5 22 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x22
        __asm _emit 0x02
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
        ; Exact mapped bytes 74 59: je 0x513ad9
        __asm _emit 0x74
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 0bch]
        mov eax, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [edx + 68h]
        cmp ecx, dword ptr [eax + 40h]
        ; Exact mapped bytes 7D 45: jge 0x513ad9
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
        ; Exact mapped bytes 03 05 F8 E8 5D 00: add eax, dword ptr [0x5de8f8]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 A1 22 02 00: call 0x535d5f
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x22
        __asm _emit 0x02
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
        ; Exact mapped bytes 74 59: je 0x513b3e
        __asm _emit 0x74
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 0bch]
        mov eax, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [edx + 6ch]
        cmp ecx, dword ptr [eax + 44h]
        ; Exact mapped bytes 7D 45: jge 0x513b3e
        __asm _emit 0x7d
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 74h]
        push edx
        mov eax, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [ebp - 80h]
        add ecx, dword ptr [eax + 48h]
        push ecx
        mov edx, dword ptr [ebp - 64h]
        ; Exact mapped bytes 03 15 F8 E8 5D 00: add edx, dword ptr [0x5de8f8]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        mov eax, dword ptr [ebp - 80h]
        push eax
        lea ecx, [ebp - 0b8h]
        ; Exact mapped bytes E8 3C 22 02 00: call 0x535d5f
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x22
        __asm _emit 0x02
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
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 81 01 00 00: jne 0x513cec
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
        ; Exact mapped bytes E8 DF 23 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 6C E7 FE FF: call 0x502300
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 B2 21 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 8ch], eax
        mov dword ptr [ebp - 94h], 0
        ; Exact mapped bytes EB 0F: jmp 0x513bc3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 94h]
        add ecx, 1
        mov dword ptr [ebp - 94h], ecx
        mov edx, dword ptr [ebp - 0bch]
        mov eax, dword ptr [edx + 68h]
        sub eax, 1
        cmp dword ptr [ebp - 94h], eax
        ; Exact mapped bytes 0F 8D 11 01 00 00: jge 0x513cec
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
        ; Exact mapped bytes EB 0F: jmp 0x513c41
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 98h]
        add ecx, 1
        mov dword ptr [ebp - 98h], ecx
        mov edx, dword ptr [ebp - 0bch]
        mov eax, dword ptr [edx + 6ch]
        sub eax, 1
        cmp dword ptr [ebp - 98h], eax
        ; Exact mapped bytes 7D 7D: jge 0x513cd2
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
        ; Exact mapped bytes E9 60 FF FF FF: jmp 0x513c32
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [ebp - 84h]
        add ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 8ch], ecx
        ; Exact mapped bytes E9 C8 FE FF FF: jmp 0x513bb4
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 88 FD FE FF: call 0x503a83
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xfd
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
