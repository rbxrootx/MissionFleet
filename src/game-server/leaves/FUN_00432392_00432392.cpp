// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432392 .. +0x58C bytes.
extern "C" __declspec(naked) void FUN_00432392_00432392() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push edi
        push ecx
        lea edi, [ebp - 28h]
        mov ecx, 0ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 1ch], 31h
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        mov dword ptr [ebp - 24h], ecx
        lea edx, [ebp - 1ch]
        push edx
        lea eax, [ebp - 20h]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 E8 13 FD FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4323e6
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 27 05 00 00: jmp 0x43290d
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        imul edx, edx, 370h
        cmp dword ptr [eax + edx + 16bdch], 1
        ; Exact mapped bytes 75 07: jne 0x43240c
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 01 05 00 00: jmp 0x43290d
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        imul eax, eax, 370h
        lea ecx, [ecx + eax + 16c04h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 B4 76 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 06: je 0x432447
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 2C: jne 0x432473
        __asm _emit 0x75
        __asm _emit 0x2c
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        push 200000h
        push 80021004h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C6 4D 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x4d
        __asm _emit 0x05
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 9A 04 00 00: jmp 0x43290d
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        imul edx, edx, 370h
        ; Exact mapped bytes 66 8B 84 10 0C 6C 01 00: mov ax, word ptr [eax + edx + 0x16c0c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x0c
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F0: mov word ptr [ebp - 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        imul ecx, ecx, 370h
        ; Exact mapped bytes 66 8B 94 0A 14 6C 01 00: mov dx, word ptr [edx + ecx + 0x16c14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x14
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 55 F6: mov word ptr [ebp - 0xa], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf6
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 88 0A 01 00 00: mov cx, word ptr [eax + 0x10a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D F4: mov word ptr [ebp - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 42 02: mov ax, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 0F B6 51 09: movzx dx, byte ptr [ecx + 9]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x51
        __asm _emit 0x09
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 35 FA FF FF: call 0x431f1b
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, eax
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        imul edx, edx, 370h
        ; Exact mapped bytes 66 8B 84 10 0A 6C 01 00: mov ax, word ptr [eax + edx + 0x16c0a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x0a
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F0: mov word ptr [ebp - 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        imul ecx, ecx, 370h
        ; Exact mapped bytes 66 8B 94 0A 12 6C 01 00: mov dx, word ptr [edx + ecx + 0x16c12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x12
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 55 F6: mov word ptr [ebp - 0xa], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf6
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 88 0C 01 00 00: mov cx, word ptr [eax + 0x10c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D F4: mov word ptr [ebp - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 0F B6 51 08: movzx dx, byte ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 BB F9 FF FF: call 0x431f1b
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, eax
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        imul edx, edx, 370h
        ; Exact mapped bytes 66 8B 84 10 10 6C 01 00: mov ax, word ptr [eax + edx + 0x16c10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x10
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F0: mov word ptr [ebp - 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        imul ecx, ecx, 370h
        ; Exact mapped bytes 66 8B 94 0A 18 6C 01 00: mov dx, word ptr [edx + ecx + 0x16c18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x18
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 55 F6: mov word ptr [ebp - 0xa], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf6
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 88 10 01 00 00: mov cx, word ptr [eax + 0x110]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D F4: mov word ptr [ebp - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A4 FB FF FF: call 0x43217e
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, eax
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        imul edx, edx, 370h
        ; Exact mapped bytes 66 8B 84 10 0E 6C 01 00: mov ax, word ptr [eax + edx + 0x16c0e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F0: mov word ptr [ebp - 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        imul ecx, ecx, 370h
        ; Exact mapped bytes 66 8B 94 0A 16 6C 01 00: mov dx, word ptr [edx + ecx + 0x16c16]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x16
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 55 F6: mov word ptr [ebp - 0xa], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf6
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 88 0E 01 00 00: mov cx, word ptr [eax + 0x10e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D F4: mov word ptr [ebp - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 C7 F8 FF FF: call 0x431f1b
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, eax
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 18h]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 8C 75 02 00 00: jl 0x4328e6
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x75
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 18h]
        sub ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [eax + 18h], ecx
        push 2
        push 0
        lea ecx, [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 D7 6C 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 10h]
        xor eax, eax
        mov al, byte ptr [edx + 9]
        test eax, eax
        ; Exact mapped bytes 7E 26: jle 0x4326ce
        __asm _emit 0x7e
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 51 02: mov dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x02
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + 8]
        imul eax, eax, 370h
        ; Exact mapped bytes 66 89 94 01 0C 6C 01 00: mov word ptr [ecx + eax + 0x16c0c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x0c
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x4326ef
        __asm _emit 0xeb
        __asm _emit 0x21
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        imul ecx, ecx, 370h
        ; Exact mapped bytes 66 8B 45 E8: mov ax, word ptr [ebp - 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 66 89 84 0A 0C 6C 01 00: mov word ptr [edx + ecx + 0x16c0c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x0c
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        xor edx, edx
        mov dl, byte ptr [ecx + 8]
        test edx, edx
        ; Exact mapped bytes 7E 25: jle 0x432720
        __asm _emit 0x7e
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [edx + 8]
        imul edx, edx, 370h
        ; Exact mapped bytes 66 89 8C 10 0A 6C 01 00: mov word ptr [eax + edx + 0x16c0a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x0a
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x432741
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        imul eax, eax, 370h
        ; Exact mapped bytes 66 8B 55 E8: mov dx, word ptr [ebp - 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe8
        ; Exact mapped bytes 66 89 94 01 0A 6C 01 00: mov word ptr [ecx + eax + 0x16c0a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x0a
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 7E 26: jle 0x432774
        __asm _emit 0x7e
        __asm _emit 0x26
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ecx + 8]
        imul ecx, ecx, 370h
        ; Exact mapped bytes 66 89 84 0A 10 6C 01 00: mov word ptr [edx + ecx + 0x16c10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x10
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x432795
        __asm _emit 0xeb
        __asm _emit 0x21
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        imul edx, edx, 370h
        ; Exact mapped bytes 66 8B 4D E8: mov cx, word ptr [ebp - 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 66 89 8C 10 10 6C 01 00: mov word ptr [eax + edx + 0x16c10], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x10
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        test eax, eax
        ; Exact mapped bytes 7E 26: jle 0x4327c8
        __asm _emit 0x7e
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + 8]
        imul eax, eax, 370h
        ; Exact mapped bytes 66 89 94 01 0E 6C 01 00: mov word ptr [ecx + eax + 0x16c0e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x0e
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x4327e9
        __asm _emit 0xeb
        __asm _emit 0x21
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        imul ecx, ecx, 370h
        ; Exact mapped bytes 66 8B 45 E8: mov ax, word ptr [ebp - 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 66 89 84 0A 0E 6C 01 00: mov word ptr [edx + ecx + 0x16c0e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x0e
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 0F B6 51 09: movzx dx, byte ptr [ecx + 9]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x51
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + 8]
        imul eax, eax, 370h
        ; Exact mapped bytes 66 89 94 01 14 6C 01 00: mov word ptr [ecx + eax + 0x16c14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x14
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 0F B6 51 08: movzx dx, byte ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + 8]
        imul eax, eax, 370h
        ; Exact mapped bytes 66 89 94 01 12 6C 01 00: mov word ptr [ecx + eax + 0x16c12], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x12
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        imul ecx, ecx, 370h
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 40 0C: mov ax, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 84 0A 18 6C 01 00: mov word ptr [edx + ecx + 0x16c18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x18
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        imul ecx, ecx, 370h
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 40 0A: mov ax, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0a
        ; Exact mapped bytes 66 89 84 0A 16 6C 01 00: mov word ptr [edx + ecx + 0x16c16], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x16
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 40008h]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 20 FE 04 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        shl edx, 10h
        or edx, 2
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 40008h]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 FB FD 04 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xfd
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 18h]
        push edx
        push 100000h
        push 80021004h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 53 49 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x49
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 27: jmp 0x43290d
        __asm _emit 0xeb
        __asm _emit 0x27
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 18h]
        push edx
        push 200000h
        push 80021004h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 49 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x49
        __asm _emit 0x05
        __asm _emit 0x00
        xor eax, eax
        pop edi
        add esp, 28h
        cmp ebp, esp
        ; Exact mapped bytes E8 C8 5E 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x5e
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
