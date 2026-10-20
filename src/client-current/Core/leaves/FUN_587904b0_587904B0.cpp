// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587904B0 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_587904b0_587904B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        xor eax, eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        push 4
        lea ecx, [ebp + 8]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 B6 C3 0B 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xc3
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        push 4
        lea eax, [ebp + 0ch]
        push eax
        mov ecx, 1
        shl ecx, 2
        lea edx, [ebp + ecx - 0ch]
        push edx
        ; Exact mapped bytes E8 9B C3 0B 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xc3
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5E 02 00 00: call 0x58790760
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 8
        lea eax, [ebp - 0ch]
        push eax
        push 0
        push 0
        push 80015106h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 C4 09 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc4
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 27 0B 0A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x0b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
