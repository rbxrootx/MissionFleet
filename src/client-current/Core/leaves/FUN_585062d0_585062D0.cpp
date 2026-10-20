// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585062D0 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_585062d0_585062D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887ddd0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0ch
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
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        movzx edx, byte ptr [ebp - 0dh]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 61 2D FA FF: call 0x584a9070
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x2d
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 58 1D FC FF: call 0x584c8070
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1d
        __asm _emit 0xfc
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
