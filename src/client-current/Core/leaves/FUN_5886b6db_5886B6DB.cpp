// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886B6DB .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_5886b6db_5886B6DB() {
    __asm {
        push ebp
        mov ebp, esp
        add esp, -0ch
        push ebx
        ; Exact mapped bytes 66 8B 45 0E: mov ax, word ptr [ebp + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0e
        ; Exact mapped bytes 66 8B D8: mov bx, ax
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 66 25 F0 7F: and ax, 0x7ff0
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xf0
        __asm _emit 0x7f
        ; Exact mapped bytes 66 3D F0 7F: cmp ax, 0x7ff0
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0x7f
        ; Exact mapped bytes 75 1E: jne 0x5886b711
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 66 81 CB FF 7F: or bx, 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 66 89 5D FE: mov word ptr [ebp - 2], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0xfe
        mov eax, dword ptr [ebp + 0ch]
        mov ebx, dword ptr [ebp + 8]
        shld eax, ebx, 0bh
        mov dword ptr [ebp - 6], eax
        mov dword ptr [ebp - 0ah], ebx
        ; Exact mapped bytes DB 6D F6: fld xword ptr [ebp - 0xa]
        __asm _emit 0xdb
        __asm _emit 0x6d
        __asm _emit 0xf6
        ; Exact mapped bytes EB 03: jmp 0x5886b714
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        pop ebx
        leave
        ret
    }
}
