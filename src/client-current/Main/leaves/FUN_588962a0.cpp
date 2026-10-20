// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588962A0 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_588962a0() {
    __asm {
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
        mov edx, 200h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 3B: jne 0x588962f4
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, 0fffdh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0e4ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 400h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 588h]
        push 0
        ; Exact mapped bytes E8 69 8B EC FF: call 0x5875ee50
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x8b
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 58ch]
        push 0
        ; Exact mapped bytes E8 5C 8B EC FF: call 0x5875ee50
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x8b
        __asm _emit 0xec
        __asm _emit 0xff
        pop esi
        ret
    }
}
