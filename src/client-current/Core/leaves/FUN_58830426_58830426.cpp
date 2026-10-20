// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58830426 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_58830426_58830426() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        push esi
        mov esi, ecx
        mov dword ptr [esi], eax
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5883043c
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E8 41 38 03 00: call 0x58863c7b
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x58830450
        __asm _emit 0xeb
        __asm _emit 0x14
        cmp eax, 8
        ; Exact mapped bytes 7D 0F: jge 0x58830450
        __asm _emit 0x7d
        __asm _emit 0x0f
        imul eax, eax, 18h
        add eax, 58966128h
        push eax
        ; Exact mapped bytes E8 FB 08 00 00: call 0x58830d4a
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov eax, esi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
