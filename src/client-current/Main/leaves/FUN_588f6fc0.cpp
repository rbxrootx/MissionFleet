// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F6FC0 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_588f6fc0() {
    __asm {
        push ebx
        push esi
        mov ebx, ecx
        push edi
        lea esi, [ebx + 60h]
        mov edi, 14h
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 29 00 00 00: call 0x588f7000
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 F1: jne 0x588f6fd0
        __asm _emit 0x75
        __asm _emit 0xf1
        mov ecx, dword ptr [ebx + 0b0h]
        mov dword ptr [ebx + 0c8h], edi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes E9 FD FE FF FF: jmp 0x588f6ef0
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
