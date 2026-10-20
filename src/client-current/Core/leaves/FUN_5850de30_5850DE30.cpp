// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850DE30 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_5850de30_5850DE30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 0C: je 0x5850de4c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 54h], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
