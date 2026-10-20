// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850B298 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_5850b298_5850B298() {
    __asm {
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 07: jmp 0x5850b2a8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 28h], edx
        push 0
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 6C 10 00 00: call 0x5850c330
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 BC C0 FF FF: call 0x58507390
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 14h]
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
    }
}
