// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58741AD0 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_58741ad0_58741AD0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F1 3C 00 00: call 0x587457d0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x58741ae7
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 15: jmp 0x58741afc
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 91 35 00 00: call 0x58745080
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x58741af7
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x58741afc
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
