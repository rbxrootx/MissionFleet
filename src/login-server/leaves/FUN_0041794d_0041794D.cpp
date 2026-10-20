// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041794D .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_0041794d_0041794D() {
    __asm {
        ; Exact mapped bytes 66 83 7C 24 08 0B: cmp word ptr [esp + 8], 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x0b
        mov eax, ecx
        ; Exact mapped bytes 75 1B: jne 0x417972
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 66 83 7C 24 04 00: cmp word ptr [esp + 4], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 00 0B 00: mov word ptr [eax], 0xb
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x41796b
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 66 83 60 08 00: and word ptr [eax + 8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x417980
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes 66 83 48 08 FF: or word ptr [eax + 8], 0xffff
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0xff
        ; Exact mapped bytes EB 0E: jmp 0x417980
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes 66 8B 4C 24 04: mov cx, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 66 C7 00 02 00: mov word ptr [eax], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 48 08: mov word ptr [eax + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
