// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585207B0 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_585207b0_585207B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 0F: je 0x585207cf
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4ch]
        push edx
        ; Exact mapped bytes E8 36 95 33 00: call 0x58859d02
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x95
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
