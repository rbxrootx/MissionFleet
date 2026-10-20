// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886863B .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_5886863b_5886863B() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push 20h
        push dword ptr [ebp + 8]
        push 40h
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 21 D9 FF FF: call 0x58865f70
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x58868670
        __asm _emit 0x75
        __asm _emit 0x1a
        push eax
        push eax
        push 40h
        push dword ptr [ebp + 10h]
        push -1
        push dword ptr [ebp + 8]
        push eax
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 7E 75 00 00: call 0x5886fbe9
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        pop ebp
        ret
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 5D 89 FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x89
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
