// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100CFA50 .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_100cfa50_100CFA50() {
    __asm {
        push esi
        mov esi, ecx
        mov edx, dword ptr [esi + 78h]
        mov eax, dword ptr [esi + 6ch]
        shl edx, 8
        mov ecx, dword ptr [eax + 80h]
        lea eax, [edx + esi + 80h]
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 7ch]
        xor edx, edx
        cmp eax, 20h
        ; Exact mapped bytes 75 13: jne 0x100cfa8e
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [esi + 78h]
        cmp eax, 1fh
        ; Exact mapped bytes 75 05: jne 0x100cfa88
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [esi + 78h], edx
        ; Exact mapped bytes EB 17: jmp 0x100cfa9f
        __asm _emit 0xeb
        __asm _emit 0x17
        inc eax
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes EB 11: jmp 0x100cfa9f
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [esi + 78h]
        dec eax
        cmp ecx, eax
        ; Exact mapped bytes 75 05: jne 0x100cfa9b
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [esi + 78h], edx
        ; Exact mapped bytes EB 04: jmp 0x100cfa9f
        __asm _emit 0xeb
        __asm _emit 0x04
        inc ecx
        mov dword ptr [esi + 78h], ecx
        cmp dword ptr [esi + 2080h], edx
        ; Exact mapped bytes 75 2C: jne 0x100cfad3
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [esi + 6ch]
        mov eax, dword ptr [ecx + 80h]
        ; Exact mapped bytes 66 8B 4E 74: mov cx, word ptr [esi + 0x74]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x74
        push eax
        push 1
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push edx
        push 0ffffh
        ; Exact mapped bytes E8 06 DA F7 FF: call 0x1004d4d0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xda
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        pop esi
        ret
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + 0d0ch]
        cmp eax, edx
        ; Exact mapped bytes 74 23: je 0x100cfb05
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [esi + 6ch]
        mov eax, dword ptr [eax + 48h]
        shr eax, 0ah
        mov edx, dword ptr [ecx + 80h]
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push eax
        ; Exact mapped bytes E8 92 D9 F7 FF: call 0x1004d490
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xd9
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        pop esi
        ret
    }
}
