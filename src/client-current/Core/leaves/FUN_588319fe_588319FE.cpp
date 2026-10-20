// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588319FE .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_588319fe_588319FE() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, 5896670ch
        push esi
        ; Exact mapped bytes FF 15 C0 43 89 58: call dword ptr [0x588943c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 8]
        push esi
        mov dword ptr [eax], 0
        ; Exact mapped bytes FF 15 BC 43 89 58: call dword ptr [0x588943bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 58966708h
        ; Exact mapped bytes FF 15 C4 43 89 58: call dword ptr [0x588943c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        pop esi
        pop ebp
        ret
    }
}
