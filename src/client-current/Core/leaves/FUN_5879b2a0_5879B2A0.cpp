// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879B2A0 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_5879b2a0_5879B2A0() {
    __asm {
        mov ecx, dword ptr [esp + 0ch]
        mov eax, dword ptr [esp + 8]
        cmp eax, ecx
        ; Exact mapped bytes 74 19: je 0x5879b2c5
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        cmp byte ptr [eax], 2ch
        ; Exact mapped bytes 75 07: jne 0x5879b2bc
        __asm _emit 0x75
        __asm _emit 0x07
        mov byte ptr [eax], 2eh
        mov eax, dword ptr [esp + 8]
        inc eax
        mov dword ptr [esp + 8], eax
        cmp eax, ecx
        ; Exact mapped bytes 75 EB: jne 0x5879b2b0
        __asm _emit 0x75
        __asm _emit 0xeb
        mov ecx, dword ptr [esp + 4]
        mov dword ptr [ecx], eax
        mov eax, ecx
        ret
    }
}
