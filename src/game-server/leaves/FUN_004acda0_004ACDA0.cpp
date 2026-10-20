// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ACDA0 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_004acda0_004ACDA0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 58c2f0h
        push 1bh
        ; Exact mapped bytes E8 39 84 00 00: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 0F: je 0x4acdd2
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes E8 61 8B 00 00: call 0x4b5930
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 1bh
        ; Exact mapped bytes E8 B7 84 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
