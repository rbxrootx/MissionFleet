// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED47A .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_004ed47a_004ED47A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2D 3A 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x3a
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 11: jne 0x4ed4a2
        __asm _emit 0x75
        __asm _emit 0x11
        push 35h
        push 5c4bd4h
        ; Exact mapped bytes E8 63 75 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ed4a2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DC: jne 0x4ed484
        __asm _emit 0x75
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 09 3A 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x3a
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 7C 42: jl 0x4ed4f7
        __asm _emit 0x7c
        __asm _emit 0x42
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FC 39 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x39
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 3B 05 C0 4B 5C 00: cmp eax, dword ptr [0x5c4bc0]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x4b
        __asm _emit 0x5c
        __asm _emit 0x00
        ; Exact mapped bytes 75 11: jne 0x4ed4d6
        __asm _emit 0x75
        __asm _emit 0x11
        push 38h
        push 5c4bd4h
        ; Exact mapped bytes E8 2F 75 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ed4d6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D9: jne 0x4ed4b5
        __asm _emit 0x75
        __asm _emit 0xd9
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CB 39 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x39
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 23 5E 00: call dword ptr [0x5e23e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 16: jmp 0x4ed50d
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F2 39 04 00: call 0x530ef1
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x39
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F0 05 00 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
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
