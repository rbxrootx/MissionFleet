// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874B1A0 .. +0x3F8 bytes.
extern "C" __declspec(naked) void FUN_5874b1a0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 B8 03 00 00: je 0x5874b567
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        sub eax, dword ptr [esi + 4]
        push ebp
        mov ebp, 0
        ; Exact mapped bytes 74 3C: je 0x5874b1f9
        __asm _emit 0x74
        __asm _emit 0x3c
        lea ecx, [eax + 7]
        cmp ecx, 0eh
        ; Exact mapped bytes 77 23: ja 0x5874b1e8
        __asm _emit 0x77
        __asm _emit 0x23
        lea edx, [eax + 3]
        cmp edx, 6
        ; Exact mapped bytes 77 14: ja 0x5874b1e1
        __asm _emit 0x77
        __asm _emit 0x14
        cmp eax, ebp
        ; Exact mapped bytes 7D 05: jge 0x5874b1d6
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1B: jmp 0x5874b1f1
        __asm _emit 0xeb
        __asm _emit 0x1b
        xor ecx, ecx
        cmp eax, ebp
        setg cl
        mov eax, ecx
        ; Exact mapped bytes EB 10: jmp 0x5874b1f1
        __asm _emit 0xeb
        __asm _emit 0x10
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 09: jmp 0x5874b1f1
        __asm _emit 0xeb
        __asm _emit 0x09
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 67 7C 1B 00: call 0x58902e60
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x7c
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [esi + 70h]
        sub eax, dword ptr [esi + 8]
        ; Exact mapped bytes 74 3C: je 0x5874b23d
        __asm _emit 0x74
        __asm _emit 0x3c
        lea edx, [eax + 7]
        cmp edx, 0eh
        ; Exact mapped bytes 77 23: ja 0x5874b22c
        __asm _emit 0x77
        __asm _emit 0x23
        lea ecx, [eax + 3]
        cmp ecx, 6
        ; Exact mapped bytes 77 14: ja 0x5874b225
        __asm _emit 0x77
        __asm _emit 0x14
        cmp eax, ebp
        ; Exact mapped bytes 7D 05: jge 0x5874b21a
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1B: jmp 0x5874b235
        __asm _emit 0xeb
        __asm _emit 0x1b
        xor edx, edx
        cmp eax, ebp
        setg dl
        mov eax, edx
        ; Exact mapped bytes EB 10: jmp 0x5874b235
        __asm _emit 0xeb
        __asm _emit 0x10
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 09: jmp 0x5874b235
        __asm _emit 0xeb
        __asm _emit 0x09
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 63 7C 1B 00: call 0x58902ea0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x7c
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8ch]
        ; Exact mapped bytes 8B 0D A0 45 A2 58: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        push edi
        mov ebx, 40000000h
        cmp eax, ebp
        ; Exact mapped bytes 75 20: jne 0x5874b274
        __asm _emit 0x75
        __asm _emit 0x20
        cmp dword ptr [ecx + 0f8h], ebx
        ; Exact mapped bytes 75 18: jne 0x5874b274
        __asm _emit 0x75
        __asm _emit 0x18
        push esi
        mov edi, ecx
        ; Exact mapped bytes E8 7C 7C 1B 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x7c
        __asm _emit 0x1b
        __asm _emit 0x00
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 E4 7C 1B 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x7c
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [esi + 8ch], ebx
        ; Exact mapped bytes EB 28: jmp 0x5874b29c
        __asm _emit 0xeb
        __asm _emit 0x28
        cmp eax, ebx
        ; Exact mapped bytes 75 24: jne 0x5874b29c
        __asm _emit 0x75
        __asm _emit 0x24
        cmp dword ptr [ecx + 0f8h], ebp
        ; Exact mapped bytes 75 1C: jne 0x5874b29c
        __asm _emit 0x75
        __asm _emit 0x1c
        mov edi, dword ptr [ecx + 504h]
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 52 7C 1B 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x7c
        __asm _emit 0x1b
        __asm _emit 0x00
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 BA 7C 1B 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x7c
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [esi + 8ch], ebp
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 1f00h
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 100h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 84 ED 01 00 00: je 0x5874b4a3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 400h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 84 D8 01 00 00: je 0x5874b4a3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 200h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 85 91 02 00 00: jne 0x5874b571
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 45 A2 58: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 0fch], 64h
        ; Exact mapped bytes 75 43: jne 0x5874b331
        __asm _emit 0x75
        __asm _emit 0x43
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 FA 62 FE FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x62
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [esi + 94h], ebp
        cmp dword ptr [esi + 90h], ebx
        ; Exact mapped bytes 0F 85 69 02 00 00: jne 0x5874b571
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e0h]
        mov dword ptr [esi + 90h], ebp
        cmp ecx, ebp
        ; Exact mapped bytes 74 07: je 0x5874b31f
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 0D A0 45 A2 58: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1
        ; Exact mapped bytes E8 F4 38 08 00: call 0x587cec20
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x38
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E9 40 02 00 00: jmp 0x5874b571
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 100h], ebp
        ; Exact mapped bytes 0F 85 34 02 00 00: jne 0x5874b571
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 AA 62 FE FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x62
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 0c4h]
        add eax, 4
        push eax
        ; Exact mapped bytes E8 E6 61 FE FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x5874b437
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes A1 A0 45 A2 58: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, dword ptr [eax + 98h]
        ; Exact mapped bytes 0F 85 BE 00 00 00: jne 0x5874b437
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0a4h]
        cmp edx, dword ptr [eax + 9ch]
        ; Exact mapped bytes 0F 85 AC 00 00 00: jne 0x5874b437
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 98h], ebx
        ; Exact mapped bytes 75 28: jne 0x5874b3bb
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [esi + 0c0h]
        push 1
        mov dword ptr [esi + 94h], ebx
        ; Exact mapped bytes E8 4A 62 FE FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x62
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [esi + 1c0h], ebp
        ; Exact mapped bytes 74 0D: je 0x5874b3bb
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 1bch]
        push 0fh
        ; Exact mapped bytes E8 05 62 FE FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x62
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [esi + 90h], ebp
        ; Exact mapped bytes 0F 85 AA 01 00 00: jne 0x5874b571
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [esi + 194h], 3
        ; Exact mapped bytes 0F 85 9D 01 00 00: jne 0x5874b571
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1b8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 1E: je 0x5874b3fc
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 3D F8 48 A2 58: mov edi, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [esi + 4]
        mov edx, 12ch
        sub edx, dword ptr [esi + 8]
        push edi
        sub eax, 190h
        push edx
        push eax
        ; Exact mapped bytes E8 04 C0 06 00: call 0x587b7400
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e0h]
        mov dword ptr [esi + 90h], ebx
        cmp ecx, ebp
        ; Exact mapped bytes 74 1A: je 0x5874b426
        __asm _emit 0x74
        __asm _emit 0x1a
        movzx eax, word ptr [esi + 16ah]
        ; Exact mapped bytes 66 83 F8 08: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 74 0D: je 0x5874b426
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 74 07: je 0x5874b426
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 0D A0 45 A2 58: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebp
        ; Exact mapped bytes E8 EE 37 08 00: call 0x587cec20
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x37
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E9 3A 01 00 00: jmp 0x5874b571
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 94h], ebp
        cmp dword ptr [esi + 90h], ebx
        ; Exact mapped bytes 0F 85 28 01 00 00: jne 0x5874b571
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 1c0h], ebp
        ; Exact mapped bytes 74 0C: je 0x5874b45d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 1bch]
        push ebp
        ; Exact mapped bytes E8 63 61 FE FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 1b8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 07: je 0x5874b46e
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 0c0h]
        push ebp
        ; Exact mapped bytes E8 76 61 FE FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0e0h]
        mov dword ptr [esi + 90h], ebp
        cmp ecx, ebp
        ; Exact mapped bytes 74 07: je 0x5874b491
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 0D A0 45 A2 58: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1
        ; Exact mapped bytes E8 82 37 08 00: call 0x587cec20
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x37
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E9 CE 00 00 00: jmp 0x5874b571
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        mov eax, dword ptr [esi + 28h]
        cmp ecx, eax
        ; Exact mapped bytes 74 30: je 0x5874b4e0
        __asm _emit 0x74
        __asm _emit 0x30
        mov edx, dword ptr [esi + 0ach]
        ; Exact mapped bytes 7E 14: jle 0x5874b4cc
        __asm _emit 0x7e
        __asm _emit 0x14
        mov edi, ecx
        sub edi, eax
        cmp edi, edx
        ; Exact mapped bytes 0F 8E A5 00 00 00: jle 0x5874b569
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, eax
        push edx
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x5874b56a
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        sub edi, ecx
        cmp edi, edx
        ; Exact mapped bytes 0F 8E 91 00 00 00: jle 0x5874b569
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, edx
        push eax
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x5874b56a
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 1f00h
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 100h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 75 1B: jne 0x5874b515
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, 0e2ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 200h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 02: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes EB 5C: jmp 0x5874b571
        __asm _emit 0xeb
        __asm _emit 0x5c
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 400h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 4F: jne 0x5874b571
        __asm _emit 0x75
        __asm _emit 0x4f
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0e5ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, 0fffbh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        mov ecx, esi
        ; Exact mapped bytes E8 CD 76 1B 00: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x76
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 16 77 1B 00: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x77
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop ebx
        pop ebp
        pop esi
        ret
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 6F 77 1B 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x77
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 EC: je 0x5874b564
        __asm _emit 0x74
        __asm _emit 0xec
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0D: je 0x5874b592
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        cmp edi, ebp
        ; Exact mapped bytes 75 EB: jne 0x5874b578
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop ebx
        pop ebp
        pop esi
        ret
        pop edi
        pop ebx
        pop ebp
        pop esi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
