// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585209A0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_585209a0_585209A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 20h]
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [edx], eax
        mov eax, 3
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
