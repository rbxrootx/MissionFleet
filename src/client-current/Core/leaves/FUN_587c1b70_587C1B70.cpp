// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C1B70 .. +0x805 bytes.
extern "C" __declspec(naked) void FUN_587c1b70_587C1B70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 22ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 208h], ecx
        mov eax, dword ptr [ebp - 208h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 D1 E9: shr cx, 1
        __asm _emit 0x66
        __asm _emit 0xd1
        __asm _emit 0xe9
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 B9 07 00 00: je 0x587c235f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x587c1c64
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 14: ja 0x587c1bdb
        __asm _emit 0x77
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 208h]
        mov dword ptr [eax + 3ch], 0
        xor eax, eax
        ; Exact mapped bytes E9 8D 07 00 00: jmp 0x587c2368
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 57 2D CC FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x2d
        __asm _emit 0xcc
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 210h], edx
        cmp dword ptr [ebp - 210h], 0
        ; Exact mapped bytes 75 09: jne 0x587c1c03
        __asm _emit 0x75
        __asm _emit 0x09
        xor eax, eax
        ; Exact mapped bytes E9 67 07 00 00: jmp 0x587c2368
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 37: jmp 0x587c1c3a
        __asm _emit 0xeb
        __asm _emit 0x37
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 210h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 210h]
        mov eax, dword ptr [edx + 10h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [ebp - 210h], eax
        mov ecx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 12 2D CC FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x2d
        __asm _emit 0xcc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 210h]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 02: jne 0x587c1c3a
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 2A: jmp 0x587c1c64
        __asm _emit 0xeb
        __asm _emit 0x2a
        cmp dword ptr [ebp - 210h], 0
        ; Exact mapped bytes 74 1F: je 0x587c1c62
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 210h]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 11: ja 0x587c1c62
        __asm _emit 0x77
        __asm _emit 0x11
        mov dword ptr [ebp - 210h], 0
        xor eax, eax
        ; Exact mapped bytes E9 06 07 00 00: jmp 0x587c2368
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 8D: jmp 0x587c1bf1
        __asm _emit 0xeb
        __asm _emit 0x8d
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 214h], edx
        cmp dword ptr [ebp - 214h], 201h
        ; Exact mapped bytes 77 41: ja 0x587c1cbd
        __asm _emit 0x77
        __asm _emit 0x41
        cmp dword ptr [ebp - 214h], 201h
        ; Exact mapped bytes 74 7A: je 0x587c1d02
        __asm _emit 0x74
        __asm _emit 0x7a
        cmp dword ptr [ebp - 214h], 100h
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x587c1d56
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 214h], 102h
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x587c1d72
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 214h], 10fh
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x587c1d8e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 95 06 00 00: jmp 0x587c2352
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 214h], 202h
        ; Exact mapped bytes 74 1D: je 0x587c1ce6
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp dword ptr [ebp - 214h], 204h
        ; Exact mapped bytes 74 65: je 0x587c1d3a
        __asm _emit 0x74
        __asm _emit 0x65
        cmp dword ptr [ebp - 214h], 205h
        ; Exact mapped bytes 74 3D: je 0x587c1d1e
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes E9 6C 06 00 00: jmp 0x587c2352
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 24h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes E9 66 06 00 00: jmp 0x587c2368
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [eax + 28h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes E9 4A 06 00 00: jmp 0x587c2368
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes E9 2E 06 00 00: jmp 0x587c2368
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [eax + 30h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes E9 12 06 00 00: jmp 0x587c2368
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes E9 F6 05 00 00: jmp 0x587c2368
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [eax + 18h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes E9 DA 05 00 00: jmp 0x587c2368
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 1C 5F 96 58: mov eax, dword ptr [0x58965f1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 5C 0B 07 00: call 0x588328f5
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x0b
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 224h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 800h
        ; Exact mapped bytes 0F 84 12 02 00 00: je 0x587c1fc3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 88h]
        mov edx, dword ptr [ebp - 208h]
        add ecx, dword ptr [edx + 84h]
        mov eax, dword ptr [ebp - 208h]
        mov edx, dword ptr [eax + 8ch]
        sub edx, 1
        cmp ecx, edx
        ; Exact mapped bytes 0F 8D D2 01 00 00: jge 0x587c1fb2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        lea eax, [ebp - 104h]
        push eax
        push 800h
        mov ecx, dword ptr [ebp - 224h]
        push ecx
        ; Exact mapped bytes E8 04 0B 07 00: call 0x58832901
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x0b
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 218h], eax
        mov edx, dword ptr [ebp - 218h]
        ; Exact mapped bytes 3B 15 90 5F 96 58: cmp edx, dword ptr [0x58965f90]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 8E 8D 00 00 00: jle 0x587c1ea2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 88h]
        mov edx, dword ptr [ebp - 208h]
        add ecx, dword ptr [edx + 84h]
        mov eax, dword ptr [ebp - 218h]
        lea ecx, [ecx + eax - 1]
        mov dword ptr [ebp - 21ch], ecx
        ; Exact mapped bytes EB 0F: jmp 0x587c1e4e
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 21ch]
        sub edx, 1
        mov dword ptr [ebp - 21ch], edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes 03 0D 90 5F 96 58: add ecx, dword ptr [0x58965f90]
        __asm _emit 0x03
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        cmp dword ptr [ebp - 21ch], ecx
        ; Exact mapped bytes 7C 38: jl 0x587c1ea0
        __asm _emit 0x7c
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 80h]
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes 2B 0D 90 5F 96 58: sub ecx, dword ptr [0x58965f90]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add ecx, dword ptr [ebp - 21ch]
        mov edx, dword ptr [ebp - 208h]
        mov edx, dword ptr [edx + 80h]
        mov esi, dword ptr [ebp - 21ch]
        mov al, byte ptr [eax + esi]
        mov byte ptr [edx + ecx], al
        ; Exact mapped bytes EB 9F: jmp 0x587c1e3f
        __asm _emit 0xeb
        __asm _emit 0x9f
        ; Exact mapped bytes EB 7D: jmp 0x587c1f1f
        __asm _emit 0xeb
        __asm _emit 0x7d
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes 3B 0D 90 5F 96 58: cmp ecx, dword ptr [0x58965f90]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 7D 6F: jge 0x587c1f1f
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 88h]
        mov ecx, dword ptr [ebp - 208h]
        add eax, dword ptr [ecx + 84h]
        mov edx, dword ptr [ebp - 208h]
        sub eax, dword ptr [edx + 90h]
        push eax
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes 03 0D 90 5F 96 58: add ecx, dword ptr [0x58965f90]
        __asm _emit 0x03
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 80h]
        add eax, ecx
        push eax
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 90h]
        add edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 80h]
        add ecx, edx
        push ecx
        ; Exact mapped bytes E8 74 A9 08 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xa9
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 218h]
        push edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 80h]
        mov eax, dword ptr [ebp - 208h]
        add edx, dword ptr [eax + 90h]
        push edx
        ; Exact mapped bytes E8 45 A9 08 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xa9
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 84h]
        add edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [ebp - 208h]
        mov dword ptr [eax + 84h], edx
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 90h]
        add edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [ebp - 208h]
        mov dword ptr [eax + 90h], edx
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 88h]
        mov eax, dword ptr [ebp - 208h]
        add edx, dword ptr [eax + 84h]
        mov ecx, dword ptr [ebp - 208h]
        mov eax, dword ptr [ecx + 80h]
        mov byte ptr [eax + edx], 0
        ; Exact mapped bytes C7 05 90 5F 96 58 00 00 00 00: mov dword ptr [0x58965f90], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 A5 03 00 00: jmp 0x587c2368
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 8
        ; Exact mapped bytes 75 0D: jne 0x587c1fdb
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 0F 85 32 02 00 00: jne 0x587c220d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 88h]
        mov eax, dword ptr [ebp - 208h]
        add edx, dword ptr [eax + 84h]
        mov ecx, dword ptr [ebp - 208h]
        mov eax, dword ptr [ecx + 8ch]
        sub eax, 1
        cmp edx, eax
        ; Exact mapped bytes 0F 8D 03 02 00 00: jge 0x587c220d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 88h]
        mov eax, dword ptr [ebp - 208h]
        add edx, dword ptr [eax + 84h]
        mov ecx, dword ptr [ebp - 208h]
        cmp dword ptr [ecx + 90h], edx
        ; Exact mapped bytes 0F 8D 6D 01 00 00: jge 0x587c21a1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        lea edx, [ebp - 204h]
        push edx
        push 8
        mov eax, dword ptr [ebp - 224h]
        push eax
        ; Exact mapped bytes E8 B3 08 07 00: call 0x58832901
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 20ch], eax
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes 3B 0D 90 5F 96 58: cmp ecx, dword ptr [0x58965f90]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 8E 8D 00 00 00: jle 0x587c20f3
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 88h]
        mov ecx, dword ptr [ebp - 208h]
        add eax, dword ptr [ecx + 84h]
        mov edx, dword ptr [ebp - 20ch]
        lea eax, [eax + edx - 1]
        mov dword ptr [ebp - 220h], eax
        ; Exact mapped bytes EB 0F: jmp 0x587c209f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 220h]
        sub ecx, 1
        mov dword ptr [ebp - 220h], ecx
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 90h]
        ; Exact mapped bytes 03 05 90 5F 96 58: add eax, dword ptr [0x58965f90]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        cmp dword ptr [ebp - 220h], eax
        ; Exact mapped bytes 7C 38: jl 0x587c20f1
        __asm _emit 0x7c
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 80h]
        mov eax, dword ptr [ebp - 20ch]
        ; Exact mapped bytes 2B 05 90 5F 96 58: sub eax, dword ptr [0x58965f90]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, dword ptr [ebp - 220h]
        mov ecx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ecx + 80h]
        mov esi, dword ptr [ebp - 220h]
        mov dl, byte ptr [edx + esi]
        mov byte ptr [ecx + eax], dl
        ; Exact mapped bytes EB 9F: jmp 0x587c2090
        __asm _emit 0xeb
        __asm _emit 0x9f
        ; Exact mapped bytes EB 7D: jmp 0x587c2170
        __asm _emit 0xeb
        __asm _emit 0x7d
        mov eax, dword ptr [ebp - 20ch]
        ; Exact mapped bytes 3B 05 90 5F 96 58: cmp eax, dword ptr [0x58965f90]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 7D 6F: jge 0x587c2170
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 88h]
        mov eax, dword ptr [ebp - 208h]
        add edx, dword ptr [eax + 84h]
        mov ecx, dword ptr [ebp - 208h]
        sub edx, dword ptr [ecx + 90h]
        push edx
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 90h]
        ; Exact mapped bytes 03 05 90 5F 96 58: add eax, dword ptr [0x58965f90]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 80h]
        add edx, eax
        push edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 90h]
        add ecx, dword ptr [ebp - 20ch]
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 80h]
        add eax, ecx
        push eax
        ; Exact mapped bytes E8 23 A7 08 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xa7
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 20ch]
        push ecx
        lea edx, [ebp - 204h]
        push edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 80h]
        mov edx, dword ptr [ebp - 208h]
        add ecx, dword ptr [edx + 90h]
        push ecx
        ; Exact mapped bytes E8 F4 A6 08 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xa6
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 32: jmp 0x587c21d3
        __asm _emit 0xeb
        __asm _emit 0x32
        push 100h
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 80h]
        mov edx, dword ptr [ebp - 208h]
        add ecx, dword ptr [edx + 90h]
        push ecx
        push 8
        mov eax, dword ptr [ebp - 224h]
        push eax
        ; Exact mapped bytes E8 34 07 07 00: call 0x58832901
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 20ch], eax
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 88h]
        mov eax, dword ptr [ebp - 208h]
        add edx, dword ptr [eax + 84h]
        add edx, dword ptr [ebp - 20ch]
        mov ecx, dword ptr [ebp - 208h]
        mov eax, dword ptr [ecx + 80h]
        mov byte ptr [eax + edx], 0
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes 89 0D 90 5F 96 58: mov dword ptr [0x58965f90], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        lea edx, [ebp - 22ch]
        push edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [eax + 90h]
        sub edx, dword ptr [ecx + 94h]
        push edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 80h]
        mov edx, dword ptr [ebp - 208h]
        add ecx, dword ptr [edx + 94h]
        push ecx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 50h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes E8 52 47 CC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x47
        __asm _emit 0xcc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 22ch]
        lea esi, [ecx + eax*2]
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 4E 36 CD FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x36
        __asm _emit 0xcd
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 8C B0 00 00 00: jl 0x587c233a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 80h]
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 94h]
        ; Exact mapped bytes 0F BE 04 10: movsx eax, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 7D 1D: jge 0x587c22c7
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 94h]
        add edx, 2
        mov eax, dword ptr [ebp - 208h]
        mov dword ptr [eax + 94h], edx
        ; Exact mapped bytes EB 1B: jmp 0x587c22e2
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 94h]
        add edx, 1
        mov eax, dword ptr [ebp - 208h]
        mov dword ptr [eax + 94h], edx
        lea ecx, [ebp - 22ch]
        push ecx
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [edx + 90h]
        sub ecx, dword ptr [eax + 94h]
        push ecx
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 80h]
        mov ecx, dword ptr [ebp - 208h]
        add eax, dword ptr [ecx + 94h]
        push eax
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 50h]
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 50h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 26 FF FF FF: jmp 0x587c2260
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 224h]
        push ecx
        ; Exact mapped bytes 8B 15 1C 5F 96 58: mov edx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 AE 05 07 00: call 0x588328fb
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x05
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        xor eax, eax
        ; Exact mapped bytes EB 16: jmp 0x587c2368
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 208h]
        mov eax, dword ptr [eax + 34h]
        ; Exact mapped bytes EB 0B: jmp 0x587c2368
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes EB 09: jmp 0x587c2368
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 208h]
        mov eax, dword ptr [ecx + 34h]
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 DD EC 06 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
    }
}
