// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BDF70 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_587bdf70_587BDF70() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 54h], 0
        ; Exact mapped bytes 74 19: je 0x587bdf99
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 54h]
        ; Exact mapped bytes E8 91 7D 00 00: call 0x587c5d20
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 54h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
