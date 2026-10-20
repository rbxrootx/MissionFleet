// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041F661 .. +0x18C bytes.
extern "C" __declspec(naked) void FUN_0041f661_0041F661() {
    __asm {
        cmp dword ptr [esp + 0ch], 0
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes 0F 84 76 01 00 00: je 0x41f7e6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D AC 11 45 00 00: cmp dword ptr [0x4511ac], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xac
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 19: jne 0x41f692
        __asm _emit 0x75
        __asm _emit 0x19
        push dword ptr [esp + 1ch]
        push dword ptr [esp + 1ch]
        push dword ptr [esp + 1ch]
        ; Exact mapped bytes E8 86 4F 00 00: call 0x424610
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 56 01 00 00: jmp 0x41f7e8
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        ; Exact mapped bytes E8 71 2F 00 00: call 0x42260a
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        dec dword ptr [esp + 20h]
        mov ebp, dword ptr [esp + 1ch]
        mov edx, dword ptr [esp + 18h]
        pop ecx
        ; Exact mapped bytes 66 0F B6 02: movzx ax, byte ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x02
        movzx ecx, al
        inc edx
        test byte ptr [ecx + 4512c1h], 4
        ; Exact mapped bytes 74 66: je 0x41f71d
        __asm _emit 0x74
        __asm _emit 0x66
        cmp dword ptr [esp + 1ch], 0
        ; Exact mapped bytes 75 18: jne 0x41f6d6
        __asm _emit 0x75
        __asm _emit 0x18
        movzx esi, byte ptr [ebp]
        xor edi, edi
        test byte ptr [esi + 4512c1h], 4
        ; Exact mapped bytes 0F 85 0D 01 00 00: jne 0x41f7de
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x41f7b0
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 75 04: jne 0x41f6e0
        __asm _emit 0x75
        __asm _emit 0x04
        xor edi, edi
        ; Exact mapped bytes EB 54: jmp 0x41f734
        __asm _emit 0xeb
        __asm _emit 0x54
        xor ebx, ebx
        inc edx
        mov bh, al
        mov bl, cl
        mov edi, ebx
        ; Exact mapped bytes 66 3B 3D A0 11 45 00: cmp di, word ptr [0x4511a0]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 72 11: jb 0x41f703
        __asm _emit 0x72
        __asm _emit 0x11
        ; Exact mapped bytes 66 3B 3D A2 11 45 00: cmp di, word ptr [0x4511a2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x3d
        __asm _emit 0xa2
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 77 08: ja 0x41f703
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 03 3D A4 11 45 00: add edi, dword ptr [0x4511a4]
        __asm _emit 0x03
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB 31: jmp 0x41f734
        __asm _emit 0xeb
        __asm _emit 0x31
        ; Exact mapped bytes 66 3B 3D A6 11 45 00: cmp di, word ptr [0x4511a6]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x3d
        __asm _emit 0xa6
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 72 28: jb 0x41f734
        __asm _emit 0x72
        __asm _emit 0x28
        ; Exact mapped bytes 66 3B 3D A8 11 45 00: cmp di, word ptr [0x4511a8]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 77 1F: ja 0x41f734
        __asm _emit 0x77
        __asm _emit 0x1f
        ; Exact mapped bytes 03 3D AA 11 45 00: add edi, dword ptr [0x4511aa]
        __asm _emit 0x03
        __asm _emit 0x3d
        __asm _emit 0xaa
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x41f734
        __asm _emit 0xeb
        __asm _emit 0x17
        movzx edi, ax
        mov al, byte ptr [edi + 4512c1h]
        and al, 10h
        cmp al, 10h
        ; Exact mapped bytes 75 08: jne 0x41f734
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 66 0F B6 BF C0 11 45 00: movzx di, byte ptr [edi + 0x4511c0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xbf
        __asm _emit 0xc0
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F B6 4D 00: movzx cx, byte ptr [ebp]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x4d
        __asm _emit 0x00
        movzx eax, cl
        inc ebp
        test byte ptr [eax + 4512c1h], 4
        ; Exact mapped bytes 74 53: je 0x41f799
        __asm _emit 0x74
        __asm _emit 0x53
        cmp dword ptr [esp + 1ch], 0
        ; Exact mapped bytes 74 0B: je 0x41f758
        __asm _emit 0x74
        __asm _emit 0x0b
        mov al, byte ptr [ebp]
        dec dword ptr [esp + 1ch]
        test al, al
        ; Exact mapped bytes 75 04: jne 0x41f75c
        __asm _emit 0x75
        __asm _emit 0x04
        xor esi, esi
        ; Exact mapped bytes EB 54: jmp 0x41f7b0
        __asm _emit 0xeb
        __asm _emit 0x54
        xor ebx, ebx
        inc ebp
        mov bh, cl
        mov bl, al
        mov esi, ebx
        ; Exact mapped bytes 66 3B 35 A0 11 45 00: cmp si, word ptr [0x4511a0]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x35
        __asm _emit 0xa0
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 72 11: jb 0x41f77f
        __asm _emit 0x72
        __asm _emit 0x11
        ; Exact mapped bytes 66 3B 35 A2 11 45 00: cmp si, word ptr [0x4511a2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x35
        __asm _emit 0xa2
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 77 08: ja 0x41f77f
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 03 35 A4 11 45 00: add esi, dword ptr [0x4511a4]
        __asm _emit 0x03
        __asm _emit 0x35
        __asm _emit 0xa4
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB 31: jmp 0x41f7b0
        __asm _emit 0xeb
        __asm _emit 0x31
        ; Exact mapped bytes 66 3B 35 A6 11 45 00: cmp si, word ptr [0x4511a6]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x35
        __asm _emit 0xa6
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 72 28: jb 0x41f7b0
        __asm _emit 0x72
        __asm _emit 0x28
        ; Exact mapped bytes 66 3B 35 A8 11 45 00: cmp si, word ptr [0x4511a8]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x35
        __asm _emit 0xa8
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 77 1F: ja 0x41f7b0
        __asm _emit 0x77
        __asm _emit 0x1f
        ; Exact mapped bytes 03 35 AA 11 45 00: add esi, dword ptr [0x4511aa]
        __asm _emit 0x03
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x41f7b0
        __asm _emit 0xeb
        __asm _emit 0x17
        movzx esi, cx
        mov al, byte ptr [esi + 4512c1h]
        and al, 10h
        cmp al, 10h
        ; Exact mapped bytes 75 08: jne 0x41f7b0
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 66 0F B6 B6 C0 11 45 00: movzx si, byte ptr [esi + 0x4511c0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xb6
        __asm _emit 0xc0
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B FE: cmp di, si
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xfe
        ; Exact mapped bytes 75 16: jne 0x41f7cb
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 66 85 FF: test di, di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 24: je 0x41f7de
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [esp + 1ch]
        dec dword ptr [esp + 1ch]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x41f7de
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes E9 DB FE FF FF: jmp 0x41f6a6
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 19h
        ; Exact mapped bytes E8 99 2E 00 00: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B F7: cmp si, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf7
        pop ecx
        sbb eax, eax
        and eax, 2
        dec eax
        ; Exact mapped bytes EB 0A: jmp 0x41f7e8
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 19h
        ; Exact mapped bytes E8 86 2E 00 00: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
