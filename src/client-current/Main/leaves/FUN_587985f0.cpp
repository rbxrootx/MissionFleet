// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587985F0 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_587985f0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 2f8h]
        mov edx, dword ptr [esi + 2e0h]
        mov dword ptr [esi + 2c8h], 0
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [esi + 2dch]
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        push eax
        ; Exact mapped bytes E8 70 18 02 00: call 0x587b9e90
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        pop esi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
