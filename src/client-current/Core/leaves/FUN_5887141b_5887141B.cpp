// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887141B .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_5887141b_5887141B() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 8]
        test ecx, ecx
        ; Exact mapped bytes 75 15: jne 0x5887143c
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes E8 43 10 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 74 FB FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xfb
        __asm _emit 0xfd
        __asm _emit 0xff
        push 16h
        pop eax
        pop ebp
        ret
        ; Exact mapped bytes A1 1C 9C 96 58: mov eax, dword ptr [0x58969c1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ecx], eax
        xor eax, eax
        pop ebp
        ret
    }
}
