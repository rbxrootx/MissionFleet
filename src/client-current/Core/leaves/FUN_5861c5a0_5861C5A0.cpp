// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861C5A0 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_5861c5a0_5861C5A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5861c5bb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 80h
        ; Exact mapped bytes 7D 26: jge 0x5861c5ea
        __asm _emit 0x7d
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 8]
        push ecx
        imul edx, dword ptr [ebp - 4], 18h
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 0fch]
        push ecx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5861c5e8
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x5861c5ec
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB C8: jmp 0x5861c5b2
        __asm _emit 0xeb
        __asm _emit 0xc8
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
