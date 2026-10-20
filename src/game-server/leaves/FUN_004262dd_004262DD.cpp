// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004262DD .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_004262dd_004262DD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FD 40 FE FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 04: jne 0x4262fc
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 19: jmp 0x426315
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BC 35 06 00: call 0x4898c4
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x35
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x426313
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x426315
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 C1 24 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
