// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B5130 .. +0x9E bytes.
extern "C" __declspec(naked) void FUN_587b5130() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 40h], 0
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x587b51ca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 48h], 0
        ; Exact mapped bytes 75 27: jne 0x587b5174
        __asm _emit 0x75
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 44h], 0
        ; Exact mapped bytes 75 0F: jne 0x587b5165
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 40h]
        mov dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes EB 0D: jmp 0x587b5172
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 44h]
        mov dword ptr [eax + 48h], 0
        ; Exact mapped bytes EB 38: jmp 0x587b51ac
        __asm _emit 0xeb
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 48h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 44h]
        mov dword ptr [edx + 44h], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 44h], 0
        ; Exact mapped bytes 75 11: jne 0x587b519d
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 40h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 48h]
        mov dword ptr [ecx + 4ch], eax
        ; Exact mapped bytes EB 0F: jmp 0x587b51ac
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 44h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 48h]
        mov dword ptr [edx + 48h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 40h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 44h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 48h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
