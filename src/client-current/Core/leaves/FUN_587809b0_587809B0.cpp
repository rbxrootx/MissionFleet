// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587809B0 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_587809b0_587809B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 1A: je 0x587809dc
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        push 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 45 12 00 00: call 0x58781c20
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
