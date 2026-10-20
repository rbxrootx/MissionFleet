// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887BD1A .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_5887bd1a_5887BD1A() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 8]
        test ecx, ecx
        ; Exact mapped bytes 75 15: jne 0x5887bd3b
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes E8 44 67 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x67
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 75 52 FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x52
        __asm _emit 0xfd
        __asm _emit 0xff
        push 16h
        pop eax
        pop ebp
        ret
        ; Exact mapped bytes A1 88 9C 96 58: mov eax, dword ptr [0x58969c88]
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        nop
        mov dword ptr [ecx], eax
        xor eax, eax
        pop ebp
        ret
    }
}
