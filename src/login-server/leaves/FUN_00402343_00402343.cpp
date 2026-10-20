// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00402343 .. +0x631 bytes.
extern "C" __declspec(naked) void FUN_00402343_00402343() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10ch
        mov dword ptr [ebp - 10ch], ecx
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 134h]
        mov dword ptr [eax + 164h], edx
        mov eax, dword ptr [ebp - 10ch]
        mov dword ptr [eax + 170h], 0ffffffffh
        mov ecx, dword ptr [ebp - 10ch]
        mov dword ptr [ecx + 174h], 0ffffffffh
        mov edx, dword ptr [ebp - 10ch]
        mov dword ptr [edx + 180h], 0ffffffffh
        lea eax, [ebp - 4]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10ch]
        add ecx, 170h
        push ecx
        push 4
        push 1
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 160h]
        push eax
        ; Exact mapped bytes E8 3B F5 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        lea ecx, [ebp - 4]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10ch]
        add edx, 174h
        push edx
        push 4
        push 2
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 0E F5 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        lea edx, [ebp - 4]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10ch]
        add eax, 180h
        push eax
        push 4
        push 3
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 160h]
        push edx
        ; Exact mapped bytes E8 E2 F4 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 0C 21 00 00: call 0x404540
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 1bh]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 F2 20 00 00: call 0x404540
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [eax + 1ah]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 D8 20 00 00: call 0x404540
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 19h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 BE 20 00 00: call 0x404540
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [eax + 18h]
        push edx
        push 448374h
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 18h
        push -3
        lea ecx, [ebp - 108h]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 160h]
        push eax
        ; Exact mapped bytes E8 40 F4 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 160h]
        push edx
        ; Exact mapped bytes E8 24 F4 00 00: call 0x4118f2
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        cmp eax, 64h
        ; Exact mapped bytes 0F 84 80 04 00 00: je 0x40295a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        cmp dword ptr [ecx + 170h], -1
        ; Exact mapped bytes 0F 8E 6D 04 00 00: jle 0x40295a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x6d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10ch]
        cmp dword ptr [edx + 174h], -1
        ; Exact mapped bytes 0F 8E 5A 04 00 00: jle 0x40295a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        cmp dword ptr [eax + 180h], -1
        ; Exact mapped bytes 0F 8E 47 04 00 00: jle 0x40295a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x47
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 160h]
        push edx
        ; Exact mapped bytes E8 C7 F3 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        mov dword ptr [eax + 178h], 0ffffffffh
        mov ecx, dword ptr [ebp - 10ch]
        mov dword ptr [ecx + 17ch], 0ffffffffh
        mov edx, dword ptr [ebp - 10ch]
        mov dword ptr [edx + 184h], 0ffffffffh
        mov eax, dword ptr [ebp - 10ch]
        mov dword ptr [eax + 188h], 0ffffffffh
        lea ecx, [ebp - 4]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10ch]
        add edx, 178h
        push edx
        push 4
        push 1
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 70 F3 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        lea edx, [ebp - 4]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10ch]
        add eax, 17ch
        push eax
        push 4
        push 2
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 160h]
        push edx
        ; Exact mapped bytes E8 44 F3 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        lea eax, [ebp - 4]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10ch]
        add ecx, 184h
        push ecx
        push 4
        push 3
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 160h]
        push eax
        ; Exact mapped bytes E8 17 F3 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        lea ecx, [ebp - 4]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10ch]
        add edx, 188h
        push edx
        push 4
        push 4
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 EA F2 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 170h]
        push eax
        push 4483f0h
        lea ecx, [ebp - 108h]
        push ecx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        push -3
        lea edx, [ebp - 108h]
        push edx
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 A3 F2 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 160h]
        push eax
        ; Exact mapped bytes E8 87 F2 00 00: call 0x4118f2
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        cmp ecx, 64h
        ; Exact mapped bytes 0F 84 D1 02 00 00: je 0x402948
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10ch]
        cmp dword ptr [edx + 178h], -1
        ; Exact mapped bytes 0F 8E BE 02 00 00: jle 0x402948
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        cmp dword ptr [eax + 17ch], -1
        ; Exact mapped bytes 0F 8E AB 02 00 00: jle 0x402948
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xab
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        cmp dword ptr [ecx + 184h], -1
        ; Exact mapped bytes 0F 8E 98 02 00 00: jle 0x402948
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10ch]
        cmp dword ptr [edx + 188h], -1
        ; Exact mapped bytes 0F 8E 85 02 00 00: jle 0x402948
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 17 F2 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10ch]
        cmp dword ptr [edx + 184h], 1
        ; Exact mapped bytes 0F 85 DB 00 00 00: jne 0x4027c3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        cmp dword ptr [eax + 180h], 0
        ; Exact mapped bytes 0F 85 C8 00 00 00: jne 0x4027c3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [ecx + 178h]
        cmp eax, dword ptr [edx + 17ch]
        ; Exact mapped bytes 0F 8E AA 00 00 00: jle 0x4027c3
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 170h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 7D 05 00 00: call 0x402cb2
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x4027c3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        add ecx, 164h
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 6E AA 00 00: call 0x40d1ca
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        add ecx, 174h
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 FB A9 00 00: call 0x40d176
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        add ecx, 170h
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 06 AA 00 00: call 0x40d1a0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 DA A8 00 00: call 0x40d08b
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 29 F1 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10ch]
        cmp dword ptr [edx + 188h], 1
        ; Exact mapped bytes 0F 85 72 01 00 00: jne 0x402948
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        mov dword ptr [eax + 18ch], 0ffffffffh
        lea ecx, [ebp - 4]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10ch]
        add edx, 18ch
        push edx
        push 4
        push 1
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 EF F0 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 170h]
        push eax
        push 448440h
        lea ecx, [ebp - 108h]
        push ecx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        push -3
        lea edx, [ebp - 108h]
        push edx
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 A8 F0 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 160h]
        push eax
        ; Exact mapped bytes E8 8C F0 00 00: call 0x4118f2
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        cmp ecx, 64h
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x402948
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10ch]
        cmp dword ptr [edx + 18ch], -1
        ; Exact mapped bytes 0F 8E C3 00 00 00: jle 0x402948
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 55 F0 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10ch]
        cmp dword ptr [edx + 18ch], 0
        ; Exact mapped bytes 0F 8E 9E 00 00 00: jle 0x402948
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        add eax, 164h
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 02 A9 00 00: call 0x40d1ca
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        add eax, 174h
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 90 A8 00 00: call 0x40d176
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        add eax, 170h
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 9C A8 00 00: call 0x40d1a0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        add eax, 18ch
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 2A A8 00 00: call 0x40d14c
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 55 A7 00 00: call 0x40d08b
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 160h]
        push eax
        ; Exact mapped bytes E8 A4 EF 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 160h]
        push edx
        ; Exact mapped bytes E8 92 EF 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 80 EF 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
