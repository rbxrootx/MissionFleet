// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x101040C0 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_101040c0_101040C0() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x101040de
        __asm _emit 0x74
        __asm _emit 0x14
        mov al, byte ptr [ecx + 24h]
        shr al, 5
        test al, 1
        ; Exact mapped bytes 74 0A: je 0x101040de
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ecx]
        push 0
        push 2
        push esi
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov eax, dword ptr [esi + 34h]
        pop esi
        ret
    }
}
