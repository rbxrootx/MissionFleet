// Reconstructed from FUN_1016cb40 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void FUN_1016cd68();

extern "C" __declspec(naked) void FUN_1016cb40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact instruction bytes: jne short L_1016CB69
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact instruction bytes: cmp dword ptr [101c935ch], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact instruction bytes: jle short L_1016CB62
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact instruction bytes: mov eax, dword ptr [101c935ch]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        sub eax, 1
        ; Exact instruction bytes: mov dword ptr [101c935ch], eax
        __asm _emit 0xa3
        __asm _emit 0x5c
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: jmp short L_1016CB69
        __asm _emit 0xeb
        __asm _emit 0x07
L_1016CB62:
        xor eax, eax
        ; Exact instruction bytes: jmp near ptr L_1016CC41
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1016CB69:
        ; Exact instruction bytes: mov ecx, dword ptr [10175110h]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        ; Exact instruction bytes: mov dword ptr [101c9364h], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ebp + 0ch], 1
        ; Exact instruction bytes: jne short L_1016CBE6
        __asm _emit 0x75
        __asm _emit 0x69
        push 0a9h
        push 10176cech
        push 2
        push 80h
        ; Exact instruction bytes: call dword ptr [10175108h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 10h
        ; Exact instruction bytes: mov dword ptr [101c9370h], eax
        __asm _emit 0xa3
        __asm _emit 0x70
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: cmp dword ptr [101c9370h], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact instruction bytes: jne short L_1016CBAC
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact instruction bytes: jmp near ptr L_1016CC41
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1016CBAC:
        ; Exact instruction bytes: mov eax, dword ptr [101c9370h]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: mov dword ptr [eax], 0
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: mov ecx, dword ptr [101c9370h]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: mov dword ptr [101c936ch], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1017f018h
        push 1017f000h
        call FUN_1016cd68
        add esp, 8
        ; Exact instruction bytes: mov edx, dword ptr [101c935ch]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        add edx, 1
        ; Exact instruction bytes: mov dword ptr [101c935ch], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: jmp short L_1016CC3C
        __asm _emit 0xeb
        __asm _emit 0x56
L_1016CBE6:
        cmp dword ptr [ebp + 0ch], 0
        ; Exact instruction bytes: jne short L_1016CC3C
        __asm _emit 0x75
        __asm _emit 0x50
        ; Exact instruction bytes: cmp dword ptr [101c9370h], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact instruction bytes: je short L_1016CC3C
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact instruction bytes: mov eax, dword ptr [101c936ch]
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [ebp - 4], eax
L_1016CBFD:
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 4
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact instruction bytes: cmp edx, dword ptr [101c9370h]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: jb short L_1016CC20
        __asm _emit 0x72
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], 0
        ; Exact instruction bytes: je short L_1016CC1E
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ebp - 4]
        call dword ptr [ecx]
L_1016CC1E:
        ; Exact instruction bytes: jmp short L_1016CBFD
        __asm _emit 0xeb
        __asm _emit 0xdd
L_1016CC20:
        push 2
        ; Exact instruction bytes: mov edx, dword ptr [101c9370h]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact instruction bytes: call dword ptr [1017511ch]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 8
        ; Exact instruction bytes: mov dword ptr [101c9370h], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1016CC3C:
        ; Exact instruction bytes: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1016CC41:
        mov esp, ebp
        pop ebp
        ret 0ch
    }
}
