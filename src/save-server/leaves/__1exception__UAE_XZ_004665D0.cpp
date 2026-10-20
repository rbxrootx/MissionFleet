// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004665D0 .. +0x34 bytes.
extern "C" __declspec(naked) void __1exception__UAE_XZ_004665D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 63e138h
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 15: je 0x466600
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 AC 5E 06 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x5e
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
