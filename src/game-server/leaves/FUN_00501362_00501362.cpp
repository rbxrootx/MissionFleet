// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00501362 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_00501362_00501362() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x50138b
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f7h
        push 5c6db0h
        ; Exact mapped bytes E8 7A 36 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50138b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x50136e
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 74 19: je 0x5013bf
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7C 53 03 00: call 0x53672a
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x53
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 D4 1E 5E 00: call dword ptr [0x5e1ed4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 19: je 0x5013e1
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5A 53 03 00: call 0x53672a
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x53
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 D4 1E 5E 00: call dword ptr [0x5e1ed4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 A7 28 00 00: call 0x503c91
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
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
