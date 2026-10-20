// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886CB66 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_5886cb66_5886CB66() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 74 04: je 0x5886cb77
        __asm _emit 0x74
        __asm _emit 0x04
        xor al, al
        pop ebp
        ret
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [eax], 1
        mov al, 1
        and dword ptr [ecx + 4], 0fffff7ffh
        pop ebp
        ret
    }
}
