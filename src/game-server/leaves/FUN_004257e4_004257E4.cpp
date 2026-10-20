// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004257E4 .. +0x56C bytes.
extern "C" __declspec(naked) void FUN_004257e4_004257E4() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a1aeh
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
        sub esp, 6ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 78h]
        mov ecx, 1bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 74h], ecx
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 50: mov dx, word ptr [ecx + 0x50]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x50
        cmp edx, 64h
        ; Exact mapped bytes 0F 8D C6 04 00 00: jge 0x425d01
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 74bh
        push 5a1454h
        push 37ch
        ; Exact mapped bytes E8 E4 77 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x77
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 68h], eax
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 5ch], eax
        push 37ch
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        ; Exact mapped bytes E8 05 3B 08 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx + 10h]
        and eax, 0fffff00fh
        or eax, 1a0h
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ecx + 10h], eax
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx + 10h]
        and ah, 0fh
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ecx + 10h], eax
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [edx + 98h], 0ffffffffh
        cmp dword ptr [ebp + 14h], 1
        ; Exact mapped bytes 75 14: jne 0x4258ba
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax + 54h]
        and ecx, 1
        or cl, 98h
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [edx + 54h], ecx
        ; Exact mapped bytes EB 12: jmp 0x4258cc
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax + 54h]
        and ecx, 1
        or cl, 0a4h
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [edx + 54h], ecx
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [eax + 58h], 0
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ecx + 19ch]
        mov eax, dword ptr [edx + 40ca8h]
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx + 10h]
        shr edx, 4
        and edx, 0ffh
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [eax + edx*4 + 18h]
        mov dword ptr [ecx + 5ch], edx
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [eax + 0c0h], 1
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 66 C7 42 08 AF 00: mov word ptr [edx + 8], 0xaf
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x08
        __asm _emit 0xaf
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax + 10h]
        and ecx, 0fh
        imul ecx, ecx, 3f8ch
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx + 54h]
        shr eax, 1
        and eax, 7fffffffh
        imul eax, eax, 0c4h
        mov edx, dword ptr [ebp - 5ch]
        mov al, byte ptr [ecx + eax + 5a156ah]
        mov byte ptr [edx + 37h], al
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 66 C7 41 2A AF 00: mov word ptr [ecx + 0x2a], 0xaf
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x2a
        __asm _emit 0xaf
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx + 10h]
        and eax, 0fh
        imul eax, eax, 3f8ch
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx + 54h]
        shr edx, 1
        and edx, 7fffffffh
        imul edx, edx, 0c4h
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [eax + edx + 5a151ch]
        mov dword ptr [ecx + 94h], edx
        mov eax, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 66 C7 40 50 F4 01: mov word ptr [eax + 0x50], 0x1f4
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0xf4
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 28 F8 FF FF: call 0x4251c6
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 78h], al
        mov edx, dword ptr [ebp - 78h]
        and edx, 0ffh
        and edx, 1
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax + 54h]
        and ecx, 0fffffffeh
        or ecx, edx
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [edx + 54h], ecx
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 5ch]
        mov byte ptr [edx + 2ch], 14h
        mov eax, dword ptr [ebp - 5ch]
        mov byte ptr [eax + 2dh], 0
        mov ecx, dword ptr [ebp - 5ch]
        mov byte ptr [ecx + 2eh], 0
        mov edx, dword ptr [ebp - 5ch]
        mov byte ptr [edx + 2fh], 0
        mov eax, dword ptr [ebp - 5ch]
        mov byte ptr [eax + 30h], 0
        mov ecx, dword ptr [ebp - 5ch]
        mov byte ptr [ecx + 31h], 0
        mov edx, dword ptr [ebp - 5ch]
        mov byte ptr [edx + 32h], 0
        mov eax, dword ptr [ebp - 5ch]
        mov byte ptr [eax + 33h], 0
        mov ecx, dword ptr [ebp - 5ch]
        mov byte ptr [ecx + 34h], 0
        mov edx, dword ptr [ebp - 5ch]
        mov byte ptr [edx + 35h], 0
        mov eax, dword ptr [ebp - 5ch]
        mov byte ptr [eax + 36h], 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 66 C7 41 14 EF 01: mov word ptr [ecx + 0x14], 0x1ef
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0xef
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 66 C7 42 16 50 00: mov word ptr [edx + 0x16], 0x50
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x16
        __asm _emit 0x50
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 66 C7 40 18 50 00: mov word ptr [eax + 0x18], 0x50
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x18
        __asm _emit 0x50
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 66 C7 41 1A 50 00: mov word ptr [ecx + 0x1a], 0x50
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x1a
        __asm _emit 0x50
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 66 C7 42 1C 50 00: mov word ptr [edx + 0x1c], 0x50
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x1c
        __asm _emit 0x50
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 66 C7 40 1E 50 00: mov word ptr [eax + 0x1e], 0x50
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x1e
        __asm _emit 0x50
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 66 C7 41 20 50 00: mov word ptr [ecx + 0x20], 0x50
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x20
        __asm _emit 0x50
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 66 C7 42 22 50 00: mov word ptr [edx + 0x22], 0x50
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x22
        __asm _emit 0x50
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 66 C7 40 24 50 00: mov word ptr [eax + 0x24], 0x50
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 66 C7 41 26 50 00: mov word ptr [ecx + 0x26], 0x50
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x26
        __asm _emit 0x50
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 66 C7 42 28 50 00: mov word ptr [edx + 0x28], 0x50
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x28
        __asm _emit 0x50
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 5ch]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx]
        imul eax, eax, 37ch
        lea edi, [ecx + eax + 224h]
        mov ecx, 0dfh
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 10h]
        imul eax, eax, 37ch
        mov dword ptr [edx + eax + 2e4h], 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 10h]
        imul eax, eax, 37ch
        mov byte ptr [edx + eax + 2f0h], 1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 10h]
        imul eax, eax, 37ch
        mov byte ptr [edx + eax + 2f1h], 2
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 10h]
        imul eax, eax, 37ch
        mov byte ptr [edx + eax + 2f2h], 3
        cmp dword ptr [ebp + 14h], 1
        ; Exact mapped bytes 75 38: jne 0x425b44
        __asm _emit 0x75
        __asm _emit 0x38
        mov esi, esp
        push 5a14c0h
        push 5a14c8h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 10h]
        imul eax, eax, 37ch
        lea ecx, [edx + eax + 2d0h]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 9E 2C 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x2c
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 36: jmp 0x425b7a
        __asm _emit 0xeb
        __asm _emit 0x36
        mov esi, esp
        push 5a14cch
        push 5a14d0h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 10h]
        imul ecx, ecx, 37ch
        lea edx, [eax + ecx + 2d0h]
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
        ; Exact mapped bytes E8 66 2C 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x2c
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        ; Exact mapped bytes 66 8B 51 50: mov dx, word ptr [ecx + 0x50]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x50
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        ; Exact mapped bytes 66 89 51 50: mov word ptr [ecx + 0x50], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 74h]
        mov eax, dword ptr [edx + 19ch]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 54 04 00 00: call 0x426000
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        shl ecx, 10h
        or ecx, 4
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ecx + 19ch]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 E1 CA 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xca
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [eax + 19ch]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 38 04 00 00: call 0x426020
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        push 0
        lea edx, [ebp - 58h]
        push edx
        ; Exact mapped bytes E8 7B 37 08 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x37
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp + 18h]
        ; Exact mapped bytes E8 AA B3 10 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xb3
        __asm _emit 0x10
        __asm _emit 0x00
        mov esi, esp
        push eax
        lea eax, [ebp - 58h]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CC 2B 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x2b
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 14h], 0
        cmp dword ptr [ebp + 14h], 1
        ; Exact mapped bytes 75 0E: jne 0x425c36
        __asm _emit 0x75
        __asm _emit 0x0e
        mov dword ptr [ebp - 64h], 30d40h
        mov dword ptr [ebp - 60h], 4e20h
        push 39ch
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 4D B2 FE FF: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        push 37ch
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 6E B3 FE FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        push 18h
        lea edx, [ebp - 58h]
        push edx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 60 B3 FE FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        push 4
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 52 B3 FE FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        push 4
        lea ecx, [ebp - 14h]
        push ecx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 44 B3 FE FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp + 14h], 1
        ; Exact mapped bytes 75 27: jne 0x425caf
        __asm _emit 0x75
        __asm _emit 0x27
        push 0
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 FE 47 FE FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 D5 47 FE FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        push 1
        push 8002e003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 85 15 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 2B: jmp 0x425cda
        __asm _emit 0xeb
        __asm _emit 0x2b
        cmp dword ptr [ebp + 14h], 2
        ; Exact mapped bytes 75 25: jne 0x425cda
        __asm _emit 0x75
        __asm _emit 0x25
        push 0
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 D1 47 FE FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 A8 47 FE FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        push 2
        push 8002e003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 58 15 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x15
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 6ch], edx
        mov eax, dword ptr [ebp - 6ch]
        push eax
        ; Exact mapped bytes E8 20 77 0C 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x77
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], 1
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 41 B2 FE FF: call 0x410f40
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 1B: jmp 0x425d1c
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 50: mov ax, word ptr [edx + 0x50]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x50
        cmp eax, 64h
        ; Exact mapped bytes 7C 07: jl 0x425d1c
        __asm _emit 0x7c
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 70h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 18h]
        ; Exact mapped bytes E8 1B 7B 0C 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x7b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 70h]
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
        add esp, 78h
        cmp ebp, esp
        ; Exact mapped bytes E8 96 2A 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x2a
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
