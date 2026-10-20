// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004376E7 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_004376e7_004376E7() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 3D A2 FF FF: call 0x43192c
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        mov dword ptr [esi + 3ch], 43f4cch
        pop eax
        xor ecx, ecx
        mov dword ptr [esi + 24h], eax
        mov dword ptr [esi + 28h], eax
        mov dword ptr [esi], 43f460h
        mov dword ptr [esi + 20h], ecx
        mov dword ptr [esi + 34h], 2
        mov dword ptr [esi + 30h], 2710h
        mov dword ptr [esi + 38h], 1f40h
        mov dword ptr [esi + 2ch], ecx
        mov dword ptr [esi + 1ch], ecx
        mov eax, esi
        pop esi
        ret
    }
}
