// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046F974 .. +0x68F bytes.
extern "C" __declspec(naked) void FUN_0046f974_0046F974() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bc95h
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
        sub esp, 12ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 138h]
        mov ecx, 4bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 134h], ecx
        mov dword ptr [ebp - 10h], 0
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 4A 15 0C 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 66 C7 45 E0 00 00: mov word ptr [ebp - 0x20], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 E2 00 00: mov word ptr [ebp - 0x1e], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 E4 00 00: mov word ptr [ebp - 0x1c], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 EC 00 00: mov word ptr [ebp - 0x14], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x46f9ee
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 20h
        ; Exact mapped bytes 0F 8D CD 05 00 00: jge 0x46ffc5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcd
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 BE 05 00 00: je 0x46ffc0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 82 3F F9 FF: call 0x403990
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x3f
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 AA 05 00 00: je 0x46ffc0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 66 8B 94 08 2C 02 00 00: mov dx, word ptr [eax + ecx + 0x22c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 55 E0: mov word ptr [ebp - 0x20], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 37ch
        ; Exact mapped bytes 66 8B 84 11 2E 02 00 00: mov ax, word ptr [ecx + edx + 0x22e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 E2: mov word ptr [ebp - 0x1e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe2
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 8B 8C 02 30 02 00 00: mov cx, word ptr [edx + eax + 0x230]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D E4: mov word ptr [ebp - 0x1c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe4
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 37ch
        lea edx, [eax + ecx + 2d0h]
        push edx
        lea eax, [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 AD A3 03 00: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        mov byte ptr [ebp - 2fh], 0ah
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 8B 8C 02 4E 02 00 00: mov cx, word ptr [edx + eax + 0x24e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D DC: mov word ptr [ebp - 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xdc
        mov edx, dword ptr [ebp - 20h]
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 1eh]
        and eax, 0ffffh
        add edx, eax
        mov ecx, dword ptr [ebp - 1ch]
        and ecx, 0ffffh
        add edx, ecx
        ; Exact mapped bytes 66 89 55 EC: mov word ptr [ebp - 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xec
        mov edx, dword ptr [ebp - 14h]
        and edx, 0ffffh
        cmp edx, 4b0h
        ; Exact mapped bytes 7E 7E: jle 0x46fb69
        __asm _emit 0x7e
        __asm _emit 0x7e
        push 5bb114h
        mov eax, dword ptr [ebp - 24h]
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 0ffffh
        push ecx
        lea edx, [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        push 5bb120h
        lea ecx, [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 3E EE 05 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xee
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 1ch
        push ecx
        mov ecx, esp
        mov dword ptr [ebp - 120h], esp
        lea edx, [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 47 D9 07 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xd9
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 138h], eax
        push 7
        mov ecx, 5d4c70h
        ; Exact mapped bytes E8 23 4F FE FF: call 0x454a68
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x4f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 EE DC 07 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 124h]
        ; Exact mapped bytes E9 7B 04 00 00: jmp 0x46ffe4
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        and eax, 0fh
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 278h]
        shr ecx, 1
        and ecx, 7fffffffh
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 48h]
        imul eax, eax, 3f8ch
        mov ecx, dword ptr [ebp - 28h]
        imul ecx, ecx, 0c4h
        mov edx, dword ptr [eax + ecx + 5a1524h]
        mov dword ptr [ebp - 4ch], edx
        push 2ch
        push 0
        lea eax, [ebp - 0a4h]
        push eax
        ; Exact mapped bytes E8 73 97 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 2ch
        push 0
        lea ecx, [ebp - 78h]
        push ecx
        ; Exact mapped bytes E8 63 97 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp - 28h], 4ch
        ; Exact mapped bytes 0F 84 A6 03 00 00: je 0x46ffc0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], 4dh
        ; Exact mapped bytes 0F 84 9C 03 00 00: je 0x46ffc0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], 4eh
        ; Exact mapped bytes 0F 84 92 03 00 00: je 0x46ffc0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], 4fh
        ; Exact mapped bytes 0F 84 88 03 00 00: je 0x46ffc0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x46fc53
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0a8h]
        add edx, 1
        mov dword ptr [ebp - 0a8h], edx
        cmp dword ptr [ebp - 0a8h], 0bh
        ; Exact mapped bytes 0F 84 60 03 00 00: je 0x46ffc0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        imul eax, eax, 1c88h
        mov ecx, dword ptr [ebp - 28h]
        imul ecx, ecx, 58h
        lea edx, [eax + ecx + 5bb3a8h]
        mov eax, dword ptr [ebp - 48h]
        imul eax, eax, 1c88h
        mov ecx, dword ptr [ebp - 28h]
        imul ecx, ecx, 58h
        lea eax, [eax + ecx + 5bb3a8h]
        mov ecx, dword ptr [ebp - 2ch]
        sub ecx, dword ptr [ebp - 4ch]
        mov esi, dword ptr [ebp - 0a8h]
        mov eax, dword ptr [eax + esi*4 + 2ch]
        imul eax, ecx
        mov ecx, dword ptr [ebp - 0a8h]
        mov edx, dword ptr [edx + ecx*4]
        add edx, eax
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp + eax*4 - 0a4h], edx
        mov ecx, dword ptr [ebp - 48h]
        imul ecx, ecx, 1c88h
        mov edx, dword ptr [ebp - 28h]
        imul edx, edx, 58h
        lea eax, [ecx + edx + 5bb3a8h]
        mov ecx, dword ptr [ebp - 0a8h]
        mov edx, dword ptr [ebp - 0a8h]
        mov eax, dword ptr [eax + edx*4 + 2ch]
        mov dword ptr [ebp + ecx*4 - 78h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 37ch
        lea ecx, [edx + eax + 224h]
        mov edx, dword ptr [ebp - 0a8h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 44 51 14: mov ax, word ptr [ecx + edx*2 + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 0a8h]
        cmp dword ptr [ebp + ecx*4 - 0a4h], eax
        ; Exact mapped bytes 7C 30: jl 0x46fd46
        __asm _emit 0x7c
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0a8h]
        add ecx, dword ptr [eax + 168h]
        ; Exact mapped bytes 0F BE 94 0A 50 02 00 00: movsx edx, byte ptr [edx + ecx + 0x250]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0a8h]
        cmp dword ptr [ebp + eax*4 - 78h], edx
        ; Exact mapped bytes 0F 8D 75 02 00 00: jge 0x46ffbb
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x75
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 0a8h]
        add eax, dword ptr [edx + 168h]
        ; Exact mapped bytes 0F BE 8C 01 50 02 00 00: movsx ecx, byte ptr [ecx + eax + 0x250]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp - 0a8h]
        mov eax, dword ptr [ebp + edx*4 - 78h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 37ch
        lea ecx, [edx + eax + 224h]
        mov edx, dword ptr [ebp - 0a8h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 44 51 14: mov ax, word ptr [ecx + edx*2 + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x14
        push eax
        mov ecx, dword ptr [ebp - 0a8h]
        mov edx, dword ptr [ebp + ecx*4 - 0a4h]
        push edx
        mov eax, dword ptr [ebp - 0a8h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        lea ecx, [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        push 5bb160h
        lea eax, [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 86 EB 05 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xeb
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 30h
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 AC 15 00 00: call 0x471390
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        push 70h
        push 0
        lea ecx, [ebp - 118h]
        push ecx
        ; Exact mapped bytes E8 7C 95 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 128h]
        push edx
        ; Exact mapped bytes E8 94 F5 05 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf5
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 114h]
        ; Exact mapped bytes E8 9F 18 0C 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x18
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 0d8h], 0
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        lea ecx, [ebp - 0f8h]
        push ecx
        ; Exact mapped bytes E8 12 A0 03 00: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        lea edx, [ebp - 44h]
        push edx
        lea eax, [ebp - 0d4h]
        push eax
        ; Exact mapped bytes E8 FF 9F 03 00: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x9f
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0c0h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 0bch], edx
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 0b4h], ecx
        mov edx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes 66 8B 84 95 5C FF FF FF: mov ax, word ptr [ebp + edx*4 - 0xa4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 85 50 FF FF FF: mov word ptr [ebp - 0xb0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 37ch
        lea ecx, [edx + eax + 224h]
        mov edx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes 66 8B 44 51 14: mov ax, word ptr [ecx + edx*2 + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x14
        ; Exact mapped bytes 66 89 85 52 FF FF FF: mov word ptr [ebp - 0xae], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes 66 8B 54 8D 88: mov dx, word ptr [ebp + ecx*4 - 0x78]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x8d
        __asm _emit 0x88
        ; Exact mapped bytes 66 89 95 54 FF FF FF: mov word ptr [ebp - 0xac], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 0a8h]
        add edx, dword ptr [ecx + 168h]
        ; Exact mapped bytes 66 0F BE 84 10 50 02 00 00: movsx ax, byte ptr [eax + edx + 0x250]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 85 56 FF FF FF: mov word ptr [ebp - 0xaa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], 101h
        mov ecx, dword ptr [ebp - 134h]
        mov edx, dword ptr [ecx + 48h]
        mov eax, dword ptr [edx + 40c78h]
        mov dword ptr [ebp - 0dch], eax
        mov ecx, dword ptr [ebp - 134h]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 0E 14 F9 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x14
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 7F: je 0x46ff9a
        __asm _emit 0x74
        __asm _emit 0x7f
        mov edx, dword ptr [ebp - 134h]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 F7 13 F9 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x13
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0fd0h]
        mov ecx, dword ptr [eax + 1b0h]
        add ecx, 1
        mov dword ptr [ebp - 11ch], ecx
        mov edx, dword ptr [ebp - 134h]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 D4 13 F9 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x13
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0fd0h]
        mov ecx, dword ptr [ebp - 11ch]
        mov dword ptr [eax + 1b0h], ecx
        mov edx, dword ptr [ebp - 11ch]
        mov dword ptr [ebp - 118h], edx
        push 0
        push 70h
        lea eax, [ebp - 118h]
        push eax
        push 0
        push 101h
        push 80018006h
        mov ecx, dword ptr [ebp - 134h]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 91 13 F9 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x13
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 98 72 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 12ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 99 D8 07 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 12ch]
        ; Exact mapped bytes EB 29: jmp 0x46ffe4
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes E9 84 FC FF FF: jmp 0x46fc44
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 20 FA FF FF: jmp 0x46f9e5
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 6E D8 07 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 130h]
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
        add esp, 138h
        cmp ebp, esp
        ; Exact mapped bytes E8 E3 87 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x87
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
