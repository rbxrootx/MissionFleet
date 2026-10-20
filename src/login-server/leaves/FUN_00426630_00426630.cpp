// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426630 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_00426630_00426630() {
    __asm {
        movzx eax, byte ptr [esp + 4]
        mov cl, byte ptr [esp + 0ch]
        test byte ptr [eax + 4512c1h], cl
        ; Exact mapped bytes 75 1C: jne 0x42665d
        __asm _emit 0x75
        __asm _emit 0x1c
        cmp dword ptr [esp + 8], 0
        ; Exact mapped bytes 74 0E: je 0x426656
        __asm _emit 0x74
        __asm _emit 0x0e
        movzx eax, word ptr [eax*2 + 44accah]
        and eax, dword ptr [esp + 8]
        ; Exact mapped bytes EB 02: jmp 0x426658
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 01: jne 0x42665d
        __asm _emit 0x75
        __asm _emit 0x01
        ret
        push 1
        pop eax
        ret
    }
}
