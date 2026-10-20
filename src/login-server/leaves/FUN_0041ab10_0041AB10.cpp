// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041AB10 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_0041ab10_0041AB10() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        push 0ah
        lea ecx, [esi + 18h]
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], edi
        mov dword ptr [esi + 0ch], edi
        mov dword ptr [esi + 10h], edi
        mov dword ptr [esi + 14h], edi
        ; Exact mapped bytes E8 06 27 01 00: call 0x42d239
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esi + 34h], edi
        mov dword ptr [esi + 38h], edi
        mov dword ptr [esi + 3ch], edi
        mov dword ptr [esi + 40h], edi
        mov dword ptr [esi + 44h], edi
        mov dword ptr [esi + 48h], edi
        mov dword ptr [esi + 4ch], edi
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], edi
        mov dword ptr [esi], 43ef78h
        mov eax, esi
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
