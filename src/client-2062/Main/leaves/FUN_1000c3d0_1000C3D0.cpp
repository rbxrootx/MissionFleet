// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000C3D0 .. +0x216 bytes.
extern "C" __declspec(naked) void FUN_1000c3d0_1000C3D0() {
    __asm {
        push -1
        push 1016d038h
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
        sub esp, 44h
        mov eax, dword ptr [esp + 78h]
        mov edx, dword ptr [esp + 70h]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 80h]
        push edi
        push eax
        mov eax, dword ptr [esp + 80h]
        push ecx
        mov ecx, dword ptr [esp + 80h]
        push edx
        mov edx, dword ptr [esp + 80h]
        push eax
        mov eax, dword ptr [esp + 80h]
        push ecx
        mov ecx, dword ptr [esp + 80h]
        push edx
        mov edx, dword ptr [esp + 80h]
        push eax
        mov eax, dword ptr [esp + 80h]
        push ecx
        push edx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 38h], esi
        ; Exact mapped bytes E8 5D B4 0D 00: call 0x100e78a0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xb4
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, 1
        xor ebp, ebp
        mov byte ptr [esi + 65b1h], al
        mov dword ptr [esi + 65d4h], eax
        mov ecx, 20h
        xor eax, eax
        lea edi, [esi + 6674h]
        mov dword ptr [esi], 10175278h
        mov byte ptr [esi + 65b0h], 3
        mov dword ptr [esi + 5c50h], ebp
        mov dword ptr [esi + 65a8h], ebp
        mov byte ptr [esi + 61a5h], 0
        mov byte ptr [esi + 5fa5h], 0
        mov dword ptr [esi + 5fa0h], ebp
        mov dword ptr [esi + 65ach], 10000000h
        mov dword ptr [esi + 65b4h], ebp
        mov dword ptr [esi + 65b8h], ebp
        mov dword ptr [esi + 65bch], ebp
        mov dword ptr [esi + 65c0h], ebp
        mov dword ptr [esi + 65d8h], ebp
        mov dword ptr [esi + 65dch], ebp
        mov dword ptr [esi + 6600h], ebp
        mov dword ptr [esi + 6604h], ebp
        mov dword ptr [esi + 6608h], ebp
        mov dword ptr [esi + 660ch], ebp
        mov dword ptr [esi + 65cch], ebp
        mov dword ptr [esi + 65d0h], ebp
        mov dword ptr [esi + 6610h], ebp
        mov dword ptr [esi + 6614h], ebp
        mov dword ptr [esi + 666ch], ebp
        mov dword ptr [esi + 6670h], ebp
        mov dword ptr [esp + 5ch], ebp
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        lea ebx, [esi + 158h]
        mov dword ptr [esp + 88h], 20h
        mov eax, dword ptr [ebx]
        cmp eax, ebp
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x1000c5b7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6670h]
        ; Exact mapped bytes 66 8B B8 7C 01 00 00: mov di, word ptr [eax + 0x17c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb8
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, ecx
        ; Exact mapped bytes 7D 1F: jge 0x1000c54b
        __asm _emit 0x7d
        __asm _emit 0x1f
        lea edx, [esp + 14h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 33 C7: xor ax, di
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc7
        test al, 0fh
        ; Exact mapped bytes 75 07: jne 0x1000c541
        __asm _emit 0x75
        __asm _emit 0x07
        test eax, 0ffe0h
        ; Exact mapped bytes 74 08: je 0x1000c549
        __asm _emit 0x74
        __asm _emit 0x08
        inc ebp
        add edx, 2
        cmp ebp, ecx
        ; Exact mapped bytes 7C E7: jl 0x1000c530
        __asm _emit 0x7c
        __asm _emit 0xe7
        cmp ebp, ecx
        ; Exact mapped bytes 75 31: jne 0x1000c57e
        __asm _emit 0x75
        __asm _emit 0x31
        push 1c24h
        ; Exact mapped bytes 66 89 7C 6C 18: mov word ptr [esp + ebp*2 + 0x18], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x6c
        __asm _emit 0x18
        ; Exact mapped bytes E8 44 02 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        mov ecx, 709h
        xor eax, eax
        mov dword ptr [esi + ebp*4 + 6674h], edi
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, dword ptr [esi + 6670h]
        add esp, 4
        inc eax
        mov dword ptr [esi + 6670h], eax
        mov ecx, dword ptr [ebx]
        mov edx, dword ptr [esi + ebp*4 + 6674h]
        mov eax, 55555556h
        push 96h
        mov dword ptr [ecx + 16ch], edx
        mov ecx, dword ptr [ebx]
        mov edx, dword ptr [ecx + 154h]
        imul edx
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [ecx + 154h], edx
        mov ecx, dword ptr [ebx]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 2C: call dword ptr [edx + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x2c
        xor ebp, ebp
        mov eax, dword ptr [esp + 88h]
        add ebx, 4
        dec eax
        mov dword ptr [esp + 88h], eax
        ; Exact mapped bytes 0F 85 42 FF FF FF: jne 0x1000c511
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 54h]
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 50h
        ; Exact mapped bytes C2 28 00: ret 0x28
        __asm _emit 0xc2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}
