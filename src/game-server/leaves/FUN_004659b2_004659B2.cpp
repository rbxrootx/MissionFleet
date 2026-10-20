// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004659B2 .. +0x5EE bytes.
extern "C" __declspec(naked) void FUN_004659b2_004659B2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 38h]
        mov ecx, 0eh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 16ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C2 1C FE FF: call 0x4476a2
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x465a09
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 16ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AC 1C FE FF: call 0x4476a2
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        and ecx, 0ffffh
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes EB 07: jmp 0x465a10
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov dl, byte ptr [ebp - 28h]
        mov byte ptr [ebp - 4], dl
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 0F: jne 0x465a2b
        __asm _emit 0x75
        __asm _emit 0x0f
        mov dword ptr [ebp + 10h], 1
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x465a32
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp + 14h]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7D 73: jge 0x465aad
        __asm _emit 0x7d
        __asm _emit 0x73
        ; Exact mapped bytes D9 45 18: fld dword ptr [ebp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes D8 0D 1C 1C 58 00: fmul dword ptr [0x581c1c]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes D9 5D 18: fstp dword ptr [ebp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0x18
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 16ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4A 1C FE FF: call 0x4476a2
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 81 E1 FF 00: and cx, 0xff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x00
        and ecx, 0ffffh
        push ecx
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffh
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 51 F1 FF FF: call 0x464bd3
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        ; Exact mapped bytes D9 1C 24: fstp dword ptr [esp]
        __asm _emit 0xd9
        __asm _emit 0x1c
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        lea ecx, [edx + eax + 224h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F2 F3 FF FF: call 0x464e9a
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 DE 04 00 00: jmp 0x465f8b
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 1eh
        ; Exact mapped bytes 0F 86 52 04 00 00: jbe 0x465f2a
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x52
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 45 18: fld dword ptr [ebp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes D8 0D 1C 1C 58 00: fmul dword ptr [0x581c1c]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes D9 5D 18: fstp dword ptr [ebp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 16ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AC 1B FE FF: call 0x4476a2
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0C: mov dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 81 E2 FF 00: and dx, 0xff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x00
        and edx, 0ffffh
        push edx
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffh
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 B4 F0 FF FF: call 0x464bd3
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        ; Exact mapped bytes D9 1C 24: fstp dword ptr [esp]
        __asm _emit 0xd9
        __asm _emit 0x1c
        __asm _emit 0x24
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        lea edx, [eax + ecx + 224h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 55 F3 FF FF: call 0x464e9a
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 27ch]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 40ca8h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [eax + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        mov ecx, dword ptr [ecx + eax*4 + 14h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 40ca8h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [eax + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        mov ecx, dword ptr [ecx + eax*4 + 1ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 55 F9 FF FF: call 0x465552
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 35 44 1C 58 00: fdiv dword ptr [0x581c44]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes D9 5D F4: fstp dword ptr [ebp - 0xc]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0xf4
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 43 52 FE FF: call 0x44ae51
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 0C: jne 0x465c1f
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes D9 45 F4: fld dword ptr [ebp - 0xc]
        __asm _emit 0xd9
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes D8 0D 40 1C 58 00: fmul dword ptr [0x581c40]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes D9 5D F4: fstp dword ptr [ebp - 0xc]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0xf4
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 34h], ecx
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes DF 6D CC: fild qword ptr [ebp - 0x34]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xcc
        ; Exact mapped bytes D8 4D F4: fmul dword ptr [ebp - 0xc]
        __asm _emit 0xd8
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes E8 C5 38 04 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        sub edx, eax
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 14h]
        sub eax, 1
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 09: jmp 0x465c53
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 8E A9 02 00 00: jle 0x465f06
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 8D 9F 02 00 00: jge 0x465f06
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 40ca8h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + edx*4 + 18h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + ecx + 234h]
        shr ecx, 4
        and ecx, 0ffh
        sub ecx, 1
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        and ecx, 0ffh
        shl ecx, 4
        mov edx, dword ptr [eax + edx + 234h]
        and edx, 0fffff00fh
        or edx, ecx
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 168h]
        mov dword ptr [ecx + eax + 234h], edx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 40ca8h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov esi, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + esi*4 + 18h]
        mov dword ptr [eax + edx + 280h], ecx
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x465d26
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 0ch
        ; Exact mapped bytes 0F 8D 01 01 00 00: jge 0x465e31
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        lea eax, [ecx + edx + 224h]
        mov ecx, dword ptr [ebp - 20h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 54 48 14: mov dx, word ptr [eax + ecx*2 + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 20h]
        add esi, dword ptr [ecx + 168h]
        ; Exact mapped bytes 0F BE 84 30 50 02 00 00: movsx eax, byte ptr [eax + esi + 0x250]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub edx, eax
        test edx, edx
        ; Exact mapped bytes 7D 2E: jge 0x465da4
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        lea ecx, [edx + eax + 224h]
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 66 C7 44 51 14 00 00: mov word ptr [ecx + edx*2 + 0x14], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 CA 00 00: mov word ptr [ebp - 0x36], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x465e2c
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        lea eax, [ecx + edx + 224h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 20h]
        add esi, dword ptr [edx + 168h]
        ; Exact mapped bytes 66 0F BE 8C 31 50 02 00 00: movsx cx, byte ptr [ecx + esi + 0x250]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x31
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 66 8B 44 50 14: mov ax, word ptr [eax + edx*2 + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 66 2B C1: sub ax, cx
        __asm _emit 0x66
        __asm _emit 0x2b
        __asm _emit 0xc1
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 168h]
        lea ecx, [edx + ecx + 224h]
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 66 89 44 51 14: mov word ptr [ecx + edx*2 + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        lea eax, [edx + eax + 224h]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 66 8B 54 48 14: mov dx, word ptr [eax + ecx*2 + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x14
        ; Exact mapped bytes 66 89 55 CA: mov word ptr [ebp - 0x36], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xca
        ; Exact mapped bytes E9 EC FE FF FF: jmp 0x465d1d
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        xor eax, eax
        ; Exact mapped bytes 66 8B 84 11 2C 02 00 00: mov ax, word ptr [ecx + edx + 0x22c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 0F BE 94 0A 5B 02 00 00: movsx edx, byte ptr [edx + ecx + 0x25b]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, edx
        test eax, eax
        ; Exact mapped bytes 7E 72: jle 0x465edf
        __asm _emit 0x7e
        __asm _emit 0x72
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        mov esi, dword ptr [ebp + 0ch]
        imul esi, esi, 37ch
        ; Exact mapped bytes 66 0F BE 84 30 5B 02 00 00: movsx ax, byte ptr [eax + esi + 0x25b]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 8C 11 2C 02 00 00: mov cx, word ptr [ecx + edx + 0x22c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x11
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 2B C8: sub cx, ax
        __asm _emit 0x66
        __asm _emit 0x2b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        ; Exact mapped bytes 66 89 8C 10 2C 02 00 00: mov word ptr [eax + edx + 0x22c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        ; Exact mapped bytes 66 8B 8C 08 2C 02 00 00: mov cx, word ptr [eax + ecx + 0x22c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x08
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D C8: mov word ptr [ebp - 0x38], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xc8
        ; Exact mapped bytes EB 22: jmp 0x465f01
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 66 C7 84 08 2C 02 00 00 00 00: mov word ptr [eax + ecx + 0x22c], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 C8 00 00: mov word ptr [ebp - 0x38], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 44 FD FF FF: jmp 0x465c4a
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7E 1C: jle 0x465f28
        __asm _emit 0x7e
        __asm _emit 0x1c
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [eax + ecx + 27ch], edx
        ; Exact mapped bytes EB 61: jmp 0x465f8b
        __asm _emit 0xeb
        __asm _emit 0x61
        ; Exact mapped bytes D9 45 18: fld dword ptr [ebp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes D8 0D 1C 1C 58 00: fmul dword ptr [0x581c1c]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes D9 5D 18: fstp dword ptr [ebp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 16ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5A 17 FE FF: call 0x4476a2
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0C: mov dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 81 E2 FF 00: and dx, 0xff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x00
        and edx, 0ffffh
        push edx
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffh
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        lea edx, [eax + ecx + 224h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 0F EF FF FF: call 0x464e9a
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D9 45 18: fld dword ptr [ebp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x45
        __asm _emit 0x18
        pop edi
        pop esi
        add esp, 38h
        cmp ebp, esp
        ; Exact mapped bytes E8 46 28 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
