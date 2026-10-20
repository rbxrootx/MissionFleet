// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58872425 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_58872425_58872425() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push 2
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 8C 41 89 58: call dword ptr [0x5889418c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x5887244e
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 CB FF FE FF: call 0x58862413
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        or eax, 0ffffffffh
        pop ebp
        ret
        xor eax, eax
        pop ebp
        ret
    }
}
