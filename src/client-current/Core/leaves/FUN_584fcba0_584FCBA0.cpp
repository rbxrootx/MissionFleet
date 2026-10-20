// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FCBA0 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_584fcba0_584FCBA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 0ch]
        cmp edx, dword ptr [ecx + 10h]
        ; Exact mapped bytes 74 09: je 0x584fcbc0
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x584fcbc7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
