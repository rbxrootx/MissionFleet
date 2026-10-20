// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C5D90 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_100c5d90_100C5D90() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        test eax, eax
        mov esi, ecx
        ; Exact mapped bytes 74 3D: je 0x100c5dd8
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [esi + 10ch]
        mov ecx, dword ptr [edx + 54h]
        test ecx, ecx
        ; Exact mapped bytes 74 1C: je 0x100c5dc4
        __asm _emit 0x74
        __asm _emit 0x1c
        xor eax, eax
        ; Exact mapped bytes 66 8B 41 0C: mov ax, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x0c
        imul eax, dword ptr [ecx + 8]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 10ch]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 10ch]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10ch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [esi + 10ch]
        pop esi
        mov dword ptr [eax + 50h], 0
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
