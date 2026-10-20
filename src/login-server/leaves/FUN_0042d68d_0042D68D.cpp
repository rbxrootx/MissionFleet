// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D68D .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_0042d68d_0042D68D() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x42d6a2
        __asm _emit 0x74
        __asm _emit 0x0b
        push eax
        ; Exact mapped bytes E8 78 02 00 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [esi + 4], 0
        pop ecx
        mov ecx, dword ptr [esi + 14h]
        and dword ptr [esi + 0ch], 0
        and dword ptr [esi + 10h], 0
        ; Exact mapped bytes E8 3D FF FF FF: call 0x42d5ef
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [esi + 14h], 0
        pop esi
        ret
    }
}
