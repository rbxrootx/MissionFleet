// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F1A6A .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_004f1a6a_004F1A6A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 14: je 0x4f1a93
        __asm _emit 0x74
        __asm _emit 0x14
        push 137h
        push 5c5574h
        ; Exact mapped bytes E8 72 2F 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x2f
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f1a93
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4f1a76
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 62 FF FF FF: call 0x4f1a04
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4f1aba
        __asm _emit 0x74
        __asm _emit 0x14
        push 138h
        push 5c5574h
        ; Exact mapped bytes E8 4B 2F 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x2f
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f1aba
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4f1a99
        __asm _emit 0x75
        __asm _emit 0xd9
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x4f1aca
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 54: jmp 0x4f1b1e
        __asm _emit 0xeb
        __asm _emit 0x54
        push 1
        ; Exact mapped bytes E8 DE FD FF FF: call 0x4f18af
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4f1aee
        __asm _emit 0x75
        __asm _emit 0x14
        push 13fh
        push 5c5574h
        ; Exact mapped bytes E8 17 2F 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x2f
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f1aee
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4f1ad4
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 1ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3D B7 00 00: call 0x4fd24a
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4F DC FF FF: call 0x4ef768
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
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
