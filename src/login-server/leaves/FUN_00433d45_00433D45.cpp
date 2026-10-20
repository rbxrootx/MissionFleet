// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433D45 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_00433d45_00433D45() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        ; Exact mapped bytes 8B 3D 74 C0 43 00: mov edi, dword ptr [0x43c074]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        push 1
        cmp ecx, dword ptr [esi + 8]
        pop eax
        ; Exact mapped bytes 74 07: je 0x433d61
        __asm _emit 0x74
        __asm _emit 0x07
        push dword ptr [esp + 0ch]
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov esi, dword ptr [esi + 8]
        test esi, esi
        ; Exact mapped bytes 74 16: je 0x433d7e
        __asm _emit 0x74
        __asm _emit 0x16
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x433d7c
        __asm _emit 0x74
        __asm _emit 0x10
        push dword ptr [esp + 0ch]
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x433d7c
        __asm _emit 0x74
        __asm _emit 0x05
        push 1
        pop eax
        ; Exact mapped bytes EB 02: jmp 0x433d7e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
