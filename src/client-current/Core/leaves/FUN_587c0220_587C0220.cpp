// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C0220 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_587c0220_587C0220() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 68h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 6ch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0f0h], 0
        ; Exact mapped bytes 74 27: je 0x587c0270
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f0h]
        mov dword ptr [ebp - 8], ecx
        push 14h
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 D4 0D 07 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x0d
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0f0h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
