// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58868FFB .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_58868ffb_58868FFB() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        push dword ptr [ebp + 0ch]
        mov esi, ecx
        push dword ptr [ebp + 8]
        push 55h
        mov eax, dword ptr [esi + 8]
        add eax, 250h
        push eax
        ; Exact mapped bytes E8 57 CF FF FF: call 0x58865f70
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x58869032
        __asm _emit 0x75
        __asm _emit 0x12
        push dword ptr [ebp + 0ch]
        mov ecx, esi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 12 00 00 00: call 0x5886903f
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes E8 9B 7F FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
