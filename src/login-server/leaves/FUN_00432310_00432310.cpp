// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432310 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_00432310_00432310() {
    __asm {
        mov ecx, dword ptr [esp + 8]
        mov eax, dword ptr [ecx + 4]
        cmp eax, 1
        ; Exact mapped bytes 75 05: jne 0x432321
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 11: jmp 0x432332
        __asm _emit 0xeb
        __asm _emit 0x11
        cmp eax, 0fh
        ; Exact mapped bytes 75 0A: jne 0x432330
        __asm _emit 0x75
        __asm _emit 0x0a
        push 0
        push dword ptr [ecx]
        ; Exact mapped bytes FF 15 D8 C3 43 00: call dword ptr [0x43c3d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
