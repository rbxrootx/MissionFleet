// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00445500 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_00445500_00445500() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 74 4B: je 0x445557
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
