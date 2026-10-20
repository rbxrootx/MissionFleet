// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851F880 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_5851f880_5851F880() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        xor edx, edx
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 10h], ecx
        mov dword ptr [eax + 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
