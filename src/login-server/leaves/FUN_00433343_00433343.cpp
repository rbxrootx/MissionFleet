// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433343 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_00433343_00433343() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        push 1
        push 0
        mov eax, dword ptr [esi]
        ; Exact mapped bytes FF 50 28: call dword ptr [eax + 0x28]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x28
        mov edi, eax
        mov eax, dword ptr [esi]
        push 2
        push 0
        mov ecx, esi
        ; Exact mapped bytes FF 50 28: call dword ptr [eax + 0x28]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x28
        mov ebx, eax
        mov eax, dword ptr [esi]
        push 0
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 28: call dword ptr [eax + 0x28]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x28
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        ret
    }
}
