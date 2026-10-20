// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1007FC60 .. +0x5AC bytes.
extern "C" __declspec(naked) void FUN_1007fc60_1007FC60() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 92 05 00 00: je 0x10080202
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d1ch]
        xor ebp, ebp
        cmp eax, ebp
        ; Exact mapped bytes 75 0D: jne 0x1007fc89
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp byte ptr [esi + 9ch], 5
        ; Exact mapped bytes 0F 84 79 05 00 00: je 0x10080202
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 14h]
        cmp eax, ebp
        ; Exact mapped bytes 74 1B: je 0x1007fcaf
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [eax + 34h]
        cmp eax, ebp
        ; Exact mapped bytes 0F 84 DA 04 00 00: je 0x10080179
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 75 E8: jne 0x1007fc97
        __asm _emit 0x75
        __asm _emit 0xe8
        cmp dword ptr [esi + 70h], ebp
        ; Exact mapped bytes 0F 84 CA 04 00 00: je 0x10080182
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0cch], ebp
        ; Exact mapped bytes 0F 84 BE 04 00 00: je 0x10080182
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esi + 0d0h], 7
        ; Exact mapped bytes 0F 85 B1 04 00 00: jne 0x10080182
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        add eax, 0fffffe00h
        cmp eax, 4
        ; Exact mapped bytes 0F 87 20 05 00 00: ja 0x10080202
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 0C 02 08 10: jmp dword ptr [eax*4 + 0x1008020c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x08
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [esi + 14h]
        mov ecx, dword ptr [edx + 4]
        add edi, eax
        cmp ecx, edi
        ; Exact mapped bytes 0F 8C 00 05 00 00: jl 0x10080202
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 1ch]
        add edi, eax
        cmp ecx, edi
        ; Exact mapped bytes 0F 8D F3 04 00 00: jge 0x10080202
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov edi, dword ptr [esi + 18h]
        mov ecx, dword ptr [edx + 8]
        add edi, eax
        cmp ecx, edi
        ; Exact mapped bytes 0F 8C E0 04 00 00: jl 0x10080202
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 20h]
        add edi, eax
        cmp ecx, edi
        ; Exact mapped bytes 0F 8D D3 04 00 00: jge 0x10080202
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007fd45
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push ebp
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov al, byte ptr [esi + 9ch]
        test al, al
        ; Exact mapped bytes 74 5E: je 0x1007fdad
        __asm _emit 0x74
        __asm _emit 0x5e
        cmp al, 5
        ; Exact mapped bytes 74 5A: je 0x1007fdad
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [edx + 4]
        mov edx, dword ptr [esi + 4]
        sub eax, edx
        push 2
        mov dword ptr [esi + 0bch], eax
        ; Exact mapped bytes 8B 0D D4 92 1C 10: mov ecx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [esi + 8]
        sub edx, ecx
        mov dword ptr [esi + 0c0h], edx
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 0b4h], ecx
        mov ecx, esi
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 0a8h], ebp
        mov dword ptr [esi + 0b8h], edx
        mov dword ptr [esi + 0ach], ebp
        ; Exact mapped bytes E8 2D 0F 00 00: call 0x10080cd0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0b0h], 1
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D D4 92 1C 10: mov edi, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 4]
        mov ebx, dword ptr [esi + 14h]
        lea edx, [esi + 4]
        mov ecx, dword ptr [edi + 4]
        add ebx, eax
        cmp ecx, ebx
        ; Exact mapped bytes 0F 8C 30 04 00 00: jl 0x10080202
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 1ch]
        add ebx, eax
        cmp ecx, ebx
        ; Exact mapped bytes 0F 8D 23 04 00 00: jge 0x10080202
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x23
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ebx, dword ptr [esi + 18h]
        mov ecx, dword ptr [edi + 8]
        add ebx, eax
        cmp ecx, ebx
        ; Exact mapped bytes 0F 8C 10 04 00 00: jl 0x10080202
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 20h]
        add ebx, eax
        cmp ecx, ebx
        ; Exact mapped bytes 0F 8D 03 04 00 00: jge 0x10080202
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x03
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0d4h], ebp
        ; Exact mapped bytes 0F 85 F7 03 00 00: jne 0x10080202
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0a8h], ebp
        ; Exact mapped bytes 74 36: je 0x1007fe49
        __asm _emit 0x74
        __asm _emit 0x36
        mov eax, dword ptr [edi + 4]
        mov edx, dword ptr [esi + 0bch]
        sub eax, edx
        push 1
        mov dword ptr [esi + 0c4h], eax
        ; Exact mapped bytes 8B 0D D4 92 1C 10: mov ecx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [esi + 0c0h]
        sub edx, ecx
        mov ecx, esi
        mov dword ptr [esi + 0c8h], edx
        ; Exact mapped bytes E8 FC 0E 00 00: call 0x10080d40
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D6 00 00 00: jmp 0x1007ff1f
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0d18h], ebp
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x1007fee3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d14h]
        mov eax, dword ptr [eax + 84h]
        cmp eax, ebp
        ; Exact mapped bytes 74 36: je 0x1007fe9b
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [esi + 0d8h]
        push eax
        ; Exact mapped bytes E8 3F 5D 01 00: call 0x10095bb0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d8h]
        push ebp
        ; Exact mapped bytes E8 53 52 01 00: call 0x100950d0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d8h]
        xor edx, edx
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 5
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x1007ff19
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes EB 7E: jmp 0x1007ff19
        __asm _emit 0xeb
        __asm _emit 0x7e
        mov ecx, dword ptr [esi + 0d8h]
        xor edx, edx
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 5
        ; Exact mapped bytes 75 05: jne 0x1007feb3
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov edx, dword ptr [esi + 0d8h]
        lea ecx, [esi + 0cfch]
        push ecx
        mov eax, dword ptr [edx + 0fch]
        add eax, 78h
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 0d8h]
        mov ecx, dword ptr [ecx + 0fch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes EB 36: jmp 0x1007ff19
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [esi + 0d8h]
        xor eax, eax
        mov al, byte ptr [ecx + 25h]
        and al, 1fh
        cmp al, 5
        ; Exact mapped bytes 75 25: jne 0x1007ff19
        __asm _emit 0x75
        __asm _emit 0x25
        push edx
        ; Exact mapped bytes E8 26 5B 01 00: call 0x10095a20
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d8h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [esi + 0d14h]
        mov ecx, dword ptr [eax + 68h]
        mov edx, dword ptr [eax + 64h]
        dec ecx
        cmp edx, ecx
        ; Exact mapped bytes 7D 03: jge 0x1007ff19
        __asm _emit 0x7d
        __asm _emit 0x03
        mov dword ptr [eax + 64h], ecx
        mov dword ptr [esi + 0d18h], ebp
        ; Exact mapped bytes 66 C7 86 A4 00 00 00 FF FF: mov word ptr [esi + 0xa4], 0xffff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0a8h], ebp
        mov dword ptr [esi + 0b0h], ebp
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [esi + 14h]
        mov ecx, dword ptr [edx + 4]
        add edi, eax
        cmp ecx, edi
        ; Exact mapped bytes 0F 8C AC 02 00 00: jl 0x10080202
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 1ch]
        add edi, eax
        cmp ecx, edi
        ; Exact mapped bytes 0F 8D 9F 02 00 00: jge 0x10080202
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 8]
        mov eax, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 18h]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 0F 8C 8C 02 00 00: jl 0x10080202
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 20h]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 0F 8D 7F 02 00 00: jge 0x10080202
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0dch]
        xor eax, eax
        mov al, byte ptr [ecx + 25h]
        and al, 1fh
        cmp al, 5
        ; Exact mapped bytes 0F 85 6A 02 00 00: jne 0x10080202
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [esi + 0d14h]
        mov ecx, dword ptr [eax + 68h]
        mov edx, dword ptr [eax + 64h]
        dec ecx
        cmp edx, ecx
        ; Exact mapped bytes 0F 8D 50 02 00 00: jge 0x10080202
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 64h], ecx
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5ch]
        mov eax, dword ptr [ecx + 4]
        mov edi, dword ptr [ecx + 8]
        ; Exact mapped bytes 8B 0D D4 92 1C 10: mov ecx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 4]
        mov ebp, dword ptr [ecx + 8]
        sub eax, edx
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 1eh
        ; Exact mapped bytes 7D 35: jge 0x10080015
        __asm _emit 0x7d
        __asm _emit 0x35
        mov eax, edi
        sub eax, ebp
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 28h
        ; Exact mapped bytes 7D 27: jge 0x10080015
        __asm _emit 0x7d
        __asm _emit 0x27
        mov eax, dword ptr [esi + 58h]
        mov ebx, 1
        test byte ptr [eax + 24h], bl
        ; Exact mapped bytes 74 0C: je 0x10080007
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D D4 92 1C 10: mov ecx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 5ch]
        test byte ptr [eax + 24h], bl
        ; Exact mapped bytes 75 31: jne 0x10080040
        __asm _emit 0x75
        __asm _emit 0x31
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes EB 25: jmp 0x1008003a
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, dword ptr [esi + 58h]
        mov ebx, 1
        test byte ptr [eax + 24h], bl
        ; Exact mapped bytes 75 0A: jne 0x1008002c
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D D4 92 1C 10: mov ecx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 5ch]
        test byte ptr [eax + 24h], bl
        ; Exact mapped bytes 74 0C: je 0x10080040
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D D4 92 1C 10: mov ecx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 0a8h]
        test eax, eax
        ; Exact mapped bytes 74 57: je 0x100800a1
        __asm _emit 0x74
        __asm _emit 0x57
        mov eax, dword ptr [ecx + 4]
        mov edi, dword ptr [esi + 0bch]
        sub eax, edi
        cmp eax, -5
        ; Exact mapped bytes 7C 15: jl 0x1008006f
        __asm _emit 0x7c
        __asm _emit 0x15
        cmp eax, 2f5h
        ; Exact mapped bytes 7F 0E: jg 0x1008006f
        __asm _emit 0x7f
        __asm _emit 0x0e
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 E7 EC 07 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xec
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D D4 92 1C 10: mov ecx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 8]
        mov edx, dword ptr [esi + 0c0h]
        sub ecx, edx
        cmp ecx, 0fh
        ; Exact mapped bytes 7C 10: jl 0x1008008f
        __asm _emit 0x7c
        __asm _emit 0x10
        cmp ecx, 20ah
        ; Exact mapped bytes 7F 08: jg 0x1008008f
        __asm _emit 0x7f
        __asm _emit 0x08
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 31 ED 07 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xed
        __asm _emit 0x07
        __asm _emit 0x00
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 A9 0C 00 00: call 0x10080d40
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b0h]
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x100800e2
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [esi + 0b4h]
        sub eax, edx
        mov ecx, dword ptr [ecx + 8]
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, ebx
        ; Exact mapped bytes 7F 11: jg 0x100800d3
        __asm _emit 0x7f
        __asm _emit 0x11
        mov eax, dword ptr [esi + 0b8h]
        sub eax, ecx
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, ebx
        ; Exact mapped bytes 7E 06: jle 0x100800d9
        __asm _emit 0x7e
        __asm _emit 0x06
        mov dword ptr [esi + 0a8h], ebx
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [esi + 14h]
        mov edx, dword ptr [ecx + 4]
        add edi, eax
        cmp edx, edi
        ; Exact mapped bytes 7C 5B: jl 0x1008014c
        __asm _emit 0x7c
        __asm _emit 0x5b
        mov edi, dword ptr [esi + 1ch]
        add edi, eax
        cmp edx, edi
        ; Exact mapped bytes 7D 52: jge 0x1008014c
        __asm _emit 0x7d
        __asm _emit 0x52
        mov eax, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 18h]
        mov ecx, dword ptr [ecx + 8]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7C 43: jl 0x1008014c
        __asm _emit 0x7c
        __asm _emit 0x43
        mov edx, dword ptr [esi + 20h]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7D 3A: jge 0x1008014c
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov eax, dword ptr [esi + 0ach]
        test eax, eax
        ; Exact mapped bytes 0F 85 E2 00 00 00: jne 0x10080202
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a0h]
        test eax, eax
        ; Exact mapped bytes 0F 85 D4 00 00 00: jne 0x10080202
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ecx, esi
        mov dword ptr [esi + 0ach], ebx
        ; Exact mapped bytes 66 89 9E A4 00 00 00: mov word ptr [esi + 0xa4], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 8D 0B 00 00: call 0x10080cd0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ach]
        test eax, eax
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x10080202
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0a0h], ebx
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x10080202
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0ach], 0
        ; Exact mapped bytes 66 C7 86 A4 00 00 00 FF FF: mov word ptr [esi + 0xa4], 0xffff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [edi + 4], 200h
        ; Exact mapped bytes 75 77: jne 0x10080202
        __asm _emit 0x75
        __asm _emit 0x77
        mov ecx, dword ptr [esi + 5ch]
        mov eax, dword ptr [ecx + 4]
        mov edi, dword ptr [ecx + 8]
        ; Exact mapped bytes 8B 0D D4 92 1C 10: mov ecx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [ecx + 8]
        sub eax, edx
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 1eh
        ; Exact mapped bytes 7D 37: jge 0x100801e3
        __asm _emit 0x7d
        __asm _emit 0x37
        mov eax, edi
        sub eax, ecx
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 28h
        ; Exact mapped bytes 7D 29: jge 0x100801e3
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [esi + 58h]
        mov ebx, 1
        test byte ptr [eax + 24h], bl
        ; Exact mapped bytes 74 06: je 0x100801cd
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 5ch]
        test byte ptr [eax + 24h], bl
        ; Exact mapped bytes 75 2D: jne 0x10080202
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 58h]
        mov ebx, 1
        test byte ptr [eax + 24h], bl
        ; Exact mapped bytes 75 04: jne 0x100801f4
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 5ch]
        test byte ptr [eax + 24h], bl
        ; Exact mapped bytes 74 06: je 0x10080202
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
