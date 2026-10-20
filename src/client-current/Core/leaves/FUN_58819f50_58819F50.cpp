// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58819F50 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_58819f50_58819F50() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be73ch
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 19: je 0x58819f82
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes E8 8B F6 03 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 56 C9 F9 FF: call 0x587b68e0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xc9
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
