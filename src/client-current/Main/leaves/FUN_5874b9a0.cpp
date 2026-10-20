// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874B9A0 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_5874b9a0() {
    __asm {
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 30h]
        mov eax, dword ptr [edx + 0cc0h]
        movzx eax, word ptr [eax + 4]
        and eax, 1fh
        push esi
        movzx esi, byte ptr [eax + ecx + 198h]
        dec eax
        cmp eax, 8
        ; Exact mapped bytes 77 6E: ja 0x5874ba32
        __asm _emit 0x77
        __asm _emit 0x6e
        ; Exact mapped bytes FF 24 85 38 BA 74 58: jmp dword ptr [eax*4 + 0x5874ba38]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0xba
        __asm _emit 0x74
        __asm _emit 0x58
        mov eax, 1
        lea edx, [eax + 3ch]
        ; Exact mapped bytes EB 3A: jmp 0x5874ba0f
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov eax, 2
        lea edx, [eax + 3ch]
        ; Exact mapped bytes EB 30: jmp 0x5874ba0f
        __asm _emit 0xeb
        __asm _emit 0x30
        mov eax, 3
        lea edx, [eax + 3fh]
        ; Exact mapped bytes EB 26: jmp 0x5874ba0f
        __asm _emit 0xeb
        __asm _emit 0x26
        mov eax, 4
        lea edx, [eax + 3fh]
        ; Exact mapped bytes EB 1C: jmp 0x5874ba0f
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, 5
        lea edx, [eax + 3fh]
        ; Exact mapped bytes EB 12: jmp 0x5874ba0f
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, 6
        lea edx, [eax + 3fh]
        ; Exact mapped bytes EB 08: jmp 0x5874ba0f
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, 7
        lea edx, [eax + 3ah]
        movzx ecx, byte ptr [eax + ecx + 182h]
        cmp esi, ecx
        ; Exact mapped bytes 7C 17: jl 0x5874ba32
        __asm _emit 0x7c
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push edx
        ; Exact mapped bytes E8 C9 00 02 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 02 93 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        xor al, al
        pop esi
        ret
        mov al, 1
        pop esi
        ret
    }
}
