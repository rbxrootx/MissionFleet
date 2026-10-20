// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850A140 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_5850a140_5850A140() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 0A: je 0x5850a15b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 09: jmp 0x5850a164
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
