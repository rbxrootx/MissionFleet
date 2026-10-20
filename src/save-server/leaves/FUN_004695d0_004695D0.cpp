// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004695D0 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_004695d0_004695D0() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        xor edx, edx
        mov dl, byte ptr [ecx + 688ca1h]
        and edx, 4
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x4695fb
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov dword ptr [ebp + 8], ecx
        mov eax, dword ptr [ebp + 8]
        pop ebp
        ret
    }
}
