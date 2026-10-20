// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58864119 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_58864119_58864119() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes E8 7C 4A 00 00: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4ch]
        mov dword ptr [ebp - 4], ecx
        lea ecx, [ebp - 4]
        push ecx
        push eax
        ; Exact mapped bytes E8 ED 8D 00 00: call 0x5886cf21
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        pop ecx
        pop ecx
        add eax, 0a0h
        leave
        ret
    }
}
