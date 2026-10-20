// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58755CC0 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_58755cc0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 8]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esi], 5898d6a0h
        mov dword ptr [esi + 28h], 0
        ; Exact mapped bytes E8 8F F3 FF FF: call 0x58755070
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
