// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58595450 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_58595450_58595450() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a06h]
        movzx edx, word ptr [ecx*2 + 58902e9ah]
        test edx, edx
        ; Exact mapped bytes 74 7A: je 0x585954e7
        __asm _emit 0x74
        __asm _emit 0x7a
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a06h]
        cmp dword ptr [ecx*8 + 58902ec8h], -1
        ; Exact mapped bytes 74 29: je 0x585954aa
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a06h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        cmp edx, dword ptr [eax*8 + 58902ec8h]
        ; Exact mapped bytes 75 0D: jne 0x585954aa
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ech], 1
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a06h]
        cmp dword ptr [edx*8 + 58902ecch], -1
        ; Exact mapped bytes 74 29: je 0x585954e7
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a06h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 94h]
        cmp eax, dword ptr [ecx*8 + 58902ecch]
        ; Exact mapped bytes 75 0D: jne 0x585954e7
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ech], 1
        mov esp, ebp
        pop ebp
        ret
    }
}
