// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58509CA0 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_58509ca0_58509CA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 0D: je 0x58509cc1
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 07: jmp 0x58509cc8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 8]
        cdq
        mov esp, ebp
        pop ebp
        ret
    }
}
