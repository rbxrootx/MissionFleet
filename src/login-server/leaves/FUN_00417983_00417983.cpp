// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417983 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_00417983_00417983() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 66 83 7D 0C 0A: cmp word ptr [ebp + 0xc], 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x0a
        mov eax, ecx
        ; Exact mapped bytes 75 07: jne 0x417996
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 66 C7 00 0A 00: mov word ptr [eax], 0xa
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 25: jmp 0x4179bb
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes 66 83 7D 0C 0B: cmp word ptr [ebp + 0xc], 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x0b
        ; Exact mapped bytes 75 19: jne 0x4179b6
        __asm _emit 0x75
        __asm _emit 0x19
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 66 C7 00 0B 00: mov word ptr [eax], 0xb
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x4179af
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 66 83 60 08 00: and word ptr [eax + 8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x4179c1
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 66 83 48 08 FF: or word ptr [eax + 8], 0xffff
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0xff
        ; Exact mapped bytes EB 0B: jmp 0x4179c1
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 66 C7 00 03 00: mov word ptr [eax], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
