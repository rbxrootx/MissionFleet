// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED5F0 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_004ed5f0_004ED5F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B7 38 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 3B 05 C0 4B 5C 00: cmp eax, dword ptr [0x5c4bc0]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x4b
        __asm _emit 0x5c
        __asm _emit 0x00
        ; Exact mapped bytes 74 51: je 0x4ed65b
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A7 38 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 14: jne 0x4ed62b
        __asm _emit 0x75
        __asm _emit 0x14
        push 9ah
        push 5c4bd4h
        ; Exact mapped bytes E8 DA 73 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ed62b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4ed60a
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 80 38 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E4 23 5E 00: call dword ptr [0x5e23e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7F 0F: jg 0x4ed653
        __asm _emit 0x7f
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6D 38 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 7E FF FF FF: call 0x4ed5d1
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 96 38 04 00: call 0x530ef1
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
