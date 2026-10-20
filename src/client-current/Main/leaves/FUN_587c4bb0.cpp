// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4BB0 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_587c4bb0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push esi
        mov esi, dword ptr [esp + 0ch]
        cmp esi, ebx
        ; Exact mapped bytes 74 19: je 0x587c4bd7
        __asm _emit 0x74
        __asm _emit 0x19
        push edi
        lea edi, [ecx + 8]
        movzx eax, byte ptr [esi]
        push edi
        push eax
        ; Exact mapped bytes E8 86 CF 1A 00: call 0x58971b52
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xcf
        __asm _emit 0x1a
        __asm _emit 0x00
        mov byte ptr [esi], al
        inc esi
        add esp, 8
        cmp esi, ebx
        ; Exact mapped bytes 75 EC: jne 0x587c4bc2
        __asm _emit 0x75
        __asm _emit 0xec
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
