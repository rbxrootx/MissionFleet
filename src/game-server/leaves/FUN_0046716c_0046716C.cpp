// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046716C .. +0x2AA bytes.
extern "C" __declspec(naked) void FUN_0046716c_0046716C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bb9dh
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
        sub esp, 3ch
        push edi
        push ecx
        lea edi, [ebp - 48h]
        mov ecx, 0fh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 44h], ecx
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 14h], 0
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 55 9D 0C 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x9d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 66 C7 45 E8 00 00: mov word ptr [ebp - 0x18], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x4671df
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 20h
        ; Exact mapped bytes 0F 8D 3A 01 00 00: jge 0x467323
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + eax*4 + 270h]
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 2ch], 63h
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 34h], edx
        lea eax, [ebp - 2ch]
        push eax
        lea ecx, [ebp - 30h]
        push ecx
        lea edx, [ebp - 34h]
        push edx
        ; Exact mapped bytes E8 86 C5 F9 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc5
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 D9 00 00 00: je 0x46731e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3F C7 F9 FF: call 0x403990
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xc7
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x46731e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 28h]
        imul eax, eax, 37ch
        lea ecx, [edx + eax + 224h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 6
        mov eax, dword ptr [ebp - 44h]
        lea ecx, [eax + edx + 5eh]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 02: mov dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x02
        add eax, edx
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        add eax, edx
        ; Exact mapped bytes 66 89 45 E8: mov word ptr [ebp - 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        mov eax, dword ptr [ebp - 18h]
        and eax, 0ffffh
        cmp eax, 4b0h
        ; Exact mapped bytes 7E 09: jle 0x4672bf
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 64: jmp 0x467323
        __asm _emit 0xeb
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 20h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 10h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        cmp edx, ecx
        ; Exact mapped bytes 7D 09: jge 0x4672dd
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 46: jmp 0x467323
        __asm _emit 0xeb
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 20h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        add eax, 5
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 02: mov dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x02
        cmp eax, edx
        ; Exact mapped bytes 7D 09: jge 0x4672ff
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 24: jmp 0x467323
        __asm _emit 0xeb
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 20h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 10h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        cmp ecx, eax
        ; Exact mapped bytes 7D 09: jge 0x46731e
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 05: jmp 0x467323
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 B3 FE FF FF: jmp 0x4671d6
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes 0F 85 B5 00 00 00: jne 0x4673e2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5bae98h
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        push edx
        mov eax, dword ptr [ebp - 20h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        push ecx
        mov edx, dword ptr [ebp - 10h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 02: mov ax, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x02
        push eax
        mov ecx, dword ptr [ebp - 20h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        push edx
        mov eax, dword ptr [ebp - 10h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        push ecx
        mov edx, dword ptr [ebp - 20h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        push eax
        mov ecx, dword ptr [ebp - 18h]
        and ecx, 0ffffh
        push ecx
        mov edx, dword ptr [ebp - 20h]
        add edx, 0ach
        push edx
        mov eax, dword ptr [ebp - 44h]
        add eax, 1b0h
        push eax
        push 5baea4h
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 C4 75 06 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x75
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 30h
        push ecx
        mov ecx, esp
        mov dword ptr [ebp - 38h], esp
        lea edx, [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 D0 60 08 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        push 7
        mov ecx, 5d4c70h
        ; Exact mapped bytes E8 AF D6 FE FF: call 0x454a68
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 08: je 0x4673c7
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B7 02 FE FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 6F 64 08 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes EB 19: jmp 0x4673fb
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 40h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 54 64 08 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
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
        add esp, 48h
        cmp ebp, esp
        ; Exact mapped bytes E8 D0 13 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
