// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F69E0 .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_004f69e0_004F69E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 6C: je 0x4f6a6c
        __asm _emit 0x74
        __asm _emit 0x6c
        ; Exact mapped bytes E8 3D EB 03 00: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 0f0h
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 B8 23 5E 00: call dword ptr [0x5e23b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 48: je 0x4f6a6c
        __asm _emit 0x74
        __asm _emit 0x48
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 BC 23 5E 00: call dword ptr [0x5e23bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 04: jne 0x4f6a3f
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5E: jmp 0x4f6a9d
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 B4 23 5E 00: call dword ptr [0x5e23b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4f6a66
        __asm _emit 0x75
        __asm _emit 0x14
        push 0cbah
        push 5c5574h
        ; Exact mapped bytes E8 9F DF 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xdf
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f6a66
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4f6a4c
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 2E 00 00 00: call 0x4f6aa6
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x4f6a9a
        __asm _emit 0x74
        __asm _emit 0x19
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 13: je 0x4f6a9a
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 90 67 F9 FF: call 0x48d220
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x67
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 C0 23 5E 00: call dword ptr [0x5e23c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
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
