// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00445590 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_00445590_00445590() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1E: je 0x4455d1
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB DC: jmp 0x4455ad
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
