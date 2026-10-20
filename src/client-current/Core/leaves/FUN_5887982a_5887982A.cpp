// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887982A .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_5887982a_5887982A() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        mov ecx, eax
        and eax, 3fh
        sar ecx, 6
        imul eax, eax, 38h
        add eax, dword ptr [ecx*4 + 589699b0h]
        push eax
        ; Exact mapped bytes FF 15 1C 42 89 58: call dword ptr [0x5889421c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        pop ebp
        ret
    }
}
