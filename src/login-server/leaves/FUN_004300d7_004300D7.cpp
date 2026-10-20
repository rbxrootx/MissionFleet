// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004300D7 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_004300d7_004300D7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov esi, ecx
        lea ecx, [ebp - 4]
        and dword ptr [ebp - 4], 0
        mov eax, dword ptr [esi]
        push ecx
        push dword ptr [ebp + 10h]
        mov ecx, esi
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 90 9C 00 00 00: call dword ptr [eax + 0x9c]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x430113
        __asm _emit 0x75
        __asm _emit 0x16
        push dword ptr [ebp + 10h]
        mov eax, dword ptr [esi]
        mov ecx, esi
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 90 A0 00 00 00: call dword ptr [eax + 0xa0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        pop esi
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
