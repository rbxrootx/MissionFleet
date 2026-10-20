// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00467801 .. +0x259 bytes.
extern "C" __declspec(naked) void FUN_00467801_00467801() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bbc9h
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
        sub esp, 0e0h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0ech]
        mov ecx, 38h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 0ech], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 F6 01 00 00: je 0x467a3b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0e4h]
        ; Exact mapped bytes E8 B7 96 0C 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x96
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 0e8h]
        push eax
        lea ecx, [ebp - 0e4h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6A 07 02 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 0e0h]
        ; Exact mapped bytes E8 98 5B FD FF: call 0x43d410
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x5b
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0d4h
        push 0
        lea edx, [ebp - 0e0h]
        push edx
        ; Exact mapped bytes E8 E5 1A 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x1a
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        lea ecx, [ebp - 0c4h]
        push ecx
        ; Exact mapped bytes E8 9D 25 04 00: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 8
        lea ecx, [ebp - 0e4h]
        ; Exact mapped bytes E8 F9 96 0C 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x96
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        lea edx, [ebp - 0ach]
        push edx
        ; Exact mapped bytes E8 82 25 04 00: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        lea eax, [ecx + edx + 2d0h]
        mov esi, esp
        push eax
        lea ecx, [ebp - 30h]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F2 0E 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x0e
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        and edx, 0fh
        mov byte ptr [ebp - 1ch], dl
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        mov byte ptr [ebp - 1ah], al
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 278h]
        shr ecx, 1
        and ecx, 7fffffffh
        mov byte ptr [ebp - 1bh], cl
        mov edx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes 66 8B 82 B4 1D 00 00: mov ax, word ptr [edx + 0x1db4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xb4
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 E8: mov word ptr [ebp - 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes 66 8B 91 B6 1D 00 00: mov dx, word ptr [ecx + 0x1db6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xb6
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 55 EA: mov word ptr [ebp - 0x16], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xea
        mov eax, dword ptr [ebp - 0ech]
        ; Exact mapped bytes 66 8B 88 B8 1D 00 00: mov cx, word ptr [eax + 0x1db8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xb8
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D EC: mov word ptr [ebp - 0x14], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xec
        mov edx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes 66 8B 82 BA 1D 00 00: mov ax, word ptr [edx + 0x1dba]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xba
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 EE: mov word ptr [ebp - 0x12], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xee
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes 66 8B 91 BC 1D 00 00: mov dx, word ptr [ecx + 0x1dbc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xbc
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 55 F0: mov word ptr [ebp - 0x10], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf0
        mov eax, dword ptr [ebp - 0ech]
        ; Exact mapped bytes 66 8B 88 BE 1D 00 00: mov cx, word ptr [eax + 0x1dbe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xbe
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D F2: mov word ptr [ebp - 0xe], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf2
        mov edx, dword ptr [ebp - 0ech]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 40c78h]
        mov dword ptr [ebp - 38h], ecx
        push 0d4h
        lea edx, [ebp - 0e0h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        imul eax, eax, 0d4h
        mov ecx, dword ptr [ebp - 0ech]
        lea edx, [ecx + eax + 334h]
        push edx
        ; Exact mapped bytes E8 2B 16 04 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x16
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 6
        push 0
        mov eax, dword ptr [ebp - 0ech]
        add eax, 1db4h
        push eax
        ; Exact mapped bytes E8 63 19 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x19
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 6
        push 0
        mov ecx, dword ptr [ebp - 0ech]
        add ecx, 1dbah
        push ecx
        ; Exact mapped bytes E8 4A 19 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x19
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 0e4h]
        ; Exact mapped bytes E8 11 5E 08 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x5e
        __asm _emit 0x08
        __asm _emit 0x00
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
        pop esi
        add esp, 0ech
        cmp ebp, esp
        ; Exact mapped bytes E8 8C 0D 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
