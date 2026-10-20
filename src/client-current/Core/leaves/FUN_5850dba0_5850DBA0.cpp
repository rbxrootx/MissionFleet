// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850DBA0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5850dba0_5850DBA0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 0D: je 0x5850dbbd
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8]
        add eax, 28h
        ; Exact mapped bytes EB 04: jmp 0x5850dbbf
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x5850dbbf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
    }
}
