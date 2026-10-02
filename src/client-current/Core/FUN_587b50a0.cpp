// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B50A0 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_587b50a0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 74 71: je 0x587b5121
        __asm _emit 0x74
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 38h]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 0F: jne 0x587b50ca
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes EB 3B: jmp 0x587b5105
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 34h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 38h]
        mov dword ptr [eax + 38h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 38h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 34h]
        mov dword ptr [ecx + 34h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        mov eax, dword ptr [edx + 3ch]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 0F: jne 0x587b5105
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 38h]
        mov dword ptr [edx + 3ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 38h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 34h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 30h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
