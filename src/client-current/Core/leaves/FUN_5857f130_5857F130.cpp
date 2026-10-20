// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857F130 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_5857f130_5857F130() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 7C 75 94 58: mov ecx, dword ptr [0x5894757c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 12 FD FF: call 0x58550440
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x5857f152
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 20: jmp 0x5857f172
        __asm _emit 0xeb
        __asm _emit 0x20
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        push 0
        push 8001aa01h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 23 D8 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xd8
        __asm _emit 0x2a
        __asm _emit 0x00
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
