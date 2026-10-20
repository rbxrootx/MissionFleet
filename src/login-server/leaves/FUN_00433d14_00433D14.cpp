// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433D14 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_00433d14_00433D14() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        ; Exact mapped bytes 8B 3D 78 C0 43 00: mov edi, dword ptr [0x43c078]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x433d2d
        __asm _emit 0x74
        __asm _emit 0x05
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ebx, eax
        mov eax, dword ptr [esi + 4]
        cmp eax, dword ptr [esi + 8]
        ; Exact mapped bytes 74 0A: je 0x433d3f
        __asm _emit 0x74
        __asm _emit 0x0a
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x433d3f
        __asm _emit 0x74
        __asm _emit 0x03
        or ebx, 0ffffffffh
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        ret
    }
}
