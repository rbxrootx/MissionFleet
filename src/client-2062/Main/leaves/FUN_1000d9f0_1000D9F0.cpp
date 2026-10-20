// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000D9F0 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_1000d9f0_1000D9F0() {
    __asm {
        xor eax, eax
        mov edx, 40000000h
        mov byte ptr [ecx + 68h], al
        mov dword ptr [ecx + 0c4h], eax
        mov eax, dword ptr [esp + 4]
        push esi
        mov dword ptr [ecx + 0b8h], edx
        mov esi, dword ptr [eax]
        mov dword ptr [ecx + 6ch], esi
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ecx + 70h], eax
        mov dword ptr [ecx + 0bch], edx
        ; Exact mapped bytes E8 CF 04 00 00: call 0x1000def0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
