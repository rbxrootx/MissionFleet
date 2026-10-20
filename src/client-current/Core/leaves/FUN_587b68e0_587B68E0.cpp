// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B68E0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_587b68e0_587B68E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588bdc6ch
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 0F: je 0x587b6908
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes E8 FB 2C 0A 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x2c
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
