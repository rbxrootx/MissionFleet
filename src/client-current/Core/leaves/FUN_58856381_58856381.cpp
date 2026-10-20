// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58856381 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_58856381_58856381() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 28h
        lea ecx, [ebp - 28h]
        push esi
        push dword ptr [ebp + 1ch]
        ; Exact mapped bytes E8 0A A9 FF FF: call 0x58850c9f
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp + 20h]
        lea eax, [ebp - 28h]
        push eax
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 67 B7 FF FF: call 0x58851b17
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        lea ecx, [ebp - 28h]
        mov esi, eax
        ; Exact mapped bytes E8 2A A9 FF FF: call 0x58850ce7
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        pop esi
        leave
        ret
    }
}
