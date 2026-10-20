// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F1220 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_585f1220_585F1220() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 27: jne 0x585f1257
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 1
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3020h], -1
        ; Exact mapped bytes 74 11: je 0x585f1257
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3014h]
        push ecx
        ; Exact mapped bytes FF 15 50 41 89 58: call dword ptr [0x58894150]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
