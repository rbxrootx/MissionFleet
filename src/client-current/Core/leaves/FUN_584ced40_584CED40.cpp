// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CED40 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_584ced40_584CED40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        lea eax, [ebp + 10h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 104h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 10 10 00 00: call 0x584cfd70
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov esp, ebp
        pop ebp
        ret
    }
}
