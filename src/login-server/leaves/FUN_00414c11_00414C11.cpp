// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00414C11 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_00414c11_00414C11() {
    __asm {
        push ebp
        mov ebp, esp
        lea eax, [ebp + 8]
        add ecx, 5ch
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 89 8B 01 00: call 0x42d7ac
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x414c2c
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 03: jmp 0x414c2f
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp + 8]
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
