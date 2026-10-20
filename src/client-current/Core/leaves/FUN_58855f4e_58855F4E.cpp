// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58855F4E .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_58855f4e_58855F4E() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        xor edx, edx
        cmp dword ptr [ecx], edx
        ; Exact mapped bytes 75 20: jne 0x58855f79
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 8]
        push eax
        push edx
        push edx
        push edx
        push edx
        push edx
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 16h
        ; Exact mapped bytes E8 BC AF FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        xor al, al
        ; Exact mapped bytes EB 02: jmp 0x58855f7b
        __asm _emit 0xeb
        __asm _emit 0x02
        mov al, 1
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
