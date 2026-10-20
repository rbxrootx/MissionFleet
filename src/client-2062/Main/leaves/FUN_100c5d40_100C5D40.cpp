// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C5D40 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_100c5d40_100C5D40() {
    __asm {
        mov eax, dword ptr [ecx + 190h]
        mov dword ptr [eax + 68h], 0
        mov ecx, dword ptr [ecx + 190h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 0fh
        ; Exact mapped bytes 7E 15: jle 0x100c5d7b
        __asm _emit 0x7e
        __asm _emit 0x15
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x100c5d7b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 3ch]
        push 0
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ret
        xor ecx, ecx
        push ecx
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ret
    }
}
