// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58861294 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58861294_58861294() {
    __asm {
        mov eax, dword ptr [ecx + 20h]
        cmp eax, 2
        ; Exact mapped bytes 75 05: jne 0x588612a1
        __asm _emit 0x75
        __asm _emit 0x05
        mov byte ptr [ecx + 24h], 0
        ret
        cmp eax, 3
        ; Exact mapped bytes 74 0A: je 0x588612b0
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp eax, 4
        ; Exact mapped bytes 74 05: je 0x588612b0
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 8
        ; Exact mapped bytes 75 04: jne 0x588612b4
        __asm _emit 0x75
        __asm _emit 0x04
        mov byte ptr [ecx + 24h], 1
        ret
    }
}
