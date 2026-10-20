// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585075CA .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_585075ca_585075CA() {
    __asm {
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 0A: jmp 0x585075dd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ebx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 20h]
        add eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 44h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 37 4D 00 00: call 0x5850c330
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 48h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 81 FD FF FF: call 0x58507390
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 48h]
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
