// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056C5CF .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_0056c5cf_0056C5CF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 110h
        push 67d450h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 74 DC F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xdc
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 13: je 0x56c605
        __asm _emit 0x74
        __asm _emit 0x13
        push 112h
        push 67d450h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 5B DC F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xdc
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 74 3F: je 0x56c650
        __asm _emit 0x74
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 75 14: jne 0x56c62e
        __asm _emit 0x75
        __asm _emit 0x14
        push 117h
        push 67d450h
        ; Exact mapped bytes E8 17 C7 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xc7
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56c62e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x56c611
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 88h]
        ; Exact mapped bytes E8 7D E9 FD FF: call 0x54afbf
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        push ecx
        ; Exact mapped bytes FF 15 E8 C2 68 00: call dword ptr [0x68c2e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A9 44 FE FF: call 0x550b05
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
