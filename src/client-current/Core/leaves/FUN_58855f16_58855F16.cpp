// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58855F16 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_58855f16_58855F16() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ecx]
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x58855f43
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 8]
        push eax
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 16h
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 F2 AF FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        xor al, al
        ; Exact mapped bytes EB 07: jmp 0x58855f4a
        __asm _emit 0xeb
        __asm _emit 0x07
        push eax
        ; Exact mapped bytes E8 36 00 00 00: call 0x58855f7f
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
