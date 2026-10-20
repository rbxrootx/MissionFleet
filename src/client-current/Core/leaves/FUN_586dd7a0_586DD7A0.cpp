// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586DD7A0 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_586dd7a0_586DD7A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 278h
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 7E 0C: jle 0x586dd7c6
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        add eax, 278h
        ; Exact mapped bytes EB 04: jmp 0x586dd7c8
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x586dd7c8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
    }
}
