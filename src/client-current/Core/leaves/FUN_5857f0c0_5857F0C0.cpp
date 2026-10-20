// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857F0C0 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_5857f0c0_5857F0C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 18h]
        sub eax, 30h
        push eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 30h
        push ecx
        ; Exact mapped bytes 8B 0D 7C 75 94 58: mov ecx, dword ptr [0x5894757c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E 13 FD FF: call 0x58550440
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x5857f0ea
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 32: jmp 0x5857f11c
        __asm _emit 0xeb
        __asm _emit 0x32
        movzx edx, word ptr [ebp + 8]
        shl edx, 10h
        movzx eax, word ptr [ebp + 0ch]
        or edx, eax
        mov dword ptr [ebp - 4], edx
        push 0
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        push 80020a00h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 79 D8 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xd8
        __asm _emit 0x2a
        __asm _emit 0x00
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
