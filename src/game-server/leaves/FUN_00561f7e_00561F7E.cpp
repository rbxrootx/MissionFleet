// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00561F7E .. +0xBC bytes.
extern "C" __declspec(naked) void FUN_00561f7e_00561F7E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5E 0A FE FF: call 0x5429ee
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x0a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 26: je 0x561fbf
        __asm _emit 0x74
        __asm _emit 0x26
        push -1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        push edx
        ; Exact mapped bytes E8 8B DE F6 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xde
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x561fbf
        __asm _emit 0x75
        __asm _emit 0x14
        push 226h
        push 5ce6c8h
        ; Exact mapped bytes E8 46 2A FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x2a
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x561fbf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CB: jne 0x561f90
        __asm _emit 0x75
        __asm _emit 0xcb
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 74 28: je 0x561ff6
        __asm _emit 0x74
        __asm _emit 0x28
        push 0
        push 18h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 34h]
        push eax
        ; Exact mapped bytes E8 78 DE F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xde
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x561ff6
        __asm _emit 0x75
        __asm _emit 0x14
        push 228h
        push 5ce6c8h
        ; Exact mapped bytes E8 0F 2A FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x561ff6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C9: jne 0x561fc5
        __asm _emit 0x75
        __asm _emit 0xc9
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 74 28: je 0x56202d
        __asm _emit 0x74
        __asm _emit 0x28
        push 1
        push 48h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes E8 41 DE F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xde
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56202d
        __asm _emit 0x75
        __asm _emit 0x14
        push 22ah
        push 5ce6c8h
        ; Exact mapped bytes E8 D8 29 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x29
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56202d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C9: jne 0x561ffc
        __asm _emit 0x75
        __asm _emit 0xc9
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
