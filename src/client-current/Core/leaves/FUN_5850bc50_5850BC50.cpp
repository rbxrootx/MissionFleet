// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850BC50 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_5850bc50_5850BC50() {
    __asm {
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 30h], edx
        push 0
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 C4 06 00 00: call 0x5850c330
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 34h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 0E B7 FF FF: call 0x58507390
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
