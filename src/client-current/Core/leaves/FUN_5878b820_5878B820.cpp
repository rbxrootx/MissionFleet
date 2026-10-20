// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878B820 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_5878b820_5878B820() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 83 BA CF FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 4
        push eax
        push 4
        ; Exact mapped bytes E8 48 C1 CF FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xc1
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx]
        mov dword ptr [eax], ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
