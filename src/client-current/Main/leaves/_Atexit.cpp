// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58971DEA .. +0x26 bytes.
extern "C" __declspec(naked) void _Atexit() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        ; Exact mapped bytes A1 5C E5 9C 58: mov eax, dword ptr [0x589ce55c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0xe5
        __asm _emit 0x9c
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 06: jne 0x58971dfe
        __asm _emit 0x75
        __asm _emit 0x06
        pop ebp
        ; Exact mapped bytes E9 AE B7 00 00: jmp 0x5897d5ac
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        dec eax
        ; Exact mapped bytes A3 5C E5 9C 58: mov dword ptr [0x589ce55c], eax
        __asm _emit 0xa3
        __asm _emit 0x5c
        __asm _emit 0xe5
        __asm _emit 0x9c
        __asm _emit 0x58
        mov dword ptr [eax*4 + 58a28638h], ecx
        pop ebp
        ret
    }
}
