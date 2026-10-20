// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00554A06 .. +0xB4 bytes.
extern "C" __declspec(naked) void FUN_00554a06_00554A06() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 564h
        push 67c1e0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 3D 58 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x554a40
        __asm _emit 0x75
        __asm _emit 0x14
        push 565h
        push 67c1e0h
        ; Exact mapped bytes E8 05 43 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x43
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554a40
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x554a23
        __asm _emit 0x75
        __asm _emit 0xdd
        push 1
        push 10h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 13 EA F4 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xea
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x554a6b
        __asm _emit 0x75
        __asm _emit 0x14
        push 566h
        push 67c1e0h
        ; Exact mapped bytes E8 DA 42 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x42
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554a6b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x554a46
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 3C: call dword ptr [edx + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x3c
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x554ab1
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 0D 20 0D 64 00: mov ecx, dword ptr [0x640d20]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        mov dword ptr [eax], ecx
        ; Exact mapped bytes 8B 15 24 0D 64 00: mov edx, dword ptr [0x640d24]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        mov dword ptr [eax + 4], edx
        ; Exact mapped bytes 8B 0D 28 0D 64 00: mov ecx, dword ptr [0x640d28]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        mov dword ptr [eax + 8], ecx
        ; Exact mapped bytes 8B 15 2C 0D 64 00: mov edx, dword ptr [0x640d2c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        mov dword ptr [eax + 0ch], edx
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
