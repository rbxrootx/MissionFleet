// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58509E00 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_58509e00_58509E00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 0E: je 0x58509e1d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 E6 F7 34 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf7
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
