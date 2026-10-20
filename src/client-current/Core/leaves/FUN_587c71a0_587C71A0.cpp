// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C71A0 .. +0x97A bytes.
extern "C" __declspec(naked) void FUN_587c71a0_587C71A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 9ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 75 05: jne 0x587c71ce
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 3B 09 00 00: jmp 0x587c7b09
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 0b4h], 0
        ; Exact mapped bytes 74 0C: je 0x587c71e6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 0b0h], 0
        ; Exact mapped bytes 75 05: jne 0x587c71eb
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 1E 09 00 00: jmp 0x587c7b09
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 114h], 3e8h
        ; Exact mapped bytes 75 08: jne 0x587c7209
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 0C: jmp 0x587c7215
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 110h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 18h]
        add eax, 11ch
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 0F 8F 9D 08 00 00: jg 0x587c7ae0
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x9d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 0F 8C 8F 08 00 00: jl 0x587c7ae0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 0F 8F 80 08 00 00: jg 0x587c7ae0
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 0F 8C 71 08 00 00: jl 0x587c7ae0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x71
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx]
        sub ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ebp - 18h]
        add ecx, dword ptr [edx + 4]
        mov dword ptr [ebp - 94h], ecx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx + 54h]
        mov eax, dword ptr [ebp - 18h]
        add edx, dword ptr [eax + 8]
        mov dword ptr [ebp - 90h], edx
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4ch]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 42: je 0x587c72ef
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 5B E4 CC FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xe4
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7C 02: jl 0x587c72be
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 31: jmp 0x587c72ef
        __asm _emit 0xeb
        __asm _emit 0x31
        lea ecx, [ebp - 94h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        add edx, 11ch
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 88 E5 CC FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xe5
        __asm _emit 0xcc
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB B8: jmp 0x587c72a7
        __asm _emit 0xeb
        __asm _emit 0xb8
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 54h]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 5ch]
        mov ecx, dword ptr [ebp - 18h]
        cdq
        idiv dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 3ch]
        imul eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + 50h]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 58h]
        mov ecx, dword ptr [ebp - 18h]
        cdq
        idiv dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [edx + 58h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 50h]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 58h]
        mov esi, dword ptr [ebp - 18h]
        cdq
        idiv dword ptr [esi + 0b0h]
        sub ecx, edx
        mov dword ptr [ebp - 58h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 54h]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 5ch]
        mov esi, dword ptr [ebp - 18h]
        cdq
        idiv dword ptr [esi + 0b4h]
        sub ecx, edx
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 18: jmp 0x587c7399
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 54h]
        add edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 34h]
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ecx + 60h]
        cmp dword ptr [ebp - 54h], edx
        ; Exact mapped bytes 0F 8D 95 01 00 00: jge 0x587c7540
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 80h], ecx
        ; Exact mapped bytes EB 27: jmp 0x587c73f2
        __asm _emit 0xeb
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 70h]
        add eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 2ch]
        add edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 80h]
        add eax, 1
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp - 74h]
        cmp ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes 0F 8C 3D 01 00 00: jl 0x587c753b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [edx + 64h]
        cmp dword ptr [ebp - 70h], eax
        ; Exact mapped bytes 0F 8D 2B 01 00 00: jge 0x587c753b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 8C 21 01 00 00: jl 0x587c753b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F 88 F8 00 00 00: js 0x587c751e
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        add edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [eax + 0a8h]
        imul eax, dword ptr [ecx + 0ach]
        cmp edx, eax
        ; Exact mapped bytes 0F 8D D7 00 00 00: jge 0x587c751e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 20h]
        cmp edx, dword ptr [ecx + 0a8h]
        ; Exact mapped bytes 0F 8D C5 00 00 00: jge 0x587c751e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        add eax, dword ptr [ebp - 20h]
        imul ecx, eax, 14h
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0f0h]
        cmp dword ptr [eax + ecx], 0
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x587c751e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, dword ptr [ebp - 20h]
        imul edx, ecx, 14h
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0f0h]
        mov ecx, dword ptr [ecx + edx]
        ; Exact mapped bytes E8 41 E3 CC FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xe3
        __asm _emit 0xcc
        __asm _emit 0xff
        add eax, dword ptr [ebp - 74h]
        mov edx, dword ptr [ebp - 80h]
        and edx, 1
        mov ecx, dword ptr [ebp - 18h]
        imul edx, dword ptr [ecx + 0c0h]
        add eax, edx
        mov dword ptr [ebp - 50h], eax
        mov edx, dword ptr [ebp - 2ch]
        add edx, dword ptr [ebp - 20h]
        imul eax, edx, 14h
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0f0h]
        mov esi, dword ptr [ebp - 70h]
        add esi, dword ptr [edx + eax + 4]
        mov eax, dword ptr [ebp - 2ch]
        add eax, dword ptr [ebp - 20h]
        imul ecx, eax, 14h
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0f0h]
        mov ecx, dword ptr [eax + ecx]
        ; Exact mapped bytes E8 16 E3 CC FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xe3
        __asm _emit 0xcc
        __asm _emit 0xff
        add esi, eax
        mov dword ptr [ebp - 4ch], esi
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 2ch]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 28h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0ech]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp - 50h]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, dword ptr [ebp - 20h]
        imul edx, ecx, 14h
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0f0h]
        mov ecx, dword ptr [ecx + edx]
        ; Exact mapped bytes E8 53 52 CD FF: call 0x5849c770
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x52
        __asm _emit 0xcd
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 20h]
        sub edx, 1
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 74h]
        sub ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 74h], ecx
        ; Exact mapped bytes E9 90 FE FF FF: jmp 0x587c73cb
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 41 FE FF FF: jmp 0x587c7381
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 27: jmp 0x587c7569
        __asm _emit 0xeb
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 28h]
        add eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 38h]
        add edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 3ch]
        add eax, 1
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ecx + 64h]
        cmp dword ptr [ebp - 28h], edx
        ; Exact mapped bytes 0F 8D A7 01 00 00: jge 0x587c7722
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 78h], ecx
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 84h], ecx
        ; Exact mapped bytes EB 2D: jmp 0x587c75cb
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 78h]
        add eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 30h]
        add edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 84h]
        add eax, 1
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ecx + 58h]
        cmp dword ptr [ebp - 7ch], edx
        ; Exact mapped bytes 0F 8C 40 01 00 00: jl 0x587c771d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [eax + 64h]
        cmp dword ptr [ebp - 78h], ecx
        ; Exact mapped bytes 0F 8D 2E 01 00 00: jge 0x587c771d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 8C 24 01 00 00: jl 0x587c771d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        add edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 88 FB 00 00 00: js 0x587c7700
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        add eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + 0a8h]
        imul ecx, dword ptr [edx + 0ach]
        cmp eax, ecx
        ; Exact mapped bytes 0F 8D DA 00 00 00: jge 0x587c7700
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 24h]
        cmp eax, dword ptr [edx + 0a8h]
        ; Exact mapped bytes 0F 8D C8 00 00 00: jge 0x587c7700
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        add ecx, dword ptr [ebp - 24h]
        imul edx, ecx, 14h
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0f0h]
        cmp dword ptr [ecx + edx], 0
        ; Exact mapped bytes 0F 84 AC 00 00 00: je 0x587c7700
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        add edx, dword ptr [ebp - 24h]
        imul eax, edx, 14h
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0f0h]
        mov ecx, dword ptr [edx + eax]
        ; Exact mapped bytes E8 62 E1 CC FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xe1
        __asm _emit 0xcc
        __asm _emit 0xff
        add eax, dword ptr [ebp - 7ch]
        mov ecx, dword ptr [ebp - 84h]
        and ecx, 1
        mov edx, dword ptr [ebp - 18h]
        imul ecx, dword ptr [edx + 0c0h]
        add eax, ecx
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp - 30h]
        add eax, dword ptr [ebp - 24h]
        imul ecx, eax, 14h
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0f0h]
        mov esi, dword ptr [ebp - 78h]
        add esi, dword ptr [eax + ecx + 4]
        mov ecx, dword ptr [ebp - 30h]
        add ecx, dword ptr [ebp - 24h]
        imul edx, ecx, 14h
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0f0h]
        mov ecx, dword ptr [ecx + edx]
        ; Exact mapped bytes E8 34 E1 CC FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xe1
        __asm _emit 0xcc
        __asm _emit 0xff
        add esi, eax
        mov dword ptr [ebp - 4ch], esi
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 2ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 28h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0ech]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        lea eax, [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        add edx, dword ptr [ebp - 24h]
        imul eax, edx, 14h
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0f0h]
        mov ecx, dword ptr [edx + eax]
        ; Exact mapped bytes E8 71 50 CD FF: call 0x5849c770
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x50
        __asm _emit 0xcd
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 24h]
        sub eax, 1
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 7ch]
        sub edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 7ch], edx
        ; Exact mapped bytes E9 81 FE FF FF: jmp 0x587c759e
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 20 FE FF FF: jmp 0x587c7542
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 43: je 0x587c776b
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E0 DF CC FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xdf
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        cmp eax, 40h
        ; Exact mapped bytes 7C 02: jl 0x587c773a
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 31: jmp 0x587c776b
        __asm _emit 0xeb
        __asm _emit 0x31
        lea ecx, [ebp - 94h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        add edx, 11ch
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 0C E1 CC FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xe1
        __asm _emit 0xcc
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB B7: jmp 0x587c7722
        __asm _emit 0xeb
        __asm _emit 0xb7
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 108h], 0
        ; Exact mapped bytes 0F 84 2E 03 00 00: je 0x587c7aa9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov eax, dword ptr [eax + 54h]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 5ch]
        mov ecx, dword ptr [ebp - 18h]
        cdq
        idiv dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 3ch]
        imul eax, dword ptr [edx + 0fch]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + 50h]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 58h]
        mov ecx, dword ptr [ebp - 18h]
        cdq
        idiv dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [edx + 58h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 50h]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 58h]
        mov esi, dword ptr [ebp - 18h]
        cdq
        idiv dword ptr [esi + 0f4h]
        sub ecx, edx
        mov dword ptr [ebp - 58h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 54h]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 5ch]
        mov esi, dword ptr [ebp - 18h]
        cdq
        idiv dword ptr [esi + 0f8h]
        sub ecx, edx
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 18: jmp 0x587c7825
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 60h]
        add edx, dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 34h]
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ecx + 60h]
        cmp dword ptr [ebp - 60h], edx
        ; Exact mapped bytes 0F 8D 1D 01 00 00: jge 0x587c7954
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 88h], ecx
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 98h], ecx
        ; Exact mapped bytes EB 33: jmp 0x587c7890
        __asm _emit 0xeb
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 88h]
        add eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 5ch]
        add edx, dword ptr [ecx + 0fch]
        mov dword ptr [ebp - 5ch], edx
        mov eax, dword ptr [ebp - 98h]
        add eax, 1
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 50h]
        cmp ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes 0F 8C B3 00 00 00: jl 0x587c794f
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [edx + 64h]
        cmp dword ptr [ebp - 88h], eax
        ; Exact mapped bytes 0F 8D 9E 00 00 00: jge 0x587c794f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 0F 8C 94 00 00 00: jl 0x587c794f
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 5ch]
        add ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 78 6F: js 0x587c7932
        __asm _emit 0x78
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 5ch]
        add edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [eax + 0fch]
        imul eax, dword ptr [ecx + 100h]
        cmp edx, eax
        ; Exact mapped bytes 7D 52: jge 0x587c7932
        __asm _emit 0x7d
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 44h]
        cmp edx, dword ptr [ecx + 0fch]
        ; Exact mapped bytes 7D 44: jge 0x587c7932
        __asm _emit 0x7d
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 5ch]
        add eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 108h]
        mov eax, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 6ch], eax
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 29: je 0x587c7932
        __asm _emit 0x74
        __asm _emit 0x29
        lea ecx, [ebp - 94h]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 6ch]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 83 D1 D6 FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xd1
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB D1: jmp 0x587c7903
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 50h]
        sub edx, dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 44h]
        sub eax, 1
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes E9 0E FF FF FF: jmp 0x587c785d
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B9 FE FF FF: jmp 0x587c780d
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1E: jmp 0x587c7974
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 28h]
        add edx, dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 38h]
        add ecx, dword ptr [eax + 0fch]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [edx + 64h]
        cmp dword ptr [ebp - 28h], eax
        ; Exact mapped bytes 0F 8D 23 01 00 00: jge 0x587c7aa9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 8ch], edx
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 9ch], edx
        ; Exact mapped bytes EB 33: jmp 0x587c79df
        __asm _emit 0xeb
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 8ch]
        add ecx, dword ptr [eax + 0f8h]
        mov dword ptr [ebp - 8ch], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 64h]
        add eax, dword ptr [edx + 0fch]
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 9ch]
        add ecx, 1
        mov dword ptr [ebp - 9ch], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        add eax, dword ptr [edx + 58h]
        cmp dword ptr [ebp - 50h], eax
        ; Exact mapped bytes 0F 8C B3 00 00 00: jl 0x587c7aa4
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ecx + 64h]
        cmp dword ptr [ebp - 8ch], edx
        ; Exact mapped bytes 0F 8D 9E 00 00 00: jge 0x587c7aa4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 0F 8C 94 00 00 00: jl 0x587c7aa4
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 64h]
        add eax, dword ptr [ebp - 48h]
        ; Exact mapped bytes 78 6F: js 0x587c7a87
        __asm _emit 0x78
        __asm _emit 0x6f
        mov ecx, dword ptr [ebp - 64h]
        add ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [edx + 0fch]
        imul edx, dword ptr [eax + 100h]
        cmp ecx, edx
        ; Exact mapped bytes 7D 52: jge 0x587c7a87
        __asm _emit 0x7d
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 48h]
        cmp ecx, dword ptr [eax + 0fch]
        ; Exact mapped bytes 7D 44: jge 0x587c7a87
        __asm _emit 0x7d
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 64h]
        add edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 108h]
        mov edx, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 68h], edx
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 29: je 0x587c7a87
        __asm _emit 0x74
        __asm _emit 0x29
        lea eax, [ebp - 94h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp - 68h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 68h]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 2E D0 D6 FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd0
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB D1: jmp 0x587c7a58
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 50h]
        sub edx, dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 48h]
        sub eax, 1
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes E9 08 FF FF FF: jmp 0x587c79ac
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 AD FE FF FF: jmp 0x587c7956
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 31: je 0x587c7ae0
        __asm _emit 0x74
        __asm _emit 0x31
        lea ecx, [ebp - 94h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        add edx, 11ch
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 97 DD CC FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xdd
        __asm _emit 0xcc
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB C9: jmp 0x587c7aa9
        __asm _emit 0xeb
        __asm _emit 0xc9
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 114h], 3e8h
        ; Exact mapped bytes 74 1A: je 0x587c7b09
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 3C 95 06 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x95
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
