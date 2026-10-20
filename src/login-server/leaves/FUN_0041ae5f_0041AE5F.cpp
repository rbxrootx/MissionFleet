// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041AE5F .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_0041ae5f_0041AE5F() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        ; Exact mapped bytes 8B 3D 10 C6 43 00: mov edi, dword ptr [0x43c610]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0xc6
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x41ae77
        __asm _emit 0x74
        __asm _emit 0x07
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        and dword ptr [esi + 10h], 0
        mov eax, dword ptr [esi + 14h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x41ae85
        __asm _emit 0x74
        __asm _emit 0x07
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        and dword ptr [esi + 14h], 0
        push dword ptr [esi + 8]
        ; Exact mapped bytes E8 88 2A 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        and dword ptr [esi + 8], 0
        and dword ptr [esi + 0ch], 0
        pop ecx
        pop edi
        pop esi
        ret
    }
}
