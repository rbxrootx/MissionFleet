// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005015A0 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_005015a0_005015A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x5015c7
        __asm _emit 0x75
        __asm _emit 0x14
        push 127h
        push 5c6db0h
        ; Exact mapped bytes E8 3E 34 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5015c7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5015aa
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 51 51 03 00: call 0x53672a
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x51
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 6C 20 5E 00: call dword ptr [0x5e206c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 A4 26 00 00: call 0x503c91
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
