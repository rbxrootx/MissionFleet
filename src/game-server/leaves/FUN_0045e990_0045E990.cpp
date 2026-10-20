// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045E990 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_0045e990_0045E990() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes EB 12: jmp 0x45e9a7
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 10h]
        add eax, 4
        mov dword ptr [ebp + 10h], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 0C: je 0x45e9bb
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB DA: jmp 0x45e995
        __asm _emit 0xeb
        __asm _emit 0xda
        mov eax, dword ptr [ebp + 10h]
        pop ebp
        ret
    }
}
