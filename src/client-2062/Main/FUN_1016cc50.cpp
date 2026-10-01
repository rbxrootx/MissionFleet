// Reconstructed from FUN_1016cc50 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void FUN_10033a60();
extern "C" void FUN_1016cb40();

extern "C" __declspec(naked) void FUN_1016cc50() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact instruction bytes: mov dword ptr [ebp - 4], 1
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact instruction bytes: jne short L_1016CC71
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact instruction bytes: cmp dword ptr [101c935ch], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact instruction bytes: jne short L_1016CC71
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact instruction bytes: jmp near ptr L_1016CD3D
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1016CC71:
        cmp dword ptr [ebp + 0ch], 1
        ; Exact instruction bytes: je short L_1016CC7D
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 2
        ; Exact instruction bytes: jne short L_1016CCBF
        __asm _emit 0x75
        __asm _emit 0x42
L_1016CC7D:
        ; Exact instruction bytes: cmp dword ptr [101c9368h], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x68
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact instruction bytes: je short L_1016CC9B
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact instruction bytes: call dword ptr [101c9368h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [ebp - 4], eax
L_1016CC9B:
        cmp dword ptr [ebp - 4], 0
        ; Exact instruction bytes: je short L_1016CCB5
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        call FUN_1016cb40
        mov dword ptr [ebp - 4], eax
L_1016CCB5:
        cmp dword ptr [ebp - 4], 0
        ; Exact instruction bytes: jne short L_1016CCBF
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact instruction bytes: jmp short L_1016CD3D
        __asm _emit 0xeb
        __asm _emit 0x7e
L_1016CCBF:
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        call FUN_10033a60
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 0ch], 1
        ; Exact instruction bytes: jne short L_1016CCEE
        __asm _emit 0x75
        __asm _emit 0x15
        cmp dword ptr [ebp - 4], 0
        ; Exact instruction bytes: jne short L_1016CCEE
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        call FUN_1016cb40
L_1016CCEE:
        cmp dword ptr [ebp + 0ch], 0
        ; Exact instruction bytes: je short L_1016CCFA
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 3
        ; Exact instruction bytes: jne short L_1016CD3A
        __asm _emit 0x75
        __asm _emit 0x40
L_1016CCFA:
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        call FUN_1016cb40
        test eax, eax
        ; Exact instruction bytes: jne short L_1016CD16
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact instruction bytes: mov dword ptr [ebp - 4], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1016CD16:
        cmp dword ptr [ebp - 4], 0
        ; Exact instruction bytes: je short L_1016CD3A
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact instruction bytes: cmp dword ptr [101c9368h], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x68
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact instruction bytes: je short L_1016CD3A
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact instruction bytes: call dword ptr [101c9368h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [ebp - 4], eax
L_1016CD3A:
        mov eax, dword ptr [ebp - 4]
L_1016CD3D:
        mov esp, ebp
        pop ebp
        ret 0ch
    }
}
