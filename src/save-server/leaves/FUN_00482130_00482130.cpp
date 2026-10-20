// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00482130 .. +0x43D bytes.
extern "C" __declspec(naked) void FUN_00482130_00482130() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        ; Exact mapped bytes 66 C7 45 D4 00 00: mov word ptr [ebp - 0x2c], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        ; Exact mapped bytes 66 89 4D E8: mov word ptr [ebp - 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe8
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        ; Exact mapped bytes 66 89 45 E0: mov word ptr [ebp - 0x20], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 18h]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp - 20h]
        and edx, 0ffffh
        xor ecx, edx
        and ecx, 8000h
        ; Exact mapped bytes 66 89 4D D4: mov word ptr [ebp - 0x2c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes 66 8B 45 E8: mov ax, word ptr [ebp - 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 66 25 FF 7F: and ax, 0x7fff
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 66 89 45 E8: mov word ptr [ebp - 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 66 8B 4D E0: mov cx, word ptr [ebp - 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes 66 81 E1 FF 7F: and cx, 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 66 89 4D E0: mov word ptr [ebp - 0x20], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 18h]
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 20h]
        and eax, 0ffffh
        add edx, eax
        ; Exact mapped bytes 66 89 55 D0: mov word ptr [ebp - 0x30], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 18h]
        and ecx, 0ffffh
        cmp ecx, 7fffh
        ; Exact mapped bytes 7D 20: jge 0x4821ed
        __asm _emit 0x7d
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 20h]
        and edx, 0ffffh
        cmp edx, 7fffh
        ; Exact mapped bytes 7D 0F: jge 0x4821ed
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 30h]
        and eax, 0ffffh
        cmp eax, 0bffdh
        ; Exact mapped bytes 7E 37: jle 0x482224
        __asm _emit 0x7e
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 2ch]
        and ecx, 0ffffh
        neg ecx
        sbb ecx, ecx
        and ecx, 80000000h
        add ecx, 7fff8000h
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], 0
        ; Exact mapped bytes E9 45 03 00 00: jmp 0x482569
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        and edx, 0ffffh
        cmp edx, 3fbfh
        ; Exact mapped bytes 7F 22: jg 0x482257
        __asm _emit 0x7f
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], 0
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], 0
        ; Exact mapped bytes E9 12 03 00 00: jmp 0x482569
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 75 3A: jne 0x48229d
        __asm _emit 0x75
        __asm _emit 0x3a
        ; Exact mapped bytes 66 8B 4D D0: mov cx, word ptr [ebp - 0x30]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D D0: mov word ptr [ebp - 0x30], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        and eax, 7fffffffh
        test eax, eax
        ; Exact mapped bytes 75 1F: jne 0x48229d
        __asm _emit 0x75
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 16: jne 0x48229d
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 0E: jne 0x48229d
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 40 0A 00 00: mov word ptr [eax + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 CC 02 00 00: jmp 0x482569
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 75 4F: jne 0x4822f9
        __asm _emit 0x75
        __asm _emit 0x4f
        ; Exact mapped bytes 66 8B 55 D0: mov dx, word ptr [ebp - 0x30]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 D0: mov word ptr [ebp - 0x30], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xd0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        and ecx, 7fffffffh
        test ecx, ecx
        ; Exact mapped bytes 75 33: jne 0x4822f9
        __asm _emit 0x75
        __asm _emit 0x33
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 2A: jne 0x4822f9
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 22: jne 0x4822f9
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], 0
        ; Exact mapped bytes E9 70 02 00 00: jmp 0x482569
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x482312
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 5
        ; Exact mapped bytes 0F 8D B5 00 00 00: jge 0x4823d1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        shl edx, 1
        mov dword ptr [ebp - 24h], edx
        mov dword ptr [ebp - 8], 8
        mov eax, 5
        sub eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 09: jmp 0x482341
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 34h]
        sub ecx, 1
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 7E 7C: jle 0x4823c3
        __asm _emit 0x7e
        __asm _emit 0x7c
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 28h]
        lea edx, [ebp + ecx - 14h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 38h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 3ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        imul ecx, eax
        mov dword ptr [ebp - 44h], ecx
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 74 E5 FF FF: call 0x480900
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 14: je 0x4823ac
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 66 8B 44 15 F0: mov ax, word ptr [ebp + edx - 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x15
        __asm _emit 0xf0
        ; Exact mapped bytes 66 05 01 00: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 66 89 44 0D F0: mov word ptr [ebp + ecx - 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0d
        __asm _emit 0xf0
        mov edx, dword ptr [ebp - 24h]
        add edx, 2
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 8]
        sub eax, 2
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 75 FF FF FF: jmp 0x482338
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 2
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes E9 38 FF FF FF: jmp 0x482309
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 55 D0: mov dx, word ptr [ebp - 0x30]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact mapped bytes 66 81 EA FE 3F: sub dx, 0x3ffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0x3f
        ; Exact mapped bytes 66 89 55 D0: mov word ptr [ebp - 0x30], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact mapped bytes 0F BF 45 D0: movsx eax, word ptr [ebp - 0x30]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 7E 27: jle 0x48240d
        __asm _emit 0x7e
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 0ch]
        and ecx, 80000000h
        test ecx, ecx
        ; Exact mapped bytes 75 1A: jne 0x48240d
        __asm _emit 0x75
        __asm _emit 0x1a
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 F4 E5 FF FF: call 0x4809f0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes 66 8B 45 D0: mov ax, word ptr [ebp - 0x30]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes 66 2D 01 00: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 D0: mov word ptr [ebp - 0x30], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes EB D1: jmp 0x4823de
        __asm _emit 0xeb
        __asm _emit 0xd1
        ; Exact mapped bytes 0F BF 4D D0: movsx ecx, word ptr [ebp - 0x30]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xd0
        test ecx, ecx
        ; Exact mapped bytes 7F 58: jg 0x48246d
        __asm _emit 0x7f
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 55 D0: mov dx, word ptr [ebp - 0x30]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact mapped bytes 66 83 EA 01: sub dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 D0: mov word ptr [ebp - 0x30], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact mapped bytes 0F BF 45 D0: movsx eax, word ptr [ebp - 0x30]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 7D 33: jge 0x48245c
        __asm _emit 0x7d
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 0ffffh
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x482442
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 05 E6 FF FF: call 0x480a50
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes 66 8B 4D D0: mov cx, word ptr [ebp - 0x30]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D D0: mov word ptr [ebp - 0x30], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes EB C5: jmp 0x482421
        __asm _emit 0xeb
        __asm _emit 0xc5
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0B: je 0x48246d
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 55 EC: mov dx, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xec
        or dl, 1
        ; Exact mapped bytes 66 89 55 EC: mov word ptr [ebp - 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xec
        mov eax, dword ptr [ebp - 14h]
        and eax, 0ffffh
        cmp eax, 8000h
        ; Exact mapped bytes 7F 11: jg 0x48248d
        __asm _emit 0x7f
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 1ffffh
        cmp ecx, 18000h
        ; Exact mapped bytes 75 61: jne 0x4824ee
        __asm _emit 0x75
        __asm _emit 0x61
        cmp dword ptr [ebp - 12h], -1
        ; Exact mapped bytes 75 52: jne 0x4824e5
        __asm _emit 0x75
        __asm _emit 0x52
        mov dword ptr [ebp - 12h], 0
        cmp dword ptr [ebp - 0eh], -1
        ; Exact mapped bytes 75 3A: jne 0x4824da
        __asm _emit 0x75
        __asm _emit 0x3a
        mov dword ptr [ebp - 0eh], 0
        mov edx, dword ptr [ebp - 0ah]
        and edx, 0ffffh
        cmp edx, 0ffffh
        ; Exact mapped bytes 75 14: jne 0x4824cc
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 66 C7 45 F6 00 80: mov word ptr [ebp - 0xa], 0x8000
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 66 8B 45 D0: mov ax, word ptr [ebp - 0x30]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes 66 05 01 00: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 D0: mov word ptr [ebp - 0x30], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes EB 0C: jmp 0x4824d8
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 4D F6: mov cx, word ptr [ebp - 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf6
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D F6: mov word ptr [ebp - 0xa], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf6
        ; Exact mapped bytes EB 09: jmp 0x4824e3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0eh]
        add edx, 1
        mov dword ptr [ebp - 0eh], edx
        ; Exact mapped bytes EB 09: jmp 0x4824ee
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 12h]
        add eax, 1
        mov dword ptr [ebp - 12h], eax
        mov ecx, dword ptr [ebp - 30h]
        and ecx, 0ffffh
        cmp ecx, 7fffh
        ; Exact mapped bytes 7C 34: jl 0x482533
        __asm _emit 0x7c
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 2ch]
        and edx, 0ffffh
        neg edx
        sbb edx, edx
        and edx, 80000000h
        add edx, 7fff8000h
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], 0
        ; Exact mapped bytes EB 36: jmp 0x482569
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 4D EE: mov cx, word ptr [ebp - 0x12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xee
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 2], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 6], edx
        mov eax, dword ptr [ebp - 30h]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp - 2ch]
        and ecx, 0ffffh
        or eax, ecx
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 42 0A: mov word ptr [edx + 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0a
        mov esp, ebp
        pop ebp
        ret
    }
}
