// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1003B8A0 .. +0x7E1 bytes.
extern "C" __declspec(naked) void FUN_1003b8a0_1003B8A0() {
    __asm {
        sub esp, 138h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        or eax, 0ffffffffh
        push edi
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 1ch], eax
        mov eax, dword ptr [esi + 304h]
        mov ebx, dword ptr [esi + 2fch]
        test eax, eax
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esp + 10h], 0
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 89 54 24 44: mov word ptr [esp + 0x44], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 74 09: je 0x1003b8e3
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [eax + 14h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0e8h]
        mov eax, dword ptr [ecx + 88h]
        test eax, eax
        ; Exact mapped bytes 7E 05: jle 0x1003b8f8
        __asm _emit 0x7e
        __asm _emit 0x05
        ; Exact mapped bytes E8 18 8E 0C 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x00
        lea edi, [esi + 0ech]
        mov ebp, 7
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx + 88h]
        test eax, eax
        ; Exact mapped bytes 7E 05: jle 0x1003b914
        __asm _emit 0x7e
        __asm _emit 0x05
        ; Exact mapped bytes E8 FC 8D 0C 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x00
        add edi, 4
        dec ebp
        ; Exact mapped bytes 75 E9: jne 0x1003b903
        __asm _emit 0x75
        __asm _emit 0xe9
        mov eax, dword ptr [esi + 308h]
        test eax, eax
        ; Exact mapped bytes 0F 8E 4E 07 00 00: jle 0x1003c076
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x4e
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2fch]
        ; Exact mapped bytes 8B 3D 88 51 17 10: mov edi, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 304h], ecx
        mov dword ptr [esp + 40h], 0
        ; Exact mapped bytes 0F 8E D2 04 00 00: jle 0x1003be1a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 86 A4 02 00 00: mov ax, word ptr [esi + 0x2a4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 52 02 00 00: jne 0x1003bbab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [ebx + 8]
        mov edx, 1
        mov cl, byte ptr [ebp + 6]
        dec cl
        shl edx, cl
        ; Exact mapped bytes 66 85 96 F0 02 00 00: test word ptr [esi + 0x2f0], dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 8B 04 00 00: je 0x1003be00
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [ebp + 98h]
        lea eax, [ebp + 78h]
        and ecx, 7
        push eax
        shl ecx, 4
        add ecx, 10199880h
        lea edx, [esp + 4ch]
        push ecx
        push 101a855ch
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0e8h]
        add esp, 10h
        lea eax, [esp + 48h]
        push 777777h
        push ebx
        push eax
        ; Exact mapped bytes E8 FF 82 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x82
        __asm _emit 0x0c
        __asm _emit 0x00
        lea eax, [esi + 0ech]
        mov edx, 6
        mov ecx, dword ptr [eax]
        add eax, 4
        or byte ptr [ecx + 24h], 1
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1003b9bc
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [esi + 0ech]
        push 14bh
        ; Exact mapped bytes E8 78 33 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x33
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f0h]
        push 18ch
        ; Exact mapped bytes E8 68 33 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x33
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f4h]
        push 1b9h
        ; Exact mapped bytes E8 58 33 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x33
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f8h]
        push 1e6h
        ; Exact mapped bytes E8 48 33 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x33
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0fch]
        push 213h
        ; Exact mapped bytes E8 38 33 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x33
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 100h]
        push 259h
        ; Exact mapped bytes E8 28 33 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x33
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0ch]
        lea edx, [esp + 20h]
        push ecx
        push 101a8580h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0ech]
        add esp, 0ch
        lea eax, [esp + 20h]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 5E 82 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x82
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        mov eax, 10624dd3h
        push edx
        mul dword ptr [ebp + 24h]
        shr edx, 6
        push edx
        lea edx, [esp + 28h]
        push 101a8578h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0f0h]
        add esp, 10h
        lea eax, [esp + 20h]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 15 82 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x82
        __asm _emit 0x0c
        __asm _emit 0x00
        xor ecx, ecx
        lea edx, [esp + 20h]
        ; Exact mapped bytes 66 8B 4D 1E: mov cx, word ptr [ebp + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x1e
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0f4h]
        add esp, 0ch
        lea eax, [esp + 20h]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 E8 81 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 10h]
        lea edx, [esp + 20h]
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0f8h]
        add esp, 0ch
        lea eax, [esp + 20h]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 BE 81 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x81
        __asm _emit 0x0c
        __asm _emit 0x00
        xor eax, eax
        mov ecx, 64h
        ; Exact mapped bytes 66 8B 85 A0 00 00 00: mov ax, word ptr [ebp + 0xa0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 18h], eax
        cdq
        idiv ecx
        mov eax, 51eb851fh
        lea ecx, [esp + 20h]
        push edx
        imul dword ptr [esp + 1ch]
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        push 101a8578h
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0fch]
        add esp, 10h
        lea edx, [esp + 20h]
        push 777777h
        push 0
        push edx
        ; Exact mapped bytes E8 6E 81 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x81
        __asm _emit 0x0c
        __asm _emit 0x00
        mov al, byte ptr [ebp + 9ch]
        lea ecx, [esp + 20h]
        and eax, 7fh
        push eax
        push 101a8554h
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 100h]
        add esp, 0ch
        lea edx, [esp + 20h]
        push 777777h
        push 0
        push edx
        ; Exact mapped bytes E8 3E 81 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x81
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 8]
        ; Exact mapped bytes 66 8B 4C 24 44: mov cx, word ptr [esp + 0x44]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 66 39 08: cmp word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x08
        ; Exact mapped bytes 75 08: jne 0x1003bb87
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [esp + 14h], edx
        mov eax, dword ptr [esi + 2c4h]
        cmp eax, 0ffh
        ; Exact mapped bytes 0F 84 64 02 00 00: je 0x1003bdfc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4D 06: mov cx, word ptr [ebp + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x06
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 56 02 00 00: jne 0x1003bdfc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 49 02 00 00: jmp 0x1003bdf4
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 06 00: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 4B 02 00 00: jne 0x1003be00
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [ebx + 8]
        mov eax, 1
        mov dword ptr [esp + 18h], ebp
        mov cl, byte ptr [ebp + 6]
        dec cl
        shl eax, cl
        ; Exact mapped bytes 66 85 86 F0 02 00 00: test word ptr [esi + 0x2f0], ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 2B 02 00 00: je 0x1003be00
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp + 78h]
        lea edx, [esp + 48h]
        push ecx
        push 1017f54ch
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0e8h]
        add esp, 0ch
        lea eax, [esp + 48h]
        push 777777h
        push ebx
        push eax
        ; Exact mapped bytes E8 B2 80 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esi + 0ech]
        mov edx, 6
        mov eax, dword ptr [ecx]
        add ecx, 4
        or byte ptr [eax + 24h], 1
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1003bc09
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [esi + 0ech]
        push 14bh
        ; Exact mapped bytes E8 2B 31 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x31
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f0h]
        push 182h
        ; Exact mapped bytes E8 1B 31 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x31
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f4h]
        push 1b9h
        ; Exact mapped bytes E8 0B 31 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x31
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f8h]
        push 1e6h
        ; Exact mapped bytes E8 FB 30 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x30
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0fch]
        push 213h
        ; Exact mapped bytes E8 EB 30 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x30
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 100h]
        push 259h
        ; Exact mapped bytes E8 DB 30 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x30
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0ch]
        lea edx, [esp + 20h]
        push ecx
        push 101a8580h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0ech]
        add esp, 0ch
        lea eax, [esp + 20h]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 11 80 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 24h]
        xor edx, edx
        mov eax, ecx
        mov ebp, 3e8h
        div ebp
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        mov eax, 10624dd3h
        push edx
        mul ecx
        shr edx, 6
        push edx
        lea ecx, [esp + 28h]
        push 101a8578h
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0f0h]
        add esp, 10h
        lea edx, [esp + 20h]
        push 777777h
        push 0
        push edx
        ; Exact mapped bytes E8 C7 7F 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x7f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 18h]
        xor eax, eax
        lea ecx, [esp + 20h]
        ; Exact mapped bytes 66 8B 45 1E: mov ax, word ptr [ebp + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x1e
        push eax
        push 1017f3cch
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0f4h]
        add esp, 0ch
        lea edx, [esp + 20h]
        push 777777h
        push 0
        push edx
        ; Exact mapped bytes E8 96 7F 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x7f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 10h]
        lea ecx, [esp + 20h]
        push eax
        push 1017f3cch
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 0ch
        lea edx, [esp + 20h]
        push 777777h
        push 0
        push edx
        mov ecx, dword ptr [esi + 0f8h]
        ; Exact mapped bytes E8 6C 7F 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x7f
        __asm _emit 0x0c
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8D A2 00 00 00: mov cx, word ptr [ebp + 0xa2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, 64h
        mov eax, ecx
        cdq
        idiv ebp
        mov eax, 51eb851fh
        push edx
        imul ecx
        sar edx, 5
        mov eax, edx
        lea ecx, [esp + 24h]
        shr eax, 1fh
        add edx, eax
        push edx
        push 101a8578h
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0fch]
        add esp, 10h
        lea edx, [esp + 20h]
        push 777777h
        push 0
        push edx
        ; Exact mapped bytes E8 20 7F 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x7f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 18h]
        lea ecx, [esp + 20h]
        ; Exact mapped bytes 66 8B 85 98 00 00 00: mov ax, word ptr [ebp + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        shr eax, 4
        and eax, 7fh
        push eax
        push 101a8554h
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 100h]
        add esp, 0ch
        lea edx, [esp + 20h]
        push 777777h
        push 0
        push edx
        ; Exact mapped bytes E8 E8 7E 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 8]
        ; Exact mapped bytes 66 8B 4C 24 44: mov cx, word ptr [esp + 0x44]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 66 39 08: cmp word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x08
        ; Exact mapped bytes 75 08: jne 0x1003bddd
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [esp + 14h], edx
        mov eax, dword ptr [esi + 2c4h]
        cmp eax, 0ffh
        ; Exact mapped bytes 74 12: je 0x1003bdfc
        __asm _emit 0x74
        __asm _emit 0x12
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4D 06: mov cx, word ptr [ebp + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x06
        cmp eax, ecx
        ; Exact mapped bytes 75 08: jne 0x1003bdfc
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [esp + 1ch], edx
        inc dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 40h]
        mov ecx, dword ptr [esi + 308h]
        mov ebx, dword ptr [ebx + 4]
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 40h], eax
        ; Exact mapped bytes 0F 8C 2E FB FF FF: jl 0x1003b948
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x2e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 1ch]
        mov eax, dword ptr [esp + 10h]
        cmp ecx, -1
        mov dword ptr [esi + 30ch], eax
        ; Exact mapped bytes 75 0A: jne 0x1003be37
        __asm _emit 0x75
        __asm _emit 0x0a
        cmp dword ptr [esp + 14h], -1
        ; Exact mapped bytes 75 07: jne 0x1003be3b
        __asm _emit 0x75
        __asm _emit 0x07
        lea ecx, [eax - 1]
        mov dword ptr [esp + 14h], ecx
        test eax, eax
        ; Exact mapped bytes 0F 85 D8 00 00 00: jne 0x1003bf1b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esp + 20h]
        push 101a8750h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0e8h]
        add esp, 8
        lea eax, [esp + 20h]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 47 7E 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x7e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0dch]
        mov ebp, 0fffeh
        lea ecx, [esi + 204h]
        mov edx, 20h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e0h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [ecx]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x1003be97
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        add ecx, 4
        dec edx
        ; Exact mapped bytes 75 F0: jne 0x1003be8d
        __asm _emit 0x75
        __asm _emit 0xf0
        lea edi, [esi + 110h]
        mov ebx, 30h
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 11 CA FD FF: call 0x100188c0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xca
        __asm _emit 0xfd
        __asm _emit 0xff
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F3: jne 0x1003bea8
        __asm _emit 0x75
        __asm _emit 0xf3
        mov eax, dword ptr [esi + 304h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1003bec6
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [eax + 14h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0c0h]
        push 0
        mov dword ptr [ecx + 50h], 0
        mov ecx, dword ptr [esi + 108h]
        ; Exact mapped bytes E8 40 38 0C 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x38
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 108h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov esi, dword ptr [esi + 10ch]
        mov eax, dword ptr [esi + 6ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 7B 01 00 00: je 0x1003c076
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 101a858ch
        test edx, edx
        ; Exact mapped bytes 0F 84 6E 01 00 00: je 0x1003c076
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 138h
        ret
        mov eax, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 75 5C: jne 0x1003bf7f
        __asm _emit 0x75
        __asm _emit 0x5c
        xor ebp, ebp
        mov eax, dword ptr [esi + 30ch]
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x1003bf78
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 0e8h]
        ; Exact mapped bytes E8 56 7F 0C 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x7f
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x1003bf78
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [esi + 0e8h]
        ; Exact mapped bytes E8 E7 85 0C 00: call 0x10104530
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x00
        lea edi, [esi + 0ech]
        mov ebx, 6
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 D5 85 0C 00: call 0x10104530
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F3: jne 0x1003bf54
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, esi
        ; Exact mapped bytes E8 18 C6 FF FF: call 0x10038580
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 51 C7 FF FF: call 0x100386c0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        inc ebp
        cmp ebp, 3e8h
        ; Exact mapped bytes 7C AD: jl 0x1003bf25
        __asm _emit 0x7c
        __asm _emit 0xad
        push 0
        ; Exact mapped bytes E9 EC 00 00 00: jmp 0x1003c06b
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e8h]
        push 0
        ; Exact mapped bytes E8 C4 87 0C 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x87
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 30ch]
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x1003bfeb
        __asm _emit 0x74
        __asm _emit 0x55
        xor ebp, ebp
        mov eax, dword ptr [esi + 30ch]
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x1003bfeb
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 0e8h]
        ; Exact mapped bytes E8 E3 7E 0C 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x7e
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x1003bfeb
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [esi + 0e8h]
        ; Exact mapped bytes E8 74 85 0C 00: call 0x10104530
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x00
        lea edi, [esi + 0ech]
        mov ebx, 6
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 62 85 0C 00: call 0x10104530
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F3: jne 0x1003bfc7
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, esi
        ; Exact mapped bytes E8 A5 C5 FF FF: call 0x10038580
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 DE C6 FF FF: call 0x100386c0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        inc ebp
        cmp ebp, 3e8h
        ; Exact mapped bytes 7C AD: jl 0x1003bf98
        __asm _emit 0x7c
        __asm _emit 0xad
        mov ecx, dword ptr [esi + 0e8h]
        push 0
        ; Exact mapped bytes E8 58 87 0C 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x87
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 30ch]
        test eax, eax
        ; Exact mapped bytes 74 64: je 0x1003c066
        __asm _emit 0x74
        __asm _emit 0x64
        mov eax, dword ptr [esp + 14h]
        xor ebp, ebp
        test eax, eax
        ; Exact mapped bytes 76 5A: jbe 0x1003c066
        __asm _emit 0x76
        __asm _emit 0x5a
        mov eax, dword ptr [esi + 30ch]
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x1003c066
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [esi + 0e8h]
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 69 7E 0C 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x7e
        __asm _emit 0x0c
        __asm _emit 0x00
        dec edi
        cmp eax, edi
        ; Exact mapped bytes 7D 3A: jge 0x1003c066
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov ecx, dword ptr [esi + 0e8h]
        ; Exact mapped bytes E8 79 85 0C 00: call 0x101045b0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x00
        lea edi, [esi + 0ech]
        mov ebx, 6
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 67 85 0C 00: call 0x101045b0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F3: jne 0x1003c042
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, esi
        ; Exact mapped bytes E8 2A C5 FF FF: call 0x10038580
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 63 C6 FF FF: call 0x100386c0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 14h]
        inc ebp
        cmp ebp, eax
        ; Exact mapped bytes 72 A6: jb 0x1003c00c
        __asm _emit 0x72
        __asm _emit 0xa6
        mov eax, dword ptr [esp + 14h]
        push eax
        mov ecx, dword ptr [esi + 0e8h]
        ; Exact mapped bytes E8 DA 86 0C 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 138h
        ret
    }
}
