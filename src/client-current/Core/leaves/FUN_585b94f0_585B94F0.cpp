// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B94F0 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_585b94f0_585B94F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 10h
        ; Exact mapped bytes E8 81 E4 EC FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe4
        __asm _emit 0xec
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 A2 DD EC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xdd
        __asm _emit 0xec
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
