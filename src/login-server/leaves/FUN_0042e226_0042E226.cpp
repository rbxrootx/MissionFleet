// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E226 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_0042e226_0042E226() {
    __asm {
        mov eax, dword ptr [ecx + 38h]
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x42e23c
        __asm _emit 0x75
        __asm _emit 0x0f
        push dword ptr [esp + 4]
        push dword ptr [ecx + 1ch]
        ; Exact mapped bytes FF 15 EC C4 43 00: call dword ptr [0x43c4ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x42e24a
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edx, dword ptr [eax]
        push dword ptr [esp + 4]
        mov ecx, eax
        ; Exact mapped bytes FF 92 80 00 00 00: call dword ptr [edx + 0x80]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
