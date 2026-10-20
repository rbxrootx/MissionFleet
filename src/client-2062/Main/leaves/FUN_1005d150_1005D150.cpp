// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1005D150 .. +0x19C bytes.
extern "C" __declspec(naked) void FUN_1005d150_1005D150() {
    __asm {
        ; Exact mapped bytes 66 8B 44 24 04: mov ax, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        push ebx
        push ebp
        push esi
        ; Exact mapped bytes 66 3D 0B 00: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0b
        __asm _emit 0x00
        push edi
        mov esi, ecx
        ; Exact mapped bytes 0F 85 B8 00 00 00: jne 0x1005d21d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        xor ebp, ebp
        cmp eax, ebp
        ; Exact mapped bytes 74 38: je 0x1005d1a7
        __asm _emit 0x74
        __asm _emit 0x38
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [esp + 1ch]
        mov esi, dword ptr [esi + 0d0ch]
        mov bl, byte ptr [esp + 24h]
        lea edx, [eax + ecx*2 + 4a6h]
        mov dl, byte ptr [esi + edx*2]
        xor dl, 0aah
        add dl, bl
        ; Exact mapped bytes 0F 85 4F 01 00 00: jne 0x1005d2e5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [eax + ecx*2]
        pop edi
        mov dword ptr [esi + eax*4 + 0a4ch], ebp
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 24h]
        cmp ebx, ebp
        ; Exact mapped bytes 74 2A: je 0x1005d1d9
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [esp + 18h]
        push ecx
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 41 7F FC FF: call 0x10025100
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x7f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 1ch]
        mov ebp, dword ptr [esi + 0d0ch]
        lea edi, [ecx + edx*2]
        mov dword ptr [ebp + edi*4 + 0a4ch], eax
        ; Exact mapped bytes EB 18: jmp 0x1005d1f1
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 1ch]
        mov edi, dword ptr [esi + 0d0ch]
        lea eax, [ecx + edx*2]
        mov dword ptr [edi + eax*4 + 0a4ch], ebp
        lea eax, [ecx + edx*2 + 4a6h]
        mov edx, dword ptr [esi + 0d0ch]
        ; Exact mapped bytes 66 33 C9: xor cx, cx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc9
        pop edi
        shl eax, 1
        mov cl, bl
        ; Exact mapped bytes 66 89 0C 02: mov word ptr [edx + eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x02
        mov ecx, dword ptr [esi + 0d0ch]
        add eax, ecx
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 66 81 30 AA 00: xor word ptr [eax], 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x30
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 0C 00: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 75 6F: jne 0x1005d292
        __asm _emit 0x75
        __asm _emit 0x6f
        mov eax, dword ptr [esp + 28h]
        xor ebp, ebp
        cmp eax, ebp
        ; Exact mapped bytes 74 44: je 0x1005d271
        __asm _emit 0x74
        __asm _emit 0x44
        mov edi, dword ptr [esp + 20h]
        mov ebx, dword ptr [esp + 1ch]
        mov edx, dword ptr [esi + 0d0ch]
        lea ecx, [edi + ebx*2 + 4a6h]
        shl ecx, 1
        mov al, byte ptr [edx + ecx]
        xor al, 0aah
        add al, byte ptr [esp + 24h]
        ; Exact mapped bytes 75 0A: jne 0x1005d259
        __asm _emit 0x75
        __asm _emit 0x0a
        lea edi, [edi + ebx*2]
        mov dword ptr [edx + edi*4 + 0a4ch], ebp
        xor al, 0aah
        ; Exact mapped bytes 66 33 D2: xor dx, dx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xd2
        mov dl, al
        mov eax, dword ptr [esi + 0d0ch]
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes 66 89 14 08: mov word ptr [eax + ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x08
        pop ebx
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 24h]
        cmp ebx, ebp
        ; Exact mapped bytes 0F 84 5C FF FF FF: je 0x1005d1d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 18h]
        push ecx
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 D3 7E FC FF: call 0x10025160
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x7e
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes E9 2D FF FF FF: jmp 0x1005d1bf
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 3D 0D 00: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 75 4D: jne 0x1005d2e5
        __asm _emit 0x75
        __asm _emit 0x4d
        mov eax, dword ptr [esp + 28h]
        xor ebp, ebp
        cmp eax, ebp
        ; Exact mapped bytes 74 43: je 0x1005d2e5
        __asm _emit 0x74
        __asm _emit 0x43
        mov edx, dword ptr [esi + 0d0ch]
        mov ecx, dword ptr [esp + 1ch]
        mov bl, byte ptr [esp + 24h]
        mov al, byte ptr [edx + ecx*4 + 94ch]
        xor al, 0aah
        add al, bl
        ; Exact mapped bytes 75 14: jne 0x1005d2d1
        __asm _emit 0x75
        __asm _emit 0x14
        mov dword ptr [edx + ecx*4 + 9cch], ebp
        mov edx, dword ptr [esi + 0d0ch]
        mov dword ptr [edx + ecx*8 + 0a4ch], ebp
        mov edx, dword ptr [esi + 0d0ch]
        xor al, 0aah
        ; Exact mapped bytes 66 0F B6 C0: movzx ax, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 84 8A 4C 09 00 00: mov word ptr [edx + ecx*4 + 0x94c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
