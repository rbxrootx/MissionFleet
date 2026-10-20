// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58907760 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_58907760() {
    __asm {
        push ecx
        cmp dword ptr [ecx + 18h], 0
        ; Exact mapped bytes 74 2D: je 0x58907794
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 83 3D 34 85 A2 58 00: cmp dword ptr [0x58a28534], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x58907779
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 83 3D 38 85 A2 58 00: cmp dword ptr [0x58a28538], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 1B: je 0x58907794
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ecx + 18h]
        mov ecx, dword ptr [eax]
        lea edx, [esp]
        push edx
        push eax
        mov eax, dword ptr [ecx + 24h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 7C 08: jl 0x58907794
        __asm _emit 0x7c
        __asm _emit 0x08
        mov eax, dword ptr [esp]
        and eax, 1
        pop ecx
        ret
        xor eax, eax
        pop ecx
        ret
    }
}
