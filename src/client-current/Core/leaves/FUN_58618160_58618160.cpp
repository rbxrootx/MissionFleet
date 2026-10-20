// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58618160 .. +0x504 bytes.
extern "C" __declspec(naked) void FUN_58618160_58618160() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 258h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 208h], ecx
        mov eax, dword ptr [ebp - 208h]
        cmp dword ptr [eax + 0ach], 0
        ; Exact mapped bytes 0F 85 60 01 00 00: jne 0x586182ec
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 B6 94 EB FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x94
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 214h], eax
        mov dword ptr [ebp - 20ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586181bb
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 20ch]
        add edx, 1
        mov dword ptr [ebp - 20ch], edx
        cmp dword ptr [ebp - 20ch], 4
        ; Exact mapped bytes 7D 5E: jge 0x58618222
        __asm _emit 0x7d
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 214h]
        add eax, dword ptr [ebp - 20ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 30h
        ; Exact mapped bytes 7C 14: jl 0x586181ec
        __asm _emit 0x7c
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 214h]
        add edx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 39h
        ; Exact mapped bytes 7E 34: jle 0x58618220
        __asm _emit 0x7e
        __asm _emit 0x34
        push 1
        push 588ae3d4h
        ; Exact mapped bytes E8 F8 9D F0 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x9d
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 F9 13 00 00: call 0x58619600
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 41 04 00 00: jmp 0x58618661
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 8A: jmp 0x586181ac
        __asm _emit 0xeb
        __asm _emit 0x8a
        mov ecx, dword ptr [ebp - 214h]
        push ecx
        ; Exact mapped bytes E8 6A FA 23 00: call 0x58857c98
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xfa
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 228h], eax
        mov edx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 6B D5 E7 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xd5
        __asm _emit 0xe7
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 228h]
        ; Exact mapped bytes 74 36: je 0x58618283
        __asm _emit 0x74
        __asm _emit 0x36
        push 1
        push 588ae408h
        ; Exact mapped bytes E8 97 9D F0 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x9d
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 98 13 00 00: call 0x58619600
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 E0 03 00 00: jmp 0x58618661
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 64: jmp 0x586182e7
        __asm _emit 0xeb
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 208h]
        cmp dword ptr [ecx + 0b0h], 0
        ; Exact mapped bytes 75 3C: jne 0x586182e2
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F EE EB FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xee
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 58 EE EB FF: call 0x584d7110
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xee
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 21ch], eax
        mov edx, dword ptr [ebp - 21ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 22ch], ecx
        push 0
        push 63h
        push 0
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes FF 95 D4 FD FF FF: call dword ptr [ebp - 0x22c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 7A 03 00 00: jmp 0x58618661
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 75 03 00 00: jmp 0x58618661
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 208h]
        cmp dword ptr [edx + 0ach], 1
        ; Exact mapped bytes 0F 85 62 03 00 00: jne 0x58618661
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x62
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 43 93 EB FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x93
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        mov ecx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 8F D4 E7 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xd4
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 250h], eax
        mov edx, dword ptr [ebp - 208h]
        cmp dword ptr [edx + 80h], 0
        ; Exact mapped bytes 0F 8C D8 02 00 00: jl 0x58618612
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 80h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 208h]
        mov dword ptr [edx + 80h], ecx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 230h], ecx
        push 588ae43ch
        ; Exact mapped bytes E8 7F 9C F0 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x9c
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 234h], eax
        mov edx, dword ptr [ebp - 230h]
        push edx
        mov eax, dword ptr [ebp - 234h]
        push eax
        lea ecx, [ebp - 204h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + edx + 98h]
        mov dword ptr [ebp - 238h], ecx
        lea edx, [ebp - 204h]
        push edx
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 CC 5D EB FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x5d
        __asm _emit 0xeb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 208h]
        imul ecx, dword ptr [eax + 94h], 19h
        mov edx, dword ptr [ebp - 208h]
        mov dword ptr [edx + 0b4h], ecx
        mov eax, dword ptr [ebp - 208h]
        mov eax, dword ptr [eax + 0b4h]
        xor edx, edx
        mov ecx, 19h
        div ecx
        push eax
        push 588ae468h
        lea edx, [ebp - 204h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 23ch], ecx
        lea edx, [ebp - 204h]
        push edx
        mov ecx, dword ptr [ebp - 23ch]
        ; Exact mapped bytes E8 74 DC E6 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xdc
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 244h], ecx
        ; Exact mapped bytes E8 2C 88 23 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x88
        __asm _emit 0x23
        __asm _emit 0x00
        cdq
        mov ecx, 2710h
        idiv ecx
        mov dword ptr [ebp - 240h], edx
        mov edx, dword ptr [ebp - 240h]
        push edx
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 30 2D 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x2d
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 24ch], ecx
        ; Exact mapped bytes E8 F8 87 23 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x87
        __asm _emit 0x23
        __asm _emit 0x00
        cdq
        mov ecx, 2710h
        idiv ecx
        mov dword ptr [ebp - 248h], edx
        mov edx, dword ptr [ebp - 248h]
        push edx
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 FC 2C 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x2c
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 210h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586184b0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 210h]
        add eax, 1
        mov dword ptr [ebp - 210h], eax
        cmp dword ptr [ebp - 210h], 4
        ; Exact mapped bytes 7D 7F: jge 0x58618538
        __asm _emit 0x7d
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 218h]
        add ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 30h
        ; Exact mapped bytes 7C 14: jl 0x586184e1
        __asm _emit 0x7c
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 218h]
        add eax, dword ptr [ebp - 210h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 39h
        ; Exact mapped bytes 7E 52: jle 0x58618533
        __asm _emit 0x7e
        __asm _emit 0x52
        push 1
        push 588ae46ch
        ; Exact mapped bytes E8 03 9B F0 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x9b
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 04 11 00 00: call 0x58619600
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 208h]
        cmp dword ptr [edx + 80h], 0
        ; Exact mapped bytes 7C 16: jl 0x58618522
        __asm _emit 0x7c
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 208h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 0C: jmp 0x5861852e
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 33 FC FF FF: call 0x58618160
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 2E 01 00 00: jmp 0x58618661
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 69 FF FF FF: jmp 0x586184a1
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 218h]
        push ecx
        ; Exact mapped bytes E8 54 F7 23 00: call 0x58857c98
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xf7
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 254h], eax
        mov edx, dword ptr [ebp - 250h]
        cmp edx, dword ptr [ebp - 254h]
        ; Exact mapped bytes 74 54: je 0x586185af
        __asm _emit 0x74
        __asm _emit 0x54
        push 1
        push 588ae4a0h
        ; Exact mapped bytes E8 89 9A F0 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x9a
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 8A 10 00 00: call 0x58619600
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 208h]
        cmp dword ptr [eax + 80h], 0
        ; Exact mapped bytes 7C 16: jl 0x5861859c
        __asm _emit 0x7c
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 0C: jmp 0x586185a8
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 B9 FB FF FF: call 0x58618160
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x58618661
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 61: jmp 0x58618610
        __asm _emit 0xeb
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 208h]
        cmp dword ptr [ecx + 0b0h], 0
        ; Exact mapped bytes 75 3C: jne 0x5861860e
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 EB EB FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xeb
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2C EB EB FF: call 0x584d7110
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xeb
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        mov edx, dword ptr [ebp - 220h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 258h], ecx
        push 0
        push 63h
        push 0
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes FF 95 A8 FD FF FF: call dword ptr [ebp - 0x258]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 51: jmp 0x58618661
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes EB 4F: jmp 0x58618661
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov eax, dword ptr [ebp - 208h]
        cmp dword ptr [eax + 0b0h], 0
        ; Exact mapped bytes 75 2C: jne 0x58618661
        __asm _emit 0x75
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 EA EB FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xea
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C9 EA EB FF: call 0x584d7110
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xea
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 224h], eax
        mov ecx, dword ptr [ebp - 224h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 224h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
    }
}
