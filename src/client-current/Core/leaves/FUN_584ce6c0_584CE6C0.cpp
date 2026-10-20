// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CE6C0 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_584ce6c0_584CE6C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 60h]
        xor edx, dword ptr [ecx + 0fch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 60h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 64h]
        xor eax, dword ptr [edx + 0fch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 64h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 47 C6 2E 00: call 0x587bad40
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xc6
        __asm _emit 0x2e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 60h]
        xor ecx, dword ptr [eax + 0fch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 64h]
        xor edx, dword ptr [ecx + 0fch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 64h], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
