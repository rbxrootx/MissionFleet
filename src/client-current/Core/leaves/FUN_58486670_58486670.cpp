// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58486670 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_58486670_58486670() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 1E: je 0x584866a7
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x584866a7
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, 1
        mov dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes EB DC: jmp 0x58486683
        __asm _emit 0xeb
        __asm _emit 0xdc
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x584866b4
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 80070057h
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 1C: je 0x584866d6
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7C 0D: jl 0x584866cd
        __asm _emit 0x7c
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 09: jmp 0x584866d6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
