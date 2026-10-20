// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041AE10 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_0041ae10_0041AE10() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 74 25: je 0x41ae3d
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes E8 22 00 00 00: call 0x41ae3f
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x41ae2c
        __asm _emit 0x74
        __asm _emit 0x09
        and dword ptr [esi], 0
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [esi + 4]
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x41ae3d
        __asm _emit 0x74
        __asm _emit 0x0a
        and dword ptr [esi + 4], 0
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        pop esi
        ret
    }
}
