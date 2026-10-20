// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433D83 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_00433d83_00433D83() {
    __asm {
        push ebx
        push esi
        push edi
        mov esi, ecx
        push dword ptr [esp + 10h]
        ; Exact mapped bytes FF 15 6C C0 43 00: call dword ptr [0x43c06c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        ; Exact mapped bytes 8B 3D 70 C0 43 00: mov edi, dword ptr [0x43c070]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        mov ebx, eax
        xor eax, eax
        cmp ecx, dword ptr [esi + 8]
        ; Exact mapped bytes 74 04: je 0x433da8
        __asm _emit 0x74
        __asm _emit 0x04
        push ebx
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov esi, dword ptr [esi + 8]
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x433db3
        __asm _emit 0x74
        __asm _emit 0x04
        push ebx
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push eax
        ; Exact mapped bytes E8 2D 06 00 00: call 0x4343e6
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
