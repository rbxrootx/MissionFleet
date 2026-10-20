// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856C530 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_5856c530_5856C530() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 64h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 68h], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 64h], 1
        ; Exact mapped bytes 75 22: jne 0x5856c574
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax*4 + 589490f0h]
        imul eax, dword ptr [ecx + 68h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 74h], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
