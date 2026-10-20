// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005666CF .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_005666cf_005666CF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 110h
        push 5d0c78h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 74 4A F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x4a
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 13: je 0x566705
        __asm _emit 0x74
        __asm _emit 0x13
        push 112h
        push 5d0c78h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 5B 4A F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x4a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 74 3F: je 0x566750
        __asm _emit 0x74
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 75 14: jne 0x56672e
        __asm _emit 0x75
        __asm _emit 0x14
        push 117h
        push 5d0c78h
        ; Exact mapped bytes E8 D7 E2 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xe2
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56672e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x566711
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 88h]
        ; Exact mapped bytes E8 0D 5E FE FF: call 0x54c54f
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        push ecx
        ; Exact mapped bytes FF 15 54 2A 5E 00: call dword ptr [0x5e2a54]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 39 B9 FE FF: call 0x552095
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xb9
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
