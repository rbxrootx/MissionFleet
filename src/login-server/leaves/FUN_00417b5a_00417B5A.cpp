// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417B5A .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_00417b5a_00417B5A() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, ecx
        push esi
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A5 FE FF FF: call 0x417a1d
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        neg eax
        sbb eax, eax
        inc eax
        mov dword ptr [esi + 8], eax
        pop esi
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
