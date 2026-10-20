// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AB3F0 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_587ab3f0() {
    __asm {
        push ecx
        push esi
        push 0ch
        mov esi, ecx
        ; Exact mapped bytes E8 53 18 1D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x18
        __asm _emit 0x1d
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov dword ptr [esp + 8], eax
        mov dword ptr [eax + 8], 0
        add esp, 4
        lea eax, [esp + 4]
        push eax
        lea ecx, [esi + 4]
        ; Exact mapped bytes E8 AD A0 FF FF: call 0x587a54d0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop esi
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
