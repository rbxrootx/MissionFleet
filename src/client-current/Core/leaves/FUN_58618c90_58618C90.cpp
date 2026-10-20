// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58618C90 .. +0x7F7 bytes.
extern "C" __declspec(naked) void FUN_58618c90_58618C90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2b4h
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
        mov dword ptr [eax + 0b8h], 0
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 28ch], edx
        push 1
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 0B D2 E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xd2
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 210h], ecx
        push 1
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 EF D1 E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xd1
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 214h], eax
        push 1
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 D3 D1 E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xd1
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 218h], edx
        push 1
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 B7 D0 E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xd0
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 21ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 9B D1 E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xd1
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 220h], eax
        push 1
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 7F D1 E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xd1
        __asm _emit 0xe6
        __asm _emit 0xff
        push 0e8h
        push 0fbh
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 1A 07 00 00: call 0x58619490
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 224h], edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 73h
        push ecx
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 4]
        add eax, 0c9h
        push eax
        mov ecx, dword ptr [ebp - 224h]
        ; Exact mapped bytes E8 74 C8 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xc8
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 228h], edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 74h
        push ecx
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 4]
        add eax, 0cah
        push eax
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 3E C8 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xc8
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 22ch], edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 76h
        push ecx
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 4]
        add eax, 129h
        push eax
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 08 C8 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xc8
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 230h], edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 73h
        push ecx
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 4]
        add eax, 118h
        push eax
        mov ecx, dword ptr [ebp - 230h]
        ; Exact mapped bytes E8 D2 C7 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xc7
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 234h], edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 74h
        push ecx
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 4]
        add eax, 119h
        push eax
        mov ecx, dword ptr [ebp - 234h]
        ; Exact mapped bytes E8 9C C7 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xc7
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 238h], edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 76h
        push ecx
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 4]
        add eax, 17ch
        push eax
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 63 C7 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xc7
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 4]
        add edx, 164h
        mov eax, dword ptr [ebp - 208h]
        mov dword ptr [eax + 8ch], edx
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 8]
        add edx, 72h
        mov eax, dword ptr [ebp - 208h]
        mov dword ptr [eax + 90h], edx
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 23ch], edx
        mov eax, dword ptr [ebp - 208h]
        add eax, 8ch
        push eax
        mov ecx, dword ptr [ebp - 23ch]
        ; Exact mapped bytes E8 17 65 E8 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x65
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes FF 15 B8 42 89 58: call dword ptr [0x588942b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 68 7D 23 00: call 0x58850c8d
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x7d
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 244h], edx
        ; Exact mapped bytes E8 30 7D 23 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x7d
        __asm _emit 0x23
        __asm _emit 0x00
        cdq
        mov ecx, 2710h
        idiv ecx
        mov dword ptr [ebp - 240h], edx
        mov edx, dword ptr [ebp - 240h]
        push edx
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 34 22 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x22
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 24ch], ecx
        ; Exact mapped bytes E8 FC 7C 23 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x7c
        __asm _emit 0x23
        __asm _emit 0x00
        cdq
        mov ecx, 2710h
        idiv ecx
        mov dword ptr [ebp - 248h], edx
        mov edx, dword ptr [ebp - 248h]
        push edx
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 00 22 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x22
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 62 75 EB FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x75
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 0ach], edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0b0h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 20ch], edx
        cmp dword ptr [ebp - 20ch], 0
        ; Exact mapped bytes 74 12: je 0x58618fe0
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 20ch], 1
        ; Exact mapped bytes 0F 84 91 01 00 00: je 0x5861916c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 83 04 00 00: jmp 0x58619463
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + ecx + 0a4h]
        mov dword ptr [ebp - 254h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + edx + 0a4h]
        ; Exact mapped bytes E8 9B 30 E7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x30
        __asm _emit 0xe7
        __asm _emit 0xff
        add eax, 0ah
        mov dword ptr [ebp - 250h], eax
        mov ecx, dword ptr [ebp - 250h]
        push ecx
        mov ecx, dword ptr [ebp - 254h]
        ; Exact mapped bytes E8 00 C7 19 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xc7
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + edx + 0a4h]
        mov dword ptr [ebp - 25ch], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + edx + 0a4h]
        ; Exact mapped bytes E8 4B 30 E7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x30
        __asm _emit 0xe7
        __asm _emit 0xff
        add eax, 0ah
        mov dword ptr [ebp - 258h], eax
        mov ecx, dword ptr [ebp - 258h]
        push ecx
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 B0 C6 19 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xc6
        __asm _emit 0x19
        __asm _emit 0x00
        push 0
        push 588ae4d4h
        ; Exact mapped bytes E8 64 8F F0 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x8f
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 65 05 00 00: call 0x58619600
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + edx + 98h]
        mov dword ptr [ebp - 260h], ecx
        push 0ffffh
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 1A D0 E6 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xd0
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + eax + 0a4h]
        mov dword ptr [ebp - 264h], edx
        push 1
        mov ecx, dword ptr [ebp - 264h]
        ; Exact mapped bytes E8 F2 CD E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xcd
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + eax + 0a4h]
        mov dword ptr [ebp - 268h], edx
        push 1
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 CA CD E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xcd
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + ecx + 0a4h]
        mov dword ptr [ebp - 26ch], eax
        push 1
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 A2 CC E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xcc
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + ecx + 0a4h]
        mov dword ptr [ebp - 270h], eax
        push 1
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 7A CC E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xcc
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F7 02 00 00: jmp 0x58619463
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [ecx + 94h], edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 274h], ecx
        push 1
        mov ecx, dword ptr [ebp - 274h]
        ; Exact mapped bytes E8 46 CD E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xcd
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 278h], eax
        push 1
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 27 CD E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xcd
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 208h]
        mov dword ptr [ecx + 80h], 2
        mov edx, dword ptr [ebp - 208h]
        imul eax, dword ptr [edx + 94h], 19h
        mov ecx, dword ptr [ebp - 208h]
        mov dword ptr [ecx + 0b4h], eax
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + edx + 0a4h]
        mov dword ptr [ebp - 27ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 27ch]
        ; Exact mapped bytes E8 D6 CB E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xcb
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + edx + 0a4h]
        mov dword ptr [ebp - 280h], ecx
        push 0
        mov ecx, dword ptr [ebp - 280h]
        ; Exact mapped bytes E8 AE CC E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xcc
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + eax + 0a4h]
        mov dword ptr [ebp - 288h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [edx + ecx + 0a4h]
        ; Exact mapped bytes E8 49 2E E7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x2e
        __asm _emit 0xe7
        __asm _emit 0xff
        add eax, 0ah
        mov dword ptr [ebp - 284h], eax
        mov eax, dword ptr [ebp - 284h]
        push eax
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 AE C4 19 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xc4
        __asm _emit 0x19
        __asm _emit 0x00
        push 0
        push 588ae500h
        ; Exact mapped bytes E8 62 8D F0 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 63 03 00 00: call 0x58619600
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 2a0h], edx
        push 588ae52ch
        ; Exact mapped bytes E8 37 8D F0 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 290h], eax
        mov eax, dword ptr [ebp - 2a0h]
        push eax
        mov ecx, dword ptr [ebp - 290h]
        push ecx
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
        push 2
        lea eax, [ebp - 204h]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 0C 03 00 00: call 0x58619600
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov eax, dword ptr [ecx + 0b4h]
        xor edx, edx
        mov ecx, 19h
        div ecx
        push eax
        push 588ae558h
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
        mov dword ptr [ebp - 294h], ecx
        lea edx, [ebp - 204h]
        push edx
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 5D CD E6 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xcd
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + eax + 98h]
        mov dword ptr [ebp - 298h], edx
        push 0ffffh
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes E8 72 CD E6 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xcd
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + eax + 98h]
        mov dword ptr [ebp - 29ch], edx
        push 0ffffh
        mov ecx, dword ptr [ebp - 29ch]
        ; Exact mapped bytes E8 48 CD E6 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xcd
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + eax + 98h]
        mov dword ptr [ebp - 2a4h], edx
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ecx + eax + 98h]
        ; Exact mapped bytes E8 E5 2C E7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x2c
        __asm _emit 0xe7
        __asm _emit 0xff
        add eax, 1eh
        mov dword ptr [ebp - 2b4h], eax
        mov edx, dword ptr [ebp - 2b4h]
        push edx
        mov ecx, dword ptr [ebp - 2a4h]
        ; Exact mapped bytes E8 4A C3 19 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xc3
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + ecx + 0a4h]
        mov dword ptr [ebp - 2b0h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + edx + 0a4h]
        ; Exact mapped bytes E8 95 2C E7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0xe7
        __asm _emit 0xff
        sub eax, 14h
        mov dword ptr [ebp - 2a8h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + edx + 0a4h]
        ; Exact mapped bytes E8 82 D5 E6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xd5
        __asm _emit 0xe6
        __asm _emit 0xff
        add eax, 0c3h
        mov dword ptr [ebp - 2ach], eax
        mov ecx, dword ptr [ebp - 2a8h]
        push ecx
        mov edx, dword ptr [ebp - 2ach]
        push edx
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 BE C1 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xc1
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 208h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 CF 7B 21 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x7b
        __asm _emit 0x21
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
