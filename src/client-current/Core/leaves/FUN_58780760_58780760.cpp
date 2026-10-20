// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58780760 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_58780760_58780760() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887d6a0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        add eax, 8
        push eax
        ; Exact mapped bytes E8 22 6B D0 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x6b
        __asm _emit 0xd0
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 75 67 D0 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x67
        __asm _emit 0xd0
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 75 FF FF FF: call 0x58780720
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
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
        mov esp, ebp
        pop ebp
        ret
    }
}
