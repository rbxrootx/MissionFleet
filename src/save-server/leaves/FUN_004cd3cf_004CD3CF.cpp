// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD3CF .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_004cd3cf_004CD3CF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D8 78 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [eax], -1
        ; Exact mapped bytes 74 14: je 0x4cd3fa
        __asm _emit 0x74
        __asm _emit 0x14
        push 226h
        push 6714ach
        ; Exact mapped bytes E8 4B B9 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xb9
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cd3fa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4cd3d9
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 78 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 3B 05 98 14 67 00: cmp eax, dword ptr [0x671498]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x14
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x4cd41e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A1 78 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [eax], 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
