// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042CCB5 .. +0x29 bytes.
extern "C" __declspec(naked) void _InitString_CSimpleException__QAEXXZ_0042CCB5() {
    __asm {
        push esi
        mov esi, ecx
        push 80h
        lea eax, [esi + 14h]
        mov dword ptr [esi + 0ch], 1
        push eax
        push dword ptr [esi + 94h]
        ; Exact mapped bytes E8 2E 59 00 00: call 0x432601
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        neg eax
        mov dword ptr [esi + 10h], eax
        pop esi
        ret
    }
}
