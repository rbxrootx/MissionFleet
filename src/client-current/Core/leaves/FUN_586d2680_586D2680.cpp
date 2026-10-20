// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586D2680 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_586d2680_586D2680() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        push 588b21f0h
        push 588b21f4h
        lea eax, [ebp - 8]
        push eax
        ; Exact mapped bytes E8 79 EC 17 00: call 0x58851315
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xec
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 44: jne 0x586d26ec
        __asm _emit 0x75
        __asm _emit 0x44
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586d26ba
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 5
        ; Exact mapped bytes 7D 20: jge 0x586d26e0
        __asm _emit 0x7d
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 8]
        push edx
        push 1
        push 3ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 8ch]
        push edx
        ; Exact mapped bytes E8 51 83 18 00: call 0x5885aa2c
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x83
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes EB D1: jmp 0x586d26b1
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 98 ED 17 00: call 0x58851481
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xed
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
