// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434DA0 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_00434da0_00434DA0() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 82 8D 00 00 00: jb 0x434e3a
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 10h
        ; Exact mapped bytes 0F 87 83 00 00 00: ja 0x434e3a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 07: jne 0x434dc4
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 79: jmp 0x434e3d
        __asm _emit 0xeb
        __asm _emit 0x79
        cmp dword ptr [ebp + 8], 10h
        ; Exact mapped bytes 75 04: jne 0x434dce
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 6F: jmp 0x434e3d
        __asm _emit 0xeb
        __asm _emit 0x6f
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 07: jne 0x434ddb
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 2
        ; Exact mapped bytes EB 62: jmp 0x434e3d
        __asm _emit 0xeb
        __asm _emit 0x62
        cmp dword ptr [ebp + 8], 3
        ; Exact mapped bytes 75 07: jne 0x434de8
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 3
        ; Exact mapped bytes EB 55: jmp 0x434e3d
        __asm _emit 0xeb
        __asm _emit 0x55
        cmp dword ptr [ebp + 8], 5
        ; Exact mapped bytes 75 07: jne 0x434df5
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 4
        ; Exact mapped bytes EB 48: jmp 0x434e3d
        __asm _emit 0xeb
        __asm _emit 0x48
        cmp dword ptr [ebp + 8], 6
        ; Exact mapped bytes 75 07: jne 0x434e02
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5
        ; Exact mapped bytes EB 3B: jmp 0x434e3d
        __asm _emit 0xeb
        __asm _emit 0x3b
        cmp dword ptr [ebp + 8], 0bh
        ; Exact mapped bytes 75 07: jne 0x434e0f
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 6
        ; Exact mapped bytes EB 2E: jmp 0x434e3d
        __asm _emit 0xeb
        __asm _emit 0x2e
        cmp dword ptr [ebp + 8], 0ch
        ; Exact mapped bytes 75 07: jne 0x434e1c
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 7
        ; Exact mapped bytes EB 21: jmp 0x434e3d
        __asm _emit 0xeb
        __asm _emit 0x21
        cmp dword ptr [ebp + 8], 0dh
        ; Exact mapped bytes 75 07: jne 0x434e29
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 8
        ; Exact mapped bytes EB 14: jmp 0x434e3d
        __asm _emit 0xeb
        __asm _emit 0x14
        cmp dword ptr [ebp + 8], 4
        ; Exact mapped bytes 75 07: jne 0x434e36
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 9
        ; Exact mapped bytes EB 07: jmp 0x434e3d
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes EB 03: jmp 0x434e3d
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop ebp
        ret
    }
}
