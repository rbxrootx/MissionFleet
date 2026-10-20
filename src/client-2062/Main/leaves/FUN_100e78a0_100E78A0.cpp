// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E78A0 .. +0x1EFB bytes.
extern "C" __declspec(naked) void FUN_100e78a0_100E78A0() {
    __asm {
        push -1
        push 10173f48h
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
        push ecx
        mov eax, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 28h]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 44h]
        mov esi, ecx
        mov ecx, dword ptr [esp + 3ch]
        push 1f4h
        push edi
        push eax
        mov eax, dword ptr [esp + 40h]
        push ecx
        push edx
        push eax
        push 0
        mov ecx, esi
        mov dword ptr [esp + 2ch], esi
        ; Exact mapped bytes E8 79 6D F6 FF: call 0x1004e660
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x6d
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        mov ebx, dword ptr [esp + 24h]
        lea ebp, [esi + 328h]
        push ecx
        push edx
        push ebx
        mov ecx, ebp
        mov dword ptr [esp + 28h], 0
        ; Exact mapped bytes E8 05 9A 00 00: call 0x100f1310
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        push 100f12e0h
        push 100f12c0h
        push 8
        lea eax, [esi + 0f78h]
        push 10h
        push eax
        mov byte ptr [esp + 30h], 1
        ; Exact mapped bytes E8 76 51 08 00: call 0x1016caa0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x51
        __asm _emit 0x08
        __asm _emit 0x00
        mov cl, byte ptr [esp + 38h]
        xor eax, eax
        mov byte ptr [esi + 1038h], cl
        mov dword ptr [esi + 103ch], eax
        mov dword ptr [esi + 1040h], eax
        mov dword ptr [esi + 1044h], eax
        mov dword ptr [esi], 101765a4h
        mov dword ptr [esi + 50h], edi
        mov ecx, ebp
        mov byte ptr [esp + 1ch], 3
        mov dword ptr [esi + 0ea0h], eax
        xor edi, edi
        ; Exact mapped bytes E8 2B A2 00 00: call 0x100f1b90
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 52: jle 0x100e79bb
        __asm _emit 0x7e
        __asm _emit 0x52
        lea ebp, [esi + 0b64h]
        mov eax, dword ptr [ebp]
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x100e79a8
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [eax + 60h]
        mov ecx, dword ptr [esi + 0ea0h]
        shr edx, 4
        and edx, 0ffh
        xor edx, 0aah
        cmp edx, ecx
        ; Exact mapped bytes 7E 16: jle 0x100e79a8
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 60h]
        shr eax, 4
        and eax, 0ffh
        xor eax, 0aah
        mov dword ptr [esi + 0ea0h], eax
        lea ecx, [esi + 328h]
        inc edi
        add ebp, 4
        ; Exact mapped bytes E8 D9 A1 00 00: call 0x100f1b90
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, eax
        ; Exact mapped bytes 7C B4: jl 0x100e796f
        __asm _emit 0x7c
        __asm _emit 0xb4
        or eax, 0ffffffffh
        mov byte ptr [esi + 88h], 0
        mov dword ptr [esi + 60h], eax
        mov dword ptr [esi + 64h], eax
        mov eax, 1
        mov edx, dword ptr [esp + 48h]
        mov dword ptr [esi + 68h], eax
        mov dword ptr [esi + 6ch], eax
        xor eax, eax
        add edx, 64h
        mov al, byte ptr [ebx + 5]
        xor ebp, ebp
        lea eax, [eax + eax*4]
        lea ecx, [eax + eax*4]
        shl ecx, 2
        mov dword ptr [esi + 5c44h], ecx
        ; Exact mapped bytes 66 89 96 92 3E 00 00: mov word ptr [esi + 0x3e92], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x92
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        lea ecx, [esi + 3e80h]
        lea edx, [eax + eax*4 + 19h]
        add ecx, 2
        shl edx, 2
        ; Exact mapped bytes 66 03 96 92 3E 00 00: add dx, word ptr [esi + 0x3e92]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x96
        __asm _emit 0x92
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        inc eax
        cmp eax, 8
        ; Exact mapped bytes 66 89 51 FE: mov word ptr [ecx - 2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0xfe
        ; Exact mapped bytes 7C E5: jl 0x100e7a02
        __asm _emit 0x7c
        __asm _emit 0xe5
        ; Exact mapped bytes 66 8B 86 8E 3E 00 00: mov ax, word ptr [esi + 0x3e8e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x8e
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 05 64 00: add ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 90 3E 00 00: mov word ptr [esi + 0x3e90], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 20h]
        mov dword ptr [esi + 0f34h], ecx
        mov edx, dword ptr [ebx + 24h]
        mov dword ptr [esi + 0f38h], edx
        ; Exact mapped bytes 66 8B 43 28: mov ax, word ptr [ebx + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x28
        ; Exact mapped bytes 66 89 86 3C 0F 00 00: mov word ptr [esi + 0xf3c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 2ch]
        mov dword ptr [esi + 0f40h], ecx
        mov eax, dword ptr [esi + 0f38h]
        cmp eax, ebp
        ; Exact mapped bytes 74 11: je 0x100e7a70
        __asm _emit 0x74
        __asm _emit 0x11
        add ebx, 30h
        lea edx, [esi + 0f44h]
        push ebx
        push edx
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, esi
        ; Exact mapped bytes E8 F9 68 00 00: call 0x100ee370
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 74h], ebp
        mov dword ptr [esi + 78h], ebp
        mov eax, dword ptr [esi + 0e74h]
        cmp eax, ebp
        ; Exact mapped bytes 0F 84 D3 1C 00 00: je 0x100e975e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 14: mov cx, word ptr [eax + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x14
        push ecx
        ; Exact mapped bytes 8B 0D DC 58 1C 10: mov ecx, dword ptr [0x101c58dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        ; Exact mapped bytes E8 72 BC 00 00: call 0x100f3710
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 5cb0h], eax
        mov eax, dword ptr [esi + 0e74h]
        ; Exact mapped bytes 8B 0D DC 58 1C 10: mov ecx, dword ptr [0x101c58dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        ; Exact mapped bytes 66 8B 50 16: mov dx, word ptr [eax + 0x16]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x16
        push edx
        push esi
        ; Exact mapped bytes E8 F3 BC 00 00: call 0x100f37b0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 5cb4h], eax
        mov eax, dword ptr [esi + 0e80h]
        xor ecx, ecx
        xor edx, edx
        ; Exact mapped bytes 66 8B 8E 6C 07 00 00: mov cx, word ptr [esi + 0x76c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 90 9C 00 00 00: mov dx, word ptr [eax + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, 1bh
        lea eax, [edx + ecx*2]
        lea edx, [esi + 7e8h]
        mov dword ptr [esi + 324h], eax
        mov dword ptr [esi + 1048h], ebp
        mov dword ptr [esi + 5efch], ebp
        mov ecx, dword ptr [edx - 380h]
        and ecx, 0f000h
        cmp ecx, 0b000h
        ; Exact mapped bytes 72 5C: jb 0x100e7b6b
        __asm _emit 0x72
        __asm _emit 0x5c
        mov ecx, dword ptr [edx]
        mov eax, ecx
        shr eax, 0ch
        and eax, 0fh
        add eax, 11h
        mov eax, dword ptr [esi + eax*4 + 0cf4h]
        cmp eax, ebp
        ; Exact mapped bytes 74 44: je 0x100e7b6b
        __asm _emit 0x74
        __asm _emit 0x44
        shr ecx, 10h
        and ecx, 3fh
        ; Exact mapped bytes 66 3B 48 06: cmp cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x48
        __asm _emit 0x06
        ; Exact mapped bytes 75 38: jne 0x100e7b6b
        __asm _emit 0x75
        __asm _emit 0x38
        mov eax, dword ptr [esi + 5efch]
        mov dword ptr [esi + eax*4 + 5f00h], edx
        mov ecx, dword ptr [esi + 5efch]
        inc ecx
        mov dword ptr [esi + 5efch], ecx
        mov ecx, dword ptr [edx - 380h]
        shr ecx, 0ch
        and ecx, 0fh
        lea eax, [ecx + esi + 103dh]
        mov cl, byte ptr [ecx + esi + 103dh]
        inc cl
        mov byte ptr [eax], cl
        add edx, 1ch
        dec edi
        ; Exact mapped bytes 75 8A: jne 0x100e7afb
        __asm _emit 0x75
        __asm _emit 0x8a
        xor ebx, ebx
        xor eax, eax
        mov dword ptr [esi + 1004h], ebx
        lea ebp, [esi + 1f8h]
        mov ecx, dword ptr [esi + 0e74h]
        mov edi, 1fh
        sub edi, eax
        mov edx, dword ptr [ecx + 25ch]
        mov ecx, edi
        shr edx, cl
        test dl, 1
        ; Exact mapped bytes 74 06: je 0x100e7ba3
        __asm _emit 0x74
        __asm _emit 0x06
        inc dword ptr [esi + 1004h]
        mov ecx, dword ptr [esi + 0e74h]
        mov edx, dword ptr [ecx + 254h]
        mov ecx, edi
        shr edx, cl
        and dl, 1
        mov byte ptr [eax + ebp - 20h], dl
        mov ecx, dword ptr [esi + 0e74h]
        mov edx, dword ptr [ecx + 258h]
        mov ecx, edi
        shr edx, cl
        and dl, 1
        mov byte ptr [eax + ebp], dl
        inc eax
        cmp eax, 20h
        ; Exact mapped bytes 7C AB: jl 0x100e7b81
        __asm _emit 0x7c
        __asm _emit 0xab
        mov eax, dword ptr [esi + 0e74h]
        mov ecx, dword ptr [esi + 1004h]
        ; Exact mapped bytes 66 8B 40 0A: mov ax, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0a
        shr eax, 0ah
        and eax, 1fh
        add eax, ecx
        mov ecx, 9cch
        mov dword ptr [esi + 1008h], eax
        mov byte ptr [esi + 5c8dh], 0
        mov eax, dword ptr [ecx + esi + 328h]
        cmp eax, ebx
        ; Exact mapped bytes 74 22: je 0x100e7c2d
        __asm _emit 0x74
        __asm _emit 0x22
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 18: je 0x100e7c2d
        __asm _emit 0x74
        __asm _emit 0x18
        cmp byte ptr [ebp], 0
        mov al, byte ptr [esi + 5c8dh]
        ; Exact mapped bytes 74 04: je 0x100e7c25
        __asm _emit 0x74
        __asm _emit 0x04
        or al, 20h
        ; Exact mapped bytes EB 02: jmp 0x100e7c27
        __asm _emit 0xeb
        __asm _emit 0x02
        or al, 10h
        mov byte ptr [esi + 5c8dh], al
        add ecx, 4
        inc ebp
        cmp ecx, 0a4ch
        ; Exact mapped bytes 72 C7: jb 0x100e7c00
        __asm _emit 0x72
        __asm _emit 0xc7
        mov al, byte ptr [esi + 5c8dh]
        ; Exact mapped bytes 66 33 C9: xor cx, cx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc9
        mov cl, al
        mov byte ptr [esi + 5c8ch], al
        ; Exact mapped bytes 66 89 8E 9A 5C 00 00: mov word ptr [esi + 0x5c9a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x9a
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 58 47 00 00: call 0x100ec3b0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esi + 3d00h]
        mov ecx, esi
        push edx
        push 24h
        ; Exact mapped bytes E8 F8 4F 00 00: call 0x100ecc60
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 34h]
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 B7 48 00 00: call 0x100ec530
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        push 104h
        ; Exact mapped bytes E8 1D 4B 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x4b
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 10: je 0x100e7ca3
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 1F 5C F2 FF: call 0x1000d8c0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x5c
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100e7ca5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, esi
        mov byte ptr [esp + 1ch], 3
        mov dword ptr [esi + 5c0ch], eax
        ; Exact mapped bytes E8 89 5D 00 00: call 0x100eda40
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 5c74h], ebx
        mov eax, dword ptr [esi + 1008h]
        xor edx, edx
        cmp eax, ebx
        ; Exact mapped bytes 7E 2C: jle 0x100e7cf5
        __asm _emit 0x7e
        __asm _emit 0x2c
        lea edi, [esi + 158h]
        mov eax, dword ptr [edi]
        cmp eax, ebx
        ; Exact mapped bytes 74 12: je 0x100e7ce7
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [esi + 5c74h]
        mov dword ptr [eax + 114h], ecx
        mov dword ptr [eax + 110h], ecx
        mov eax, dword ptr [esi + 1008h]
        inc edx
        add edi, 4
        cmp edx, eax
        ; Exact mapped bytes 7C DA: jl 0x100e7ccf
        __asm _emit 0x7c
        __asm _emit 0xda
        mov dword ptr [esi + 5c78h], ebx
        mov eax, dword ptr [esi + 1008h]
        xor edi, edi
        cmp eax, ebx
        ; Exact mapped bytes 7E 2C: jle 0x100e7d33
        __asm _emit 0x7e
        __asm _emit 0x2c
        lea edx, [esi + 158h]
        mov eax, dword ptr [edx]
        cmp eax, ebx
        ; Exact mapped bytes 74 12: je 0x100e7d25
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [esi + 5c78h]
        mov dword ptr [eax + 11ch], ecx
        mov dword ptr [eax + 118h], ecx
        mov eax, dword ptr [esi + 1008h]
        inc edi
        add edx, 4
        cmp edi, eax
        ; Exact mapped bytes 7C DA: jl 0x100e7d0d
        __asm _emit 0x7c
        __asm _emit 0xda
        push 20h
        ; Exact mapped bytes E8 66 4A 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x4a
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 4A: je 0x100e7d96
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x100e7d5e
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        ; Exact mapped bytes 8B 0D D8 57 1C 10: mov ecx, dword ptr [0x101c57d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 7
        cmp dword ptr [ecx + 170h], eax
        ; Exact mapped bytes 7E 1B: jle 0x100e7d8a
        __asm _emit 0x7e
        __asm _emit 0x1b
        cmp eax, ebx
        ; Exact mapped bytes 7C 17: jl 0x100e7d8a
        __asm _emit 0x7c
        __asm _emit 0x17
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0D: je 0x100e7d8a
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ecx + eax*4]
        mov ecx, edi
        push eax
        ; Exact mapped bytes E8 78 0B F6 FF: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x0b
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 0E: jmp 0x100e7d98
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor eax, eax
        mov ecx, edi
        push eax
        ; Exact mapped bytes E8 6C 0B F6 FF: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x0b
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100e7d98
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 5c30h], eax
        lea edi, [esi + 0b8h]
        mov ecx, 24h
        xor eax, eax
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, esi
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes E8 E7 70 00 00: call 0x100eeea0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0c38h]
        mov dword ptr [esi + 150h], edx
        mov ecx, dword ptr [esi + 0c38h]
        lea eax, [ecx*8]
        sub eax, ecx
        lea eax, [eax + eax*2]
        lea ecx, [ecx + eax*2]
        mov eax, 51eb851fh
        shl ecx, 1
        imul ecx
        sar edx, 5
        mov ecx, edx
        mov eax, 51eb851fh
        shr ecx, 1fh
        add edx, ecx
        mov dword ptr [esi + 154h], edx
        mov ecx, dword ptr [esi + 0c38h]
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        shl edx, 1
        mov ecx, edx
        mov dword ptr [esi + 14ch], edx
        imul ecx, edx
        push ecx
        ; Exact mapped bytes E8 83 49 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 14ch]
        mov edi, eax
        imul ecx, ecx
        mov edx, ecx
        xor eax, eax
        shr ecx, 2
        mov dword ptr [esi + 148h], edi
        push 2
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 AA: rep stosb byte ptr es:[edi], al
        __asm _emit 0xf3
        __asm _emit 0xaa
        mov eax, dword ptr [esi + 14ch]
        push eax
        push eax
        mov eax, dword ptr [esi + 148h]
        push eax
        ; Exact mapped bytes E8 AC A4 F3 FF: call 0x10022300
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xa4
        __asm _emit 0xf3
        __asm _emit 0xff
        push 88h
        ; Exact mapped bytes E8 42 49 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x49
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 18h
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 14: je 0x100e7e82
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [esi + 18h]
        mov edx, dword ptr [esi + 14h]
        push ecx
        push edx
        push 1
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 40 9A F2 FF: call 0x100118c0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x9a
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100e7e84
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 8ch], eax
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov byte ptr [esp + 20h], 3
        mov ecx, dword ptr [eax + 104e0h]
        mov dword ptr [esi + 54h], ecx
        ; Exact mapped bytes E8 FD 70 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5c44h]
        cmp eax, 0e10h
        ; Exact mapped bytes 7C 05: jl 0x100e7eb5
        __asm _emit 0x7c
        __asm _emit 0x05
        add eax, 0fffff1f0h
        cmp eax, ebx
        mov dword ptr [esi + 5c44h], eax
        ; Exact mapped bytes 7D 05: jge 0x100e7ec4
        __asm _emit 0x7d
        __asm _emit 0x05
        add eax, 0e10h
        mov dword ptr [esi + 5c44h], eax
        lea ecx, [eax + 32h]
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        cmp edx, 24h
        mov dword ptr [esi + 5c40h], edx
        ; Exact mapped bytes 7C 03: jl 0x100e7eec
        __asm _emit 0x7c
        __asm _emit 0x03
        add edx, -24h
        push 58h
        mov dword ptr [esi + 5c40h], edx
        ; Exact mapped bytes E8 A7 48 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 7A: je 0x100e7f85
        __asm _emit 0x74
        __asm _emit 0x7a
        mov eax, dword ptr [esi + 5cb0h]
        cmp eax, ebx
        ; Exact mapped bytes 74 16: je 0x100e7f2b
        __asm _emit 0x74
        __asm _emit 0x16
        cmp dword ptr [eax + 160h], ebx
        ; Exact mapped bytes 7E 0E: jle 0x100e7f2b
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 04: je 0x100e7f2b
        __asm _emit 0x74
        __asm _emit 0x04
        mov ebp, eax
        ; Exact mapped bytes EB 02: jmp 0x100e7f2d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 86 92 3E 00 00: mov ax, word ptr [esi + 0x3e92]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x92
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 38h]
        push eax
        mov eax, dword ptr [esp + 38h]
        push ebx
        push ebx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 67 6A 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100e7f87
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebp]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 02: jmp 0x100e7f87
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 5c40h]
        mov dword ptr [esi + 5cb8h], edi
        mov dword ptr [edi + 50h], eax
        mov eax, dword ptr [esi + 5cb8h]
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0e74h]
        test byte ptr [eax + 8], 7
        ; Exact mapped bytes 0F 86 1F 01 00 00: jbe 0x100e80d6
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, 1
        lea eax, [esi + 3e80h]
        mov dword ptr [esp + 3ch], ebx
        mov dword ptr [esp + 44h], 40h
        lea ebp, [esi + 5cbch]
        mov dword ptr [esp + 40h], eax
        ; Exact mapped bytes EB 04: jmp 0x100e7fde
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebx, dword ptr [esp + 3ch]
        push 58h
        ; Exact mapped bytes E8 BB 47 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x47
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100e8083
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5cb0h]
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x100e8024
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp dword ptr [eax + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x100e8024
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 7C 13: jl 0x100e8024
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x100e8024
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 44h]
        lea ebx, [eax + ecx]
        ; Exact mapped bytes EB 02: jmp 0x100e8026
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 40h]
        mov ecx, dword ptr [esp + 34h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        push eax
        mov eax, dword ptr [esp + 3ch]
        push 0
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 6C 69 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes 74 2D: je 0x100e8085
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebx + 18h]
        add ebx, 20h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebx]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebx + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebx + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebx + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100e8085
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esp + 40h]
        mov edx, dword ptr [esp + 44h]
        mov dword ptr [ebp], edi
        mov eax, dword ptr [esi + 5c40h]
        mov dword ptr [edi + 50h], eax
        mov eax, dword ptr [ebp]
        add ecx, 2
        add edx, 40h
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0e74h]
        mov dword ptr [esp + 40h], ecx
        mov ecx, dword ptr [esp + 3ch]
        mov dword ptr [esp + 44h], edx
        mov dl, byte ptr [eax + 8]
        add ebp, 4
        inc ecx
        mov dword ptr [esp + 3ch], ecx
        and edx, 7
        dec ecx
        mov byte ptr [esp + 1ch], 3
        cmp ecx, edx
        ; Exact mapped bytes 0F 8C 04 FF FF FF: jl 0x100e7fda
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 1008h]
        xor ebx, ebx
        xor edi, edi
        cmp eax, ebx
        ; Exact mapped bytes 7E 54: jle 0x100e8138
        __asm _emit 0x7e
        __asm _emit 0x54
        xor eax, eax
        mov ecx, dword ptr [esi + eax*4 + 158h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 35: je 0x100e8126
        __asm _emit 0x74
        __asm _emit 0x35
        mov ebp, dword ptr [esi + 5c40h]
        lea edx, [eax + eax*8]
        lea edx, [ebp + edx*4]
        mov ebp, dword ptr [esp + 38h]
        sub ebp, dword ptr [esi + eax*4 + 1880h]
        mov eax, dword ptr [esi + edx*8 + 1904h]
        sub ebp, eax
        mov eax, dword ptr [esi + edx*8 + 1900h]
        push ebp
        mov ebp, dword ptr [esp + 38h]
        add eax, ebp
        push eax
        ; Exact mapped bytes E8 AA 6B 01 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1008h]
        inc edi
        mov eax, edi
        and eax, 0ffffh
        cmp eax, ecx
        ; Exact mapped bytes 7C AE: jl 0x100e80e6
        __asm _emit 0x7c
        __asm _emit 0xae
        push 33h
        mov ecx, esi
        ; Exact mapped bytes E8 2F 22 00 00: call 0x100ea370
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 158h]
        mov ebp, 20h
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x100e8157
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        add edi, 4
        dec ebp
        ; Exact mapped bytes 75 EF: jne 0x100e814c
        __asm _emit 0x75
        __asm _emit 0xef
        mov ecx, esi
        ; Exact mapped bytes E8 2C 1A 00 00: call 0x100e9b90
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 E8 57 1C 10: mov eax, dword ptr [0x101c57e8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1b7h
        ; Exact mapped bytes 7E 12: jle 0x100e8187
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100e8187
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 6dch]
        ; Exact mapped bytes EB 02: jmp 0x100e8189
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 7ch
        mov dword ptr [esi + 104ch], eax
        ; Exact mapped bytes E8 0A 46 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x46
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 3D: je 0x100e81e3
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [esi + 5cb4h]
        cmp edx, ebx
        ; Exact mapped bytes 74 12: je 0x100e81c2
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [edx + 160h], ebx
        ; Exact mapped bytes 7E 0A: jle 0x100e81c2
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov edx, dword ptr [edx + 190h]
        cmp edx, ebx
        ; Exact mapped bytes 75 02: jne 0x100e81c4
        __asm _emit 0x75
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 66 8B 8E 92 3E 00 00: mov cx, word ptr [esi + 0x3e92]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x92
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C1 02: add cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x02
        push ecx
        mov ecx, dword ptr [esi + 8]
        push ecx
        mov ecx, dword ptr [esi + 4]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 4F 1B F4 FF: call 0x10029d30
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x1b
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100e81e5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 4
        mov ecx, eax
        mov byte ptr [esp + 20h], 3
        mov dword ptr [esi + 1058h], eax
        ; Exact mapped bytes E8 D7 1C F4 FF: call 0x10029ed0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x1c
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [esi + 5c40h]
        mov ecx, dword ptr [esi + 1058h]
        push edx
        ; Exact mapped bytes E8 85 1C F4 FF: call 0x10029e90
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 1058h]
        push 101h
        ; Exact mapped bytes E8 45 6F 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1058h]
        mov ebp, 7fffh
        push 58h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 6F 45 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x45
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x100e82ca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5cb4h]
        cmp eax, ebx
        ; Exact mapped bytes 74 18: je 0x100e8269
        __asm _emit 0x74
        __asm _emit 0x18
        cmp dword ptr [eax + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100e8269
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x100e8269
        __asm _emit 0x74
        __asm _emit 0x05
        lea ebp, [eax + 40h]
        ; Exact mapped bytes EB 02: jmp 0x100e826b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 86 92 3E 00 00: mov ax, word ptr [esi + 0x3e92]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x92
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        ; Exact mapped bytes 66 05 03 00: add ax, 3
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        push ebx
        push ebx
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 27 67 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x100e82c3
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ebp, 7fffh
        ; Exact mapped bytes EB 02: jmp 0x100e82cc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 5c40h]
        mov dword ptr [esi + 1054h], edi
        mov dword ptr [edi + 50h], eax
        mov ecx, dword ptr [esi + 1054h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 3
        ; Exact mapped bytes E8 70 6E 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1054h]
        push 58h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov edi, dword ptr [esi + 5cb4h]
        mov ecx, dword ptr [esi + 1054h]
        cmp edi, ebx
        sete al
        and al, 1
        ; Exact mapped bytes 66 33 D2: xor dx, dx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xd2
        mov dl, al
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        shl edx, 2
        and eax, 0fffbh
        or edx, eax
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes E8 75 44 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 1C: je 0x100e8359
        __asm _emit 0x74
        __asm _emit 0x1c
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 65 66 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100e835b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 1050h], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 1050h]
        push 101h
        mov byte ptr [esp + 20h], 3
        ; Exact mapped bytes E8 E4 6D 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1050h]
        push 58h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov dword ptr [esi + 5c7ch], ebx
        ; Exact mapped bytes E8 0D 44 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x100e842d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0cfh
        ; Exact mapped bytes 7E 12: jle 0x100e83cc
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100e83cc
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 33c0h]
        ; Exact mapped bytes EB 02: jmp 0x100e83ce
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 86 92 3E 00 00: mov ax, word ptr [esi + 0x3e92]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x92
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        ; Exact mapped bytes 66 2D 32 00: sub ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x2d
        __asm _emit 0x32
        __asm _emit 0x00
        push eax
        push ebx
        push ebx
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 C4 65 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x100e8426
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebp]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov ebp, 7fffh
        ; Exact mapped bytes EB 02: jmp 0x100e842f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 5cdch], edi
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push eax
        push ecx
        mov ecx, edi
        mov byte ptr [esp + 24h], 3
        ; Exact mapped bytes E8 87 68 01 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5cdch]
        push 101h
        ; Exact mapped bytes E8 07 6D 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5cdch]
        push 58h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 5cdch]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E8 2A 43 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x43
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 0dh
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x100e850f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 7
        ; Exact mapped bytes 7E 12: jle 0x100e84ac
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100e84ac
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 1c0h]
        ; Exact mapped bytes EB 02: jmp 0x100e84ae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 86 92 3E 00 00: mov ax, word ptr [esi + 0x3e92]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x92
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        ; Exact mapped bytes 66 2D 32 00: sub ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x2d
        __asm _emit 0x32
        __asm _emit 0x00
        push eax
        push ebx
        push ebx
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 E4 64 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x100e8506
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, edi
        mov ebp, 7fffh
        ; Exact mapped bytes EB 02: jmp 0x100e8511
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov dword ptr [esi + 5ce0h], ecx
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        push edx
        push eax
        mov byte ptr [esp + 24h], 3
        ; Exact mapped bytes E8 A7 67 01 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5ce0h]
        push 101h
        ; Exact mapped bytes E8 27 6C 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5ce0h]
        push 70h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 5ce0h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E8 4A 42 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x42
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 0eh
        ; Exact mapped bytes 74 40: je 0x100e85a8
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D 98 56 1C 10: mov ecx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 10101h
        push ebx
        push 0e0h
        push 1eh
        push 28h
        push ebx
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 F8 D5 F2 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd5
        __asm _emit 0xf2
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 0fh
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 03 42 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x42
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100e85aa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        add edx, 19h
        sub eax, 50h
        push edx
        push eax
        mov ecx, edi
        mov byte ptr [esp + 24h], 3
        mov dword ptr [esi + 0f1ch], edi
        ; Exact mapped bytes E8 06 67 01 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0f1ch]
        ; Exact mapped bytes 66 8B 86 92 3E 00 00: mov ax, word ptr [esi + 0x3e92]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x92
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 05 64 00: add ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100e85ec
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B4 69 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100e85f9
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 07 69 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0f1ch]
        mov ebp, 0fff0h
        push 70h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 91 41 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 10h
        ; Exact mapped bytes 74 40: je 0x100e8661
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D 98 56 1C 10: mov ecx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 10101h
        push ebx
        push 0e0h
        push 1eh
        push 28h
        push ebx
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 3F D5 F2 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xd5
        __asm _emit 0xf2
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 11h
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 4A 41 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100e8663
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        add edx, 19h
        add eax, 24h
        push edx
        push eax
        mov ecx, edi
        mov byte ptr [esp + 24h], 3
        mov dword ptr [esi + 0f20h], edi
        ; Exact mapped bytes E8 4D 66 01 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0f20h]
        ; Exact mapped bytes 66 8B 86 92 3E 00 00: mov ax, word ptr [esi + 0x3e92]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x92
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 05 64 00: add ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100e86a5
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 FB 68 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100e86b2
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 4E 68 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0f20h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D DC 58 1C 10: mov ecx, dword ptr [0x101c58dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 1438h]
        mov ecx, dword ptr [esi + 5cb0h]
        cmp ecx, eax
        ; Exact mapped bytes 75 29: jne 0x100e86fb
        __asm _emit 0x75
        __asm _emit 0x29
        mov ecx, dword ptr [esi + 5cb8h]
        push 101h
        ; Exact mapped bytes E8 7E 6A 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5cb8h]
        mov ecx, 4
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1054h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        push 3c0h
        ; Exact mapped bytes E8 9B 40 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 12h
        ; Exact mapped bytes 74 10: je 0x100e8725
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 FD BA F2 FF: call 0x10014220
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xba
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100e8727
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 5c04h], eax
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        push 3c0h
        mov byte ptr [esp + 20h], 3
        ; Exact mapped bytes E8 5E 40 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 13h
        ; Exact mapped bytes 74 10: je 0x100e8762
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C0 BA F2 FF: call 0x10014220
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xba
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100e8764
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 5c08h], eax
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e74h]
        push 70h
        mov byte ptr [esp + 20h], 3
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        and eax, 1ffh
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [esi + 0f04h], eax
        add eax, 1eh
        mov dword ptr [esi + 0f08h], eax
        ; Exact mapped bytes E8 03 40 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 14h
        ; Exact mapped bytes 74 4D: je 0x100e87fc
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 8]
        push 10101h
        push ebx
        lea edx, [ecx + 46h]
        push 83add7h
        lea ebp, [eax - 50h]
        push eax
        add ecx, -46h
        push edx
        ; Exact mapped bytes 8B 15 BC 56 1C 10: mov edx, dword ptr [0x101c56bc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A4 D3 F2 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xd3
        __asm _emit 0xf2
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 15h
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 AF 3F 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x3f
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100e87fe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 70h
        mov byte ptr [esp + 20h], 3
        mov dword ptr [esi + 0f0ch], edi
        ; Exact mapped bytes E8 90 3F 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x3f
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 16h
        ; Exact mapped bytes 74 4C: je 0x100e886e
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 8]
        push 10101h
        push ebx
        lea edx, [ecx + 46h]
        push 0e0e0e0h
        lea ebp, [eax - 50h]
        push eax
        ; Exact mapped bytes A1 BC 56 1C 10: mov eax, dword ptr [0x101c56bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        add ecx, -46h
        push edx
        push ebp
        push ecx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 32 D3 F2 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xd3
        __asm _emit 0xf2
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 17h
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 3D 3F 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x3f
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100e8870
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 70h
        mov byte ptr [esp + 20h], 3
        mov dword ptr [esi + 0f14h], edi
        ; Exact mapped bytes E8 1E 3F 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x3f
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 18h
        ; Exact mapped bytes 74 4D: je 0x100e88e1
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 8]
        push 10101h
        push ebx
        lea edx, [ecx + 46h]
        push 0e0e0e0h
        lea ebp, [eax - 40h]
        push eax
        add ecx, -46h
        push edx
        push ebp
        push ecx
        ; Exact mapped bytes 8B 0D 98 56 1C 10: mov ecx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 BF D2 F2 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xd2
        __asm _emit 0xf2
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 19h
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 CA 3E 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x3e
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100e88e3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 0f38h]
        mov byte ptr [esp + 1ch], 3
        cmp eax, ebx
        mov dword ptr [esi + 0f10h], edi
        ; Exact mapped bytes 74 48: je 0x100e8940
        __asm _emit 0x74
        __asm _emit 0x48
        lea edi, [esi + 0f44h]
        push edi
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea edx, [eax + eax*2]
        mov eax, dword ptr [esi + 4]
        lea ecx, [eax + edx*2 - 43h]
        push ecx
        mov ecx, dword ptr [esi + 0f14h]
        ; Exact mapped bytes E8 35 64 01 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0f0ch]
        mov eax, dword ptr [eax + 6ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 0C: je 0x100e8934
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp edi, ebx
        ; Exact mapped bytes 74 08: je 0x100e8934
        __asm _emit 0x74
        __asm _emit 0x08
        push edi
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 0f0ch]
        or byte ptr [eax + 24h], 1
        ; Exact mapped bytes EB 0C: jmp 0x100e894c
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 0f0ch]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0f14h]
        lea ecx, [esi + 37ch]
        mov eax, dword ptr [eax + 6ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 0C: je 0x100e896b
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100e896b
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edi, dword ptr [esi + 0f10h]
        mov ebp, 3e8h
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100e8987
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 19 66 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100e8994
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 6C 65 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0f14h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100e89ab
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F5 65 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100e89b8
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 48 65 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0f10h]
        mov ecx, 1
        push 54h
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0f14h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 C8 3D 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1ah
        mov ebx, 6b7h
        ; Exact mapped bytes 74 76: je 0x100e8a65
        __asm _emit 0x74
        __asm _emit 0x76
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100e8a0e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100e8a0e
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1adch]
        ; Exact mapped bytes EB 02: jmp 0x100e8a10
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 40h
        sub eax, 40h
        push 0
        sub ecx, 4ah
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 84 5F 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100e8a67
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100e8a67
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 3
        mov dword ptr [esi + 0f24h], edi
        ; Exact mapped bytes E8 27 3D 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1bh
        ; Exact mapped bytes 74 76: je 0x100e8b01
        __asm _emit 0x74
        __asm _emit 0x76
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100e8aaa
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100e8aaa
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1adch]
        ; Exact mapped bytes EB 02: jmp 0x100e8aac
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 40h
        sub eax, 50h
        push 0
        sub ecx, 4ah
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 E8 5E 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100e8b03
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebp]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 02: jmp 0x100e8b03
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 70h
        mov byte ptr [esp + 20h], 3
        mov dword ptr [esi + 0f28h], edi
        ; Exact mapped bytes E8 8B 3C 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x3c
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1ch
        ; Exact mapped bytes 74 50: je 0x100e8b77
        __asm _emit 0x74
        __asm _emit 0x50
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 10101h
        push 0
        lea edx, [eax - 52h]
        lea ebp, [ecx + 46h]
        push 7f7fffh
        add eax, -5ch
        push edx
        push ebp
        add ecx, -46h
        push eax
        ; Exact mapped bytes A1 98 56 1C 10: mov eax, dword ptr [0x101c5698]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 29 D0 F2 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xd0
        __asm _emit 0xf2
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 1dh
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 34 3C 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x3c
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100e8b79
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 0f28h]
        mov ebx, 0fffeh
        mov dword ptr [esi + 0f2ch], edi
        push 70h
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0f2ch]
        mov byte ptr [esp + 20h], 3
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes E8 FC 3B 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1eh
        ; Exact mapped bytes 74 51: je 0x100e8c07
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 10101h
        push 0
        lea edx, [eax + 19h]
        lea ebp, [ecx + 63h]
        push 71c4dfh
        add eax, 0ah
        push edx
        add ecx, -63h
        push ebp
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 98 56 1C 10: mov ecx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 99 CF F2 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xcf
        __asm _emit 0xf2
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 1fh
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 A4 3B 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100e8c09
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0f18h], edi
        mov eax, dword ptr [esi + 0e74h]
        mov edi, dword ptr [edi + 6ch]
        mov byte ptr [esp + 1ch], 3
        lea edx, [eax + 328h]
        mov al, byte ptr [eax + 2]
        and eax, 1fh
        push edx
        lea eax, [eax + eax*2]
        lea ecx, [eax*8 + 10199610h]
        push ecx
        push 101abe14h
        push edi
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 0f18h]
        xor ebp, ebp
        add esp, 10h
        mov dword ptr [eax + 54h], 6
        mov edi, dword ptr [esi + 0f18h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 E8 03: mov word ptr [edi + 0x26], 0x3e8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xe8
        __asm _emit 0x03
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x100e8c6c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 34 63 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x100e8c79
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 87 62 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0f18h]
        push 54h
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes E8 16 3B 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebp
        mov byte ptr [esp + 1ch], 20h
        ; Exact mapped bytes 74 28: je 0x100e8cc4
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 3e8h
        sub eax, 4dh
        push ebp
        sub ecx, 63h
        push ebp
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 F7 5C 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes EB 02: jmp 0x100e8cc6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 3
        mov dword ptr [esi + 0eech], edi
        ; Exact mapped bytes E8 C8 3A 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x3a
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebp
        mov byte ptr [esp + 1ch], 21h
        ; Exact mapped bytes 74 28: je 0x100e8d12
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 3e8h
        sub eax, 4dh
        push ebp
        sub ecx, 63h
        push ebp
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A9 5C 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes EB 02: jmp 0x100e8d14
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 0f40h]
        mov byte ptr [esp + 1ch], 3
        cmp eax, ebp
        mov dword ptr [esi + 0ef0h], edi
        ; Exact mapped bytes 0F 84 0C 02 00 00: je 0x100e8f39
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [edx + 21a34h], ebp
        ; Exact mapped bytes 0F 84 F2 01 00 00: je 0x100e8f31
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0f34h], ebp
        ; Exact mapped bytes 0F 85 E6 01 00 00: jne 0x100e8f31
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        shr eax, 10h
        ; Exact mapped bytes 75 04: jne 0x100e8d54
        __asm _emit 0x75
        __asm _emit 0x04
        xor edx, edx
        ; Exact mapped bytes EB 1A: jmp 0x100e8d6e
        __asm _emit 0xeb
        __asm _emit 0x1a
        cmp eax, 1
        ; Exact mapped bytes 75 07: jne 0x100e8d60
        __asm _emit 0x75
        __asm _emit 0x07
        mov edx, 4
        ; Exact mapped bytes EB 0E: jmp 0x100e8d6e
        __asm _emit 0xeb
        __asm _emit 0x0e
        cmp eax, 3
        ; Exact mapped bytes 0F 85 E0 00 00 00: jne 0x100e8e49
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        ; Exact mapped bytes A1 1C 58 1C 10: mov eax, dword ptr [0x101c581c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], edx
        ; Exact mapped bytes 7E 13: jle 0x100e8d8e
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp edx, ebp
        ; Exact mapped bytes 7C 0F: jl 0x100e8d8e
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 05: je 0x100e8d8e
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + edx*4]
        ; Exact mapped bytes EB 02: jmp 0x100e8d90
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0eech]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100e8dc5
        __asm _emit 0x74
        __asm _emit 0x28
        mov edi, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edi
        mov edi, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edi
        mov edi, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edi
        mov edi, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edi
        mov edi, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes 8B 0D 1C 58 1C 10: mov ecx, dword ptr [0x101c581c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [edx + 1]
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 13: jle 0x100e8de9
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp eax, ebp
        ; Exact mapped bytes 7C 0F: jl 0x100e8de9
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 05: je 0x100e8de9
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100e8deb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0ef0h]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100e8e20
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 8]
        sub ecx, 53h
        push ecx
        mov ecx, dword ptr [esi + 0eech]
        ; Exact mapped bytes E8 8E 5F 01 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 0ef0h]
        sub edx, 53h
        push edx
        ; Exact mapped bytes E8 7C 5F 01 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x100e8ef7
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 5ah
        ; Exact mapped bytes 7E 12: jle 0x100e8e69
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x100e8e69
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 168h]
        ; Exact mapped bytes EB 02: jmp 0x100e8e6b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0eech]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100e8ea0
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 59h
        ; Exact mapped bytes 7E 12: jle 0x100e8ec0
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x100e8ec0
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 164h]
        ; Exact mapped bytes EB 02: jmp 0x100e8ec2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0ef0h]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100e8ef7
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 0eech]
        push 0fffffeffh
        ; Exact mapped bytes E8 59 62 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ef0h]
        push 101h
        ; Exact mapped bytes E8 49 62 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0eech]
        mov ebx, 7fffh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0ef0h]
        ; Exact mapped bytes E9 68 03 00 00: jmp 0x100e9299
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, ebp
        ; Exact mapped bytes 0F 85 E8 00 00 00: jne 0x100e9021
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 5ah
        ; Exact mapped bytes 7E 12: jle 0x100e8f59
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x100e8f59
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 168h]
        ; Exact mapped bytes EB 02: jmp 0x100e8f5b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0eech]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100e8f90
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 59h
        ; Exact mapped bytes 7E 12: jle 0x100e8fb0
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x100e8fb0
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 164h]
        ; Exact mapped bytes EB 02: jmp 0x100e8fb2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0ef0h]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100e8fe7
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 0eech]
        push 0fffffeffh
        ; Exact mapped bytes E8 69 61 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ef0h]
        push 101h
        ; Exact mapped bytes E8 59 61 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0eech]
        mov ebx, 7fffh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0ef0h]
        ; Exact mapped bytes E9 78 02 00 00: jmp 0x100e9299
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0f34h], 80h
        ; Exact mapped bytes 77 63: ja 0x100e9090
        __asm _emit 0x77
        __asm _emit 0x63
        ; Exact mapped bytes 8B 0D 44 58 1C 10: mov ecx, dword ptr [0x101c5844]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 13: jle 0x100e904e
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp eax, ebp
        ; Exact mapped bytes 7C 0F: jl 0x100e904e
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 05: je 0x100e904e
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100e9050
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        cmp eax, ebp
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100e907f
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [eax]
        add edi, 14h
        mov dword ptr [edi], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 4], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 8], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [esi + 0eech]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 FE 01 00 00: jmp 0x100e928e
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 34 57 1C 10: mov edx, dword ptr [0x101c5734]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp edx, ebp
        ; Exact mapped bytes 0F 84 22 01 00 00: je 0x100e91c0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax - 1]
        mov eax, dword ptr [edx + 4]
        cmp eax, ebp
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x100e9131
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 164h]
        cmp edx, ecx
        ; Exact mapped bytes 76 7B: jbe 0x100e9131
        __asm _emit 0x76
        __asm _emit 0x7b
        cmp edx, ecx
        ; Exact mapped bytes 7E 13: jle 0x100e90cd
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp ecx, ebp
        ; Exact mapped bytes 7C 0F: jl 0x100e90cd
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 05: je 0x100e90cd
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + ecx*4]
        ; Exact mapped bytes EB 02: jmp 0x100e90cf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        cmp eax, ebp
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100e90fe
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [eax]
        add edi, 14h
        mov dword ptr [edi], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 4], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 8], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 0ef0h]
        sub eax, 5eh
        push eax
        ; Exact mapped bytes E8 40 5C 01 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        sub ecx, 53h
        push ecx
        mov ecx, dword ptr [esi + 0ef0h]
        ; Exact mapped bytes E8 9E 5C 01 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0eech]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes E9 5D 01 00 00: jmp 0x100e928e
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 5ah
        ; Exact mapped bytes 7E 12: jle 0x100e9151
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x100e9151
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 168h]
        ; Exact mapped bytes EB 02: jmp 0x100e9153
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0eech]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100e9188
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 59h
        ; Exact mapped bytes 7E 12: jle 0x100e91a8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x100e91a8
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 164h]
        ; Exact mapped bytes EB 02: jmp 0x100e91aa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0ef0h]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 0F 84 B3 00 00 00: je 0x100e926e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x100e9246
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 5ah
        ; Exact mapped bytes 7E 12: jle 0x100e91e0
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x100e91e0
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 168h]
        ; Exact mapped bytes EB 02: jmp 0x100e91e2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0eech]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100e9217
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 59h
        ; Exact mapped bytes 7E 12: jle 0x100e9237
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x100e9237
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 164h]
        ; Exact mapped bytes EB 02: jmp 0x100e9239
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0ef0h]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100e926e
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 0eech]
        push 0fffffeffh
        ; Exact mapped bytes E8 E2 5E 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ef0h]
        push 101h
        ; Exact mapped bytes E8 D2 5E 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ef0h]
        mov ebx, 7fffh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 FC 34 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        xor ebp, ebp
        mov byte ptr [esp + 1ch], 22h
        cmp edi, ebp
        ; Exact mapped bytes 74 77: je 0x100e932f
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 40 58 1C 10: mov eax, dword ptr [0x101c5840]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 0E: jle 0x100e92d3
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 04: je 0x100e92d3
        __asm _emit 0x74
        __asm _emit 0x04
        mov ebp, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x100e92d5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 3e8h
        sub eax, 3eh
        push 0
        sub ecx, 61h
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 BC 56 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100e932b
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebp]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        xor ebp, ebp
        ; Exact mapped bytes EB 02: jmp 0x100e9331
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], 3
        mov dword ptr [esi + 0ef4h], edi
        ; Exact mapped bytes E8 5D 34 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebp
        mov byte ptr [esp + 1ch], 23h
        ; Exact mapped bytes 74 7A: je 0x100e93cf
        __asm _emit 0x74
        __asm _emit 0x7a
        ; Exact mapped bytes A1 40 58 1C 10: mov eax, dword ptr [0x101c5840]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], ebp
        ; Exact mapped bytes 7E 0A: jle 0x100e936c
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 75 02: jne 0x100e936e
        __asm _emit 0x75
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 3e8h
        sub eax, 3eh
        push 0
        sub ecx, 61h
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 23 56 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        test ebp, ebp
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x100e93cb
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        xor ebp, ebp
        ; Exact mapped bytes EB 02: jmp 0x100e93d1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0ef8h], edi
        mov ecx, dword ptr [esi + 0ef4h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 3
        ; Exact mapped bytes E8 74 5D 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ef4h]
        push 54h
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0ef8h]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0ef8h]
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0ef8h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 86 6A 07 00 00: mov ax, word ptr [esi + 0x76a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x6a
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes E8 7B 33 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x33
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebp
        mov byte ptr [esp + 1ch], 24h
        ; Exact mapped bytes 74 7F: je 0x100e94b6
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 70bh
        ; Exact mapped bytes 7E 12: jle 0x100e945a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x100e945a
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1c2ch]
        ; Exact mapped bytes EB 02: jmp 0x100e945c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 3e8h
        sub eax, 50h
        push 0
        sub ecx, 54h
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 35 55 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x100e94b2
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        xor ebp, ebp
        ; Exact mapped bytes EB 02: jmp 0x100e94b8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 3
        mov dword ptr [esi + 0efch], edi
        ; Exact mapped bytes E8 D6 32 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x32
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebp
        mov byte ptr [esp + 1ch], 25h
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x100e9561
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 70ch
        ; Exact mapped bytes 7E 12: jle 0x100e9503
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x100e9503
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1c30h]
        ; Exact mapped bytes EB 02: jmp 0x100e9505
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 3e8h
        sub eax, 50h
        push 0
        sub ecx, 54h
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 8C 54 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x100e955b
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebp]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov ecx, edi
        xor ebp, ebp
        ; Exact mapped bytes EB 02: jmp 0x100e9563
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], 3
        mov dword ptr [esi + 0f00h], ecx
        ; Exact mapped bytes E8 E8 5B 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 21 32 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x32
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebp
        mov byte ptr [esp + 1ch], 26h
        ; Exact mapped bytes 74 75: je 0x100e9606
        __asm _emit 0x74
        __asm _emit 0x75
        ; Exact mapped bytes A1 D0 57 1C 10: mov eax, dword ptr [0x101c57d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], ebp
        ; Exact mapped bytes 7E 0A: jle 0x100e95a8
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 75 02: jne 0x100e95aa
        __asm _emit 0x75
        __asm _emit 0x02
        xor ebp, ebp
        push 40h
        push 0
        push 0
        push 0ffffff38h
        push 0fffffed4h
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 EE 53 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        test ebp, ebp
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x100e9600
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, edi
        xor ebp, ebp
        ; Exact mapped bytes EB 02: jmp 0x100e9608
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 20h], 3
        mov dword ptr [esi + 0f30h], ecx
        ; Exact mapped bytes E8 43 5B 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0f30h]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov edi, dword ptr [esi + 0f30h]
        ; Exact mapped bytes 66 C7 47 26 10 27: mov word ptr [edi + 0x26], 0x2710
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x10
        __asm _emit 0x27
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x100e9640
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 60 59 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x100e964d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B3 58 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0f30h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 103ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 10: je 0x100e9673
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [esi + 1044h]
        sub edx, eax
        sar edx, 2
        cmp edx, 20h
        ; Exact mapped bytes 73 7A: jae 0x100e96ed
        __asm _emit 0x73
        __asm _emit 0x7a
        push 80h
        ; Exact mapped bytes E8 23 31 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x31
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [esi + 1040h]
        mov edi, eax
        mov eax, dword ptr [esi + 103ch]
        add esp, 4
        cmp eax, edx
        mov ecx, edi
        ; Exact mapped bytes 74 12: je 0x100e96a6
        __asm _emit 0x74
        __asm _emit 0x12
        cmp ecx, ebp
        ; Exact mapped bytes 74 04: je 0x100e969c
        __asm _emit 0x74
        __asm _emit 0x04
        mov ebx, dword ptr [eax]
        mov dword ptr [ecx], ebx
        add eax, 4
        add ecx, 4
        cmp eax, edx
        ; Exact mapped bytes 75 EE: jne 0x100e9694
        __asm _emit 0x75
        __asm _emit 0xee
        mov eax, dword ptr [esi + 103ch]
        push eax
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes E8 CE 30 08 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x30
        __asm _emit 0x08
        __asm _emit 0x00
        lea eax, [edi + 80h]
        add esp, 4
        mov dword ptr [esi + 1044h], eax
        mov ecx, dword ptr [esi + 103ch]
        cmp ecx, ebp
        ; Exact mapped bytes 75 04: jne 0x100e96d3
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0B: jmp 0x100e96de
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [esi + 1040h]
        sub eax, ecx
        sar eax, 2
        lea ecx, [edi + eax*4]
        mov dword ptr [esi + 1040h], ecx
        mov dword ptr [esi + 103ch], edi
        mov ecx, dword ptr [esp + 24h]
        mov dword ptr [esi + 5c50h], 1
        mov dword ptr [esi + 5c54h], ebp
        mov dword ptr [esi + 5ca8h], ebp
        mov dword ptr [esi + 7ch], ebp
        ; Exact mapped bytes 66 8B 51 02: mov dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 96 2E 03 00 00: mov word ptr [esi + 0x32e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0f10h]
        add ecx, 6
        mov eax, dword ptr [eax + 6ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 0C: je 0x100e9731
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100e9731
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 5ef4h], ebp
        mov dword ptr [esi + 5ef8h], ebp
        mov dword ptr [esi + 320h], 0ffffffffh
        mov ecx, 6
        xor eax, eax
        lea edi, [esi + 0ed0h]
        mov dword ptr [esi + 5ca4h], ebp
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes EB 0E: jmp 0x100e976c
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov dword ptr [esi + 5c40h], ebp
        mov dword ptr [esi + 8ch], ebp
        xor ebp, ebp
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [esi + 0ee8h], ebp
        mov dword ptr [esi + 5f80h], ebp
        mov dword ptr [esi + 5f84h], ebp
        mov dword ptr [esi + 5f88h], ebp
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 28 00: ret 0x28
        __asm _emit 0xc2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}
