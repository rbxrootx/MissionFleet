// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00440230 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_00440230_00440230() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 14: je 0x440254
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 0A: je 0x440254
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB E6: jmp 0x44023a
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
