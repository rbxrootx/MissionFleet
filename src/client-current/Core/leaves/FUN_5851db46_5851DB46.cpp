// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851DB46 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_5851db46_5851DB46() {
    __asm {
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 0A: jmp 0x5851db59
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ebx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 20h]
        add eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 4ch], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 BB E7 FE FF: call 0x5850c330
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 50h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 05 98 FE FF: call 0x58507390
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 50h]
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
    }
}
