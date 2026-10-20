// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433E34 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_00433e34_00433E34() {
    __asm {
        push esi
        mov esi, ecx
        or eax, 0ffffffffh
        push edi
        mov ecx, dword ptr [esi + 4]
        ; Exact mapped bytes 8B 3D 54 C0 43 00: mov edi, dword ptr [0x43c054]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        cmp ecx, dword ptr [esi + 8]
        ; Exact mapped bytes 74 07: je 0x433e50
        __asm _emit 0x74
        __asm _emit 0x07
        push dword ptr [esp + 0ch]
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov esi, dword ptr [esi + 8]
        test esi, esi
        ; Exact mapped bytes 74 07: je 0x433e5e
        __asm _emit 0x74
        __asm _emit 0x07
        push dword ptr [esp + 0ch]
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
