// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004452E0 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_004452e0_004452E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 1F: je 0x44530c
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 0B: je 0x44530a
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes EB EC: jmp 0x4452f6
        __asm _emit 0xeb
        __asm _emit 0xec
        ; Exact mapped bytes EB 36: jmp 0x445342
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes 75 11: jne 0x445331
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB E4: jmp 0x445315
        __asm _emit 0xeb
        __asm _emit 0xe4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 06: je 0x445342
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp + 8], eax
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
