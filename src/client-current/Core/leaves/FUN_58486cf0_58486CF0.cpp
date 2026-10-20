// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58486CF0 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_58486cf0_58486CF0() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x58486cfd
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 23: jmp 0x58486d20
        __asm _emit 0xeb
        __asm _emit 0x23
        cmp dword ptr [ebp + 8], 1000h
        ; Exact mapped bytes 72 0E: jb 0x58486d14
        __asm _emit 0x72
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 41 00 00 00: call 0x58486d50
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 0C: jmp 0x58486d20
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 C3 10 00 00: call 0x58487de0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        pop ebp
        ret
    }
}
