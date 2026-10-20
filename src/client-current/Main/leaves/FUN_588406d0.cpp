// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588406D0 .. +0x1BF bytes.
extern "C" __declspec(naked) void FUN_588406d0() {
    __asm {
        sub esp, 0ch
        push ebp
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 1f00h
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        push edi
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 1D: jne 0x5884070b
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0e1ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 100h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 05: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x05
        mov ecx, dword ptr [esi + 7ch]
        mov eax, 0fh
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 84h]
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 98h]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 9ch]
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0cch]
        mov dword ptr [esi + 0f0h], 1
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0d0h]
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0d4h]
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0ach]
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [esi + 0b8h]
        lea edi, [esi + 0a0h]
        lea ecx, [esi + 0b8h]
        mov ebp, 0fff0h
        ; Exact mapped bytes 66 21 6A 24: and word ptr [edx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6a
        __asm _emit 0x24
        mov edx, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 66 09 42 24: or word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x42
        __asm _emit 0x24
        mov edx, dword ptr [esi + 0b0h]
        ; Exact mapped bytes 66 21 6A 24: and word ptr [edx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6a
        __asm _emit 0x24
        mov edx, dword ptr [esi + 0bch]
        ; Exact mapped bytes 66 21 6A 24: and word ptr [edx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6a
        __asm _emit 0x24
        mov edx, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 66 09 42 24: or word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x42
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b4h]
        mov edx, ebp
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c0h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c4h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0ech]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e4h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e8h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        xor ebp, ebp
        push ebp
        push 3
        push ecx
        mov ecx, dword ptr [esi + 0c0h]
        ; Exact mapped bytes E8 7F 9B F4 FF: call 0x5878a3a0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x9b
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0a8h]
        push ebp
        push 3
        push edi
        ; Exact mapped bytes E8 70 9B F4 FF: call 0x5878a3a0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x9b
        __asm _emit 0xf4
        __asm _emit 0xff
        xor eax, eax
        mov dword ptr [esp + 0ch], eax
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 14h], eax
        lea eax, [esp + 0ch]
        mov dword ptr [esi + 110h], 1
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        mov dword ptr [esp + 10h], ebp
        mov dword ptr [esp + 18h], 0ch
        mov dword ptr [esp + 14h], ebp
        ; Exact mapped bytes E8 88 9B F7 FF: call 0x587ba3f0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x9b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [esi + 110h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov ecx, dword ptr [esi + 108h]
        mov dword ptr [ecx + 50h], eax
        mov eax, dword ptr [esi + 104h]
        pop edi
        pop esi
        mov dword ptr [eax + 50h], edx
        pop ebp
        add esp, 0ch
        ret
    }
}
