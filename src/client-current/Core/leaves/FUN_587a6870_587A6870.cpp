// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A6870 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_587a6870_587A6870() {
    __asm {
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 74 43: je 0x587a68bf
        __asm _emit 0x74
        __asm _emit 0x43
        mov eax, dword ptr [esp + 8]
        test edx, edx
        mov dword ptr [ecx + 60h], eax
        mov eax, 587a6810h
        cmove edx, eax
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [ecx + 58h], edx
        test eax, eax
        mov edx, 587a67f0h
        cmove eax, edx
        mov dword ptr [ecx + 17ch], eax
        cmp dword ptr [ecx + 5ch], 0
        ; Exact mapped bytes 74 15: je 0x587a68bf
        __asm _emit 0x74
        __asm _emit 0x15
        push 588b93c8h
        push ecx
        mov dword ptr [ecx + 5ch], 0
        ; Exact mapped bytes E8 74 8B FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ret
    }
}
