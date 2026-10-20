// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BC610 .. +0x541 bytes.
extern "C" __declspec(naked) void FUN_584bc610_584BC610() {
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
        mov dword ptr [ebp - 44h], ecx
        mov eax, dword ptr [ebp - 44h]
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 74 32: je 0x584bc661
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [edx + 5ch]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 73 0F: jae 0x584bc64f
        __asm _emit 0x73
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 18h]
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 5ch], edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 18h]
        add ecx, 88h
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 18h], ecx
        mov dword ptr [ebp - 98h], 0
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 4ch], ecx
        mov dword ptr [ebp - 58h], 0
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 09: jmp 0x584bc68d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 48h]
        add edx, 1
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp - 48h]
        cmp ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 0F 84 79 03 00 00: je 0x584bca15
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4ch]
        imul eax, dword ptr [edx + 34h], 3
        add eax, 3
        and eax, 0fffffffch
        mov dword ptr [ebp - 54h], eax
        mov ecx, 4d42h
        ; Exact mapped bytes 66 89 4D EC: mov word ptr [ebp - 0x14], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xec
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [ebp - 54h]
        imul eax, dword ptr [edx + 38h]
        add eax, 36h
        mov dword ptr [ebp - 12h], eax
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4D F2: mov word ptr [ebp - 0xe], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf2
        xor edx, edx
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        mov dword ptr [ebp - 0ah], 36h
        mov dword ptr [ebp - 3ch], 28h
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax + 34h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx + 38h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, 1
        ; Exact mapped bytes 66 89 4D D0: mov word ptr [ebp - 0x30], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd0
        mov edx, 18h
        ; Exact mapped bytes 66 89 55 D2: mov word ptr [ebp - 0x2e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xd2
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [ebp - 54h]
        imul ecx, dword ptr [eax + 38h]
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 24h], 0b12h
        mov dword ptr [ebp - 20h], 0b12h
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 28h]
        add edx, 36h
        push edx
        ; Exact mapped bytes E8 03 49 37 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x49
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 58h], eax
        push 0eh
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 58h]
        push edx
        ; Exact mapped bytes E8 30 01 39 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 0ch
        push 28h
        lea eax, [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        add ecx, 0eh
        push ecx
        ; Exact mapped bytes E8 1B 01 39 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 28h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 58h]
        add eax, 36h
        push eax
        ; Exact mapped bytes E8 86 06 39 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x06
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 74h
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 4ch]
        mov al, byte ptr [edx + 2dh]
        mov byte ptr [ebp - 4dh], al
        mov ecx, dword ptr [ebp - 4ch]
        movzx edx, byte ptr [ecx + 2ch]
        cmp edx, 2
        ; Exact mapped bytes 0F 85 09 01 00 00: jne 0x584bc8b8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        sub eax, 1
        imul eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ebp - 58h]
        lea edx, [ecx + eax + 36h]
        mov dword ptr [ebp - 68h], edx
        mov dword ptr [ebp - 64h], 0
        ; Exact mapped bytes EB 09: jmp 0x584bc7d5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 64h]
        add eax, 1
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 64h]
        cmp ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 8D D2 00 00 00: jge 0x584bc8b3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 5ch], edx
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 0F 84 B1 00 00 00: je 0x584bc8a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F BF 11: movsx edx, word ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x11
        cmp edx, -1
        ; Exact mapped bytes 75 13: jne 0x584bc812
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 40h]
        add eax, 2
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes E9 98 00 00 00: jmp 0x584bc8a5
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x584bc8a0
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F BF 11: movsx edx, word ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x11
        cmp edx, -2
        ; Exact mapped bytes 75 0C: jne 0x584bc829
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes E9 CF 01 00 00: jmp 0x584bc9f1
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 CA 01 00 00: jmp 0x584bc9f1
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 77: jmp 0x584bc8a0
        __asm _emit 0xeb
        __asm _emit 0x77
        mov eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        movzx edx, byte ptr [ebp - 4dh]
        imul ecx, edx
        add ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 5ch], ecx
        mov eax, dword ptr [ebp - 40h]
        movzx ecx, word ptr [eax + 3]
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 40h]
        lea ecx, [eax + edx + 5]
        mov dword ptr [ebp - 8ch], ecx
        mov edx, dword ptr [ebp - 40h]
        add edx, 5
        mov dword ptr [ebp - 40h], edx
        ; Exact mapped bytes EB 13: jmp 0x584bc871
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 40h]
        add eax, 3
        mov dword ptr [ebp - 40h], eax
        movzx ecx, byte ptr [ebp - 4dh]
        add ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 40h]
        cmp edx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes 73 24: jae 0x584bc8a0
        __asm _emit 0x73
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [ebp - 40h]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [ebp - 40h]
        mov dl, byte ptr [ecx + 1]
        mov byte ptr [eax + 1], dl
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [ebp - 40h]
        mov dl, byte ptr [ecx + 2]
        mov byte ptr [eax + 2], dl
        ; Exact mapped bytes EB BE: jmp 0x584bc85e
        __asm _emit 0xeb
        __asm _emit 0xbe
        ; Exact mapped bytes E9 42 FF FF FF: jmp 0x584bc7e7
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 68h]
        sub eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes E9 19 FF FF FF: jmp 0x584bc7cc
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 39 01 00 00: jmp 0x584bc9f1
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4ch]
        movzx edx, byte ptr [ecx + 2ch]
        cmp edx, 1
        ; Exact mapped bytes 0F 85 B8 00 00 00: jne 0x584bc980
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        sub eax, 1
        imul eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ebp - 58h]
        lea edx, [ecx + eax + 36h]
        mov dword ptr [ebp - 74h], edx
        mov dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes EB 09: jmp 0x584bc8ee
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 6ch]
        add eax, 1
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 6ch]
        cmp ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 8D 84 00 00 00: jge 0x584bc97e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 70h], edx
        mov eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        cmp ecx, -1
        ; Exact mapped bytes 75 0D: jne 0x584bc918
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 40h]
        add edx, 2
        mov dword ptr [ebp - 40h], edx
        ; Exact mapped bytes EB CF: jmp 0x584bc8e5
        __asm _emit 0xeb
        __asm _emit 0xcf
        ; Exact mapped bytes EB 58: jmp 0x584bc970
        __asm _emit 0xeb
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        cmp ecx, -2
        ; Exact mapped bytes 75 0C: jne 0x584bc92f
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes E9 C9 00 00 00: jmp 0x584bc9f1
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x584bc9f1
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 41: jmp 0x584bc970
        __asm _emit 0xeb
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F BF 02: movsx eax, word ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x02
        imul ecx, eax, 3
        add ecx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 40h]
        movzx eax, word ptr [edx + 3]
        imul ecx, eax, 3
        push ecx
        mov edx, dword ptr [ebp - 40h]
        add edx, 5
        push edx
        mov eax, dword ptr [ebp - 70h]
        push eax
        ; Exact mapped bytes E8 37 FF 38 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 40h]
        movzx edx, word ptr [ecx + 3]
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 40h]
        lea edx, [ecx + eax + 5]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 74h]
        sub eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes E9 67 FF FF FF: jmp 0x584bc8e5
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 71: jmp 0x584bc9f1
        __asm _emit 0xeb
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 4ch]
        movzx edx, byte ptr [ecx + 2ch]
        test edx, edx
        ; Exact mapped bytes 75 66: jne 0x584bc9f1
        __asm _emit 0x75
        __asm _emit 0x66
        imul eax, dword ptr [ebp - 38h], 3
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp - 34h]
        sub ecx, 1
        imul ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ebp - 58h]
        lea eax, [edx + ecx + 36h]
        mov dword ptr [ebp - 7ch], eax
        mov dword ptr [ebp - 78h], 0
        ; Exact mapped bytes EB 09: jmp 0x584bc9bb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 78h]
        add ecx, 1
        mov dword ptr [ebp - 78h], ecx
        mov edx, dword ptr [ebp - 78h]
        cmp edx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 7D 2E: jge 0x584bc9f1
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        ; Exact mapped bytes E8 B9 FE 38 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 40h]
        add eax, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 7ch]
        sub ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 7ch], ecx
        ; Exact mapped bytes EB C1: jmp 0x584bc9b2
        __asm _emit 0xeb
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [eax + ecx*4], edx
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ebp - 4ch]
        lea eax, [edx + ecx + 74h]
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes E9 6F FC FF FF: jmp 0x584bc684
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], 0
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 09: jmp 0x584bca31
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 48h]
        add ecx, 1
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 48h]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 0F 84 EA 00 00 00: je 0x584bcb2a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        add ecx, 1
        mov edx, dword ptr [ebp - 44h]
        cmp ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes 0F 87 AA 00 00 00: ja 0x584bcafc
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 80h], 0
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [eax + 2]
        sub ecx, 36h
        mov dword ptr [ebp - 90h], ecx
        mov dword ptr [ebp - 60h], 0
        ; Exact mapped bytes EB 09: jmp 0x584bca83
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 60h]
        add edx, 1
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 60h]
        cmp eax, dword ptr [ebp - 90h]
        ; Exact mapped bytes 73 1C: jae 0x584bcaaa
        __asm _emit 0x73
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [edx + eax*4]
        mov edx, dword ptr [ebp - 60h]
        ; Exact mapped bytes 0F BE 44 11 36: movsx eax, byte ptr [ecx + edx + 0x36]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x36
        add eax, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB D0: jmp 0x584bca7a
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 48h]
        shl ecx, 4
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 14h]
        mov edx, dword ptr [ebp - 80h]
        cmp edx, dword ptr [eax + ecx + 8]
        ; Exact mapped bytes 75 12: jne 0x584bcad1
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ecx + edx*4], 1
        ; Exact mapped bytes EB 29: jmp 0x584bcafa
        __asm _emit 0xeb
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ecx + edx*4], 0
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 77 04 0C 00: call 0x5857cf70
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x04
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 29: jmp 0x584bcb25
        __asm _emit 0xeb
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 10h]
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [edx + eax*4], 0
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C 04 0C 00: call 0x5857cf70
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 FE FE FF FF: jmp 0x584bca28
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        cmp dword ptr [edx + 14h], 0
        ; Exact mapped bytes 74 25: je 0x584bcb58
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 94h], ecx
        mov edx, dword ptr [ebp - 94h]
        push edx
        ; Exact mapped bytes E8 00 45 37 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x45
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 44h]
    }
}
