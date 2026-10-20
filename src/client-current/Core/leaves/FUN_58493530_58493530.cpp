// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58493530 .. +0x1590 bytes.
extern "C" __declspec(naked) void FUN_58493530_58493530() {
    __asm {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0fffffff8h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        push -1
        push 5887d994h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ebx
        sub esp, 178h
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 97 5B 00 00: call 0x58499110
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 330h], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 344h]
        push eax
        ; Exact mapped bytes E8 7F DD FF FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 22ch]
        imul edx, dword ptr [eax*4 + 5894c930h]
        mov eax, edx
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 310h], eax
        mov dword ptr [ebp - 1ch], 64h
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 4c4h], 2
        ; Exact mapped bytes 75 0F: jne 0x584935da
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 14h]
        movzx edx, word ptr [ecx + 2c8h]
        cmp edx, 2
        ; Exact mapped bytes 74 74: je 0x5849364e
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 4c4h], 4
        ; Exact mapped bytes 74 68: je 0x5849364e
        __asm _emit 0x74
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 4c4h], -1
        ; Exact mapped bytes 74 5C: je 0x5849364e
        __asm _emit 0x74
        __asm _emit 0x5c
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 344h], 0
        ; Exact mapped bytes 7E 23: jle 0x58493621
        __asm _emit 0x7e
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + 33ch]
        cmp edx, dword ptr [ecx + 320h]
        ; Exact mapped bytes 7E 0D: jle 0x5849361f
        __asm _emit 0x7e
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 344h], 0
        ; Exact mapped bytes EB 2D: jmp 0x5849364e
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 344h], 0
        ; Exact mapped bytes 7D 21: jge 0x5849364e
        __asm _emit 0x7d
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 33ch]
        cmp ecx, dword ptr [eax + 320h]
        ; Exact mapped bytes 7D 0D: jge 0x5849364e
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 344h], 0
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 4c4h], -1
        ; Exact mapped bytes 75 15: jne 0x5849366f
        __asm _emit 0x75
        __asm _emit 0x15
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D7 4B 00 00: call 0x58498240
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D8 10 00 00: jmp 0x58494747
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 4c4h], 0
        ; Exact mapped bytes 75 2E: jne 0x584936a9
        __asm _emit 0x75
        __asm _emit 0x2e
        mov dword ptr [ebp - 1ch], 32h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 96 FD FF FF: call 0x58493420
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 324h], 64h
        ; Exact mapped bytes 7D 0D: jge 0x584936a4
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 458h], 1
        ; Exact mapped bytes E9 9E 10 00 00: jmp 0x58494747
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 4c4h], 1
        ; Exact mapped bytes 75 59: jne 0x5849370e
        __asm _emit 0x75
        __asm _emit 0x59
        mov dword ptr [ebp - 1ch], 1eh
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 4f4h], 0
        ; Exact mapped bytes 75 28: jne 0x584936f0
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 74 1F: je 0x584936f0
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 24 13 FF FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 49ch], edx
        mov dword ptr [ecx + 4a0h], eax
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 324h], 64h
        ; Exact mapped bytes 7D 0D: jge 0x58493709
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 458h], 1
        ; Exact mapped bytes E9 39 10 00 00: jmp 0x58494747
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 4c4h], 64h
        ; Exact mapped bytes 0F 85 90 00 00 00: jne 0x584937ae
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 1eh
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 4f4h], 0
        ; Exact mapped bytes 75 39: jne 0x5849376a
        __asm _emit 0x75
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 74 30: je 0x5849376a
        __asm _emit 0x74
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 4d4h], 0
        ; Exact mapped bytes 74 24: je 0x5849376a
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 4d4h]
        ; Exact mapped bytes E8 AC 12 FF FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 49ch], ecx
        mov dword ptr [eax + 4a0h], edx
        ; Exact mapped bytes EB 26: jmp 0x58493790
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 4d4h], 0
        ; Exact mapped bytes 75 1A: jne 0x58493790
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 4c4h], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 4d8h], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 324h], 64h
        ; Exact mapped bytes 7D 0D: jge 0x584937a9
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 458h], 1
        ; Exact mapped bytes E9 99 0F 00 00: jmp 0x58494747
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 4c4h], 2
        ; Exact mapped bytes 0F 85 03 06 00 00: jne 0x58493dc1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BA 13 00 00: call 0x58494b80
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 14h]
        movzx edx, word ptr [ecx + 2c8h]
        cmp edx, 2
        ; Exact mapped bytes 75 2B: jne 0x58493803
        __asm _emit 0x75
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 3C 42 00 00: call 0x58497a20
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 318h], 1
        ; Exact mapped bytes 75 09: jne 0x584937fa
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 46h
        ; Exact mapped bytes EB 07: jmp 0x58493801
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 78h
        ; Exact mapped bytes EB 07: jmp 0x5849380a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 41h
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 A8 05 00 00: je 0x58493dbc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A4 31 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 49ch], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C3 1D 00 00: call 0x584955f0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 4a0h], eax
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 330h], 32h
        ; Exact mapped bytes 7E 5F: jle 0x584938a1
        __asm _emit 0x7e
        __asm _emit 0x5f
        mov eax, dword ptr [ebp - 14h]
        movzx eax, word ptr [eax + 2dah]
        shl eax, 3
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 22ch], eax
        ; Exact mapped bytes 7E 1F: jle 0x58493881
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 14h]
        mov eax, dword ptr [eax + 22ch]
        shl eax, 3
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 22ch], eax
        ; Exact mapped bytes EB 1E: jmp 0x5849389f
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 14h]
        movzx eax, word ptr [eax + 2dah]
        shl eax, 3
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 22ch], eax
        ; Exact mapped bytes EB 45: jmp 0x584938e6
        __asm _emit 0xeb
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 14h]
        movzx ecx, word ptr [eax + 2dah]
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 22ch], ecx
        ; Exact mapped bytes 7D 1D: jge 0x584938d3
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 14h]
        imul eax, dword ptr [eax + 22ch], 0ch
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 22ch], eax
        ; Exact mapped bytes EB 13: jmp 0x584938e6
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 14h]
        movzx ecx, word ptr [eax + 2dah]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 22ch], ecx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 324h], 50h
        ; Exact mapped bytes 7C 20: jl 0x58493912
        __asm _emit 0x7c
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 330h], 0
        ; Exact mapped bytes 0F 8C BA 04 00 00: jl 0x58493dbc
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 330h], 32h
        ; Exact mapped bytes 0F 8D AA 04 00 00: jge 0x58493dbc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xaa
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 4bch], 0
        ; Exact mapped bytes 0F 85 9A 04 00 00: jne 0x58493dbc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 224h]
        sub edx, 1
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 224h], edx
        mov ecx, dword ptr [ebp - 14h]
        movzx edx, word ptr [ecx + 2c8h]
        cmp edx, 2
        ; Exact mapped bytes 75 25: jne 0x5849396b
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 510h]
        mov dword ptr [ebp - 130h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 224h]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 26 78 32 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x78
        __asm _emit 0x32
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D 34 2E 90 58 00: cmp dword ptr [0x58902e34], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x2e
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x58493a60
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D 30 FF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 36 10 FF FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 1F 00 00: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        sar eax, 1
        imul edi, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 30 FF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5F 20 00 00: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 138h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov esi, dword ptr [ecx + 8]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 30 FF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4E 1D 00 00: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C1 1E 00 00: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        sar eax, 1
        imul eax, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes E8 D8 2F FF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 01 20 00 00: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        mov eax, dword ptr [ebp - 84h]
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 134h], esi
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 520h], 0
        ; Exact mapped bytes 74 30: je 0x58493a60
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 520h]
        mov dword ptr [ebp - 88h], ecx
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 134h]
        push eax
        mov ecx, dword ptr [ebp - 138h]
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 61 A1 0D 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xa1
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 220h], 0ah
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 4B 2F FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 14h]
        mov eax, dword ptr [eax + 4ach]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        mov esi, eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 55 1B 00 00: call 0x584955f0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        sub esi, eax
        imul eax, esi, 0c8h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 33ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov esi, eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 87 85 FF FF: call 0x5848c050
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 30h], esi
        mov edx, dword ptr [ebp - 3ch]
        imul edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [ebp - 38h]
        imul eax, dword ptr [ebp - 38h]
        add edx, eax
        push edx
        ; Exact mapped bytes E8 EC 09 05 00: call 0x584e44d0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x09
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 40h]
        imul edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp - 30h]
        add edx, eax
        push edx
        ; Exact mapped bytes E8 C8 09 05 00: call 0x584e44d0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x09
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 3ch]
        imul edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [ebp - 38h]
        imul eax, dword ptr [ebp - 38h]
        add edx, eax
        ; Exact mapped bytes F2 0F 2A C2: cvtsi2sd xmm0, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc2
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 E9 D4 3B 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 51 D7 39 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xd7
        __asm _emit 0x39
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        imul ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 30h]
        imul edx, dword ptr [ebp - 30h]
        add ecx, edx
        ; Exact mapped bytes F2 0F 2A C1: cvtsi2sd xmm0, ecx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc1
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 BD D4 3B 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xd4
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 25 D7 39 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xd7
        __asm _emit 0x39
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov eax, 2
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 14h]
        movzx eax, word ptr [edx + ecx + 2ceh]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 4bch], eax
        cmp dword ptr [ebp - 24h], 64h
        ; Exact mapped bytes 0F 8D 28 02 00 00: jge 0x58493dbc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 14 96 FF FF: call 0x5848d1b0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x58493bb2
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 4c8h], 0
        ; Exact mapped bytes E9 0A 02 00 00: jmp 0x58493dbc
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 14h]
        movzx eax, word ptr [edx + ecx + 2cah]
        mov ecx, 78h
        sub ecx, dword ptr [ebp - 24h]
        imul eax, ecx
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 8ch], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 90h], ecx
        mov edx, dword ptr [ebp - 8ch]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 95 70 FF FF FF: call dword ptr [ebp - 0x90]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 B8 01 00 00: je 0x58493dbc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 4c8h], 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 1A 00 00: call 0x584956b0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, al
        and ecx, 80h
        ; Exact mapped bytes 0F 84 91 01 00 00: je 0x58493dbc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 74h], 0
        ; Exact mapped bytes 0F 84 84 01 00 00: je 0x58493dbc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 0D DA 03 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xda
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 71 01 00 00: je 0x58493dbc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 1C 00 00: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 31: jne 0x58493c92
        __asm _emit 0x75
        __asm _emit 0x31
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 1D 00 00: call 0x58495a50
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x58493c92
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 1C 00 00: call 0x58495910
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 1
        ; Exact mapped bytes 74 09: je 0x58493c89
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 1
        ; Exact mapped bytes EB 07: jmp 0x58493c90
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0ah
        ; Exact mapped bytes EB 07: jmp 0x58493c99
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 CF 1C 00 00: call 0x58495970
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 14h]
        movzx eax, word ptr [edx + 2c8h]
        cmp eax, 2
        ; Exact mapped bytes 75 10: jne 0x58493cc6
        __asm _emit 0x75
        __asm _emit 0x10
        imul eax, dword ptr [ebp - 34h], 0ch
        xor edx, edx
        mov ecx, 0ah
        div ecx
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 94h], eax
        imul eax, dword ptr [ebp - 34h], 46h
        xor edx, edx
        div dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 39 A0 2C 00: call 0x5875dd20
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xa0
        __asm _emit 0x2c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 98h], edx
        imul eax, dword ptr [ebp - 34h], 3ch
        xor edx, edx
        div dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 F8 AD 00 00: call 0x5849eb00
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC 2C FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 74h], eax
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x58493dbc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 05 19 00 00: call 0x58495630
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 9ch], eax
        mov edx, dword ptr [ebp - 9ch]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 18 15 00: call 0x585e55e0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x18
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 FC 1A 00 00: call 0x58495850
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 0E 1C 00 00: call 0x58495970
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [eax + 70h], 32h
        mov dword ptr [ebp - 0a0h], eax
        mov ecx, dword ptr [ebp - 0a0h]
        push ecx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 02 5B 2D 00: call 0x58769880
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x5b
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 0F B6 15 9E 75 94 58: movzx edx, byte ptr [0x5894759e]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x15
        __asm _emit 0x9e
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        test edx, edx
        ; Exact mapped bytes 74 32: je 0x58493dbc
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 BE 1A 00 00: call 0x58495850
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 17 92 FF FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 4
        ; Exact mapped bytes 75 1E: jne 0x58493dbc
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 1B 00 00: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 74 0E: je 0x58493dbc
        __asm _emit 0x74
        __asm _emit 0x0e
        push 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 B6 00 00: call 0x5849f410
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 86 09 00 00: jmp 0x58494747
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 4c4h], 4
        ; Exact mapped bytes 75 4E: jne 0x58493e1b
        __asm _emit 0x75
        __asm _emit 0x4e
        mov dword ptr [ebp - 1ch], 78h
        mov ecx, dword ptr [ebp - 14h]
        movzx edx, word ptr [ecx + 2c8h]
        mov dword ptr [ebp - 50h], edx
        cmp dword ptr [ebp - 50h], 3
        ; Exact mapped bytes 74 08: je 0x58493def
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 50h], 4
        ; Exact mapped bytes 74 0D: je 0x58493dfa
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes EB 27: jmp 0x58493e16
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C9 45 00 00: call 0x584983c0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1C: jmp 0x58493e16
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4E 28 00 00: call 0x58496650
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 318h], 1
        ; Exact mapped bytes 75 07: jne 0x58493e16
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 14h
        ; Exact mapped bytes E9 2C 09 00 00: jmp 0x58494747
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 4c4h], 5
        ; Exact mapped bytes 0F 85 8F 02 00 00: jne 0x584940ba
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 50h
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 13 D8 03 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xd8
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 70 02 00 00: je 0x584940b5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 318h], 0
        ; Exact mapped bytes 0F 85 36 01 00 00: jne 0x58493f8b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 C0 7E FF FF: call 0x5848bd20
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 384h
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 0a8h], edx
        mov dword ptr [ebp - 178h], 0ffffff10h
        mov dword ptr [ebp - 174h], 0
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        lea eax, [ebp - 170h]
        push eax
        lea ecx, [ebp - 178h]
        push ecx
        ; Exact mapped bytes E8 AF FC 04 00: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 11 2B FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, dword ptr [ebp - 170h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 49ch], eax
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 E7 81 FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        sub eax, dword ptr [ebp - 16ch]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 4a0h], eax
        mov edx, dword ptr [ebp - 14h]
        imul eax, dword ptr [edx + 334h], 3e8h
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 320h], eax
        ; Exact mapped bytes 74 2F: je 0x58493f1f
        __asm _emit 0x74
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 324h], 50h
        ; Exact mapped bytes 7D 23: jge 0x58493f1f
        __asm _emit 0x7d
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 14h]
        imul ecx, dword ptr [eax + 334h], 3e8h
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 320h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 344h], 0ffffff6ah
        mov ecx, dword ptr [ebp - 14h]
        imul edx, dword ptr [ecx + 334h], 3e8h
        shl edx, 1
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 33ch], edx
        ; Exact mapped bytes 7F 4D: jg 0x58493f86
        __asm _emit 0x7f
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 14h]
        imul edx, dword ptr [ecx + 334h], 3e8h
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 320h], edx
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx + 22ch]
        shl eax, 3
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 22ch], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 344h], 0ffffffceh
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 318h], 1
        ; Exact mapped bytes E9 2A 01 00 00: jmp 0x584940b5
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 318h], 1
        ; Exact mapped bytes 75 56: jne 0x58493fed
        __asm _emit 0x75
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 5E 0A FF FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 49ch], ecx
        mov dword ptr [eax + 4a0h], edx
        mov ecx, dword ptr [ebp - 14h]
        imul edx, dword ptr [ecx + 334h], 3e8h
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 33ch], edx
        ; Exact mapped bytes 7F 1A: jg 0x58493fe8
        __asm _emit 0x7f
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 318h], 2
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 344h], 0
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x584940b5
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 318h], 2
        ; Exact mapped bytes 0F 85 B8 00 00 00: jne 0x584940b5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 F8 09 FF FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 49ch], edx
        mov dword ptr [ecx + 4a0h], eax
        mov dword ptr [ebp - 1ch], 78h
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 324h], 14h
        ; Exact mapped bytes 0F 8D 82 00 00 00: jge 0x584940b5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 42 84 FF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x58494054
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 4c4h], 0
        ; Exact mapped bytes EB 61: jmp 0x584940b5
        __asm _emit 0xeb
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 318h], 3
        push 10h
        push 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 304h
        push ecx
        ; Exact mapped bytes E8 9C 8D 3B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x8d
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 46ch], 0
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 51ch], 0
        ; Exact mapped bytes 74 1A: je 0x584940aa
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 51ch]
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 51ch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BC 0F 00 00: call 0x58495070
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 8D 06 00 00: jmp 0x58494747
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 4c4h], 6
        ; Exact mapped bytes 75 05: jne 0x584940cb
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 7C 06 00 00: jmp 0x58494747
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 4c4h], 0ah
        ; Exact mapped bytes 0F 85 6C 06 00 00: jne 0x58494747
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 344h], 0fffffc7ch
        ; Exact mapped bytes 7C 17: jl 0x58494108
        __asm _emit 0x7c
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 344h]
        sub edx, 0ah
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 344h], edx
        ; Exact mapped bytes EB 0D: jmp 0x58494115
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 344h], 0fffffc7ch
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 33ch], 0
        ; Exact mapped bytes 0F 8F D5 04 00 00: jg 0x584945fa
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xd5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 46ch], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 318h], 3
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 4c4h], 5
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 51ch], 0
        ; Exact mapped bytes 74 1A: je 0x58494172
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 51ch]
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 51ch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 504h]
        mov dword ptr [ebp - 0ach], edx
        push 0
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 02 1E FF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x1e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 7D FF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 0B: jmp 0x584941b0
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 83 7F FF FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 45: je 0x584941fb
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 92 D4 03 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xd4
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x584941f9
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B6 82 FF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 3
        ; Exact mapped bytes 7C 02: jl 0x584941d4
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB D1: jmp 0x584941a5
        __asm _emit 0xeb
        __asm _emit 0xd1
        push 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 34 E0 2C 00: call 0x58762220
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xe0
        __asm _emit 0x2c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x584941f9
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 54h], 1
        ; Exact mapped bytes EB 02: jmp 0x584941fb
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB AA: jmp 0x584941a5
        __asm _emit 0xeb
        __asm _emit 0xaa
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 0F 84 01 03 00 00: je 0x58494506
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 62 CA 3B 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xca
        __asm _emit 0x3b
        __asm _emit 0x00
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x58494216
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        add eax, 7
        mov dword ptr [ebp - 0c0h], eax
        push 60h
        ; Exact mapped bytes E8 DE CD 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xcd
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 73: je 0x584942ac
        __asm _emit 0x74
        __asm _emit 0x73
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 0b0h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0b4h], edx
        push 0eh
        ; Exact mapped bytes 8B 0D F4 06 96 58: mov ecx, dword ptr [0x589606f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 08 FF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 27 FF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        push 1770h
        mov eax, dword ptr [ebp - 0b0h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        mov edx, dword ptr [ebp - 0b8h]
        push edx
        mov eax, dword ptr [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 D9 91 0D 00: call 0x5856d480
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x91
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584942b3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 0c4h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 17ch], eax
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes EB 09: jmp 0x584942e1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 1
        mov dword ptr [ebp - 44h], ecx
        ; Exact mapped bytes E8 86 C9 3B 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc9
        __asm _emit 0x3b
        __asm _emit 0x00
        and eax, 80000007h
        ; Exact mapped bytes 79 05: jns 0x584942f2
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffff8h
        inc eax
        cmp dword ptr [ebp - 44h], eax
        ; Exact mapped bytes 0F 8D D2 00 00 00: jge 0x584943cd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 84h
        ; Exact mapped bytes E8 FF CC 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xcc
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x584943a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 0cch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0d0h], edx
        ; Exact mapped bytes E8 33 C9 3B 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xc9
        __asm _emit 0x3b
        __asm _emit 0x00
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x58494345
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        add eax, 6
        mov dword ptr [ebp - 0c8h], eax
        mov eax, dword ptr [ebp - 0c8h]
        push eax
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 07 FF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F 26 FF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        push 1388h
        mov ecx, dword ptr [ebp - 0cch]
        push ecx
        mov edx, dword ptr [ebp - 0d0h]
        push edx
        mov eax, dword ptr [ebp - 0d4h]
        push eax
        mov ecx, dword ptr [ebp - 0d8h]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 40 F2 04 00: call 0x584e35e0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x584943ac
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 0dch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 180h], eax
        ; Exact mapped bytes E9 0B FF FF FF: jmp 0x584942d8
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 7F FF FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 CD 78 FF FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 0c8h
        div ecx
        add edx, 64h
        mov dword ptr [ebp - 0e0h], edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 53 7D FF FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 42 7D FF FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 0ech], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [edx + 8]
        mov dword ptr [ebp - 140h], eax
        mov dword ptr [ebp - 13ch], ecx
        mov edx, dword ptr [ebp - 140h]
        mov eax, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 148h], edx
        mov dword ptr [ebp - 144h], eax
        mov ecx, dword ptr [ebp - 148h]
        mov edx, dword ptr [ebp - 144h]
        mov dword ptr [ebp - 150h], ecx
        mov dword ptr [ebp - 14ch], edx
        mov eax, dword ptr [ebp - 150h]
        mov ecx, dword ptr [ebp - 14ch]
        mov dword ptr [ebp - 158h], eax
        mov dword ptr [ebp - 154h], ecx
        mov edx, dword ptr [ebp - 158h]
        mov eax, dword ptr [ebp - 154h]
        mov dword ptr [ebp - 160h], edx
        mov dword ptr [ebp - 15ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 7E FF FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        push 64h
        push 1
        push 0
        push 0
        push 190h
        push 2710h
        push -1
        push 1
        mov ecx, dword ptr [ebp - 0e0h]
        push ecx
        push 0
        push 0dh
        mov edx, dword ptr [ebp - 0e4h]
        push edx
        mov eax, dword ptr [ebp - 0e8h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 0ech]
        push edx
        mov eax, dword ptr [ebp - 15ch]
        push eax
        mov ecx, dword ptr [ebp - 160h]
        push ecx
        mov edx, dword ptr [ebp - 0f0h]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D0 D2 12 00: call 0x585c17d0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xd2
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x584945ca
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 60h
        ; Exact mapped bytes E8 F7 CA 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xca
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x584945a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 0f4h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 0f8h], eax
        push 9
        ; Exact mapped bytes 8B 0D F4 06 96 58: mov ecx, dword ptr [0x589606f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 05 FF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 86 24 FF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes 8B 0D 10 07 96 58: mov ecx, dword ptr [0x58960710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 104h], ecx
        push -1
        push 1770h
        mov edx, dword ptr [ebp - 0f4h]
        push edx
        mov eax, dword ptr [ebp - 0f8h]
        push eax
        mov ecx, dword ptr [ebp - 0fch]
        push ecx
        mov edx, dword ptr [ebp - 100h]
        push edx
        push 3ch
        mov eax, dword ptr [ebp - 104h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 5E 90 0D 00: call 0x5856d600
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x90
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584945ae
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 108h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 108h]
        mov dword ptr [ebp - 184h], edx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 45ch], 0
        ; Exact mapped bytes 75 24: jne 0x584945fa
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 460h], 0
        ; Exact mapped bytes 74 18: je 0x584945fa
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 460h], 0
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 77 0A 00 00: call 0x58495070
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 45ch], 0
        ; Exact mapped bytes 0F 84 3D 01 00 00: je 0x58494747
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D C4 35 90 58 00: cmp dword ptr [0x589035c4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 30 01 00 00: je 0x58494747
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 4b8h]
        sub edx, 1
        and edx, 8000001fh
        ; Exact mapped bytes 79 05: jns 0x58494630
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0ffffffe0h
        inc edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*8 + 350h]
        mov dword ptr [ebp - 168h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4b8h]
        sub eax, 1
        and eax, 8000001fh
        ; Exact mapped bytes 79 05: jns 0x58494658
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0ffffffe0h
        inc eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + eax*8 + 354h]
        mov dword ptr [ebp - 164h], edx
        push 60h
        ; Exact mapped bytes E8 95 C9 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xc9
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov dword ptr [ebp - 4], 3
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 70: je 0x584946f2
        __asm _emit 0x74
        __asm _emit 0x70
        mov eax, dword ptr [ebp - 14h]
        mov eax, dword ptr [eax + 33ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 10ch], eax
        push 1eh
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A 04 FF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 23 FF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        mov edx, dword ptr [ebp - 10ch]
        push edx
        push 1388h
        mov eax, dword ptr [ebp - 164h]
        push eax
        mov ecx, dword ptr [ebp - 168h]
        push ecx
        mov edx, dword ptr [ebp - 110h]
        push edx
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 53 C5 2D 00: call 0x58770c40
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xc5
        __asm _emit 0x2d
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x584946f9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 118h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 118h]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 14h]
        mov eax, dword ptr [eax + 338h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 C4 AC 00 00: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 77 0E 32 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x0e
        __asm _emit 0x32
        __asm _emit 0x00
        push 0c8h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 FA 0D 32 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x0d
        __asm _emit 0x32
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 344h]
        push eax
        ; Exact mapped bytes E8 BA CB FF FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 7C 19: jl 0x58494776
        __asm _emit 0x7c
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 344h]
        push edx
        ; Exact mapped bytes E8 A4 CB FF FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp eax, 0e10h
        ; Exact mapped bytes 7C 0D: jl 0x58494783
        __asm _emit 0x7c
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 344h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 1ch]
        imul eax, dword ptr [ecx + 330h]
        cdq
        mov ecx, 708h
        idiv ecx
        mov edx, dword ptr [ebp - 14h]
        add eax, dword ptr [edx + 348h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 348h], eax
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 348h], 0
        ; Exact mapped bytes 7D 14: jge 0x584947ca
        __asm _emit 0x7d
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 348h]
        add ecx, 0e10h
        mov dword ptr [ebp - 78h], ecx
        ; Exact mapped bytes EB 14: jmp 0x584947de
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 348h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 78h], edx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [edx + 348h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 348h]
        mov eax, dword ptr [ebp - 14h]
        mov eax, dword ptr [eax + 310h]
        imul eax, dword ptr [edx*4 + 5894c930h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 304h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 348h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 310h]
        imul eax, dword ptr [ecx*4 + 589490f0h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 308h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 344h]
        push ecx
        ; Exact mapped bytes E8 C1 CA FF FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 22ch]
        imul ecx, dword ptr [eax*4 + 589490f0h]
        mov eax, ecx
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 30ch], eax
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 4c4h], 4
        ; Exact mapped bytes 75 51: jne 0x584948d3
        __asm _emit 0x75
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 14h]
        movzx edx, word ptr [ecx + 2c8h]
        cmp edx, 4
        ; Exact mapped bytes 75 42: jne 0x584948d3
        __asm _emit 0x75
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 318h], 1
        ; Exact mapped bytes 75 36: jne 0x584948d3
        __asm _emit 0x75
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 344h]
        push edx
        ; Exact mapped bytes E8 64 CA FF FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 22ch]
        imul edx, dword ptr [eax*4 + 589490f0h]
        mov eax, edx
        cdq
        mov ecx, 578h
        idiv ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 30ch], eax
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 344h], 0
        ; Exact mapped bytes 7D 10: jge 0x584948ef
        __asm _emit 0x7d
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 30ch]
        neg edx
        mov dword ptr [ebp - 7ch], edx
        ; Exact mapped bytes EB 0C: jmp 0x584948fb
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 30ch]
        mov dword ptr [ebp - 7ch], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 7ch]
        mov dword ptr [edx + 30ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 4a8h]
        mov eax, dword ptr [ebp - 14h]
        add edx, dword ptr [eax + 304h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 4a8h], edx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 4ach]
        sub ecx, dword ptr [eax + 308h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 4ach], ecx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 33ch]
        mov edx, dword ptr [ebp - 14h]
        add ecx, dword ptr [edx + 30ch]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 33ch], ecx
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 88h], 1
        ; Exact mapped bytes 74 46: je 0x584949b1
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 344h], 0
        ; Exact mapped bytes 7C 1E: jl 0x58494995
        __asm _emit 0x7c
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 14h]
        mov eax, dword ptr [eax + 344h]
        add eax, 0c8h
        cdq
        mov ecx, 190h
        idiv ecx
        add eax, 2
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 1C: jmp 0x584949b1
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 344h]
        sub eax, 0c8h
        cdq
        mov ecx, 190h
        idiv ecx
        add eax, 2
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 348h]
        sub eax, 384h
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 79 0E: jns 0x584949d2
        __asm _emit 0x79
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 0e10h
        mov dword ptr [ebp - 80h], ecx
        ; Exact mapped bytes EB 06: jmp 0x584949d8
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 80h], edx
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx + 8ch]
        add eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 14h]
        cdq
        idiv dword ptr [ecx + 90h]
        mov edx, dword ptr [ebp - 14h]
        imul eax, dword ptr [edx + 88h]
        add eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [ebp - 14h]
        imul eax, dword ptr [ecx + 84h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 94h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4f8h]
        mov dword ptr [ebp - 11ch], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 94h]
        mov ecx, dword ptr [ebp - 14h]
        add eax, dword ptr [ecx + 98h]
        push eax
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 FF AD 00 00: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4fch]
        mov dword ptr [ebp - 124h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 4f8h]
        ; Exact mapped bytes E8 62 FF FE FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        mov edx, dword ptr [ebp - 120h]
        push edx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 CA AD 00 00: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 508h]
        mov dword ptr [ebp - 12ch], ecx
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 4f8h]
        ; Exact mapped bytes E8 2D FF FE FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        mov eax, dword ptr [ebp - 128h]
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 95 AD 00 00: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
    }
}
