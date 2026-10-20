// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585EF610 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_585ef610_585EF610() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588add78h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 8], edx
        push 13ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 FB 19 24 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x19
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 8
        mov esp, ebp
        pop ebp
        ret
    }
}
