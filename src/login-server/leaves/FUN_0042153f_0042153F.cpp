// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042153F .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_0042153f_0042153F() {
    __asm {
        push ebp
        mov ebp, esp
        xor eax, eax
        cmp dword ptr [ebp + 10h], 0ah
        ; Exact mapped bytes 75 08: jne 0x421552
        __asm _emit 0x75
        __asm _emit 0x08
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 7D 03: jge 0x421552
        __asm _emit 0x7d
        __asm _emit 0x03
        push 1
        pop eax
        push eax
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 82 FF FF FF: call 0x4214e3
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        add esp, 10h
        pop ebp
        ret
    }
}
