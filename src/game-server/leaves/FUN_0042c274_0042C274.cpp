// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042C274 .. +0x8A7 bytes.
extern "C" __declspec(naked) void FUN_0042c274_0042C274() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 44h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 34h], ecx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0eh
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 46 D8 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x42c2b6
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 52 08 00 00: jmp 0x42cb08
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 28h], 31h
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        mov dword ptr [ebp - 30h], eax
        lea ecx, [ebp - 28h]
        push ecx
        lea edx, [ebp - 2ch]
        push edx
        lea eax, [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 D8 74 FD FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x74
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x42c2f6
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 12 08 00 00: jmp 0x42cb08
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        cmp dword ptr [edx + ecx + 16bdch], 1
        ; Exact mapped bytes 75 07: jne 0x42c31f
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E9 07 00 00: jmp 0x42cb08
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 2
        ; Exact mapped bytes 75 30: jne 0x42c363
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16c06h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 91 D7 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 A9 00 00 00: jmp 0x42c40c
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 3
        ; Exact mapped bytes 75 2D: jne 0x42c3a5
        __asm _emit 0x75
        __asm _emit 0x2d
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        lea eax, [eax + edx + 16c08h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 4C D7 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 67: jmp 0x42c40c
        __asm _emit 0xeb
        __asm _emit 0x67
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        cmp edx, 5
        ; Exact mapped bytes 74 15: je 0x42c3cf
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 6
        ; Exact mapped bytes 75 3D: jne 0x42c40c
        __asm _emit 0x75
        __asm _emit 0x3d
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        lea eax, [eax + edx + 16bdch]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 8]
        imul edx, edx, 0ah
        lea eax, [eax + edx + 12eh]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 E3 D6 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 60 03 00 00: je 0x42c776
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BF 51 0C: movsx edx, word ptr [ecx + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x0c
        test edx, edx
        ; Exact mapped bytes 7E 1E: jle 0x42c44e
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [edx + 70h]
        ; Exact mapped bytes 7D 07: jge 0x42c44e
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 BA 06 00 00: jmp 0x42cb08
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 18h]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 74h]
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 168h]
        mov dword ptr [ecx + 18h], eax
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 3
        ; Exact mapped bytes 75 31: jne 0x42c4b1
        __asm _emit 0x75
        __asm _emit 0x31
        push 2
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16c08h]
        push edx
        ; Exact mapped bytes E8 C7 CE 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xce
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 C5 02 00 00: jmp 0x42c776
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 2
        ; Exact mapped bytes 75 31: jne 0x42c4f7
        __asm _emit 0x75
        __asm _emit 0x31
        push 2
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        lea eax, [eax + edx + 16c06h]
        push eax
        ; Exact mapped bytes E8 81 CE 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xce
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 7F 02 00 00: jmp 0x42c776
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        cmp edx, 5
        ; Exact mapped bytes 74 19: je 0x42c525
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 6
        ; Exact mapped bytes 0F 85 51 02 00 00: jne 0x42c776
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        lea eax, [eax + edx + 16bdch]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 8]
        imul edx, edx, 0ah
        lea eax, [eax + edx + 130h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 8D D5 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 8]
        imul ecx, ecx, 0ah
        lea edx, [edx + ecx + 132h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 50 D5 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x42c634
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        imul eax, eax, 370h
        lea ecx, [ecx + eax + 16bdch]
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + 8]
        imul eax, eax, 0ah
        xor edx, edx
        mov dl, byte ptr [ecx + eax + 134h]
        test edx, edx
        ; Exact mapped bytes 7E 54: jle 0x42c634
        __asm _emit 0x7e
        __asm _emit 0x54
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 72 0A: mov si, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x72
        __asm _emit 0x0a
        imul esi, esi, 370h
        lea eax, [eax + esi + 16bdch]
        mov edx, dword ptr [ebp + 0ch]
        xor ebx, ebx
        mov bl, byte ptr [edx + 8]
        imul ebx, ebx, 0ah
        xor edx, edx
        mov dl, byte ptr [eax + ebx + 134h]
        mov eax, dword ptr [ebp - 18h]
        imul edx, dword ptr [eax + 74h]
        mov ecx, dword ptr [ecx + 18h]
        add ecx, edx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [eax + 18h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x42c6c9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 8]
        imul ecx, ecx, 0ah
        xor eax, eax
        mov al, byte ptr [edx + ecx + 135h]
        test eax, eax
        ; Exact mapped bytes 7E 54: jle 0x42c6c9
        __asm _emit 0x7e
        __asm _emit 0x54
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 70 0A: mov si, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x0a
        imul esi, esi, 370h
        lea ecx, [ecx + esi + 16bdch]
        mov eax, dword ptr [ebp + 0ch]
        xor ebx, ebx
        mov bl, byte ptr [eax + 8]
        imul ebx, ebx, 0ah
        xor eax, eax
        mov al, byte ptr [ecx + ebx + 135h]
        mov ecx, dword ptr [ebp - 14h]
        imul eax, dword ptr [ecx + 74h]
        mov edx, dword ptr [edx + 18h]
        add edx, eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 18h], edx
        push 0ah
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        lea eax, [eax + edx + 16bdch]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 8]
        imul edx, edx, 0ah
        lea eax, [eax + edx + 12eh]
        push eax
        ; Exact mapped bytes E8 6C CC 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 40008h]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 A0 6C 05 00: call 0x4833c9
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x6c
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        imul eax, eax, 370h
        mov edx, dword ptr [ebp - 38h]
        and edx, 1fh
        shl edx, 1
        mov eax, dword ptr [ecx + eax + 16be0h]
        and al, 0c1h
        or eax, edx
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 168h]
        mov dword ptr [ecx + edx + 16be0h], eax
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BF 42 0C: movsx eax, word ptr [edx + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 0F 8E 7E 03 00 00: jle 0x42cb03
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 18h]
        cmp ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes 0F 8C 62 03 00 00: jl 0x42caff
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x62
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 18h]
        sub edx, dword ptr [ecx + 70h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 18h], edx
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 2
        ; Exact mapped bytes 75 2B: jne 0x42c7fa
        __asm _emit 0x75
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 70 0A: mov si, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x0a
        imul esi, esi, 370h
        ; Exact mapped bytes 66 89 94 31 06 6C 01 00: mov word ptr [ecx + esi + 0x16c06], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x31
        __asm _emit 0x06
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 BC 02 00 00: jmp 0x42cab6
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        cmp edx, 3
        ; Exact mapped bytes 75 2B: jne 0x42c83a
        __asm _emit 0x75
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 72 0A: mov si, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x72
        __asm _emit 0x0a
        imul esi, esi, 370h
        ; Exact mapped bytes 66 89 8C 30 08 6C 01 00: mov word ptr [eax + esi + 0x16c08], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x30
        __asm _emit 0x08
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 7C 02 00 00: jmp 0x42cab6
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 5
        ; Exact mapped bytes 74 18: je 0x42c867
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 6
        ; Exact mapped bytes 0F 85 4F 02 00 00: jne 0x42cab6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 70 0A: mov si, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x0a
        imul esi, esi, 370h
        lea ecx, [ecx + esi + 16bdch]
        mov eax, dword ptr [ebp + 0ch]
        xor ebx, ebx
        mov bl, byte ptr [eax + 8]
        imul ebx, ebx, 0ah
        ; Exact mapped bytes 66 89 94 19 2E 01 00 00: mov word ptr [ecx + ebx + 0x12e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x19
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 8]
        imul ecx, ecx, 0ah
        mov eax, dword ptr [ebp + 0ch]
        mov al, byte ptr [eax + 8]
        mov byte ptr [edx + ecx + 136h], al
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 40008h]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 D1 6A 05 00: call 0x4833c9
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x6a
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        imul eax, eax, 370h
        mov edx, dword ptr [ebp - 3ch]
        and edx, 1fh
        shl edx, 1
        mov eax, dword ptr [ecx + eax + 16be0h]
        and al, 0c1h
        or eax, edx
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 168h]
        mov dword ptr [ecx + edx + 16be0h], eax
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 908h], 1
        ; Exact mapped bytes 0F 85 61 01 00 00: jne 0x42cab6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 8B D1 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 1ch], 0
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 84 44 01 00 00: je 0x42cab6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        cmp edx, 5
        ; Exact mapped bytes 0F 85 2B 01 00 00: jne 0x42cab6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x42c99d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 24h]
        cmp eax, dword ptr [edx + 94h]
        ; Exact mapped bytes 0F 8D 01 01 00 00: jge 0x42cab6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 37: je 0x42c9f2
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 24h]
        imul eax, eax, 0ach
        mov ecx, dword ptr [edx + 20h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 94 01 A2 00 00 00: mov dx, word ptr [ecx + eax + 0xa2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 A2 00 00 00: mov cx, word ptr [eax + 0xa2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        cmp edx, ecx
        sete al
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x42c9f9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x42cab1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 24h]
        imul eax, eax, 0ach
        mov ecx, dword ptr [edx + 20h]
        ; Exact mapped bytes 66 8B 14 01: mov dx, word ptr [ecx + eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x01
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 70 0A: mov si, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x0a
        imul esi, esi, 370h
        lea ecx, [ecx + esi + 16bdch]
        mov eax, dword ptr [ebp + 0ch]
        xor ebx, ebx
        mov bl, byte ptr [eax + 8]
        imul ebx, ebx, 0ah
        lea ecx, [ecx + ebx + 12eh]
        mov eax, dword ptr [ebp - 1ch]
        and eax, 0ffh
        ; Exact mapped bytes 66 89 54 41 02: mov word ptr [ecx + eax*2 + 2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x41
        __asm _emit 0x02
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 8]
        imul ecx, ecx, 0ah
        lea edx, [edx + ecx + 12eh]
        mov eax, dword ptr [ebp - 1ch]
        and eax, 0ffh
        mov byte ptr [edx + eax + 6], 5
        mov cl, byte ptr [ebp - 1ch]
        add cl, 1
        mov byte ptr [ebp - 1ch], cl
        mov edx, dword ptr [ebp - 1ch]
        and edx, 0ffh
        cmp edx, 2
        ; Exact mapped bytes 75 02: jne 0x42cab1
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x42cab6
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 DE FE FF FF: jmp 0x42c994
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 34h]
        mov esi, dword ptr [eax + 40004h]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        push edx
        ; Exact mapped bytes E8 CB 82 00 00: call 0x434da0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edi, eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 A5 D1 FF FF: call 0x429c8b
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + edi*4 + 2ch]
        lea edx, [ecx + eax*4]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax]
        sub ecx, 1
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes EB 04: jmp 0x42cb03
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x42cb08
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 CB BC 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xbc
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
