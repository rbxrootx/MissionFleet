// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584860A0 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_584860a0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 6ch], 0
        ; Exact mapped bytes 74 1E: je 0x584860ce
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 18: je 0x584860ce
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 80h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        push eax
        ; Exact mapped bytes E8 B5 E0 32 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xe0
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
