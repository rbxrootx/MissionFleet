// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883DB2B .. +0x5CB bytes.
extern "C" __declspec(naked) void FUN_5883db2b_5883DB2B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 128h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 83 3D 88 8E 96 58 00: cmp dword ptr [0x58968e88], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes 74 11: je 0x5883db66
        __asm _emit 0x74
        __asm _emit 0x11
        push 58968e70h
        ; Exact mapped bytes FF 15 20 42 89 58: call dword ptr [0x58894220]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 124h]
        xor ebx, ebx
        cmp dword ptr [esi + 50h], ebx
        ; Exact mapped bytes 74 6F: je 0x5883dbdc
        __asm _emit 0x74
        __asm _emit 0x6f
        push dword ptr [esi + 54h]
        mov ecx, esi
        ; Exact mapped bytes E8 E8 FE FF FF: call 0x5883da5f
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 8E 03 00 00: je 0x5883df0d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 54h]
        push dword ptr [esi + 50h]
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 03 ED 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 54h]
        add esp, 0ch
        mov dword ptr [esi + 2ch], eax
        mov ecx, dword ptr [esi + 4]
        mov eax, 5a4dh
        ; Exact mapped bytes 66 89 5E 25: mov word ptr [esi + 0x25], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x25
        mov edx, 20bh
        ; Exact mapped bytes 66 39 01: cmp word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 2E 01 00 00: jne 0x5883dcde
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 3ch]
        add eax, ecx
        cmp dword ptr [eax], 4550h
        ; Exact mapped bytes 0F 85 1D 01 00 00: jne 0x5883dcde
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 50 18: cmp word ptr [eax + 0x18], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 0F 85 D5 00 00 00: jne 0x5883dca0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 0a8h]
        mov edi, dword ptr [eax + 0ach]
        ; Exact mapped bytes E9 D0 00 00 00: jmp 0x5883dcac
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x5883dbec
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 4ch], 1
        ; Exact mapped bytes E9 E1 04 00 00: jmp 0x5883e0cd
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 18: cmp word ptr [eax], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x18
        ; Exact mapped bytes 75 0C: jne 0x5883dbfd
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 4ch], 2
        ; Exact mapped bytes E9 D0 04 00 00: jmp 0x5883e0cd
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push 80h
        push 3
        push ebx
        push 3
        push 80000000h
        push eax
        ; Exact mapped bytes FF 15 80 43 89 58: call dword ptr [0x58894380]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edi, eax
        cmp edi, -1
        ; Exact mapped bytes 75 0C: jne 0x5883dc27
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 4ch], 3
        ; Exact mapped bytes E9 A6 04 00 00: jmp 0x5883e0cd
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push edi
        ; Exact mapped bytes FF 15 00 43 89 58: call dword ptr [0x58894300]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [esi + 2ch], eax
        cmp eax, -1
        ; Exact mapped bytes 75 13: jne 0x5883dc4a
        __asm _emit 0x75
        __asm _emit 0x13
        push edi
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [esi + 4ch], 21h
        ; Exact mapped bytes E9 83 04 00 00: jmp 0x5883e0cd
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 0D FE FF FF: call 0x5883da5f
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 75 13: jne 0x5883dc69
        __asm _emit 0x75
        __asm _emit 0x13
        push edi
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [esi + 4ch], 4
        ; Exact mapped bytes E9 64 04 00 00: jmp 0x5883e0cd
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        lea eax, [ebp - 11ch]
        push eax
        push dword ptr [esi + 2ch]
        push dword ptr [esi + 4]
        push edi
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 11ch]
        cmp eax, dword ptr [esi + 2ch]
        ; Exact mapped bytes 0F 84 02 FF FF FF: je 0x5883db96
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 4ch], 5
        ; Exact mapped bytes E9 2D 04 00 00: jmp 0x5883e0cd
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 98h]
        mov edi, dword ptr [eax + 9ch]
        cmp dword ptr [eax + 58h], ebx
        setne al
        mov byte ptr [esi + 26h], al
        test edx, edx
        ; Exact mapped bytes 74 25: je 0x5883dcde
        __asm _emit 0x74
        __asm _emit 0x25
        test edi, edi
        ; Exact mapped bytes 74 21: je 0x5883dcde
        __asm _emit 0x74
        __asm _emit 0x21
        sub dword ptr [esi + 2ch], edi
        lea edi, [ecx + edx]
        mov byte ptr [esi + 25h], 1
        ; Exact mapped bytes EB 08: jmp 0x5883dcd1
        __asm _emit 0xeb
        __asm _emit 0x08
        dec edi
        cmp byte ptr [edi], bl
        ; Exact mapped bytes 75 10: jne 0x5883dcde
        __asm _emit 0x75
        __asm _emit 0x10
        dec dword ptr [esi + 2ch]
        push 4
        push edi
        ; Exact mapped bytes FF 15 3C 41 89 58: call dword ptr [0x5889413c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 EB: je 0x5883dcc9
        __asm _emit 0x74
        __asm _emit 0xeb
        mov ecx, dword ptr [esi + 2ch]
        lea edi, [esi + 30h]
        mov eax, dword ptr [esi + 4]
        add ecx, -10h
        push 10h
        add eax, ecx
        push eax
        push edi
        ; Exact mapped bytes E8 9B EB 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [edi], 32812622h
        ; Exact mapped bytes 0F 85 5F 01 00 00: jne 0x5883de63
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 3ch], 32812621h
        ; Exact mapped bytes 0F 85 52 01 00 00: jne 0x5883de63
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi + 24h], 1
        mov eax, dword ptr [esi + 34h]
        mov ecx, dword ptr [esi + 38h]
        add eax, 10h
        add ecx, eax
        mov eax, dword ptr [esi + 2ch]
        sub eax, ecx
        mov dword ptr [esi + 28h], ecx
        mov dword ptr [esi + 8], eax
        mov eax, dword ptr [esi + 34h]
        push 10h
        mov dword ptr [esi + 40h], eax
        lea eax, [ebp - 118h]
        push ebx
        push eax
        ; Exact mapped bytes E8 D0 F0 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2ch]
        add esp, 0ch
        sub ecx, dword ptr [esi + 28h]
        cmp ecx, 10h
        ; Exact mapped bytes 76 1A: jbe 0x5883dd68
        __asm _emit 0x76
        __asm _emit 0x1a
        mov eax, dword ptr [esi + 4]
        add eax, -10h
        add eax, ecx
        push 10h
        push eax
        lea eax, [ebp - 118h]
        push eax
        ; Exact mapped bytes E8 2B EB 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp - 118h], 32812624h
        ; Exact mapped bytes 75 47: jne 0x5883ddbb
        __asm _emit 0x75
        __asm _emit 0x47
        cmp dword ptr [ebp - 10ch], 32812623h
        ; Exact mapped bytes 75 3B: jne 0x5883ddbb
        __asm _emit 0x75
        __asm _emit 0x3b
        push 10h
        lea eax, [ebp - 118h]
        push eax
        push edi
        ; Exact mapped bytes E8 01 EB 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 28h]
        add esp, 0ch
        mov ecx, dword ptr [ebp - 110h]
        sub dword ptr [esi + 2ch], eax
        add ecx, 10h
        mov edx, dword ptr [ebp - 114h]
        add ecx, edx
        mov eax, dword ptr [esi + 2ch]
        sub eax, ecx
        mov byte ptr [esi + 24h], 1
        mov dword ptr [esi + 28h], ecx
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 40h], edx
        cmp byte ptr [esi + 24h], bl
        ; Exact mapped bytes 0F 84 BA 00 00 00: je 0x5883de7e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esi + 25h], bl
        ; Exact mapped bytes 75 09: jne 0x5883ddd2
        __asm _emit 0x75
        __asm _emit 0x09
        cmp byte ptr [esi + 26h], bl
        ; Exact mapped bytes 0F 84 AC 00 00 00: je 0x5883de7e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov ecx, 5a4dh
        ; Exact mapped bytes 66 39 08: cmp word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x08
        ; Exact mapped bytes 0F 85 9B 00 00 00: jne 0x5883de7e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [eax + 3ch]
        add edi, eax
        mov dword ptr [ebp - 120h], ebx
        mov eax, 20bh
        ; Exact mapped bytes 66 39 47 18: cmp word ptr [edi + 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 75 1C: jne 0x5883de15
        __asm _emit 0x75
        __asm _emit 0x1c
        cmp dword ptr [edi], 4550h
        mov dword ptr [ebp - 120h], edi
        ; Exact mapped bytes 75 22: jne 0x5883de29
        __asm _emit 0x75
        __asm _emit 0x22
        mov dword ptr [edi + 0ach], ebx
        mov dword ptr [edi + 0a8h], ebx
        ; Exact mapped bytes EB 14: jmp 0x5883de29
        __asm _emit 0xeb
        __asm _emit 0x14
        cmp dword ptr [edi], 4550h
        ; Exact mapped bytes 75 0C: jne 0x5883de29
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [edi + 9ch], ebx
        mov dword ptr [edi + 98h], ebx
        lea eax, [ebp - 11ch]
        push eax
        lea eax, [ebp - 128h]
        push eax
        push dword ptr [esi + 8]
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 22 07 00 00: call 0x5883e564
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x5883de7e
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 120h]
        mov eax, dword ptr [ebp - 11ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x5883de5e
        __asm _emit 0x74
        __asm _emit 0x05
        mov dword ptr [ecx + 58h], eax
        ; Exact mapped bytes EB 20: jmp 0x5883de7e
        __asm _emit 0xeb
        __asm _emit 0x20
        mov dword ptr [edi + 58h], eax
        ; Exact mapped bytes EB 1B: jmp 0x5883de7e
        __asm _emit 0xeb
        __asm _emit 0x1b
        push 10h
        push ebx
        push edi
        ; Exact mapped bytes E8 A4 EF 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2ch]
        add esp, 0ch
        mov byte ptr [esi + 24h], bl
        mov dword ptr [esi + 28h], ebx
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 40h], ebx
        mov eax, dword ptr [esi + 2ch]
        cmp eax, dword ptr [esi + 28h]
        ; Exact mapped bytes 73 0F: jae 0x5883de95
        __asm _emit 0x73
        __asm _emit 0x0f
        mov byte ptr [esi + 24h], bl
        mov dword ptr [esi + 28h], ebx
        mov dword ptr [esi + 2ch], ebx
        mov dword ptr [esi + 8], ebx
        mov dword ptr [esi + 40h], ebx
        cmp byte ptr [esi + 24h], bl
        ; Exact mapped bytes 75 0C: jne 0x5883dea6
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 4ch], 6
        ; Exact mapped bytes E9 27 02 00 00: jmp 0x5883e0cd
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 38h]
        mov dword ptr [esi + 20h], eax
        cmp dword ptr [esi + 1ch], ebx
        ; Exact mapped bytes 74 0C: je 0x5883debd
        __asm _emit 0x74
        __asm _emit 0x0c
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes E8 47 B7 01 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [esi + 1ch], ebx
        push dword ptr [esi + 20h]
        ; Exact mapped bytes E8 4B B7 01 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov ecx, eax
        mov dword ptr [esi + 1ch], ecx
        test ecx, ecx
        ; Exact mapped bytes 75 0C: jne 0x5883dedb
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 4ch], 7
        ; Exact mapped bytes E9 F2 01 00 00: jmp 0x5883e0cd
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        push dword ptr [esi + 20h]
        add eax, dword ptr [esi + 40h]
        add eax, dword ptr [esi + 4]
        push eax
        push ecx
        ; Exact mapped bytes E8 A2 E9 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [esi], ebx
        ; Exact mapped bytes 75 24: jne 0x5883df19
        __asm _emit 0x75
        __asm _emit 0x24
        push 0f0000000h
        push 1
        push 588c1dc0h
        push ebx
        push esi
        ; Exact mapped bytes FF 15 00 40 89 58: call dword ptr [0x58894000]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x5883df19
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 4ch], 8
        ; Exact mapped bytes E9 B4 01 00 00: jmp 0x5883e0cd
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 18h]
        cmp dword ptr [edi], ebx
        ; Exact mapped bytes 74 0A: je 0x5883df2a
        __asm _emit 0x74
        __asm _emit 0x0a
        push dword ptr [edi]
        ; Exact mapped bytes FF 15 54 40 89 58: call dword ptr [0x58894054]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [edi], ebx
        push edi
        push ebx
        push ebx
        ; Exact mapped bytes FF 35 7C 62 90 58: push dword ptr [0x5890627c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x7c
        __asm _emit 0x62
        __asm _emit 0x90
        __asm _emit 0x58
        push 58906168h
        push dword ptr [esi]
        ; Exact mapped bytes FF 15 50 40 89 58: call dword ptr [0x58894050]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 55: jne 0x5883df99
        __asm _emit 0x75
        __asm _emit 0x55
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 57h
        ; Exact mapped bytes 75 3E: jne 0x5883df8d
        __asm _emit 0x75
        __asm _emit 0x3e
        push 0f0000000h
        push 1
        push 588c1dc0h
        push ebx
        push esi
        ; Exact mapped bytes FF 15 00 40 89 58: call dword ptr [0x58894000]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x5883df73
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 4ch], 62h
        ; Exact mapped bytes E9 5A 01 00 00: jmp 0x5883e0cd
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push ebx
        push ebx
        ; Exact mapped bytes FF 35 7C 62 90 58: push dword ptr [0x5890627c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x7c
        __asm _emit 0x62
        __asm _emit 0x90
        __asm _emit 0x58
        push 58906168h
        push dword ptr [esi]
        ; Exact mapped bytes FF 15 50 40 89 58: call dword ptr [0x58894050]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x5883df99
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 4ch], 9
        ; Exact mapped bytes E9 34 01 00 00: jmp 0x5883e0cd
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 14h]
        cmp dword ptr [edi], ebx
        ; Exact mapped bytes 74 0A: je 0x5883dfaa
        __asm _emit 0x74
        __asm _emit 0x0a
        push dword ptr [edi]
        ; Exact mapped bytes FF 15 0C 40 89 58: call dword ptr [0x5889400c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [edi], ebx
        push edi
        push ebx
        push ebx
        push 8003h
        push dword ptr [esi]
        ; Exact mapped bytes FF 15 14 40 89 58: call dword ptr [0x58894014]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x5883dfca
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 4ch], 0ah
        ; Exact mapped bytes E9 03 01 00 00: jmp 0x5883e0cd
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        add eax, dword ptr [esi + 40h]
        push ebx
        push eax
        push dword ptr [esi + 4]
        push dword ptr [edi]
        ; Exact mapped bytes FF 15 10 40 89 58: call dword ptr [0x58894010]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x5883dfed
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 4ch], 0bh
        ; Exact mapped bytes E9 E0 00 00 00: jmp 0x5883e0cd
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push ebx
        push dword ptr [esi + 18h]
        push dword ptr [esi + 20h]
        push dword ptr [esi + 1ch]
        push dword ptr [edi]
        ; Exact mapped bytes FF 15 08 40 89 58: call dword ptr [0x58894008]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 4F: jne 0x5883e053
        __asm _emit 0x75
        __asm _emit 0x4f
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 57h
        ; Exact mapped bytes 75 3B: jne 0x5883e04a
        __asm _emit 0x75
        __asm _emit 0x3b
        push 0f0000000h
        push 1
        push 588c1dc0h
        push ebx
        push esi
        ; Exact mapped bytes FF 15 00 40 89 58: call dword ptr [0x58894000]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x5883e033
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 4ch], 80h
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x5883e0cd
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push ebx
        push dword ptr [esi + 18h]
        push dword ptr [esi + 20h]
        push dword ptr [esi + 1ch]
        push dword ptr [edi]
        ; Exact mapped bytes FF 15 08 40 89 58: call dword ptr [0x58894008]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x5883e053
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [esi + 4ch], 0ch
        ; Exact mapped bytes EB 7A: jmp 0x5883e0cd
        __asm _emit 0xeb
        __asm _emit 0x7a
        push ebx
        push ebx
        push 104h
        lea eax, [ebp - 108h]
        push eax
        push -1
        push dword ptr [ebp - 124h]
        push ebx
        push ebx
        ; Exact mapped bytes FF 15 90 43 89 58: call dword ptr [0x58894390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp byte ptr [ebp + 0ch], bl
        ; Exact mapped bytes 74 3F: je 0x5883e0b5
        __asm _emit 0x74
        __asm _emit 0x3f
        lea eax, [ebp - 108h]
        push 5ch
        push eax
        ; Exact mapped bytes E8 BC 07 01 00: call 0x5884e840
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 74 03: je 0x5883e08f
        __asm _emit 0x74
        __asm _emit 0x03
        inc ecx
        ; Exact mapped bytes EB 06: jmp 0x5883e095
        __asm _emit 0xeb
        __asm _emit 0x06
        lea ecx, [ebp - 108h]
        push dword ptr [esi + 40h]
        mov eax, dword ptr [esi + 8]
        add eax, dword ptr [esi + 4]
        push eax
        push ecx
        ; Exact mapped bytes E8 1B 8D 02 00: call 0x58866dc0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x5883e0b5
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [esi + 4ch], 0dh
        ; Exact mapped bytes EB 18: jmp 0x5883e0cd
        __asm _emit 0xeb
        __asm _emit 0x18
        cmp byte ptr [esi + 10h], bl
        ; Exact mapped bytes 75 11: jne 0x5883e0cb
        __asm _emit 0x75
        __asm _emit 0x11
        cmp dword ptr [esi + 4], ebx
        ; Exact mapped bytes 74 0C: je 0x5883e0cb
        __asm _emit 0x74
        __asm _emit 0x0c
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 39 B5 01 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [esi + 4], ebx
        mov bl, 1
        ; Exact mapped bytes 83 3D 88 8E 96 58 00: cmp dword ptr [0x58968e88], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x5883e0e1
        __asm _emit 0x74
        __asm _emit 0x0b
        push 58968e70h
        ; Exact mapped bytes FF 15 1C 42 89 58: call dword ptr [0x5889421c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov al, bl
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 60 2F FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
