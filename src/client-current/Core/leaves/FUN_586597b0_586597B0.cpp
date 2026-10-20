// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586597B0 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_586597b0_586597B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        push 0ch
        push 0
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 40 36 1F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x36
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8], 0ch
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 110h]
        sub edx, 1
        imul eax, edx, 0ch
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 0f0h], 1
        ; Exact mapped bytes 75 09: jne 0x58659801
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 07: jmp 0x58659808
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 1
        lea edx, [ebp - 10h]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 52 F2 FF: call 0x5857ea40
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x52
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 2E 78 1D 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x78
        __asm _emit 0x1d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
