// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004120FF .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_004120ff_004120FF() {
    __asm {
        ; Exact mapped bytes 0F BF 44 24 08: movsx eax, word ptr [esp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7C 0F: jl 0x412117
        __asm _emit 0x7c
        __asm _emit 0x0f
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 7E 05: jle 0x412112
        __asm _emit 0x7e
        __asm _emit 0x05
        ; Exact mapped bytes 83 F8 64: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x64
        ; Exact mapped bytes 75 05: jne 0x412117
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes EB 02: jmp 0x412119
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
