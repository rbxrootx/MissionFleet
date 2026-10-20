// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885871D .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_5885871d_5885871D() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 DC 43 89 58: call dword ptr [0x588943dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x5885873f
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes E8 3B 9D 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        or eax, 0ffffffffh
        pop ebp
        ret
        xor eax, eax
        pop ebp
        ret
    }
}
