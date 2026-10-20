// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58546120 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_58546120_58546120() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        imul esi, dword ptr [ecx + 78h], 3e8h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 13 B3 FF FF: call 0x58541450
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        sub esi, eax
        mov eax, esi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
