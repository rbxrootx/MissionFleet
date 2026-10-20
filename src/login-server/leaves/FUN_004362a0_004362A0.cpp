// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004362A0 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_004362a0_004362A0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ach]
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x4362b3
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [eax + 10h], 5
        ; Exact mapped bytes 74 12: je 0x4362c5
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes E8 FB F9 FF FF: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp byte ptr [eax + 14h], 0
        ; Exact mapped bytes 75 07: jne 0x4362c5
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 AB FF FF FF: call 0x436270
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0bch]
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x4362d1
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esi + 38h]
        pop esi
        ret
    }
}
