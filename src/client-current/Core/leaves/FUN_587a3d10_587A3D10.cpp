// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A3D10 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_587a3d10_587A3D10() {
    __asm {
        mov edx, dword ptr [esp + 4]
        test edx, edx
        ; Exact mapped bytes 74 3F: je 0x587a3d57
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [edx + 13ch]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 4], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 5], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 6], al
        lea eax, [esp + 4]
        push 4
        push eax
        push edx
        mov dword ptr [edx + 2dch], 82h
        mov byte ptr [esp + 13h], cl
        ; Exact mapped bytes E8 6C 2B 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ret
    }
}
