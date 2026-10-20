// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044A1A3 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_0044a1a3_0044A1A3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 108h], 0
        ; Exact mapped bytes 75 13: jne 0x44a1d9
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 108h], edx
        mov eax, 1
        ; Exact mapped bytes EB 2E: jmp 0x44a207
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 108h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 0B: je 0x44a1f9
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB EC: jmp 0x44a1e5
        __asm _emit 0xeb
        __asm _emit 0xec
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
