// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D6B70 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_587d6b70() {
    __asm {
        movzx eax, word ptr [ecx + 60h]
        mov edx, 0a9h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 1B: jne 0x587d6b99
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 66 8B 81 54 0D 00 00: mov ax, word ptr [ecx + 0xd54]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0ff10h
        ; Exact mapped bytes 66 23 C2: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc2
        ; Exact mapped bytes 66 83 C8 10: or ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 81 54 0D 00 00: mov word ptr [ecx + 0xd54], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ret
        and eax, 0f00h
        mov edx, 1000h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 8B 91 54 0D 00 00: mov dx, word ptr [ecx + 0xd54]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov esi, 0ff10h
        ; Exact mapped bytes 66 23 D6: and dx, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd6
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        pop esi
        ; Exact mapped bytes 66 89 81 54 0D 00 00: mov word ptr [ecx + 0xd54], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ret
    }
}
