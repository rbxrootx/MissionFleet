// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046C299 .. +0x36AB bytes.
extern "C" __declspec(naked) void FUN_0046c299_0046C299() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bc82h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1f20h
        ; Exact mapped bytes E8 05 D5 03 00: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xd5
        __asm _emit 0x03
        __asm _emit 0x00
        push esi
        push edi
        push ecx
        lea edi, [ebp - 1f2ch]
        mov ecx, 7c8h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 1f08h], ecx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        cmp ecx, 8000h
        ; Exact mapped bytes 0F 85 12 01 00 00: jne 0x46c3fe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 1f0ch], eax
        cmp dword ptr [ebp - 1f0ch], 80000520h
        ; Exact mapped bytes 74 05: je 0x46c309
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 F0 00 00 00: jmp 0x46c3f9
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 18h
        push ecx
        lea edx, [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 05 CD 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xcd
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 15h], 0
        push 4
        mov eax, dword ptr [ebp + 0ch]
        add eax, 30h
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 EC CC 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xcc
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 63 2D FD FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x2d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x46c3f9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 1f08h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40cc8h]
        mov ecx, dword ptr [ecx + 0ca0h]
        ; Exact mapped bytes E8 82 DA FB FF: call 0x429e02
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xda
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x46c3c9
        __asm _emit 0x74
        __asm _emit 0x45
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        push 80025000h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 81 AE 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 46ch
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 90 75 F9 FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x75
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 49 75 F9 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x75
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 30: jmp 0x46c3f9
        __asm _emit 0xeb
        __asm _emit 0x30
        push 0
        push 0
        push 0
        push 80000520h
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        shl eax, 10h
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0E: mov dx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0e
        or eax, edx
        push eax
        push 80000003h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 39 AE 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 22 35 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        cmp ecx, 8001h
        ; Exact mapped bytes 0F 85 74 02 00 00: jne 0x46c687
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 1f10h], eax
        cmp dword ptr [ebp - 1f10h], 8001000fh
        ; Exact mapped bytes 0F 84 43 01 00 00: je 0x46c572
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1f10h], 80010109h
        ; Exact mapped bytes 74 15: je 0x46c450
        __asm _emit 0x74
        __asm _emit 0x15
        cmp dword ptr [ebp - 1f10h], 80016000h
        ; Exact mapped bytes 0F 84 46 01 00 00: je 0x46c591
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 32 02 00 00: jmp 0x46c682
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 104h], 0
        mov dword ptr [ebp - 100h], 20060100h
        mov dword ptr [ebp - 0fch], 0
        mov ecx, dword ptr [ebp - 1f08h]
        add ecx, 0c0h
        ; Exact mapped bytes E8 C1 A5 FB FF: call 0x426a40
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xa5
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 0ffffh
        mov dword ptr [ebp - 0f8h], eax
        mov ecx, dword ptr [ebp - 1f08h]
        add ecx, 0c0h
        ; Exact mapped bytes E8 C5 A5 FB FF: call 0x426a60
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xa5
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 0ffffh
        mov dword ptr [ebp - 0f4h], eax
        mov dword ptr [ebp - 30h], 0
        push 0
        push 0d8h
        lea ecx, [ebp - 104h]
        push ecx
        push 1
        push 80020010h
        push 80020010h
        mov ecx, dword ptr [ebp - 1f08h]
        ; Exact mapped bytes E8 60 AD 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 27 90 0C 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x90
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 1f14h], eax
        mov edx, dword ptr [ebp - 1f14h]
        mov eax, dword ptr [edx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 1f14h]
        ; Exact mapped bytes FF 50 7C: call dword ptr [eax + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 E7 C2 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xc2
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        add ecx, 148h
        ; Exact mapped bytes E8 5A 4A 0C 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x4a
        __asm _emit 0x0c
        __asm _emit 0x00
        add eax, 1
        push eax
        push 0
        ; Exact mapped bytes E8 EF 8F 0C 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x8f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 1f18h], eax
        mov ecx, dword ptr [ebp - 1f18h]
        mov edx, dword ptr [ecx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 1f18h]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 AF C2 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xc2
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        add ecx, 148h
        ; Exact mapped bytes E8 BA 1A 08 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x1a
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        push 0
        push 0
        push 80020effh
        mov ecx, dword ptr [ebp - 1f08h]
        ; Exact mapped bytes E8 DF AC 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8001a001h
        mov ecx, dword ptr [ebp - 1f08h]
        ; Exact mapped bytes E8 C5 AC 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 10 01 00 00: jmp 0x46c682
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002000fh
        mov ecx, dword ptr [ebp - 1f08h]
        ; Exact mapped bytes E8 A6 AC 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x46c682
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ec4h], 18h
        mov dword ptr [ebp - 1ec8h], 4
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 1ecch], ecx
        lea edx, [ebp - 1ec4h]
        push edx
        lea eax, [ebp - 1ec8h]
        push eax
        lea ecx, [ebp - 1ecch]
        push ecx
        ; Exact mapped bytes E8 F5 71 F9 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x71
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 AC 00 00 00: je 0x46c682
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 C4 2A FD FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x2a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x46c682
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 DA A6 FC FF: call 0x436ce0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xa6
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 77: jne 0x46c682
        __asm _emit 0x75
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 108h]
        cmp dword ptr [ecx + 8ech], 0
        ; Exact mapped bytes 74 52: je 0x46c66c
        __asm _emit 0x74
        __asm _emit 0x52
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 0
        push 0
        push 80016000h
        mov ecx, dword ptr [ebp - 1f08h]
        ; Exact mapped bytes E8 F7 AB 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 8e8h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 1F: je 0x46c66c
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 F4 B0 FD FF: call 0x44774c
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 8e8h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 12 B0 FD FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 D5 B0 FD FF: call 0x44774c
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 FC AF FD FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xaf
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 99 32 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        cmp ecx, 8002h
        ; Exact mapped bytes 0F 85 84 32 00 00: jne 0x46f920
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 1f1ch], eax
        cmp dword ptr [ebp - 1f1ch], 80020f0eh
        ; Exact mapped bytes 0F 87 D2 00 00 00: ja 0x46c78a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1f1ch], 80020f0eh
        ; Exact mapped bytes 0F 84 A7 22 00 00: je 0x46e96f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1f1ch], 80020f07h
        ; Exact mapped bytes 0F 87 86 00 00 00: ja 0x46c75e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1f1ch], 80020f07h
        ; Exact mapped bytes 0F 84 06 0F 00 00: je 0x46d5ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1f1ch], 80020ef9h
        ; Exact mapped bytes 77 45: ja 0x46c739
        __asm _emit 0x77
        __asm _emit 0x45
        cmp dword ptr [ebp - 1f1ch], 80020ef9h
        ; Exact mapped bytes 0F 84 58 04 00 00: je 0x46cb5c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1f1ch], 800200f0h
        ; Exact mapped bytes 0F 84 35 02 00 00: je 0x46c949
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1f1ch], 8002040eh
        ; Exact mapped bytes 0F 84 D3 01 00 00: je 0x46c8f7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1f1ch], 80020ef8h
        ; Exact mapped bytes 0F 84 EF 06 00 00: je 0x46ce23
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xef
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F9 30 00 00: jmp 0x46f832
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1f1ch], 80020efch
        ; Exact mapped bytes 0F 84 C1 02 00 00: je 0x46ca0a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1f1ch], 80020f06h
        ; Exact mapped bytes 0F 84 90 0E 00 00: je 0x46d5e9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D4 30 00 00: jmp 0x46f832
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1f1ch]
        add ecx, 7ffdf0f8h
        mov dword ptr [ebp - 1f1ch], ecx
        cmp dword ptr [ebp - 1f1ch], 5
        ; Exact mapped bytes 0F 87 B5 30 00 00: ja 0x46f832
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb5
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1f1ch]
        ; Exact mapped bytes FF 24 95 44 F9 46 00: jmp dword ptr [edx*4 + 0x46f944]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xf9
        __asm _emit 0x46
        __asm _emit 0x00
        cmp dword ptr [ebp - 1f1ch], 80020fa1h
        ; Exact mapped bytes 77 3B: ja 0x46c7d1
        __asm _emit 0x77
        __asm _emit 0x3b
        cmp dword ptr [ebp - 1f1ch], 80020fa1h
        ; Exact mapped bytes 0F 84 B4 1E 00 00: je 0x46e65a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1f1ch]
        add eax, 7ffdf0f1h
        mov dword ptr [ebp - 1f1ch], eax
        cmp dword ptr [ebp - 1f1ch], 5
        ; Exact mapped bytes 0F 87 6E 30 00 00: ja 0x46f832
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x6e
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1f1ch]
        ; Exact mapped bytes FF 24 8D 5C F9 46 00: jmp dword ptr [ecx*4 + 0x46f95c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0xf9
        __asm _emit 0x46
        __asm _emit 0x00
        cmp dword ptr [ebp - 1f1ch], 8002a001h
        ; Exact mapped bytes 77 45: ja 0x46c822
        __asm _emit 0x77
        __asm _emit 0x45
        cmp dword ptr [ebp - 1f1ch], 8002a001h
        ; Exact mapped bytes 0F 84 EA 0A 00 00: je 0x46d2d7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1f1ch], 80020fa3h
        ; Exact mapped bytes 0F 84 6E 20 00 00: je 0x46e86b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1f1ch], 80021034h
        ; Exact mapped bytes 0F 84 7B 01 00 00: je 0x46c988
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1f1ch], 80022b34h
        ; Exact mapped bytes 0F 84 BB 22 00 00: je 0x46ead8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 10 30 00 00: jmp 0x46f832
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1f1ch], 8002a002h
        ; Exact mapped bytes 74 15: je 0x46c843
        __asm _emit 0x74
        __asm _emit 0x15
        cmp dword ptr [ebp - 1f1ch], 8002d020h
        ; Exact mapped bytes 0F 84 46 0A 00 00: je 0x46d284
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 EF 2F 00 00: jmp 0x46f832
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 128h], eax
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 14 4E 0C 00: call 0x53166e
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x4e
        __asm _emit 0x0c
        __asm _emit 0x00
        push 4
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 12ch]
        push edx
        ; Exact mapped bytes E8 B4 C7 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xc7
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        push 0
        lea eax, [ebp - 120h]
        push eax
        ; Exact mapped bytes E8 F1 CA 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xca
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        mov esi, esp
        push ecx
        push 5bb0e4h
        lea edx, [ebp - 120h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 39 BF 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        mov byte ptr [ebp - 109h], 0
        lea eax, [ebp - 120h]
        push eax
        mov ecx, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 E9 27 FD FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        mov edx, dword ptr [ebp - 128h]
        push edx
        lea eax, [ebp - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        push ecx
        mov edx, dword ptr [ebp - 1f08h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40cb4h]
        ; Exact mapped bytes E8 E9 D6 F9 FF: call 0x409fdb
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes E9 29 30 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 134h], ecx
        mov edx, dword ptr [ebp - 134h]
        push edx
        mov eax, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 97 27 FD FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x27
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 130h]
        push eax
        mov ecx, dword ptr [ebp - 1f08h]
        mov edx, dword ptr [ecx + 48h]
        mov eax, dword ptr [edx + 40cc8h]
        mov ecx, dword ptr [eax + 0ca0h]
        ; Exact mapped bytes E8 0D 6E FC FF: call 0x433751
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x6e
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes E9 D7 2F 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 0ch], 1
        ; Exact mapped bytes 75 15: jne 0x46c967
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1f08h]
        ; Exact mapped bytes E8 51 3C 00 00: call 0x4705b6
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1C: jmp 0x46c983
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 75 13: jne 0x46c983
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1f08h]
        ; Exact mapped bytes E8 8B 3D 00 00: call 0x47070e
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 98 2F 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 12 27 FD FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x27
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8], 1
        ; Exact mapped bytes 75 36: jne 0x46c9df
        __asm _emit 0x75
        __asm _emit 0x36
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 74 2B: je 0x46c9dd
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push -1
        mov eax, dword ptr [ebp - 138h]
        push eax
        mov ecx, dword ptr [ebp - 1f08h]
        mov edx, dword ptr [ecx + 48h]
        mov eax, dword ptr [edx + 40cc8h]
        mov ecx, dword ptr [eax + 0ca4h]
        push ecx
        ; Exact mapped bytes E8 0D 4B FB FF: call 0x4214ea
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x4b
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 26: jmp 0x46ca05
        __asm _emit 0xeb
        __asm _emit 0x26
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 74 1D: je 0x46ca05
        __asm _emit 0x74
        __asm _emit 0x1d
        push 0
        push 0
        push 0
        push 0
        push 20002h
        push 80021034h
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 2D A8 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 16 2F 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 57ch]
        ; Exact mapped bytes E8 F2 44 0C 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x44
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 570h]
        ; Exact mapped bytes E8 E0 44 0C 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x44
        __asm _emit 0x0c
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov dword ptr [ebp - 574h], 20000h
        mov dword ptr [ebp - 578h], 10000h
        mov esi, esp
        push 5bb0e8h
        lea edx, [ebp - 56ch]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 83 BD 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, esp
        push 5dcb4ch
        lea eax, [ebp - 554h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 65 BD 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, 0ch
        lea esi, [ebp - 56ch]
        lea edi, [ebp - 53ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 5bb0ech
        lea edx, [ebp - 57ch]
        push edx
        ; Exact mapped bytes E8 B9 1E 06 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x1e
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 57ch]
        ; Exact mapped bytes E8 AF 44 0C 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x44
        __asm _emit 0x0c
        __asm _emit 0x00
        add eax, 1
        push eax
        push 0
        lea ecx, [ebp - 57ch]
        ; Exact mapped bytes E8 36 15 08 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        lea eax, [ebp - 50ch]
        push eax
        ; Exact mapped bytes E8 51 C5 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc5
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 40 48 F9 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x48
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        cmp dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes 74 47: je 0x46cb36
        __asm _emit 0x74
        __asm _emit 0x47
        lea ecx, [ebp - 57ch]
        ; Exact mapped bytes E8 66 44 0C 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x44
        __asm _emit 0x0c
        __asm _emit 0x00
        add eax, 31h
        push eax
        lea edx, [ebp - 53ch]
        push edx
        mov eax, dword ptr [ebp - 578h]
        push eax
        mov ecx, dword ptr [ebp - 574h]
        push ecx
        push 80020a00h
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 D3 CF 01 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 82 74 F9 FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x74
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes EB B0: jmp 0x46cae6
        __asm _emit 0xeb
        __asm _emit 0xb0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 570h]
        ; Exact mapped bytes E8 07 0D 08 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 57ch]
        ; Exact mapped bytes E8 F5 0C 08 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x0c
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E9 C4 2D 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 3E 25 FD FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x25
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 580h], eax
        cmp dword ptr [ebp - 580h], 0
        ; Exact mapped bytes 0F 84 9D 02 00 00: je 0x46ce1e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        cmp edx, 1
        ; Exact mapped bytes 75 6F: jne 0x46cbfe
        __asm _emit 0x75
        __asm _emit 0x6f
        mov dword ptr [ebp - 1ed0h], 63h
        mov dword ptr [ebp - 1ed4h], 0
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ed8h], ecx
        lea edx, [ebp - 1ed0h]
        push edx
        lea eax, [ebp - 1ed4h]
        push eax
        lea ecx, [ebp - 1ed8h]
        push ecx
        ; Exact mapped bytes E8 F4 6B F9 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x6b
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x46cbf9
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 580h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 37ch
        mov dword ptr [eax + edx + 2e4h], 1
        ; Exact mapped bytes E9 20 02 00 00: jmp 0x46ce1e
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 580h]
        mov ecx, dword ptr [eax + 8e8h]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 0F 84 E7 01 00 00: je 0x46cdfb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
        cmp eax, 1
        ; Exact mapped bytes 0F 85 4E 01 00 00: jne 0x46cd74
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 85 78 FA FF FF 00 00: mov word ptr [ebp - 0x588], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 85 7A FA FF FF 00 00: mov word ptr [ebp - 0x586], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x7a
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 85 7C FA FF FF 00 00: mov word ptr [ebp - 0x584], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 580h]
        mov ecx, dword ptr [ecx + 8e8h]
        add ecx, 3ch
        ; Exact mapped bytes E8 7B D8 F9 FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xd8
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 58ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x46cc70
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 58ch]
        add edx, 1
        mov dword ptr [ebp - 58ch], edx
        mov eax, dword ptr [ebp - 580h]
        mov ecx, dword ptr [eax + 8e8h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 8e8h]
        mov ecx, dword ptr [ebp - 58ch]
        cmp ecx, dword ptr [eax + 38h]
        ; Exact mapped bytes 0F 8D C3 00 00 00: jge 0x46cd57
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 580h]
        mov eax, dword ptr [edx + 8e8h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 8e8h]
        mov eax, dword ptr [ebp - 58ch]
        imul eax, eax, 6
        mov ecx, dword ptr [edx + 34h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 14 01: mov dx, word ptr [ecx + eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x01
        cmp edx, 1
        ; Exact mapped bytes 75 14: jne 0x46ccd4
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 66 8B 85 78 FA FF FF: mov ax, word ptr [ebp - 0x588]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 05 01 00: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 85 78 FA FF FF: mov word ptr [ebp - 0x588], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 7E: jmp 0x46cd52
        __asm _emit 0xeb
        __asm _emit 0x7e
        mov ecx, dword ptr [ebp - 580h]
        mov edx, dword ptr [ecx + 8e8h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 8e8h]
        mov edx, dword ptr [ebp - 58ch]
        imul edx, edx, 6
        mov eax, dword ptr [ecx + 34h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0C 10: mov cx, word ptr [eax + edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x10
        cmp ecx, 2
        ; Exact mapped bytes 75 14: jne 0x46cd14
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 66 8B 95 7A FA FF FF: mov dx, word ptr [ebp - 0x586]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x7a
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 95 7A FA FF FF: mov word ptr [ebp - 0x586], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x7a
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 3E: jmp 0x46cd52
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 580h]
        mov ecx, dword ptr [eax + 8e8h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 8e8h]
        mov ecx, dword ptr [ebp - 58ch]
        imul ecx, ecx, 6
        mov edx, dword ptr [eax + 34h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 04 0A: mov ax, word ptr [edx + ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x0a
        cmp eax, 3
        ; Exact mapped bytes 75 12: jne 0x46cd52
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 66 8B 8D 7C FA FF FF: mov cx, word ptr [ebp - 0x584]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 8D 7C FA FF FF: mov word ptr [ebp - 0x584], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 0A FF FF FF: jmp 0x46cc61
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 6
        lea edx, [ebp - 588h]
        push edx
        mov eax, dword ptr [ebp - 580h]
        mov ecx, dword ptr [eax + 8e8h]
        add ecx, 3ch
        ; Exact mapped bytes E8 52 42 FA FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x42
        __asm _emit 0xfa
        __asm _emit 0xff
        push 37ch
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 18h
        push ecx
        mov edx, dword ptr [ebp - 580h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 37ch
        lea eax, [eax + edx + 224h]
        push eax
        ; Exact mapped bytes E8 78 C2 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xc2
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 37ch
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 18h
        push ecx
        mov edx, dword ptr [ebp - 580h]
        mov ecx, dword ptr [edx + 8e8h]
        add ecx, 3ch
        ; Exact mapped bytes E8 FB 41 FA FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x41
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0C: mov ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        cmp ecx, eax
        ; Exact mapped bytes 75 18: jne 0x46cdf9
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 580h]
        push ecx
        mov edx, dword ptr [ebp - 580h]
        mov ecx, dword ptr [edx + 8e8h]
        ; Exact mapped bytes E8 AE 2E 01 00: call 0x47fca7
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 23: jmp 0x46ce1e
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 580h]
        push eax
        mov ecx, dword ptr [ebp - 580h]
        mov ecx, dword ptr [ecx + 8e8h]
        ; Exact mapped bytes E8 FA 2D 01 00: call 0x47fc0d
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 580h]
        ; Exact mapped bytes E8 60 A8 FD FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xa8
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 FD 2A 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 77 22 FD FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x22
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 590h], eax
        cmp dword ptr [ebp - 590h], 0
        ; Exact mapped bytes 0F 84 37 04 00 00: je 0x46d27f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        cmp edx, 1
        ; Exact mapped bytes 75 6F: jne 0x46cec5
        __asm _emit 0x75
        __asm _emit 0x6f
        mov dword ptr [ebp - 1edch], 63h
        mov dword ptr [ebp - 1ee0h], 0
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ee4h], ecx
        lea edx, [ebp - 1edch]
        push edx
        lea eax, [ebp - 1ee0h]
        push eax
        lea ecx, [ebp - 1ee4h]
        push ecx
        ; Exact mapped bytes E8 2D 69 F9 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x69
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x46cec0
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 590h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        mov dword ptr [eax + edx + 16bdch], 1
        ; Exact mapped bytes E9 BA 03 00 00: jmp 0x46d27f
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 590h]
        mov ecx, dword ptr [eax + 8e8h]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 0F 84 81 03 00 00: je 0x46d25c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
        cmp eax, 1
        ; Exact mapped bytes 0F 85 4E 01 00 00: jne 0x46d03b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 85 08 F5 FF FF 00 00: mov word ptr [ebp - 0xaf8], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 85 0A F5 FF FF 00 00: mov word ptr [ebp - 0xaf6], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 85 0C F5 FF FF 00 00: mov word ptr [ebp - 0xaf4], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 590h]
        mov ecx, dword ptr [ecx + 8e8h]
        add ecx, 3ch
        ; Exact mapped bytes E8 B4 D5 F9 FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xd5
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0afch], 0
        ; Exact mapped bytes EB 0F: jmp 0x46cf37
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0afch]
        add edx, 1
        mov dword ptr [ebp - 0afch], edx
        mov eax, dword ptr [ebp - 590h]
        mov ecx, dword ptr [eax + 8e8h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 8e8h]
        mov ecx, dword ptr [ebp - 0afch]
        cmp ecx, dword ptr [eax + 38h]
        ; Exact mapped bytes 0F 8D C3 00 00 00: jge 0x46d01e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 590h]
        mov eax, dword ptr [edx + 8e8h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 8e8h]
        mov eax, dword ptr [ebp - 0afch]
        imul eax, eax, 6
        mov ecx, dword ptr [edx + 34h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 14 01: mov dx, word ptr [ecx + eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x01
        cmp edx, 1
        ; Exact mapped bytes 75 14: jne 0x46cf9b
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 66 8B 85 08 F5 FF FF: mov ax, word ptr [ebp - 0xaf8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 05 01 00: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 85 08 F5 FF FF: mov word ptr [ebp - 0xaf8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 7E: jmp 0x46d019
        __asm _emit 0xeb
        __asm _emit 0x7e
        mov ecx, dword ptr [ebp - 590h]
        mov edx, dword ptr [ecx + 8e8h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 8e8h]
        mov edx, dword ptr [ebp - 0afch]
        imul edx, edx, 6
        mov eax, dword ptr [ecx + 34h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0C 10: mov cx, word ptr [eax + edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x10
        cmp ecx, 2
        ; Exact mapped bytes 75 14: jne 0x46cfdb
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 66 8B 95 0A F5 FF FF: mov dx, word ptr [ebp - 0xaf6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x0a
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 95 0A F5 FF FF: mov word ptr [ebp - 0xaf6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x0a
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 3E: jmp 0x46d019
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 590h]
        mov ecx, dword ptr [eax + 8e8h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 8e8h]
        mov ecx, dword ptr [ebp - 0afch]
        imul ecx, ecx, 6
        mov edx, dword ptr [eax + 34h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 04 0A: mov ax, word ptr [edx + ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x0a
        cmp eax, 3
        ; Exact mapped bytes 75 12: jne 0x46d019
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 66 8B 8D 0C F5 FF FF: mov cx, word ptr [ebp - 0xaf4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 8D 0C F5 FF FF: mov word ptr [ebp - 0xaf4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 0A FF FF FF: jmp 0x46cf28
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 6
        lea edx, [ebp - 0af8h]
        push edx
        mov eax, dword ptr [ebp - 590h]
        mov ecx, dword ptr [eax + 8e8h]
        add ecx, 3ch
        ; Exact mapped bytes E8 8B 3F FA FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x3f
        __asm _emit 0xfa
        __asm _emit 0xff
        push 500h
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 18h
        push ecx
        lea edx, [ebp - 0a90h]
        push edx
        ; Exact mapped bytes E8 CD BF 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 590h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        imul eax, eax, 370h
        mov edx, dword ptr [ebp - 724h]
        mov dword ptr [ecx + eax + 16bdch], edx
        mov eax, dword ptr [ebp - 590h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        imul eax, eax, 370h
        lea edi, [ecx + eax + 16be0h]
        mov ecx, 17h
        lea esi, [ebp - 0a90h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 590h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        lea edi, [edx + ecx + 16c3ch]
        mov ecx, 33h
        lea esi, [ebp - 0a34h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        push 140h
        lea edx, [ebp - 966h]
        push edx
        mov eax, dword ptr [ebp - 590h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        imul eax, eax, 370h
        lea ecx, [ecx + eax + 16d0ah]
        push ecx
        ; Exact mapped bytes E8 0E BF 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 80h
        lea edx, [ebp - 7a4h]
        push edx
        mov eax, dword ptr [ebp - 590h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        imul eax, eax, 370h
        lea ecx, [ecx + eax + 16e4ch]
        push ecx
        ; Exact mapped bytes E8 D7 BE 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xbe
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, 17h
        lea esi, [ebp - 0a90h]
        lea edi, [ebp - 0af0h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        push 5ch
        lea edx, [ebp - 0af0h]
        push edx
        mov eax, dword ptr [ebp - 590h]
        mov ecx, dword ptr [eax + 8e8h]
        add ecx, 3ch
        ; Exact mapped bytes E8 4A 3E FA FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x3e
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 0a94h], 0
        ; Exact mapped bytes EB 0F: jmp 0x46d197
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0a94h]
        add ecx, 1
        mov dword ptr [ebp - 0a94h], ecx
        cmp dword ptr [ebp - 0a94h], 20h
        ; Exact mapped bytes 0F 8D 88 00 00 00: jge 0x46d22c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0a94h]
        imul edx, edx, 0ah
        ; Exact mapped bytes 66 8B 84 15 9A F6 FF FF: mov ax, word ptr [ebp + edx - 0x966]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x9a
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 5
        ; Exact mapped bytes 74 40: je 0x46d203
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 0a94h]
        imul ecx, ecx, 0ah
        ; Exact mapped bytes 66 8B 94 0D 9A F6 FF FF: mov dx, word ptr [ebp + ecx - 0x966]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x0d
        __asm _emit 0x9a
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        cmp edx, 6
        ; Exact mapped bytes 74 20: je 0x46d203
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 0a94h]
        imul eax, eax, 0ah
        ; Exact mapped bytes 66 8B 8C 05 9A F6 FF FF: mov cx, word ptr [ebp + eax - 0x966]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0x9a
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 0dh
        ; Exact mapped bytes 75 24: jne 0x46d227
        __asm _emit 0x75
        __asm _emit 0x24
        push 0ah
        mov edx, dword ptr [ebp - 0a94h]
        imul edx, edx, 0ah
        lea eax, [ebp + edx - 966h]
        push eax
        mov ecx, dword ptr [ebp - 1f08h]
        add ecx, 1a4h
        ; Exact mapped bytes E8 9F 3D FA FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x3d
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 5C FF FF FF: jmp 0x46d188
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0E: mov dx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        cmp edx, ecx
        ; Exact mapped bytes 75 18: jne 0x46d25a
        __asm _emit 0x75
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 590h]
        push edx
        mov eax, dword ptr [ebp - 590h]
        mov ecx, dword ptr [eax + 8e8h]
        ; Exact mapped bytes E8 4D 2A 01 00: call 0x47fca7
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 23: jmp 0x46d27f
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 590h]
        push ecx
        mov edx, dword ptr [ebp - 590h]
        mov ecx, dword ptr [edx + 8e8h]
        ; Exact mapped bytes E8 99 29 01 00: call 0x47fc0d
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 590h]
        ; Exact mapped bytes E8 FF A3 FD FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xa3
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 9C 26 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 8E 40 F9 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x40
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0ec4h]
        mov dword ptr [ebp - 0b00h], ecx
        cmp dword ptr [ebp - 0b00h], 0
        ; Exact mapped bytes 74 2B: je 0x46d2d2
        __asm _emit 0x74
        __asm _emit 0x2b
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 8002d020h
        mov ecx, dword ptr [ebp - 0b00h]
        ; Exact mapped bytes E8 60 9F 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 49 26 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        push 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 0cdch]
        push ecx
        ; Exact mapped bytes E8 37 BD 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 0ech
        push 0
        lea edx, [ebp - 0cd4h]
        push edx
        ; Exact mapped bytes E8 71 C0 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 74h
        push 0
        lea eax, [ebp - 0ba8h]
        push eax
        ; Exact mapped bytes E8 5E C0 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        push 0
        lea ecx, [ebp - 0be8h]
        push ecx
        ; Exact mapped bytes E8 4B C0 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 1ch
        push 0
        lea edx, [ebp - 0b34h]
        push edx
        ; Exact mapped bytes E8 38 C0 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        push 0
        lea eax, [ebp - 0b18h]
        push eax
        ; Exact mapped bytes E8 25 C0 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 1ch
        push 0
        lea ecx, [ebp - 0bc4h]
        push ecx
        ; Exact mapped bytes E8 12 C0 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0bcch], 0
        mov dword ptr [ebp - 0bd0h], 0
        mov dword ptr [ebp - 0bc8h], 0
        mov edx, dword ptr [ebp - 0bc8h]
        add edx, 8
        mov dword ptr [ebp - 0bc8h], edx
        mov dword ptr [ebp - 0bcch], 0
        ; Exact mapped bytes EB 0F: jmp 0x46d3a9
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0bcch]
        add eax, 1
        mov dword ptr [ebp - 0bcch], eax
        mov ecx, dword ptr [ebp - 0bcch]
        cmp ecx, dword ptr [ebp - 0cdch]
        ; Exact mapped bytes 0F 83 F5 00 00 00: jae 0x46d4b0
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ech
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 0bc8h]
        push edx
        lea eax, [ebp - 0cd4h]
        push eax
        ; Exact mapped bytes E8 4A BC 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xbc
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0bc8h]
        add ecx, 0ech
        mov dword ptr [ebp - 0bc8h], ecx
        cmp dword ptr [ebp - 0cd4h], 0
        ; Exact mapped bytes 74 11: je 0x46d405
        __asm _emit 0x74
        __asm _emit 0x11
        lea edx, [ebp - 0cd4h]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 4B 01 FB FF: call 0x41d550
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0bd0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x46d420
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0bd0h]
        add eax, 1
        mov dword ptr [ebp - 0bd0h], eax
        mov ecx, dword ptr [ebp - 0bech]
        and ecx, 0ffffh
        cmp dword ptr [ebp - 0bd0h], ecx
        ; Exact mapped bytes 7D 77: jge 0x46d4ab
        __asm _emit 0x7d
        __asm _emit 0x77
        push 18h
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 0bc8h]
        push edx
        lea eax, [ebp - 0be8h]
        push eax
        ; Exact mapped bytes E8 D4 BB 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0bc8h]
        add ecx, 18h
        mov dword ptr [ebp - 0bc8h], ecx
        mov esi, esp
        lea edx, [ebp - 0be8h]
        push edx
        lea eax, [ebp - 0b34h]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 65 B3 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xb3
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 0b1ch], 0
        cmp dword ptr [ebp - 0cd4h], 0
        ; Exact mapped bytes 74 18: je 0x46d4a6
        __asm _emit 0x74
        __asm _emit 0x18
        lea ecx, [ebp - 0b34h]
        push ecx
        mov edx, dword ptr [ebp - 0cd4h]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 77 03 FB FF: call 0x41d81d
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x03
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes E9 66 FF FF FF: jmp 0x46d411
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 EA FE FF FF: jmp 0x46d39a
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0bcch], 0
        ; Exact mapped bytes EB 0F: jmp 0x46d4cb
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0bcch]
        add eax, 1
        mov dword ptr [ebp - 0bcch], eax
        mov ecx, dword ptr [ebp - 0bcch]
        cmp ecx, dword ptr [ebp - 0cd8h]
        ; Exact mapped bytes 0F 83 EF 00 00 00: jae 0x46d5cc
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 74h
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 0bc8h]
        push edx
        lea eax, [ebp - 0ba8h]
        push eax
        ; Exact mapped bytes E8 2B BB 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0bc8h]
        add ecx, 74h
        mov dword ptr [ebp - 0bc8h], ecx
        cmp dword ptr [ebp - 0ba8h], 0
        ; Exact mapped bytes 74 11: je 0x46d521
        __asm _emit 0x74
        __asm _emit 0x11
        lea edx, [ebp - 0ba8h]
        push edx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 77 7A 00 00: call 0x474f98
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0bd0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x46d53c
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0bd0h]
        add eax, 1
        mov dword ptr [ebp - 0bd0h], eax
        mov ecx, dword ptr [ebp - 0b38h]
        and ecx, 0ffffh
        cmp dword ptr [ebp - 0bd0h], ecx
        ; Exact mapped bytes 7D 77: jge 0x46d5c7
        __asm _emit 0x7d
        __asm _emit 0x77
        push 18h
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 0bc8h]
        push edx
        lea eax, [ebp - 0b18h]
        push eax
        ; Exact mapped bytes E8 B8 BA 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0bc8h]
        add ecx, 18h
        mov dword ptr [ebp - 0bc8h], ecx
        mov esi, esp
        lea edx, [ebp - 0b18h]
        push edx
        lea eax, [ebp - 0bc4h]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 49 B2 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xb2
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 0bach], 0
        cmp dword ptr [ebp - 0ba8h], 0
        ; Exact mapped bytes 74 18: je 0x46d5c2
        __asm _emit 0x74
        __asm _emit 0x18
        lea ecx, [ebp - 0bc4h]
        push ecx
        mov edx, dword ptr [ebp - 0ba8h]
        push edx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 9B 7B 00 00: call 0x47515d
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 66 FF FF FF: jmp 0x46d52d
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F0 FE FF FF: jmp 0x46d4bc
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        push 477h
        mov ecx, dword ptr [ebp - 1f08h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 2C 63 F9 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x63
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes E9 37 23 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 32 23 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 0ce0h], 0
        mov dword ptr [ebp - 0cfch], 0
        push 18h
        push 0
        lea eax, [ebp - 0cf8h]
        push eax
        ; Exact mapped bytes E8 61 BD 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 1
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 0ce0h]
        push edx
        ; Exact mapped bytes E8 FC B9 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 0cfch]
        add eax, 1
        mov dword ptr [ebp - 0cfch], eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 0cfch]
        mov esi, esp
        push ecx
        push 5bb0f0h
        lea edx, [ebp - 0cf8h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 82 B1 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xb1
        __asm _emit 0x03
        __asm _emit 0x00
        mov byte ptr [ebp - 0ce1h], 0
        mov esi, esp
        lea eax, [ebp - 0cf8h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 65 B1 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xb1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0cfch]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 0cfch], edx
        lea eax, [ebp - 0cf8h]
        push eax
        mov ecx, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 0C 1A FD FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x1a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0d00h], eax
        cmp dword ptr [ebp - 0d00h], 0
        ; Exact mapped bytes 0F 84 BA 00 00 00: je 0x46d76d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ce0h]
        and edx, 0ffh
        cmp edx, 1
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x46d749
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 800h
        push 0
        lea eax, [ebp - 1500h]
        push eax
        ; Exact mapped bytes E8 95 BC 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xbc
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 0cfch]
        mov esi, esp
        push ecx
        push 5bb0f4h
        lea edx, [ebp - 1500h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 DA B0 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xb0
        __asm _emit 0x03
        __asm _emit 0x00
        push 0
        mov esi, esp
        lea eax, [ebp - 1500h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C2 B0 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xb0
        __asm _emit 0x03
        __asm _emit 0x00
        add eax, 1
        push eax
        lea ecx, [ebp - 1500h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 80020f07h
        mov ecx, dword ptr [ebp - 0d00h]
        ; Exact mapped bytes E8 EB 9A 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 24: jmp 0x46d76d
        __asm _emit 0xeb
        __asm _emit 0x24
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        push 80020f07h
        mov ecx, dword ptr [ebp - 0d00h]
        ; Exact mapped bytes E8 C5 9A 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 AE 21 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A9 21 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 10h], 31h
        ; Exact mapped bytes 74 05: je 0x46d785
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 9B 21 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 1504h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 1508h], edx
        push 31h
        push 0
        lea eax, [ebp - 1540h]
        push eax
        ; Exact mapped bytes E8 C3 BB 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 31h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 1540h]
        push edx
        ; Exact mapped bytes E8 5E B8 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 1528h], 0
        mov byte ptr [ebp - 1510h], 0
        lea eax, [ebp - 153fh]
        push eax
        mov ecx, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 C4 18 FD FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x18
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 150ch], eax
        mov edx, dword ptr [ebp - 1540h]
        and edx, 0ffh
        cmp edx, 1
        ; Exact mapped bytes 0F 85 86 03 00 00: jne 0x46db89
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1508h], 0
        ; Exact mapped bytes 0F 85 BE 01 00 00: jne 0x46d9ce
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1ch
        push 0
        lea eax, [ebp - 155ch]
        push eax
        ; Exact mapped bytes E8 50 BB 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov esi, esp
        lea ecx, [ebp - 1527h]
        push ecx
        lea edx, [ebp - 155ch]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A0 AF 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xaf
        __asm _emit 0x03
        __asm _emit 0x00
        lea eax, [ebp - 1527h]
        push eax
        mov ecx, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 57 18 FD FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x18
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 1544h], eax
        lea edx, [ebp - 155ch]
        push edx
        mov eax, dword ptr [ebp - 1504h]
        push eax
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 AA FF FA FF: call 0x41d81d
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 4D 01 00 00: jne 0x46d9c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1544h], 0
        ; Exact mapped bytes 0F 84 AC 00 00 00: je 0x46d935
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 15e0h]
        push ecx
        mov edx, dword ptr [ebp - 1504h]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 AE 01 FB FF: call 0x41da4f
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1544h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 15e0h]
        mov dword ptr [ecx + 54h], edx
        mov eax, dword ptr [ebp - 1544h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 15dch]
        mov dword ptr [ecx + 58h], edx
        mov eax, dword ptr [ebp - 1544h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 15d8h]
        mov dword ptr [ecx + 60h], edx
        mov esi, esp
        lea eax, [ebp - 15bch]
        push eax
        mov ecx, dword ptr [ebp - 1544h]
        mov edx, dword ptr [ecx + 168h]
        add edx, 64h
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 DA AE 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xae
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1544h]
        mov ecx, dword ptr [eax + 168h]
        ; Exact mapped bytes 66 C7 41 5C 04 00: mov word ptr [ecx + 0x5c], 4
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        push 1
        mov edx, dword ptr [ebp - 1544h]
        push edx
        mov eax, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 80 4D 01 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 150ch], 0
        ; Exact mapped bytes 74 41: je 0x46d97f
        __asm _emit 0x74
        __asm _emit 0x41
        push 0
        mov esi, esp
        lea edx, [ebp - 1527h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8A AE 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xae
        __asm _emit 0x03
        __asm _emit 0x00
        add eax, 1
        push eax
        lea eax, [ebp - 1527h]
        push eax
        mov ecx, dword ptr [ebp - 1508h]
        push ecx
        mov edx, dword ptr [ebp - 1504h]
        push edx
        push 80020f09h
        mov ecx, dword ptr [ebp - 150ch]
        ; Exact mapped bytes E8 B3 98 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, esp
        lea eax, [ebp - 1527h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4B AE 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xae
        __asm _emit 0x03
        __asm _emit 0x00
        add eax, 1
        push eax
        lea ecx, [ebp - 1527h]
        push ecx
        mov edx, dword ptr [ebp - 1508h]
        push edx
        mov eax, dword ptr [ebp - 1504h]
        push eax
        push 80020f09h
        mov ecx, dword ptr [ebp - 1504h]
        push ecx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 36 07 FB FF: call 0x41e0fa
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x07
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes E9 57 1F 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B9 01 00 00: jmp 0x46db87
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1ch
        push 0
        lea edx, [ebp - 15fch]
        push edx
        ; Exact mapped bytes E8 92 B9 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov esi, esp
        lea eax, [ebp - 1527h]
        push eax
        lea ecx, [ebp - 15fch]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E2 AD 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xad
        __asm _emit 0x03
        __asm _emit 0x00
        lea edx, [ebp - 1527h]
        push edx
        mov eax, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 99 16 FD FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x16
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 15e4h], eax
        lea ecx, [ebp - 15fch]
        push ecx
        mov edx, dword ptr [ebp - 1508h]
        push edx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 2C 77 00 00: call 0x47515d
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 4D 01 00 00: jne 0x46db87
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 15e4h], 0
        ; Exact mapped bytes 0F 84 AC 00 00 00: je 0x46daf3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 1650h]
        push eax
        mov ecx, dword ptr [ebp - 1508h]
        push ecx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 91 77 00 00: call 0x4751f0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 15e4h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 1650h]
        mov dword ptr [eax + 54h], ecx
        mov edx, dword ptr [ebp - 15e4h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 164ch]
        mov dword ptr [eax + 58h], ecx
        mov edx, dword ptr [ebp - 15e4h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 1648h]
        mov dword ptr [eax + 60h], ecx
        mov esi, esp
        lea edx, [ebp - 162ch]
        push edx
        mov eax, dword ptr [ebp - 15e4h]
        mov ecx, dword ptr [eax + 168h]
        add ecx, 64h
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 1C AD 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xad
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 15e4h]
        mov eax, dword ptr [edx + 168h]
        ; Exact mapped bytes 66 C7 40 5C 01 00: mov word ptr [eax + 0x5c], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 15e4h]
        push ecx
        mov edx, dword ptr [ebp - 1f08h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 C2 4B 01 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 150ch], 0
        ; Exact mapped bytes 74 41: je 0x46db3d
        __asm _emit 0x74
        __asm _emit 0x41
        push 0
        mov esi, esp
        lea ecx, [ebp - 1527h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CC AC 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 1527h]
        push edx
        mov eax, dword ptr [ebp - 1508h]
        push eax
        mov ecx, dword ptr [ebp - 1504h]
        push ecx
        push 80020f09h
        mov ecx, dword ptr [ebp - 150ch]
        ; Exact mapped bytes E8 F5 96 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, esp
        lea edx, [ebp - 1527h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8D AC 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        add eax, 1
        push eax
        lea eax, [ebp - 1527h]
        push eax
        mov ecx, dword ptr [ebp - 1508h]
        push ecx
        mov edx, dword ptr [ebp - 1504h]
        push edx
        push 80020f09h
        mov eax, dword ptr [ebp - 1508h]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 4B 80 00 00: call 0x475bcd
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 99 1D 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2D: jmp 0x46dbb6
        __asm _emit 0xeb
        __asm _emit 0x2d
        cmp dword ptr [ebp - 150ch], 0
        ; Exact mapped bytes 74 24: je 0x46dbb6
        __asm _emit 0x74
        __asm _emit 0x24
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 1508h]
        push ecx
        mov edx, dword ptr [ebp - 1504h]
        push edx
        push 80020f09h
        mov ecx, dword ptr [ebp - 150ch]
        ; Exact mapped bytes E8 7C 96 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 65 1D 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 10h], 31h
        ; Exact mapped bytes 74 05: je 0x46dbc9
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 57 1D 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 1654h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 1658h], ecx
        push 31h
        push 0
        lea edx, [ebp - 1690h]
        push edx
        ; Exact mapped bytes E8 7F B7 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xb7
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 31h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 1690h]
        push ecx
        ; Exact mapped bytes E8 1A B4 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb4
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 1678h], 0
        mov byte ptr [ebp - 1660h], 0
        lea edx, [ebp - 168fh]
        push edx
        mov eax, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 80 14 FD FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 165ch], eax
        mov ecx, dword ptr [ebp - 1690h]
        and ecx, 0ffh
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 1A 03 00 00: jne 0x46df61
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1658h], 0
        ; Exact mapped bytes 0F 85 88 01 00 00: jne 0x46dddc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1ch
        push 0
        lea edx, [ebp - 16ach]
        push edx
        ; Exact mapped bytes E8 0C B7 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xb7
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov esi, esp
        lea eax, [ebp - 1677h]
        push eax
        lea ecx, [ebp - 16ach]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5C AB 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xab
        __asm _emit 0x03
        __asm _emit 0x00
        lea edx, [ebp - 1677h]
        push edx
        mov eax, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 13 14 FD FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 1694h], eax
        lea ecx, [ebp - 16ach]
        push ecx
        mov edx, dword ptr [ebp - 1654h]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 DC 04 FB FF: call 0x41e193
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 17 01 00 00: jne 0x46ddd7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1694h], 0
        ; Exact mapped bytes 74 7A: je 0x46dd43
        __asm _emit 0x74
        __asm _emit 0x7a
        push 24h
        push 0
        mov eax, dword ptr [ebp - 1694h]
        mov ecx, dword ptr [eax + 168h]
        add ecx, 54h
        push ecx
        ; Exact mapped bytes E8 8E B6 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xb6
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 1
        mov edx, dword ptr [ebp - 1694h]
        push edx
        mov eax, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 B3 49 01 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        mov esi, esp
        lea edx, [ebp - 1677h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C6 AA 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        add eax, 1
        push eax
        lea eax, [ebp - 1677h]
        push eax
        mov ecx, dword ptr [ebp - 1658h]
        push ecx
        mov edx, dword ptr [ebp - 1654h]
        push edx
        push 80020f0ah
        mov ecx, dword ptr [ebp - 1694h]
        ; Exact mapped bytes E8 EF 94 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 165ch], 0
        ; Exact mapped bytes 74 41: je 0x46dd8d
        __asm _emit 0x74
        __asm _emit 0x41
        push 0
        mov esi, esp
        lea eax, [ebp - 1677h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7C AA 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        add eax, 1
        push eax
        lea ecx, [ebp - 1677h]
        push ecx
        mov edx, dword ptr [ebp - 1658h]
        push edx
        mov eax, dword ptr [ebp - 1654h]
        push eax
        push 80020f0ah
        mov ecx, dword ptr [ebp - 165ch]
        ; Exact mapped bytes E8 A5 94 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, esp
        lea ecx, [ebp - 1677h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3D AA 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 1677h]
        push edx
        mov eax, dword ptr [ebp - 1658h]
        push eax
        mov ecx, dword ptr [ebp - 1654h]
        push ecx
        push 80020f0ah
        mov edx, dword ptr [ebp - 1654h]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 28 03 FB FF: call 0x41e0fa
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes E9 49 1B 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 83 01 00 00: jmp 0x46df5f
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1ch
        push 0
        lea eax, [ebp - 16c8h]
        push eax
        ; Exact mapped bytes E8 84 B5 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov esi, esp
        lea ecx, [ebp - 1677h]
        push ecx
        lea edx, [ebp - 16c8h]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D4 A9 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        lea eax, [ebp - 1677h]
        push eax
        mov ecx, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 8B 12 FD FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 16b0h], eax
        lea edx, [ebp - 16c8h]
        push edx
        mov eax, dword ptr [ebp - 1658h]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 31 7E 00 00: call 0x475c70
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 17 01 00 00: jne 0x46df5f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 16b0h], 0
        ; Exact mapped bytes 74 7A: je 0x46decb
        __asm _emit 0x74
        __asm _emit 0x7a
        push 24h
        push 0
        mov ecx, dword ptr [ebp - 16b0h]
        mov edx, dword ptr [ecx + 168h]
        add edx, 54h
        push edx
        ; Exact mapped bytes E8 06 B5 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 1
        mov eax, dword ptr [ebp - 16b0h]
        push eax
        mov ecx, dword ptr [ebp - 1f08h]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 2B 48 01 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        mov esi, esp
        lea eax, [ebp - 1677h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3E A9 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        add eax, 1
        push eax
        lea ecx, [ebp - 1677h]
        push ecx
        mov edx, dword ptr [ebp - 1658h]
        push edx
        mov eax, dword ptr [ebp - 1654h]
        push eax
        push 80020f0ah
        mov ecx, dword ptr [ebp - 16b0h]
        ; Exact mapped bytes E8 67 93 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 165ch], 0
        ; Exact mapped bytes 74 41: je 0x46df15
        __asm _emit 0x74
        __asm _emit 0x41
        push 0
        mov esi, esp
        lea ecx, [ebp - 1677h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F4 A8 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 1677h]
        push edx
        mov eax, dword ptr [ebp - 1658h]
        push eax
        mov ecx, dword ptr [ebp - 1654h]
        push ecx
        push 80020f0ah
        mov ecx, dword ptr [ebp - 165ch]
        ; Exact mapped bytes E8 1D 93 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, esp
        lea edx, [ebp - 1677h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B5 A8 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        add eax, 1
        push eax
        lea eax, [ebp - 1677h]
        push eax
        mov ecx, dword ptr [ebp - 1658h]
        push ecx
        mov edx, dword ptr [ebp - 1654h]
        push edx
        push 80020f0ah
        mov eax, dword ptr [ebp - 1658h]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 73 7C 00 00: call 0x475bcd
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C1 19 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2D: jmp 0x46df8e
        __asm _emit 0xeb
        __asm _emit 0x2d
        cmp dword ptr [ebp - 165ch], 0
        ; Exact mapped bytes 74 24: je 0x46df8e
        __asm _emit 0x74
        __asm _emit 0x24
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 1658h]
        push ecx
        mov edx, dword ptr [ebp - 1654h]
        push edx
        push 80020f0ah
        mov ecx, dword ptr [ebp - 165ch]
        ; Exact mapped bytes E8 A4 92 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 8D 19 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 10h], 1
        ; Exact mapped bytes 73 05: jae 0x46dfa1
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E9 7F 19 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 16e4h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 16e8h], ecx
        mov byte ptr [ebp - 16ech], 0
        push 1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 16ech]
        push eax
        ; Exact mapped bytes E8 4E B0 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xb0
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        push 0
        lea ecx, [ebp - 16e0h]
        push ecx
        ; Exact mapped bytes E8 8B B3 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xb3
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1
        mov esi, esp
        push edx
        push 5bb0f8h
        lea eax, [ebp - 16e0h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 D3 A7 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xa7
        __asm _emit 0x03
        __asm _emit 0x00
        mov byte ptr [ebp - 16c9h], 0
        lea ecx, [ebp - 16e0h]
        push ecx
        mov edx, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 83 10 FD FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x10
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 16f0h], eax
        mov eax, dword ptr [ebp - 16ech]
        and eax, 0ffh
        cmp eax, 1
        ; Exact mapped bytes 0F 85 10 03 00 00: jne 0x46e353
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 16e8h], 0
        ; Exact mapped bytes 0F 85 83 01 00 00: jne 0x46e1d3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1ch
        push 0
        lea ecx, [ebp - 170ch]
        push ecx
        ; Exact mapped bytes E8 10 B3 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xb3
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov esi, esp
        lea edx, [ebp - 16e0h]
        push edx
        lea eax, [ebp - 170ch]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 60 A7 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xa7
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 16e0h]
        push ecx
        mov edx, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 17 10 FD FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x10
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 16f4h], eax
        lea eax, [ebp - 170ch]
        push eax
        mov ecx, dword ptr [ebp - 16e4h]
        push ecx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 78 01 FB FF: call 0x41e22b
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 12 01 00 00: jne 0x46e1ce
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 16f4h], 0
        ; Exact mapped bytes 74 7A: je 0x46e13f
        __asm _emit 0x74
        __asm _emit 0x7a
        push 24h
        push 0
        mov edx, dword ptr [ebp - 16f4h]
        mov eax, dword ptr [edx + 168h]
        add eax, 54h
        push eax
        ; Exact mapped bytes E8 92 B2 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xb2
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 1
        mov ecx, dword ptr [ebp - 16f4h]
        push ecx
        mov edx, dword ptr [ebp - 1f08h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 B7 45 01 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        mov esi, esp
        lea ecx, [ebp - 16e0h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CA A6 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xa6
        __asm _emit 0x03
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 16e0h]
        push edx
        mov eax, dword ptr [ebp - 16e8h]
        push eax
        mov ecx, dword ptr [ebp - 16e4h]
        push ecx
        push 80020f0bh
        mov ecx, dword ptr [ebp - 16f4h]
        ; Exact mapped bytes E8 F3 90 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, esp
        lea edx, [ebp - 16e0h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8B A6 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xa6
        __asm _emit 0x03
        __asm _emit 0x00
        add eax, 1
        push eax
        lea eax, [ebp - 16e0h]
        push eax
        mov ecx, dword ptr [ebp - 16e8h]
        push ecx
        mov edx, dword ptr [ebp - 16e4h]
        push edx
        push 80020f0bh
        mov eax, dword ptr [ebp - 16e4h]
        push eax
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 C7 FA FA FF: call 0x41dc4b
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xfa
        __asm _emit 0xfa
        __asm _emit 0xff
        mov esi, esp
        lea ecx, [ebp - 16e0h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 46 A6 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xa6
        __asm _emit 0x03
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 16e0h]
        push edx
        mov eax, dword ptr [ebp - 16e8h]
        push eax
        mov ecx, dword ptr [ebp - 16e4h]
        push ecx
        push 80020f0bh
        mov edx, dword ptr [ebp - 16e4h]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 31 FF FA FF: call 0x41e0fa
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 52 17 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 7E 01 00 00: jmp 0x46e351
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1ch
        push 0
        lea eax, [ebp - 1728h]
        push eax
        ; Exact mapped bytes E8 8D B1 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xb1
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov esi, esp
        lea ecx, [ebp - 16e0h]
        push ecx
        lea edx, [ebp - 1728h]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 DD A5 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xa5
        __asm _emit 0x03
        __asm _emit 0x00
        lea eax, [ebp - 16e0h]
        push eax
        mov ecx, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 94 0E FD FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x0e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 1710h], eax
        lea edx, [ebp - 1728h]
        push edx
        mov eax, dword ptr [ebp - 16e8h]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 D2 7A 00 00: call 0x475d08
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 12 01 00 00: jne 0x46e351
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1710h], 0
        ; Exact mapped bytes 74 7A: je 0x46e2c2
        __asm _emit 0x74
        __asm _emit 0x7a
        push 24h
        push 0
        mov ecx, dword ptr [ebp - 1710h]
        mov edx, dword ptr [ecx + 168h]
        add edx, 54h
        push edx
        ; Exact mapped bytes E8 0F B1 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xb1
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 1
        mov eax, dword ptr [ebp - 1710h]
        push eax
        mov ecx, dword ptr [ebp - 1f08h]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 34 44 01 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        mov esi, esp
        lea eax, [ebp - 16e0h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 47 A5 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xa5
        __asm _emit 0x03
        __asm _emit 0x00
        add eax, 1
        push eax
        lea ecx, [ebp - 16e0h]
        push ecx
        mov edx, dword ptr [ebp - 16e8h]
        push edx
        mov eax, dword ptr [ebp - 16e4h]
        push eax
        push 80020f0bh
        mov ecx, dword ptr [ebp - 1710h]
        ; Exact mapped bytes E8 70 8F 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, esp
        lea ecx, [ebp - 16e0h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 08 A5 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xa5
        __asm _emit 0x03
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 16e0h]
        push edx
        mov eax, dword ptr [ebp - 16e8h]
        push eax
        mov ecx, dword ptr [ebp - 16e4h]
        push ecx
        push 80020f0bh
        mov edx, dword ptr [ebp - 16e8h]
        push edx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 3D 70 00 00: call 0x475344
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        lea eax, [ebp - 16e0h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C3 A4 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xa4
        __asm _emit 0x03
        __asm _emit 0x00
        add eax, 1
        push eax
        lea ecx, [ebp - 16e0h]
        push ecx
        mov edx, dword ptr [ebp - 16e8h]
        push edx
        mov eax, dword ptr [ebp - 16e4h]
        push eax
        push 80020f0bh
        mov ecx, dword ptr [ebp - 16e8h]
        push ecx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 81 78 00 00: call 0x475bcd
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 CF 15 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 6C: jmp 0x46e3bf
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov edx, dword ptr [ebp - 16ech]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 75 2F: jne 0x46e392
        __asm _emit 0x75
        __asm _emit 0x2f
        cmp dword ptr [ebp - 16f0h], 0
        ; Exact mapped bytes 74 24: je 0x46e390
        __asm _emit 0x74
        __asm _emit 0x24
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 16e8h]
        push eax
        mov ecx, dword ptr [ebp - 16e4h]
        push ecx
        push 80020f0bh
        mov ecx, dword ptr [ebp - 16f0h]
        ; Exact mapped bytes E8 A2 8E 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 2D: jmp 0x46e3bf
        __asm _emit 0xeb
        __asm _emit 0x2d
        cmp dword ptr [ebp - 16f0h], 0
        ; Exact mapped bytes 74 24: je 0x46e3bf
        __asm _emit 0x74
        __asm _emit 0x24
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 16e8h]
        push edx
        mov eax, dword ptr [ebp - 16e4h]
        push eax
        push 80020f0bh
        mov ecx, dword ptr [ebp - 16f0h]
        ; Exact mapped bytes E8 73 8E 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 5C 15 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 57 15 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ech
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 1814h]
        push edx
        ; Exact mapped bytes E8 42 AC 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 18ech]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 56 F6 FA FF: call 0x41da4f
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf6
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 54 02 00 00: je 0x46e655
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1892h]
        and eax, 0ffh
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp + eax*8 - 1804h], edx
        mov eax, dword ptr [ebp - 1892h]
        and eax, 0ffh
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp + eax*8 - 1800h], edx
        mov dword ptr [ebp - 18fch], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 18f8h], ecx
        mov edx, dword ptr [ebp - 1892h]
        and edx, 0ffh
        mov eax, dword ptr [ebp + edx*8 - 1804h]
        mov dword ptr [ebp - 18f4h], eax
        mov ecx, dword ptr [ebp - 1892h]
        and ecx, 0ffh
        mov edx, dword ptr [ebp + ecx*8 - 1800h]
        mov dword ptr [ebp - 18f0h], edx
        mov eax, dword ptr [ebp - 1892h]
        and eax, 0ffh
        mov ecx, dword ptr [ebp - 1892h]
        and ecx, 0ffh
        mov edx, dword ptr [ebp + eax*8 - 1804h]
        mov dword ptr [ebp + ecx*8 - 1890h], edx
        mov eax, dword ptr [ebp - 1892h]
        and eax, 0ffh
        mov ecx, dword ptr [ebp - 1892h]
        and ecx, 0ffh
        mov edx, dword ptr [ebp + eax*8 - 1800h]
        mov dword ptr [ebp + ecx*8 - 188ch], edx
        lea eax, [ebp - 1814h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 81 ED FA FF: call 0x41d25c
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xed
        __asm _emit 0xfa
        __asm _emit 0xff
        lea eax, [ebp - 1868h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 FD 6C 00 00: call 0x4751f0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 5A 01 00 00: je 0x46e655
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18e4h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 90 70 00 00: call 0x4755a3
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 1868h], ecx
        mov edx, dword ptr [ebp - 18e4h]
        mov dword ptr [ebp - 1860h], edx
        lea eax, [ebp - 1868h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 B4 69 00 00: call 0x474ef7
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 0A 01 00 00: je 0x46e655
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18e4h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 D6 75 00 00: call 0x475b40
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18e4h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 72 6E 00 00: call 0x4753fb
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        lea ecx, [ebp - 18fch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 80020f0dh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 95 F6 FA FF: call 0x41dc4b
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xf6
        __asm _emit 0xfa
        __asm _emit 0xff
        push 10h
        lea edx, [ebp - 18fch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        push 80020f0dh
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 17 FB FA FF: call 0x41e0fa
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xfb
        __asm _emit 0xfa
        __asm _emit 0xff
        push 10h
        lea eax, [ebp - 18fch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 80020f0dh
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 34 6D 00 00: call 0x475344
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        lea ecx, [ebp - 18fch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 80020f0dh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 90 75 00 00: call 0x475bcd
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 07 70 00 00: call 0x47565c
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C6 12 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 1900h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 1904h], eax
        lea ecx, [ebp - 1988h]
        push ecx
        mov edx, dword ptr [ebp - 1900h]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 C5 F3 FA FF: call 0x41da4f
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xf3
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [ebp - 1904h], 0
        ; Exact mapped bytes 74 18: je 0x46e6ab
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 1904h]
        push eax
        mov ecx, dword ptr [ebp - 1900h]
        push ecx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 0C EE FA FF: call 0x41d4b7
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xee
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [ebp - 1900h], 0
        ; Exact mapped bytes 0F 84 8B 01 00 00: je 0x46e843
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 E2 09 FD FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x09
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 198ch], eax
        cmp dword ptr [ebp - 198ch], 0
        ; Exact mapped bytes 0F 84 64 01 00 00: je 0x46e841
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1904h], 0
        ; Exact mapped bytes 0F 85 B3 00 00 00: jne 0x46e79d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 198ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 198ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [edx + 60h]
        mov dword ptr [ecx + 60h], edx
        mov eax, dword ptr [ebp - 198ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 18h]
        sub edx, 0f4240h
        mov eax, dword ptr [ebp - 198ch]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 18h], edx
        push 1
        mov edx, dword ptr [ebp - 198ch]
        push edx
        mov eax, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 6C 3F 01 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 198ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp - 198ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        push 80025000h
        mov ecx, dword ptr [ebp - 198ch]
        ; Exact mapped bytes E8 B3 8A 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 46ch
        mov ecx, dword ptr [ebp - 198ch]
        ; Exact mapped bytes E8 BF 51 F9 FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 78 51 F9 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x51
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x46e81e
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 198ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 1904h]
        mov dword ptr [eax + 60h], ecx
        push 1
        mov edx, dword ptr [ebp - 198ch]
        push edx
        mov eax, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 E6 3E 01 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 1990h], 0
        ; Exact mapped bytes EB 0F: jmp 0x46e7ea
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 1990h]
        add edx, 1
        mov dword ptr [ebp - 1990h], edx
        mov eax, dword ptr [ebp - 192eh]
        and eax, 0ffh
        cmp dword ptr [ebp - 1990h], eax
        ; Exact mapped bytes 7D 21: jge 0x46e81e
        __asm _emit 0x7d
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 1904h]
        push ecx
        mov edx, dword ptr [ebp - 1990h]
        mov eax, dword ptr [ebp + edx*8 - 1928h]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 82 77 00 00: call 0x475f9e
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB BD: jmp 0x46e7db
        __asm _emit 0xeb
        __asm _emit 0xbd
        push 0
        push 0
        push 1
        mov ecx, dword ptr [ebp - 1900h]
        push ecx
        push 80020fa1h
        mov edx, dword ptr [ebp - 1900h]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 0A F4 FA FF: call 0x41dc4b
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xf4
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 23: jmp 0x46e866
        __asm _emit 0xeb
        __asm _emit 0x23
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 1900h]
        push eax
        push 80020fa1h
        mov ecx, dword ptr [ebp - 1900h]
        push ecx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 E5 F3 FA FF: call 0x41dc4b
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf3
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 B5 10 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        add eax, 1
        mov dword ptr [ebp - 199ch], eax
        push 3e7h
        push 5bb080h
        mov ecx, dword ptr [ebp - 199ch]
        push ecx
        ; Exact mapped bytes E8 A3 E7 07 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xe7
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1ee8h], eax
        mov edx, dword ptr [ebp - 1ee8h]
        mov dword ptr [ebp - 1994h], edx
        mov eax, dword ptr [ebp - 199ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 1994h]
        push ecx
        ; Exact mapped bytes E8 B6 AA 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 1994h]
        push edx
        ; Exact mapped bytes E8 4C A7 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xa7
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 1994h]
        push eax
        mov ecx, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 C0 07 FD FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x07
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 1998h], eax
        cmp dword ptr [ebp - 1998h], 0
        ; Exact mapped bytes 74 54: je 0x46e94f
        __asm _emit 0x74
        __asm _emit 0x54
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 34: je 0x46e935
        __asm _emit 0x74
        __asm _emit 0x34
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 10h]
        sub ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 0
        push 80020fa3h
        mov ecx, dword ptr [ebp - 1998h]
        ; Exact mapped bytes E8 FF 88 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x46e94f
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020fa3h
        mov ecx, dword ptr [ebp - 1998h]
        ; Exact mapped bytes E8 E3 88 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1994h]
        mov dword ptr [ebp - 1eech], eax
        mov ecx, dword ptr [ebp - 1eech]
        push ecx
        ; Exact mapped bytes E8 A2 EA 07 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xea
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E9 B1 0F 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 29 EF FA FF: call 0x41d8b0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xef
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 44 01 00 00: je 0x46ead3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 1a00h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 49 68 00 00: call 0x4751f0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 24 01 00 00: je 0x46ead3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1a00h], 0
        mov dword ptr [ebp - 19f8h], 0
        lea eax, [ebp - 1a00h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 1C 65 00 00: call 0x474ef7
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 F0 00 00 00: je 0x46ead3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 19ach], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 19a8h], eax
        mov dword ptr [ebp - 19a4h], 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 19a0h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 99 70 00 00: call 0x475abb
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 A6 6A 00 00: call 0x4754d9
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        lea ecx, [ebp - 19ach]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        push 80020f0eh
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 F0 F1 FA FF: call 0x41dc4b
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xf1
        __asm _emit 0xfa
        __asm _emit 0xff
        push 10h
        lea eax, [ebp - 19ach]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 80020f0eh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 77 F6 FA FF: call 0x41e0fa
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xf6
        __asm _emit 0xfa
        __asm _emit 0xff
        push 10h
        lea edx, [ebp - 19ach]
        push edx
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 80020f0eh
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 99 68 00 00: call 0x475344
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        lea ecx, [ebp - 19ach]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        push 80020f0eh
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 FA 70 00 00: call 0x475bcd
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 48 0E 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [eax + 48h]
        cmp dword ptr [ecx + 40ce8h], 0
        ; Exact mapped bytes 0F 84 F2 00 00 00: je 0x46ebe0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1f08h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40ce8h]
        mov dword ptr [ebp - 1ef4h], ecx
        mov edx, dword ptr [ebp - 1ef4h]
        mov dword ptr [ebp - 1ef0h], edx
        cmp dword ptr [ebp - 1ef0h], 0
        ; Exact mapped bytes 74 23: je 0x46eb3b
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 1ef0h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1ef0h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 AD 9C 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 1f20h], eax
        ; Exact mapped bytes EB 0A: jmp 0x46eb45
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f20h], 0
        push 432h
        push 5bb080h
        push 24h
        ; Exact mapped bytes E8 DD E4 07 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1efch], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1efch], 0
        ; Exact mapped bytes 74 18: je 0x46eb87
        __asm _emit 0x74
        __asm _emit 0x18
        push 9c40h
        mov ecx, dword ptr [ebp - 1efch]
        ; Exact mapped bytes E8 11 23 FA FF: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x23
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 1f24h], eax
        ; Exact mapped bytes EB 0A: jmp 0x46eb91
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f24h], 0
        mov eax, dword ptr [ebp - 1f24h]
        mov dword ptr [ebp - 1ef8h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 1f08h]
        mov edx, dword ptr [ecx + 48h]
        mov eax, dword ptr [ebp - 1ef8h]
        mov dword ptr [edx + 40ce8h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        shl edx, 4
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 1f08h]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40ce8h]
        ; Exact mapped bytes E8 EB 23 FA FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x23
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x46ec76
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 438h
        push 5bb080h
        push 24h
        ; Exact mapped bytes E8 42 E4 07 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1f04h], eax
        mov dword ptr [ebp - 4], 3
        cmp dword ptr [ebp - 1f04h], 0
        ; Exact mapped bytes 74 18: je 0x46ec22
        __asm _emit 0x74
        __asm _emit 0x18
        push 9c40h
        mov ecx, dword ptr [ebp - 1f04h]
        ; Exact mapped bytes E8 76 22 FA FF: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x22
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 1f28h], eax
        ; Exact mapped bytes EB 0A: jmp 0x46ec2c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f28h], 0
        mov eax, dword ptr [ebp - 1f28h]
        mov dword ptr [ebp - 1f00h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 1f08h]
        mov edx, dword ptr [ecx + 48h]
        mov eax, dword ptr [ebp - 1f00h]
        mov dword ptr [edx + 40ce8h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        shl edx, 4
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 1f08h]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40ce8h]
        ; Exact mapped bytes E8 50 23 FA FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x23
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 A5 0C 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 1D EC FA FF: call 0x41d8b0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xec
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 3A 01 00 00: je 0x46edd5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1a64h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 3D 65 00 00: call 0x4751f0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 1A 01 00 00: je 0x46edd5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1a64h], 0
        lea ecx, [ebp - 1a64h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 1A 62 00 00: call 0x474ef7
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 F0 00 00 00: je 0x46edd5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 1a10h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 1a0ch], ecx
        mov dword ptr [ebp - 1a08h], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 1a04h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 97 6D 00 00: call 0x475abb
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 A4 67 00 00: call 0x4754d9
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        lea edx, [ebp - 1a10h]
        push edx
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 80020f0fh
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 EE EE FA FF: call 0x41dc4b
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xee
        __asm _emit 0xfa
        __asm _emit 0xff
        push 10h
        lea ecx, [ebp - 1a10h]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        push 80020f0fh
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 75 F3 FA FF: call 0x41e0fa
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf3
        __asm _emit 0xfa
        __asm _emit 0xff
        push 10h
        lea eax, [ebp - 1a10h]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 80020f0fh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 97 65 00 00: call 0x475344
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        lea edx, [ebp - 1a10h]
        push edx
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 80020f0fh
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 F8 6D 00 00: call 0x475bcd
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 46 0B 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 1a80h]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 EC 99 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x99
        __asm _emit 0x03
        __asm _emit 0x00
        mov byte ptr [ebp - 1a69h], 0
        lea eax, [ebp - 1a80h]
        push eax
        mov ecx, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 9C 02 FD FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 1a68h], eax
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 8], 1
        ; Exact mapped bytes 0F 85 0D 02 00 00: jne 0x46f030
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ech
        mov esi, esp
        lea eax, [ebp - 1a80h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A2 99 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x99
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 1]
        push edx
        lea eax, [ebp - 1b6ch]
        push eax
        ; Exact mapped bytes E8 CE A1 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 1b6ch]
        push ecx
        push 5bb0fch
        ; Exact mapped bytes E8 AF 0D 06 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 8
        lea edx, [ebp - 1b6ch]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 D6 E6 FA FF: call 0x41d550
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xe6
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1a84h]
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 1b6ch]
        push ecx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 82 E5 FA FF: call 0x41d419
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xe5
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 26 72 00 00: call 0x4760ce
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 1b6ch]
        push ecx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 38 E2 FA FF: call 0x41d0f2
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xe2
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 7E 74 00 00: call 0x476349
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        push 24h
        push 0
        lea ecx, [ebp - 1b90h]
        push ecx
        ; Exact mapped bytes E8 95 A4 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 1b6ch]
        mov dword ptr [ebp - 1b90h], edx
        mov eax, dword ptr [ebp - 1ab0h]
        mov dword ptr [ebp - 1b84h], eax
        mov esi, esp
        lea ecx, [ebp - 1abch]
        push ecx
        lea edx, [ebp - 1b80h]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CD 98 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 85 78 E4 FF FF 06 00: mov word ptr [ebp - 0x1b88], 6
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [ebp - 1a68h], 0
        ; Exact mapped bytes 0F 84 05 01 00 00: je 0x46f02e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1a68h]
        push eax
        mov ecx, dword ptr [ebp - 1a68h]
        add ecx, 150h
        push ecx
        push 6
        mov edx, dword ptr [ebp - 1b90h]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 B2 ED FA FF: call 0x41dd02
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xed
        __asm _emit 0xfa
        __asm _emit 0xff
        push 24h
        lea eax, [ebp - 1b90h]
        push eax
        mov ecx, dword ptr [ebp - 1a68h]
        mov edx, dword ptr [ecx + 168h]
        add edx, 54h
        push edx
        ; Exact mapped bytes E8 B2 A0 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 24h
        lea eax, [ebp - 1b90h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 80020f14h
        mov ecx, dword ptr [ebp - 1a68h]
        ; Exact mapped bytes E8 98 82 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1a68h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 1b6ch]
        mov dword ptr [eax + 54h], ecx
        mov edx, dword ptr [ebp - 1a68h]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [eax + 58h], 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 1a68h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 1a68h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 18h]
        push eax
        push 80025000h
        mov ecx, dword ptr [ebp - 1a68h]
        ; Exact mapped bytes E8 3A 82 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 46ch
        mov ecx, dword ptr [ebp - 1a68h]
        ; Exact mapped bytes E8 46 49 F9 FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x49
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FF 48 F9 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x48
        __asm _emit 0xf9
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 1a68h]
        push ecx
        mov edx, dword ptr [ebp - 1f08h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 87 36 01 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 72: jmp 0x46f0a2
        __asm _emit 0xeb
        __asm _emit 0x72
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 75 69: jne 0x46f0a2
        __asm _emit 0x75
        __asm _emit 0x69
        cmp dword ptr [ebp - 1a68h], 0
        ; Exact mapped bytes 74 60: je 0x46f0a2
        __asm _emit 0x74
        __asm _emit 0x60
        mov edx, dword ptr [ebp - 1a68h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 18h]
        add ecx, 30d40h
        mov edx, dword ptr [ebp - 1a68h]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [eax + 18h], ecx
        push 1
        mov ecx, dword ptr [ebp - 1a68h]
        push ecx
        mov edx, dword ptr [ebp - 1f08h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 32 36 01 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 0
        push 80020f14h
        mov ecx, dword ptr [ebp - 1a68h]
        ; Exact mapped bytes E8 90 81 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 79 08 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 1bach]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 1F 97 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        mov byte ptr [ebp - 1b95h], 0
        lea edx, [ebp - 1bach]
        push edx
        mov eax, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 CF FF FC FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 1b94h], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 8], 1
        ; Exact mapped bytes 0F 85 88 01 00 00: jne 0x46f278
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 74h
        mov esi, esp
        lea edx, [ebp - 1bach]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D8 96 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 1]
        push edx
        lea eax, [ebp - 1c20h]
        push eax
        ; Exact mapped bytes E8 04 9F 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x9f
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 1c20h]
        push ecx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 68 5E 00 00: call 0x474f98
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        push 24h
        push 0
        lea edx, [ebp - 1c44h]
        push edx
        ; Exact mapped bytes E8 30 A2 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xa2
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 1c1ch]
        mov dword ptr [ebp - 1c44h], eax
        mov ecx, dword ptr [ebp - 1c20h]
        mov dword ptr [ebp - 1c40h], ecx
        mov edx, dword ptr [ebp - 1bdch]
        mov dword ptr [ebp - 1c38h], edx
        mov esi, esp
        lea eax, [ebp - 1be8h]
        push eax
        lea ecx, [ebp - 1c34h]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5C 96 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 85 C4 E3 FF FF 03 00: mov word ptr [ebp - 0x1c3c], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        cmp dword ptr [ebp - 1b94h], 0
        ; Exact mapped bytes 0F 84 DC 00 00 00: je 0x46f276
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1b94h]
        push edx
        mov eax, dword ptr [ebp - 1b94h]
        add eax, 150h
        push eax
        push 3
        mov ecx, dword ptr [ebp - 1c40h]
        push ecx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 55 65 00 00: call 0x475715
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        push 24h
        lea edx, [ebp - 1c44h]
        push edx
        mov eax, dword ptr [ebp - 1b94h]
        mov ecx, dword ptr [eax + 168h]
        add ecx, 54h
        push ecx
        ; Exact mapped bytes E8 42 9E 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x9e
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 24h
        lea edx, [ebp - 1c44h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        push 80020f10h
        mov ecx, dword ptr [ebp - 1b94h]
        ; Exact mapped bytes E8 28 80 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 1b94h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 1b94h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 18h]
        push eax
        push 80025000h
        mov ecx, dword ptr [ebp - 1b94h]
        ; Exact mapped bytes E8 F2 7F 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 46ch
        mov ecx, dword ptr [ebp - 1b94h]
        ; Exact mapped bytes E8 FE 46 F9 FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x46
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B7 46 F9 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x46
        __asm _emit 0xf9
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 1b94h]
        push ecx
        mov edx, dword ptr [ebp - 1f08h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 3F 34 01 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 72: jmp 0x46f2ea
        __asm _emit 0xeb
        __asm _emit 0x72
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 75 69: jne 0x46f2ea
        __asm _emit 0x75
        __asm _emit 0x69
        cmp dword ptr [ebp - 1b94h], 0
        ; Exact mapped bytes 74 60: je 0x46f2ea
        __asm _emit 0x74
        __asm _emit 0x60
        mov edx, dword ptr [ebp - 1b94h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 18h]
        add ecx, 30d40h
        mov edx, dword ptr [ebp - 1b94h]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [eax + 18h], ecx
        push 1
        mov ecx, dword ptr [ebp - 1b94h]
        push ecx
        mov edx, dword ptr [ebp - 1f08h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 EA 33 01 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 0
        push 80020f10h
        mov ecx, dword ptr [ebp - 1b94h]
        ; Exact mapped bytes E8 48 7F 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 31 06 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 1c60h]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D7 94 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        mov byte ptr [ebp - 1c49h], 0
        lea edx, [ebp - 1c60h]
        push edx
        mov eax, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 87 FD FC FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xfd
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 1c48h], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 8], 2
        ; Exact mapped bytes 0F 85 C0 00 00 00: jne 0x46f3f8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ech
        mov esi, esp
        lea edx, [ebp - 1c60h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8D 94 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 1]
        push edx
        lea eax, [ebp - 1d70h]
        push eax
        ; Exact mapped bytes E8 B9 9C 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 1d70h]
        push ecx
        mov edx, dword ptr [ebp - 1d70h]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 E5 DB FA FF: call 0x41cf67
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xdb
        __asm _emit 0xfa
        __asm _emit 0xff
        push 24h
        push 0
        lea eax, [ebp - 1c84h]
        push eax
        ; Exact mapped bytes E8 DE 9F 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x9f
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 1d70h]
        mov dword ptr [ebp - 1c84h], ecx
        ; Exact mapped bytes 66 C7 85 84 E3 FF FF 06 00: mov word ptr [ebp - 0x1c7c], 6
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [ebp - 1c48h], 0
        ; Exact mapped bytes 74 40: je 0x46f3f3
        __asm _emit 0x74
        __asm _emit 0x40
        push 24h
        lea edx, [ebp - 1c84h]
        push edx
        mov eax, dword ptr [ebp - 1c48h]
        mov ecx, dword ptr [eax + 168h]
        add ecx, 54h
        push ecx
        ; Exact mapped bytes E8 4F 9C 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 24h
        lea edx, [ebp - 1c84h]
        push edx
        push 0
        push 1
        push 80020f11h
        mov ecx, dword ptr [ebp - 1c48h]
        ; Exact mapped bytes E8 3F 7E 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 26 01 00 00: jmp 0x46f51e
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8], 1
        ; Exact mapped bytes 0F 85 E8 00 00 00: jne 0x46f4ed
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 74h
        mov esi, esp
        lea ecx, [ebp - 1c60h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C3 93 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + eax + 1]
        push eax
        lea ecx, [ebp - 1de4h]
        push ecx
        ; Exact mapped bytes E8 EF 9B 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x9b
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 1de4h]
        push edx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 5B 69 00 00: call 0x475da0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        push 24h
        push 0
        lea eax, [ebp - 1e08h]
        push eax
        ; Exact mapped bytes E8 1B 9F 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x9f
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 1de0h]
        mov dword ptr [ebp - 1e08h], ecx
        mov edx, dword ptr [ebp - 1de4h]
        mov dword ptr [ebp - 1e04h], edx
        mov eax, dword ptr [ebp - 1da0h]
        mov dword ptr [ebp - 1dfch], eax
        mov esi, esp
        lea ecx, [ebp - 1dach]
        push ecx
        lea edx, [ebp - 1df8h]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 47 93 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 85 00 E2 FF FF 03 00: mov word ptr [ebp - 0x1e00], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        cmp dword ptr [ebp - 1c48h], 0
        ; Exact mapped bytes 74 40: je 0x46f4eb
        __asm _emit 0x74
        __asm _emit 0x40
        push 24h
        lea eax, [ebp - 1e08h]
        push eax
        mov ecx, dword ptr [ebp - 1c48h]
        mov edx, dword ptr [ecx + 168h]
        add edx, 54h
        push edx
        ; Exact mapped bytes E8 57 9B 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x9b
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 24h
        lea eax, [ebp - 1e08h]
        push eax
        push 0
        push 1
        push 80020f11h
        mov ecx, dword ptr [ebp - 1c48h]
        ; Exact mapped bytes E8 47 7D 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 31: jmp 0x46f51e
        __asm _emit 0xeb
        __asm _emit 0x31
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 75 28: jne 0x46f51e
        __asm _emit 0x75
        __asm _emit 0x28
        cmp dword ptr [ebp - 1c48h], 0
        ; Exact mapped bytes 74 1F: je 0x46f51e
        __asm _emit 0x74
        __asm _emit 0x1f
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        push 0
        push 80020f11h
        mov ecx, dword ptr [ebp - 1c48h]
        ; Exact mapped bytes E8 14 7D 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 FD 03 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 1e0ch]
        push edx
        ; Exact mapped bytes E8 EB 9A 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x9a
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 4
        mov eax, dword ptr [ebp + 0ch]
        add eax, 4
        push eax
        lea ecx, [ebp - 1e10h]
        push ecx
        ; Exact mapped bytes E8 D3 9A 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x9a
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 0ch]
        add edx, 8
        mov esi, esp
        push edx
        lea eax, [ebp - 1e2ch]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 73 92 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x92
        __asm _emit 0x03
        __asm _emit 0x00
        mov byte ptr [ebp - 1e15h], 0
        lea ecx, [ebp - 1e2ch]
        push ecx
        mov edx, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 23 FB FC FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xfb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 1e14h], eax
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8], 1
        ; Exact mapped bytes 0F 85 36 02 00 00: jne 0x46f7d2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1e14h], 0
        ; Exact mapped bytes 74 36: je 0x46f5db
        __asm _emit 0x74
        __asm _emit 0x36
        push 24h
        push 0
        mov ecx, dword ptr [ebp - 1e14h]
        mov edx, dword ptr [ecx + 168h]
        add edx, 54h
        push edx
        ; Exact mapped bytes E8 B2 9D 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x9d
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 0
        push 0
        push 0
        push 1
        push 80020f13h
        mov ecx, dword ptr [ebp - 1e14h]
        ; Exact mapped bytes E8 57 7C 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 1e0ch], 0
        ; Exact mapped bytes 75 0D: jne 0x46f5f1
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp - 1e10h], 0
        ; Exact mapped bytes 0F 84 BC 01 00 00: je 0x46f7ad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1e10h], 0
        ; Exact mapped bytes 0F 85 60 01 00 00: jne 0x46f75e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 1eb0h]
        push eax
        mov ecx, dword ptr [ebp - 1e0ch]
        push ecx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 39 E4 FA FF: call 0x41da4f
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe4
        __asm _emit 0xfa
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 1
        push 80020f13h
        mov edx, dword ptr [ebp - 1e0ch]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 C6 EA FA FF: call 0x41e0fa
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xea
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1e0ch]
        push eax
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 7E EC FA FF: call 0x41e2c3
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xec
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1e0ch]
        push ecx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 F2 EC FA FF: call 0x41e348
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xec
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 1eb4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x46f671
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 1eb4h]
        add edx, 1
        mov dword ptr [ebp - 1eb4h], edx
        mov eax, dword ptr [ebp - 1e56h]
        and eax, 0ffh
        cmp dword ptr [ebp - 1eb4h], eax
        ; Exact mapped bytes 7D 59: jge 0x46f6dd
        __asm _emit 0x7d
        __asm _emit 0x59
        push 0
        mov ecx, dword ptr [ebp - 1eb4h]
        mov edx, dword ptr [ebp + ecx*8 - 1e50h]
        push edx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 64 68 00 00: call 0x475f02
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1eb4h]
        mov ecx, dword ptr [ebp + eax*8 - 1e50h]
        push ecx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 23 5E 00 00: call 0x4754d9
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 1
        push 80020f13h
        mov edx, dword ptr [ebp - 1eb4h]
        mov eax, dword ptr [ebp + edx*8 - 1e50h]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 69 5C 00 00: call 0x475344
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 85: jmp 0x46f662
        __asm _emit 0xeb
        __asm _emit 0x85
        mov dword ptr [ebp - 1eb4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x46f6f8
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 1eb4h]
        add ecx, 1
        mov dword ptr [ebp - 1eb4h], ecx
        mov edx, dword ptr [ebp - 1e56h]
        and edx, 0ffh
        cmp dword ptr [ebp - 1eb4h], edx
        ; Exact mapped bytes 7D 3F: jge 0x46f74b
        __asm _emit 0x7d
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 1eb4h]
        mov ecx, dword ptr [ebp + eax*8 - 1e50h]
        push ecx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 97 63 00 00: call 0x475abb
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 1
        push 80020f13h
        mov edx, dword ptr [ebp - 1eb4h]
        mov eax, dword ptr [ebp + edx*8 - 1e50h]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 84 64 00 00: call 0x475bcd
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 9E: jmp 0x46f6e9
        __asm _emit 0xeb
        __asm _emit 0x9e
        mov ecx, dword ptr [ebp - 1e0ch]
        push ecx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 02 EE FA FF: call 0x41e55e
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xee
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 4D: jmp 0x46f7ab
        __asm _emit 0xeb
        __asm _emit 0x4d
        push 0
        push 0
        push 0
        push 1
        push 80020f13h
        mov edx, dword ptr [ebp - 1e10h]
        push edx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 C8 5B 00 00: call 0x475344
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 1
        push 80020f13h
        mov eax, dword ptr [ebp - 1e10h]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 33 64 00 00: call 0x475bcd
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1e10h]
        push ecx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 C9 6A 00 00: call 0x476274
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 23: jmp 0x46f7d0
        __asm _emit 0xeb
        __asm _emit 0x23
        cmp dword ptr [ebp - 1e14h], 0
        ; Exact mapped bytes 74 1A: je 0x46f7d0
        __asm _emit 0x74
        __asm _emit 0x1a
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f13h
        mov ecx, dword ptr [ebp - 1e14h]
        ; Exact mapped bytes E8 62 7A 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 56: jmp 0x46f828
        __asm _emit 0xeb
        __asm _emit 0x56
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 2A: jne 0x46f805
        __asm _emit 0x75
        __asm _emit 0x2a
        cmp dword ptr [ebp - 1e14h], 0
        ; Exact mapped bytes 74 1F: je 0x46f803
        __asm _emit 0x74
        __asm _emit 0x1f
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        push 0
        push 80020f13h
        mov ecx, dword ptr [ebp - 1e14h]
        ; Exact mapped bytes E8 2F 7A 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 23: jmp 0x46f828
        __asm _emit 0xeb
        __asm _emit 0x23
        cmp dword ptr [ebp - 1e14h], 0
        ; Exact mapped bytes 74 1A: je 0x46f828
        __asm _emit 0x74
        __asm _emit 0x1a
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f13h
        mov ecx, dword ptr [ebp - 1e14h]
        ; Exact mapped bytes E8 0A 7A 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 F3 00 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 EE 00 00 00: jmp 0x46f920
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 1ebch], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1eb8h], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 53 F8 FC FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 1ec0h], eax
        cmp dword ptr [ebp - 1ec0h], 0
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x46f90b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 1ec0h]
        add edx, 150h
        push edx
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 54 8F 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 7B: jne 0x46f90b
        __asm _emit 0x75
        __asm _emit 0x7b
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 10h], 18h
        ; Exact mapped bytes 75 13: jne 0x46f8ac
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 10h], 0
        mov dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes EB 18: jmp 0x46f8c4
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 10h]
        sub eax, 18h
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 10h], eax
        mov edx, dword ptr [ebp + 0ch]
        add edx, 18h
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebp - 1f08h]
        mov ecx, dword ptr [eax + 48h]
        cmp dword ptr [ecx + 40cc4h], 0
        ; Exact mapped bytes 74 2B: je 0x46f901
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ec0h]
        push ecx
        mov edx, dword ptr [ebp - 1f08h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40cc4h]
        ; Exact mapped bytes E8 A6 CA F9 FF: call 0x40c39f
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xca
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 1f2ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x46f90b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f2ch], 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 1ebch]
        mov dword ptr [ecx + 10h], edx
        mov eax, dword ptr [ebp - 1eb8h]
        mov dword ptr [ebp + 0ch], eax
        mov eax, 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 1f2ch
        cmp ebp, esp
        ; Exact mapped bytes E8 A2 8E 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x8e
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
