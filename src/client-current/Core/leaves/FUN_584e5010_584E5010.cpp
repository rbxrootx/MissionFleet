// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E5010 .. +0x60D bytes.
extern "C" __declspec(naked) void FUN_584e5010_584E5010() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 94h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 E5 05 00 00: je 0x584e561b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 1
        ; Exact mapped bytes 74 1B: je 0x584e5068
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 4
        ; Exact mapped bytes 0F 85 41 02 00 00: jne 0x584e52a9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        ; Exact mapped bytes E8 4A 19 FA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x19
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 58h]
        ; Exact mapped bytes 0F 84 48 01 00 00: je 0x584e51ca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 30 19 FA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x19
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        sub edx, eax
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7E 2A: jle 0x584e50cb
        __asm _emit 0x7e
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes 7C 0E: jl 0x584e50bd
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 06: jmp 0x584e50c3
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes EB 2C: jmp 0x584e50f7
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        neg ecx
        cmp dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 7F 10: jg 0x584e50eb
        __asm _emit 0x7f
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        neg eax
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 06: jmp 0x584e50f1
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0b4h]
        ; Exact mapped bytes E8 B5 18 FA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x18
        __asm _emit 0xfa
        __asm _emit 0xff
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 18h]
        imul eax, dword ptr [edx + 78h]
        cdq
        and edx, 3ffh
        add eax, edx
        sar eax, 0ah
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 80h]
        mov edx, 300h
        sub edx, eax
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 3ch], ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 DE A2 FB FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xa2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 40h], ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 C6 A2 FB FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xa2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 44h], ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 AE A2 FB FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xa2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 48h], ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 96 A2 FB FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xa2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 40h
        push edx
        mov eax, dword ptr [ebp - 18h]
        add eax, 50h
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 64 04 2D 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x2d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AC 05 00 00: call 0x584e5770
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x584e52a4
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 50h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push 0fh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 96 F8 F9 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 B8 6B 2D 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x6b
        __asm _emit 0x2d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 94h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 54h], ecx
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes FF 55 AC: call dword ptr [ebp - 0x54]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xac
        nop
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 1
        ; Exact mapped bytes 75 0D: jne 0x584e5252
        __asm _emit 0x75
        __asm _emit 0x0d
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 11 0B FA FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x0b
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 52: jmp 0x584e52a4
        __asm _emit 0xeb
        __asm _emit 0x52
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 4
        ; Exact mapped bytes 75 3B: jne 0x584e52a4
        __asm _emit 0x75
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 50h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push 0eh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 F7 F9 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf7
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], eax
        push 5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C7 0A FA FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x0a
        __asm _emit 0xfa
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AD A2 FB FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xa2
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E2 02 00 00: jmp 0x584e558b
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 2
        ; Exact mapped bytes 74 1B: je 0x584e52db
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 6
        ; Exact mapped bytes 0F 85 B0 02 00 00: jne 0x584e558b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 C7 6D FA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x6d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 B0 6D FA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x6d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 5ch]
        ; Exact mapped bytes 0F 84 0C 01 00 00: je 0x584e5418
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], -10h
        ; Exact mapped bytes 7E 7B: jle 0x584e538d
        __asm _emit 0x7e
        __asm _emit 0x7b
        cmp dword ptr [ebp - 8], 10h
        ; Exact mapped bytes 7D 75: jge 0x584e538d
        __asm _emit 0x7d
        __asm _emit 0x75
        cmp dword ptr [ebp - 8], -8
        ; Exact mapped bytes 7E 58: jle 0x584e5376
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 52: jge 0x584e5376
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 8], -4
        ; Exact mapped bytes 7E 39: jle 0x584e5363
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 33: jge 0x584e5363
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 09: jge 0x584e533f
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 2ch], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x584e535b
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 09: jle 0x584e534e
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 1
        ; Exact mapped bytes EB 07: jmp 0x584e5355
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 0B: jmp 0x584e536e
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 34h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x584e5385
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 38h], edx
        ; Exact mapped bytes EB 0F: jmp 0x584e539c
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        add edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 74h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 B4 49 FD FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x49
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 8]
        neg ecx
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 CA FE 2C 00: call 0x587b52b0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xfe
        __asm _emit 0x2c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0c4h]
        ; Exact mapped bytes E8 B0 6C FA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x6c
        __asm _emit 0xfa
        __asm _emit 0xff
        add eax, 0fh
        mov dword ptr [ebp - 60h], eax
        mov edx, dword ptr [ebp - 60h]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 1E 03 2D 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x03
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 73 01 00 00: jmp 0x584e558b
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 2
        ; Exact mapped bytes 0F 85 AF 00 00 00: jne 0x584e54e2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 68h], ecx
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 75 69 2D 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x69
        __asm _emit 0x2d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 6ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 70h], edx
        push 0
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 55 90: call dword ptr [ebp - 0x70]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x90
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 74h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ch], ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        ; Exact mapped bytes E8 9A 02 FB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 7ch], edx
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 29 0D 00: call 0x585b7e90
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x29
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 80h], ecx
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 8E 17 FA FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x17
        __asm _emit 0xfa
        __asm _emit 0xff
        push 6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 84 08 FA FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A9 00 00 00: jmp 0x584e558b
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 6
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x584e558b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 50h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push 0eh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 F5 F9 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xf5
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 7F 68 2D 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x68
        __asm _emit 0x2d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes FF 95 74 FF FF FF: call dword ptr [ebp - 0x8c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 464h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F0 F9 FF FF: call 0x584e4f70
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D6 07 FA FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x07
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x584e55ac
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x584e55ac
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 60: je 0x584e561b
        __asm _emit 0x74
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x584e55cf
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB E6: jmp 0x584e55b5
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 39 00 FB FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x584e55f3
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 2A: jmp 0x584e561b
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes EB 26: jmp 0x584e5619
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 15 00 FB FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 90h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 9A: jmp 0x584e55b5
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov esp, ebp
    }
}
