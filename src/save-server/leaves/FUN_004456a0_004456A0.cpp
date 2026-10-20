// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004456A0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_004456a0_004456A0() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 14: je 0x4456bd
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 0A: je 0x4456bd
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB E6: jmp 0x4456a3
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov eax, dword ptr [ebp + 8]
        pop ebp
        ret
    }
}
