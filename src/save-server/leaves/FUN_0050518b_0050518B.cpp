// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050518B .. +0x896 bytes.
extern "C" __declspec(naked) void FUN_0050518b_0050518B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 17ch
        mov dword ptr [ebp - 17ch], ecx
        push 4ah
        push 677edch
        mov eax, dword ptr [ebp - 17ch]
        mov ecx, dword ptr [eax + 68h]
        push ecx
        ; Exact mapped bytes E8 B0 50 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 17ch]
        mov dword ptr [edx + 88h], 1
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 A5 13 00 00: call 0x506570
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 17ch]
        mov ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes E8 1D 26 FE FF: call 0x4e77f9
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x26
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x5051f6
        __asm _emit 0x74
        __asm _emit 0x13
        push 0
        mov ecx, dword ptr [ebp - 17ch]
        mov ecx, dword ptr [ecx + 84h]
        ; Exact mapped bytes E8 A7 26 FE FF: call 0x4e789d
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x26
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 17ch]
        mov eax, dword ptr [edx + 68h]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 0F 84 BB 02 00 00: je 0x5054c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B2 CF 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A5 D1 02 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xd1
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 17ch]
        mov ecx, dword ptr [edx + 68h]
        ; Exact mapped bytes E8 E3 68 02 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 17ch]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 8], edx
        push 0ah
        push 0
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 17ch]
        mov ecx, dword ptr [ecx + 68h]
        mov edx, dword ptr [ebp - 17ch]
        mov eax, dword ptr [edx + 68h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        push 0
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 17ch]
        mov ecx, dword ptr [ecx + 68h]
        mov edx, dword ptr [ebp - 17ch]
        mov eax, dword ptr [edx + 68h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 6
        push 0
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 17ch]
        mov ecx, dword ptr [ecx + 68h]
        mov edx, dword ptr [ebp - 17ch]
        mov eax, dword ptr [edx + 68h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 7ch], ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov eax, dword ptr [ebp - 80h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 4E D0 02 00: call 0x53230e
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 88h], ecx
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 5D CF 02 00: call 0x532244
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 17ch]
        add edx, 28h
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 0a0h], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 9ch], edx
        mov eax, dword ptr [ebp - 9ch]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E0 CF 02 00: call 0x53230e
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 0a8h], edx
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 0a4h]
        push ecx
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        lea ecx, [ebp - 98h]
        ; Exact mapped bytes E8 EC CE 02 00: call 0x532244
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 17ch]
        add ecx, 38h
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 0c0h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0bch], edx
        mov eax, dword ptr [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6F CF 02 00: call 0x53230e
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 0c8h], edx
        mov dword ptr [ebp - 0c4h], eax
        mov ecx, dword ptr [ebp - 0c4h]
        push ecx
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        lea ecx, [ebp - 0b8h]
        ; Exact mapped bytes E8 7B CE 02 00: call 0x532244
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 17ch]
        add ecx, 48h
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 0e0h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0dch], edx
        mov eax, dword ptr [ebp - 0dch]
        push eax
        mov ecx, dword ptr [ebp - 0e0h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 FE CE 02 00: call 0x53230e
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 0e8h], edx
        mov dword ptr [ebp - 0e4h], eax
        mov ecx, dword ptr [ebp - 0e4h]
        push ecx
        mov edx, dword ptr [ebp - 0e8h]
        push edx
        lea ecx, [ebp - 0d8h]
        ; Exact mapped bytes E8 0A CE 02 00: call 0x532244
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 17ch]
        add ecx, 58h
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        push 0
        push 0c40000h
        mov ecx, dword ptr [ebp - 17ch]
        add ecx, 48h
        push ecx
        ; Exact mapped bytes E8 DF 96 01 00: call 0x51eb4e
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0c40000h
        mov edx, dword ptr [ebp - 17ch]
        add edx, 58h
        push edx
        ; Exact mapped bytes E8 C9 96 01 00: call 0x51eb4e
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 6D 68 00: mov eax, dword ptr [0x686dc4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        neg eax
        push eax
        ; Exact mapped bytes 8B 0D C0 6D 68 00: mov ecx, dword ptr [0x686dc0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        neg ecx
        push ecx
        mov ecx, dword ptr [ebp - 17ch]
        add ecx, 48h
        ; Exact mapped bytes E8 4A D0 02 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 6D 68 00: mov edx, dword ptr [0x686dc4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        neg edx
        push edx
        ; Exact mapped bytes A1 C0 6D 68 00: mov eax, dword ptr [0x686dc0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        neg eax
        push eax
        mov ecx, dword ptr [ebp - 17ch]
        add ecx, 58h
        ; Exact mapped bytes E8 2B D0 02 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 C5 04 00 00: jmp 0x50598d
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 17ch]
        mov edx, dword ptr [ecx + 68h]
        mov eax, dword ptr [edx + 64h]
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 0F 84 17 02 00 00: je 0x5056f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 E0 CC 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 D3 CE 02 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 17ch]
        mov ecx, dword ptr [ecx + 68h]
        ; Exact mapped bytes E8 11 66 02 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 17ch]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], ecx
        push 0ah
        push -1
        lea edx, [ebp - 48h]
        push edx
        mov eax, dword ptr [ebp - 17ch]
        mov ecx, dword ptr [eax + 68h]
        mov edx, dword ptr [ebp - 17ch]
        mov eax, dword ptr [edx + 68h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        push -1
        lea eax, [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 17ch]
        mov ecx, dword ptr [ecx + 68h]
        mov edx, dword ptr [ebp - 17ch]
        mov eax, dword ptr [edx + 68h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 100h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0fch], ecx
        mov edx, dword ptr [ebp - 0fch]
        push edx
        mov eax, dword ptr [ebp - 100h]
        push eax
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 92 CD 02 00: call 0x53230e
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 108h], ecx
        mov dword ptr [ebp - 104h], edx
        mov eax, dword ptr [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 108h]
        push ecx
        lea ecx, [ebp - 0f8h]
        ; Exact mapped bytes E8 9E CC 02 00: call 0x532244
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 17ch]
        add edx, 28h
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp - 17ch]
        add ecx, 28h
        mov edx, dword ptr [ebp - 17ch]
        add edx, 48h
        mov eax, dword ptr [ecx]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 120h], edx
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 11ch], eax
        mov ecx, dword ptr [ebp - 11ch]
        push ecx
        mov edx, dword ptr [ebp - 120h]
        push edx
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 F9 CC 02 00: call 0x53230e
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 128h], ecx
        mov dword ptr [ebp - 124h], edx
        mov eax, dword ptr [ebp - 124h]
        push eax
        mov ecx, dword ptr [ebp - 128h]
        push ecx
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 05 CC 02 00: call 0x532244
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 17ch]
        add edx, 38h
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp - 17ch]
        add ecx, 38h
        mov edx, dword ptr [ebp - 17ch]
        add edx, 58h
        mov eax, dword ptr [ecx]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        push 0
        push 0c40000h
        mov edx, dword ptr [ebp - 17ch]
        add edx, 48h
        push edx
        ; Exact mapped bytes E8 B2 94 01 00: call 0x51eb4e
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0c40000h
        mov eax, dword ptr [ebp - 17ch]
        add eax, 58h
        push eax
        ; Exact mapped bytes E8 9C 94 01 00: call 0x51eb4e
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 6D 68 00: mov ecx, dword ptr [0x686dc4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        neg ecx
        push ecx
        ; Exact mapped bytes 8B 15 C0 6D 68 00: mov edx, dword ptr [0x686dc0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        neg edx
        push edx
        mov ecx, dword ptr [ebp - 17ch]
        add ecx, 48h
        ; Exact mapped bytes E8 1C CE 02 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 6D 68 00: mov eax, dword ptr [0x686dc4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        neg eax
        push eax
        ; Exact mapped bytes 8B 0D C0 6D 68 00: mov ecx, dword ptr [0x686dc0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        neg ecx
        push ecx
        mov ecx, dword ptr [ebp - 17ch]
        add ecx, 58h
        ; Exact mapped bytes E8 FD CD 02 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 97 02 00 00: jmp 0x50598d
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 C9 CA 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 BC CC 02 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 17ch]
        mov ecx, dword ptr [edx + 68h]
        ; Exact mapped bytes E8 FA 63 02 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 17ch]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 8], edx
        mov eax, dword ptr [ebp - 17ch]
        mov ecx, dword ptr [eax + 78h]
        and ecx, 0a000h
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp - 64h]
        neg edx
        sbb edx, edx
        and edx, 6
        add edx, 0ah
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 68h]
        push eax
        push -1
        lea ecx, [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 17ch]
        mov ecx, dword ptr [edx + 68h]
        mov eax, dword ptr [ebp - 17ch]
        mov edx, dword ptr [eax + 68h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 C4 00 00 00: call dword ptr [eax + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x505827
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 17ch]
        add ecx, 28h
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 140h], ecx
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 13ch], edx
        mov eax, dword ptr [ebp - 13ch]
        push eax
        mov ecx, dword ptr [ebp - 140h]
        push ecx
        mov edx, dword ptr [ebp - 5ch]
        push edx
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 03 CB 02 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp + 8]
        sub ecx, eax
        push ecx
        lea ecx, [ebp - 150h]
        ; Exact mapped bytes E8 83 C6 02 00: call 0x531e5c
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 148h], edx
        mov dword ptr [ebp - 144h], eax
        mov ecx, dword ptr [ebp - 144h]
        push ecx
        mov edx, dword ptr [ebp - 148h]
        push edx
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 41 CA 02 00: call 0x532244
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 17ch]
        add ecx, 38h
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x5058d2
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 17ch]
        add ecx, 38h
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 168h], ecx
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 164h], edx
        mov eax, dword ptr [ebp - 164h]
        push eax
        mov ecx, dword ptr [ebp - 168h]
        push ecx
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 41 CA 02 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp + 0ch]
        sub edx, eax
        push edx
        mov eax, dword ptr [ebp - 60h]
        push eax
        lea ecx, [ebp - 178h]
        ; Exact mapped bytes E8 D3 C5 02 00: call 0x531e5c
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 170h], ecx
        mov dword ptr [ebp - 16ch], edx
        mov eax, dword ptr [ebp - 16ch]
        push eax
        mov ecx, dword ptr [ebp - 170h]
        push ecx
        lea ecx, [ebp - 160h]
        ; Exact mapped bytes E8 91 C9 02 00: call 0x532244
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 17ch]
        add edx, 28h
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp - 17ch]
        add ecx, 28h
        mov edx, dword ptr [ebp - 17ch]
        add edx, 48h
        mov eax, dword ptr [ecx]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov edx, dword ptr [ebp - 17ch]
        add edx, 38h
        mov eax, dword ptr [ebp - 17ch]
        add eax, 58h
        mov ecx, dword ptr [edx]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [edx + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [eax + 0ch], edx
        push 0
        push 0c40000h
        mov eax, dword ptr [ebp - 17ch]
        add eax, 48h
        push eax
        ; Exact mapped bytes E8 16 92 01 00: call 0x51eb4e
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0c40000h
        mov ecx, dword ptr [ebp - 17ch]
        add ecx, 58h
        push ecx
        ; Exact mapped bytes E8 00 92 01 00: call 0x51eb4e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 6D 68 00: mov edx, dword ptr [0x686dc4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        neg edx
        push edx
        ; Exact mapped bytes A1 C0 6D 68 00: mov eax, dword ptr [0x686dc0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        neg eax
        push eax
        mov ecx, dword ptr [ebp - 17ch]
        add ecx, 48h
        ; Exact mapped bytes E8 81 CB 02 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 6D 68 00: mov ecx, dword ptr [0x686dc4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        neg ecx
        push ecx
        ; Exact mapped bytes 8B 15 C0 6D 68 00: mov edx, dword ptr [0x686dc0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        neg edx
        push edx
        mov ecx, dword ptr [ebp - 17ch]
        add ecx, 58h
        ; Exact mapped bytes E8 61 CB 02 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 17ch]
        add edx, 28h
        push edx
        ; Exact mapped bytes E8 3C F5 FF FF: call 0x504ee0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 17ch]
        add edx, 38h
        push edx
        ; Exact mapped bytes E8 25 F5 FF FF: call 0x504ee0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 17ch]
        add edx, 48h
        push edx
        ; Exact mapped bytes E8 0E F5 FF FF: call 0x504ee0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 17ch]
        add edx, 58h
        push edx
        ; Exact mapped bytes E8 F7 F4 FF FF: call 0x504ee0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 15 10 00 00: call 0x506a09
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 17ch]
        mov dword ptr [ecx + 74h], eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 11 00 00 00: call 0x505a21
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 96 13 00 00: call 0x506db1
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
