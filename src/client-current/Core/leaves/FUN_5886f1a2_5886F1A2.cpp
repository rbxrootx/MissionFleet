// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F1A2 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_5886f1a2_5886F1A2() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes A1 B4 9B 96 58: mov eax, dword ptr [0x58969bb4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x9b
        __asm _emit 0x96
        __asm _emit 0x58
        nop
        test eax, eax
        ; Exact mapped bytes 75 28: jne 0x5886f1da
        __asm _emit 0x75
        __asm _emit 0x28
        and dword ptr [ebp - 4], eax
        ; Exact mapped bytes E8 D5 FF FF FF: call 0x5886f18f
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 75 09: jne 0x5886f1c7
        __asm _emit 0x75
        __asm _emit 0x09
        lea eax, [ebp - 4]
        push eax
        ; Exact mapped bytes E8 95 04 00 00: call 0x5886f65c
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov edx, 58969bb4h
        cmp dword ptr [ebp - 4], 1
        sete al
        inc eax
        mov ecx, eax
        xchg dword ptr [edx], ecx
        leave
        ret
    }
}
