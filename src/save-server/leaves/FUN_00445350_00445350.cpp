// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00445350 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_00445350_00445350() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 75 19: jne 0x44537a
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 4]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0B: jne 0x44537a
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB 59: jmp 0x4453d3
        __asm _emit 0xeb
        __asm _emit 0x59
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 25: je 0x4453a8
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 0B: je 0x4453a0
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB EC: jmp 0x44538c
        __asm _emit 0xeb
        __asm _emit 0xec
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes EB 2B: jmp 0x4453d3
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 75 11: jne 0x4453cd
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB E4: jmp 0x4453b1
        __asm _emit 0xeb
        __asm _emit 0xe4
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp + 8], eax
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
