// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054EBB4 .. +0x376 bytes.
extern "C" __declspec(naked) void FUN_0054ebb4_0054EBB4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 80h
        mov dword ptr [ebp - 44h], 0
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 40h], 0
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 75 09: jne 0x54ebf5
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes EB 10: jmp 0x54ec05
        __asm _emit 0xeb
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        mov ecx, dword ptr [ebp + 8]
        add ecx, eax
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        test ecx, ecx
        ; Exact mapped bytes 75 09: jne 0x54ec21
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 50h], 0
        ; Exact mapped bytes EB 11: jmp 0x54ec32
        __asm _emit 0xeb
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 02: mov ax, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x02
        mov ecx, dword ptr [ebp + 8]
        add ecx, eax
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        test ecx, ecx
        ; Exact mapped bytes 75 09: jne 0x54ec4e
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 54h], 0
        ; Exact mapped bytes EB 11: jmp 0x54ec5f
        __asm _emit 0xeb
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        mov ecx, dword ptr [ebp + 8]
        add ecx, eax
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 40h], eax
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 75 09: jne 0x54ec7a
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 36: jmp 0x54ecb0
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 44h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 27 AB F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xab
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], esp
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        ; Exact mapped bytes E8 13 23 F4 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x23
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 40h], eax
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 75 09: jne 0x54eccb
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 60h], 0
        ; Exact mapped bytes EB 36: jmp 0x54ed01
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 44h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 D6 AA F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xaa
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], esp
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        ; Exact mapped bytes E8 C2 22 F4 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x22
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 40h], eax
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 75 09: jne 0x54ed1c
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 68h], 0
        ; Exact mapped bytes EB 36: jmp 0x54ed52
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 44h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 85 AA F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], esp
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        ; Exact mapped bytes E8 71 22 F4 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x22
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 09: jne 0x54ed67
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 70h], 0
        ; Exact mapped bytes EB 13: jmp 0x54ed7a
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 80 47 F5 FF: call 0x4a34f0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        lea ecx, [eax + eax + 2]
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 09: jne 0x54ed8f
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 74h], 0
        ; Exact mapped bytes EB 13: jmp 0x54eda2
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 58 47 F5 FF: call 0x4a34f0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x47
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        lea ecx, [eax + eax + 2]
        mov dword ptr [ebp - 74h], ecx
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 09: jne 0x54edb7
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 0
        ; Exact mapped bytes EB 13: jmp 0x54edca
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 30 47 F5 FF: call 0x4a34f0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        lea ecx, [eax + eax + 2]
        mov dword ptr [ebp - 78h], ecx
        mov edx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 09: jne 0x54eddf
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes EB 2D: jmp 0x54ee0c
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 26: mov cx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x26
        mov eax, ecx
        add eax, 0d7h
        and al, 0fch
        ; Exact mapped bytes E8 CA A9 F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xa9
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], esp
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 80h]
        push eax
        ; Exact mapped bytes E8 2A 47 F5 FF: call 0x4a3530
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x47
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 1ch]
        add edx, dword ptr [ebp - 24h]
        add edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 10h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 44: mov cx, word ptr [eax + 0x44]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 10h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 46: mov ax, word ptr [edx + 0x46]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x46
        add ecx, eax
        mov dword ptr [ebp - 34h], ecx
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ebp - 38h]
        lea eax, [edx + ecx + 10h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        ; Exact mapped bytes FF 15 80 2A 5E 00: call dword ptr [0x5e2a80]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x54ef1e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 C7 41 04 10 00: mov word ptr [ecx + 4], 0x10
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x04
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        mov edx, dword ptr [ebp - 14h]
        add edx, ecx
        push edx
        ; Exact mapped bytes E8 7E 46 F5 FF: call 0x4a3500
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x46
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 14h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        add ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 89 4A 06: mov word ptr [edx + 6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 14h]
        add eax, edx
        push eax
        ; Exact mapped bytes E8 50 46 F5 FF: call 0x4a3500
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 14h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        add edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 89 50 08: mov word ptr [eax + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 14h]
        add ecx, eax
        push ecx
        ; Exact mapped bytes E8 22 46 F5 FF: call 0x4a3500
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x46
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 14h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        add eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 89 41 0A: mov word ptr [ecx + 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 10h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 46: mov ax, word ptr [edx + 0x46]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x46
        add eax, 0d4h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 14h]
        add ecx, eax
        push ecx
        ; Exact mapped bytes E8 05 A1 F5 FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xa1
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 14h]
        lea esp, [ebp - 80h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
