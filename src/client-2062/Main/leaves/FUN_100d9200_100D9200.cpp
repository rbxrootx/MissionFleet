// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D9200 .. +0x2E4 bytes.
extern "C" __declspec(naked) void FUN_100d9200_100D9200() {
    __asm {
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        push 10173646h
        push eax
        mov eax, dword ptr [esp + 10h]
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        push eax
        mov ecx, dword ptr [esi + 9ch]
        ; Exact mapped bytes E8 F5 64 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 24h]
        push ecx
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes E8 E5 64 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE 9C 01 00 00 04: cmp word ptr [esi + 0x19c], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        mov ebp, 1
        ; Exact mapped bytes 66 89 AE C0 01 00 00: mov word ptr [esi + 0x1c0], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 13: jne 0x100d9264
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [esi + 0b8h]
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 0b8h]
        or byte ptr [eax + 24h], 2
        mov eax, dword ptr [esi + 94h]
        mov ecx, 0fh
        xor ebx, ebx
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 98h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esp + 2ch]
        cmp eax, ebx
        ; Exact mapped bytes 0F 86 44 02 00 00: jbe 0x100d94cf
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 86 7E 01 00 00: mov ax, word ptr [esi + 0x17e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 20h], 6
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 50: je 0x100d92ef
        __asm _emit 0x74
        __asm _emit 0x50
        xor edi, edi
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 76 29: jbe 0x100d92cf
        __asm _emit 0x76
        __asm _emit 0x29
        mov edx, dword ptr [esi + 188h]
        mov ecx, dword ptr [edx + edi*4]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x100d92c1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        push ebp
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 188h]
        mov dword ptr [ecx + edi*4], ebx
        xor edx, edx
        inc edi
        ; Exact mapped bytes 66 8B 96 7E 01 00 00: mov dx, word ptr [esi + 0x17e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, edx
        ; Exact mapped bytes 7C D7: jl 0x100d92a6
        __asm _emit 0x7c
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 188h]
        cmp eax, ebx
        ; Exact mapped bytes 74 0F: je 0x100d92e8
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 A5 34 09 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x34
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 188h], ebx
        ; Exact mapped bytes 66 89 9E 7E 01 00 00: mov word ptr [esi + 0x17e], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 86 80 01 00 00: mov ax, word ptr [esi + 0x180]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 50: je 0x100d934b
        __asm _emit 0x74
        __asm _emit 0x50
        xor edi, edi
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 76 29: jbe 0x100d932b
        __asm _emit 0x76
        __asm _emit 0x29
        mov eax, dword ptr [esi + 18ch]
        mov ecx, dword ptr [eax + edi*4]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x100d931d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        push ebp
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov eax, dword ptr [esi + 18ch]
        mov dword ptr [eax + edi*4], ebx
        xor ecx, ecx
        inc edi
        ; Exact mapped bytes 66 8B 8E 80 01 00 00: mov cx, word ptr [esi + 0x180]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, ecx
        ; Exact mapped bytes 7C D7: jl 0x100d9302
        __asm _emit 0x7c
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 0F: je 0x100d9344
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 49 34 09 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x34
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 18ch], ebx
        ; Exact mapped bytes 66 89 9E 80 01 00 00: mov word ptr [esi + 0x180], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 28h]
        ; Exact mapped bytes 66 8B 55 00: mov dx, word ptr [ebp]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        lea eax, [ebp + 2]
        ; Exact mapped bytes 66 89 96 7E 01 00 00: mov word ptr [esi + 0x17e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp + 4]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        lea eax, [esi + 182h]
        ; Exact mapped bytes 66 89 8E 80 01 00 00: mov word ptr [esi + 0x180], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 0A: mov cx, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0a
        xor edx, edx
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes 66 8B 96 7E 01 00 00: mov dx, word ptr [esi + 0x17e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        shl edx, 2
        push edx
        ; Exact mapped bytes E8 18 34 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x34
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        xor edi, edi
        ; Exact mapped bytes 66 39 9E 7E 01 00 00: cmp word ptr [esi + 0x17e], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 188h], eax
        lea eax, [ebp + 6]
        ; Exact mapped bytes 76 73: jbe 0x100d9412
        __asm _emit 0x76
        __asm _emit 0x73
        mov ebx, eax
        push 45ch
        ; Exact mapped bytes E8 F5 33 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x33
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov dword ptr [esp + 18h], 0
        ; Exact mapped bytes 74 0A: je 0x100d93c8
        __asm _emit 0x74
        __asm _emit 0x0a
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 4A C7 F4 FF: call 0x10025b10
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xc7
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d93ca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 188h]
        push 100h
        mov dword ptr [esp + 1ch], 0ffffffffh
        mov dword ptr [ecx + edi*4], eax
        mov edx, dword ptr [esi + 188h]
        mov ecx, dword ptr [edx + edi*4]
        ; Exact mapped bytes E8 32 5D 02 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 20h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 86 7E 01 00 00: mov ax, word ptr [esi + 0x17e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add ecx, 37ch
        inc edi
        add ebx, 37ch
        cmp edi, eax
        mov dword ptr [esp + 20h], ecx
        ; Exact mapped bytes 7C 91: jl 0x100d93a1
        __asm _emit 0x7c
        __asm _emit 0x91
        xor ebx, ebx
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8E 80 01 00 00: mov cx, word ptr [esi + 0x180]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        shl ecx, 2
        push ecx
        ; Exact mapped bytes E8 7C 33 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x33
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes 66 39 9E 80 01 00 00: cmp word ptr [esi + 0x180], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 18ch], eax
        mov dword ptr [esp + 24h], ebx
        ; Exact mapped bytes 76 77: jbe 0x100d94b1
        __asm _emit 0x76
        __asm _emit 0x77
        mov edx, dword ptr [esp + 20h]
        push 0b74h
        mov edi, dword ptr [edx + ebp]
        lea ebx, [edx + ebp]
        shr edi, 1
        and edi, 1fh
        ; Exact mapped bytes E8 4D 33 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x33
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov dword ptr [esp + 18h], 1
        ; Exact mapped bytes 74 13: je 0x100d9479
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [esp + 20h]
        lea ecx, [ecx + ebp + 5ch]
        push ecx
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 29 7F 01 00: call 0x100f13a0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d947b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 18ch]
        mov ecx, dword ptr [esp + 24h]
        mov dword ptr [esp + 18h], 0ffffffffh
        mov dword ptr [edx + ecx*4], eax
        mov edx, dword ptr [esp + 20h]
        lea eax, [edi + edi*4]
        inc ecx
        mov dword ptr [esp + 24h], ecx
        lea eax, [edx + eax*2 + 5ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 96 80 01 00 00: mov dx, word ptr [esi + 0x180]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 20h], eax
        cmp ecx, edx
        ; Exact mapped bytes 7C 89: jl 0x100d943a
        __asm _emit 0x7c
        __asm _emit 0x89
        mov ecx, esi
        ; Exact mapped bytes E8 D8 1E 00 00: call 0x100db390
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 0ech
        mov ecx, 3
        mov eax, dword ptr [esi]
        add esi, 4
        or byte ptr [eax + 24h], 1
        dec ecx
        ; Exact mapped bytes 75 F4: jne 0x100d94c3
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [esp + 10h]
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
