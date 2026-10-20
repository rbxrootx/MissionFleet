// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B2BE0 .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_587b2be0_587B2BE0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5889201dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 8
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
        mov eax, dword ptr [ebp + 14h]
        push eax
        movzx ecx, byte ptr [ebp - 0dh]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 57 64 CF FF: call 0x584a9070
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x64
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C4 CD D1 FF: call 0x584cf9f0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xcd
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D4 5E D5 FF: call 0x58508b10
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x5e
        __asm _emit 0xd5
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BB FE D4 FF: call 0x58502b00
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xfe
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [eax + edx*2]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BC E6 D4 FF: call 0x58501310
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe6
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
