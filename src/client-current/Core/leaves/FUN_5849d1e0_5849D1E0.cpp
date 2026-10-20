// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5849D1E0 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_5849d1e0_5849D1E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 16ch], ecx
        mov edx, dword ptr [ebp + 8]
        imul edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 40ch], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
