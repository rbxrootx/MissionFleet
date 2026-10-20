// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435360 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_00435360_00435360() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 CF DB FF FF: call 0x432f37
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 10h]
        and dword ptr [esi + 14h], 0
        mov ecx, dword ptr [esp + 0ch]
        mov dword ptr [esi + 10h], eax
        neg eax
        sbb eax, eax
        and dword ptr [esi + 24h], 0
        not eax
        and eax, ecx
        mov dword ptr [esi], 43efc0h
        mov dword ptr [esi + 1ch], eax
        mov eax, dword ptr [esp + 8]
        mov dword ptr [esi + 20h], eax
        mov dword ptr [esi + 18h], ecx
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
