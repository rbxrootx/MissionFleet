// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58536700 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_58536700_58536700() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        imul eax, dword ptr [eax*4 + 589490f0h], 7d0h
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ch], eax
        mov eax, dword ptr [ebp + 0ch]
        imul eax, dword ptr [eax*4 + 5894c930h], 7d0h
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 8]
        imul eax, dword ptr [edx*4 + 5894c930h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 54h], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        imul ecx, dword ptr [eax*4 + 589490f0h]
        mov eax, ecx
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 58h], eax
        mov eax, dword ptr [ebp + 8]
        imul eax, dword ptr [eax*4 + 5894c930h], 14h
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], eax
        mov eax, dword ptr [ebp + 8]
        imul eax, dword ptr [eax*4 + 589490f0h], 14h
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 64h], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
