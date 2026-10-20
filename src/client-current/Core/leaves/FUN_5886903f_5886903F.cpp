// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886903F .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_5886903f_5886903F() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        push dword ptr [ebp + 0ch]
        mov esi, ecx
        push dword ptr [ebp + 8]
        push dword ptr [esi + 4]
        push dword ptr [esi]
        ; Exact mapped bytes E8 19 CF FF FF: call 0x58865f70
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x58869067
        __asm _emit 0x75
        __asm _emit 0x09
        mov byte ptr [esi + 0ch], 1
        pop esi
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 66 7F FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
