// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58979250 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_58979250() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov eax, dword ptr [esi + 20h]
        push eax
        mov edi, dword ptr [eax + 18h]
        ; Exact mapped bytes FF 57 0C: call dword ptr [edi + 0xc]
        __asm _emit 0xff
        __asm _emit 0x57
        __asm _emit 0x0c
        add esp, 4
        test al, al
        ; Exact mapped bytes 75 17: jne 0x5897927e
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [esi + 20h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ecx + 14h], 18h
        mov eax, dword ptr [esi + 20h]
        push eax
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        add esp, 4
        mov eax, dword ptr [edi]
        mov dword ptr [esi + 10h], eax
        mov ecx, dword ptr [edi + 4]
        mov dword ptr [esi + 14h], ecx
        pop edi
        pop esi
        ret
    }
}
