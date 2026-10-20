// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851481 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_58851481_58851481() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 28h
        lea ecx, [ebp - 28h]
        push esi
        push 0
        ; Exact mapped bytes E8 0B F8 FF FF: call 0x58850c9f
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 28h]
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BC FE FF FF: call 0x5885135c
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        lea ecx, [ebp - 28h]
        mov esi, eax
        ; Exact mapped bytes E8 3B F8 FF FF: call 0x58850ce7
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        pop esi
        leave
        ret
    }
}
