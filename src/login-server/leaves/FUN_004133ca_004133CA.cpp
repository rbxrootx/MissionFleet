// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004133CA .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_004133ca_004133CA() {
    __asm {
        ; Exact mapped bytes 0F BF 44 24 04: movsx eax, word ptr [esp + 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x4133e7
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp eax, 1
        ; Exact mapped bytes 7E 0A: jle 0x4133e2
        __asm _emit 0x7e
        __asm _emit 0x0a
        cmp eax, 62h
        ; Exact mapped bytes 7E 0A: jle 0x4133e7
        __asm _emit 0x7e
        __asm _emit 0x0a
        cmp eax, 64h
        ; Exact mapped bytes 7F 05: jg 0x4133e7
        __asm _emit 0x7f
        __asm _emit 0x05
        push 1
        pop eax
        ; Exact mapped bytes EB 02: jmp 0x4133e9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
