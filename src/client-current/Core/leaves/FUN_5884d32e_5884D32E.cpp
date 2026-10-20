// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884D32E .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_5884d32e_5884D32E() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        push esi
        ; Exact mapped bytes E8 E1 31 00 00: call 0x5885051c
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 1ch]
        push dword ptr [esi + 28h]
        push 0
        push dword ptr [esi + 18h]
        ; Exact mapped bytes E8 9C 2F 00 00: call 0x588502e7
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
