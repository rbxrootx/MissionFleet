// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10046460 .. +0x129 bytes.
extern "C" __declspec(naked) void FUN_10046460_10046460() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push ebp
        xor ebp, ebp
        push esi
        mov esi, dword ptr [esp + 14h]
        cmp eax, ebp
        push edi
        mov ebx, ecx
        ; Exact mapped bytes 74 1D: je 0x10046491
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 66 8B 80 48 03 00 00: mov ax, word ptr [eax + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 0D: shr ax, 0xd
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0d
        ; Exact mapped bytes 66 3B 46 06: cmp ax, word ptr [esi + 6]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x46
        __asm _emit 0x06
        ; Exact mapped bytes 74 0C: je 0x10046491
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebx + 38f4h], 14h
        ; Exact mapped bytes EB 0A: jmp 0x1004649b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebx + 38f4h], 64h
        ; Exact mapped bytes 66 8B 4C 24 28: mov cx, word ptr [esp + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x28
        mov edx, dword ptr [esp + 20h]
        ; Exact mapped bytes 66 89 8B 7C 01 00 00: mov word ptr [ebx + 0x17c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [ebx + 180h]
        mov ecx, 2ah
        mov dword ptr [ebx + 138h], edx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov esi, dword ptr [esp + 1ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 83 20 02 00 00: mov ax, word ptr [ebx + 0x220]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, ebp
        mov dword ptr [ebx + 154h], eax
        mov dword ptr [ebx + 158h], ebp
        ; Exact mapped bytes 74 0F: je 0x100464ea
        __asm _emit 0x74
        __asm _emit 0x0f
        mov cl, byte ptr [esi + 9ch]
        and ecx, 1fh
        mov dword ptr [ebx + 158h], ecx
        mov ecx, ebx
        ; Exact mapped bytes E8 BF CF FF FF: call 0x100434b0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov cl, byte ptr [ebx + 218h]
        mov eax, dword ptr [esp + 24h]
        and ecx, 0fh
        cmp eax, ecx
        ; Exact mapped bytes 7D 02: jge 0x10046504
        __asm _emit 0x7d
        __asm _emit 0x02
        mov ecx, eax
        mov edx, eax
        mov dword ptr [ebx + 0e0h], ecx
        neg edx
        sbb edx, edx
        xor eax, 0aaaaaaaah
        and edx, 40000000h
        mov ecx, ebx
        mov dword ptr [ebx + 0f8h], edx
        mov dword ptr [ebx + 104h], ebp
        mov dword ptr [ebx + 2dch], eax
        ; Exact mapped bytes E8 FC FB FF FF: call 0x10046130
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp esi, ebp
        mov dword ptr [ebx + 38ech], ebp
        ; Exact mapped bytes 74 3E: je 0x1004657c
        __asm _emit 0x74
        __asm _emit 0x3e
        lea edi, [ebx + 228h]
        mov ecx, 2dh
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        xor ecx, ecx
        xor eax, eax
        ; Exact mapped bytes 66 8B 8B D2 02 00 00: mov cx, word ptr [ebx + 0x2d2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 83 C8 02 00 00: mov ax, word ptr [ebx + 0x2c8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 96h
        push ecx
        push 3e80h
        mov dword ptr [ebx + 38ech], eax
        ; Exact mapped bytes E8 6D B8 FD FF: call 0x10021de0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebx + 2e4h], eax
        pop edi
        mov dword ptr [ebx + 2e8h], ebp
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
