// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885C1F0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_5885c1f0() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        movzx ecx, word ptr [edi]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 20h]
        push ecx
        push 0
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        movzx ecx, word ptr [edi + 2]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 20h]
        push ecx
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
