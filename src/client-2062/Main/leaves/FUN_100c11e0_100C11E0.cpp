// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C11E0 .. +0x1DB bytes.
extern "C" __declspec(naked) void FUN_100c11e0_100C11E0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        push 101h
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0b88h]
        and eax, 0e1ffh
        or eax, 105h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes E8 59 DF 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xdf
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b80h]
        push 101h
        ; Exact mapped bytes E8 49 DF 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xdf
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b84h]
        push 101h
        ; Exact mapped bytes E8 39 DF 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xdf
        __asm _emit 0x03
        __asm _emit 0x00
        lea edi, [esi + 64h]
        mov ebx, 2
        mov ecx, dword ptr [edi]
        push 0b4h
        ; Exact mapped bytes E8 E5 DE 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xde
        __asm _emit 0x03
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 EE: jne 0x100c122f
        __asm _emit 0x75
        __asm _emit 0xee
        xor ebx, ebx
        xor ecx, ecx
        mov edx, 0fffeh
        xor eax, eax
        mov al, byte ptr [esi + 0b74h]
        mov edi, eax
        xor eax, eax
        mov al, byte ptr [esi + 0b75h]
        shl edi, 5
        add edi, eax
        lea eax, [ecx + edi*2]
        mov eax, dword ptr [esi + eax*4 + 74h]
        cmp eax, ebx
        ; Exact mapped bytes 74 04: je 0x100c1270
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        inc ecx
        cmp ecx, 2
        ; Exact mapped bytes 7C D4: jl 0x100c124a
        __asm _emit 0x7c
        __asm _emit 0xd4
        mov ecx, esi
        mov byte ptr [esi + 0b74h], bl
        ; Exact mapped bytes E8 CD 0A 00 00: call 0x100c1d50
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 4
        mov byte ptr [esi + 0b74h], al
        mov byte ptr [esi + 0b75h], bl
        mov dword ptr [esi + 0b78h], ebx
        ; Exact mapped bytes 75 1C: jne 0x100c12b5
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov edi, dword ptr [ecx + 9a4h]
        mov ecx, edi
        ; Exact mapped bytes E8 53 DC 03 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x00
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 EB DC 03 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x00
        mov cl, byte ptr [esi + 0b74h]
        cmp cl, 3
        ; Exact mapped bytes 75 65: jne 0x100c1325
        __asm _emit 0x75
        __asm _emit 0x65
        ; Exact mapped bytes 8B 15 C0 58 1C 10: mov edx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 30h]
        cmp eax, ebx
        ; Exact mapped bytes 75 0A: jne 0x100c12d7
        __asm _emit 0x75
        __asm _emit 0x0a
        mov al, byte ptr [esi + 0b75h]
        add al, 5
        ; Exact mapped bytes EB 48: jmp 0x100c131f
        __asm _emit 0xeb
        __asm _emit 0x48
        cmp dword ptr [eax + 0b58h], ebx
        ; Exact mapped bytes 75 0A: jne 0x100c12e9
        __asm _emit 0x75
        __asm _emit 0x0a
        mov al, byte ptr [esi + 0b75h]
        add al, 5
        ; Exact mapped bytes EB 36: jmp 0x100c131f
        __asm _emit 0xeb
        __asm _emit 0x36
        cmp dword ptr [eax + 0b54h], ebx
        ; Exact mapped bytes 75 0A: jne 0x100c12fb
        __asm _emit 0x75
        __asm _emit 0x0a
        mov al, byte ptr [esi + 0b75h]
        add al, 5
        ; Exact mapped bytes EB 24: jmp 0x100c131f
        __asm _emit 0xeb
        __asm _emit 0x24
        cmp dword ptr [eax + 83ch], ebx
        ; Exact mapped bytes 75 0A: jne 0x100c130d
        __asm _emit 0x75
        __asm _emit 0x0a
        mov al, byte ptr [esi + 0b75h]
        add al, 5
        ; Exact mapped bytes EB 12: jmp 0x100c131f
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [eax + 4ch]
        xor eax, 0aaaaaaaah
        ; Exact mapped bytes 75 0E: jne 0x100c1325
        __asm _emit 0x75
        __asm _emit 0x0e
        mov al, byte ptr [esi + 0b75h]
        add al, 7
        mov byte ptr [esi + 0b75h], al
        and ecx, 0ffh
        xor edx, edx
        mov dl, byte ptr [esi + 0b75h]
        shl ecx, 5
        cmp byte ptr [ecx + edx + 101a7e0ch], bl
        ; Exact mapped bytes 74 78: je 0x100c13b7
        __asm _emit 0x74
        __asm _emit 0x78
        xor edi, edi
        xor eax, eax
        xor ecx, ecx
        mov al, byte ptr [esi + 0b74h]
        mov cl, byte ptr [esi + 0b75h]
        shl eax, 5
        add eax, ecx
        lea edx, [edi + eax*2]
        mov eax, dword ptr [esi + edx*4 + 74h]
        cmp eax, ebx
        ; Exact mapped bytes 74 50: je 0x100c13b1
        __asm _emit 0x74
        __asm _emit 0x50
        or byte ptr [eax + 24h], 1
        cmp edi, ebx
        ; Exact mapped bytes 75 20: jne 0x100c1389
        __asm _emit 0x75
        __asm _emit 0x20
        xor eax, eax
        xor ecx, ecx
        mov al, byte ptr [esi + 0b74h]
        mov cl, byte ptr [esi + 0b75h]
        shl eax, 5
        add eax, ecx
        push 0fffffeffh
        mov ecx, dword ptr [esi + eax*8 + 74h]
        ; Exact mapped bytes EB 23: jmp 0x100c13ac
        __asm _emit 0xeb
        __asm _emit 0x23
        cmp edi, 1
        ; Exact mapped bytes 75 23: jne 0x100c13b1
        __asm _emit 0x75
        __asm _emit 0x23
        xor edx, edx
        xor eax, eax
        mov dl, byte ptr [esi + 0b74h]
        mov al, byte ptr [esi + 0b75h]
        shl edx, 5
        add edx, eax
        push 101h
        mov ecx, dword ptr [esi + edx*8 + 78h]
        ; Exact mapped bytes E8 AF DD 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xdd
        __asm _emit 0x03
        __asm _emit 0x00
        inc edi
        cmp edi, 2
        ; Exact mapped bytes 7C 8A: jl 0x100c1341
        __asm _emit 0x7c
        __asm _emit 0x8a
        pop edi
        pop esi
        pop ebx
        ret
    }
}
