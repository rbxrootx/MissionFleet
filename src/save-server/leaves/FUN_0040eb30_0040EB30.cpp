// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040EB30 .. +0x185 bytes.
extern "C" __declspec(naked) void FUN_0040eb30_0040EB30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        lea edi, [ebp - 44h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov esi, esp
        push 633868h
        ; Exact mapped bytes FF 15 18 B8 68 00: call dword ptr [0x68b818]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 94 62 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x62
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x40eb6c
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 38 01 00 00: jmp 0x40eca4
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 633858h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 14 B8 68 00: call dword ptr [0x68b814]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6C 62 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x62
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes A3 A4 4C 68 00: mov dword ptr [0x684ca4], eax
        __asm _emit 0xa3
        __asm _emit 0xa4
        __asm _emit 0x4c
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A4 4C 68 00 00: cmp dword ptr [0x684ca4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0x4c
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x40eb99
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 0B 01 00 00: jmp 0x40eca4
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 633848h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 14 B8 68 00: call dword ptr [0x68b814]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3F 62 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x62
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes A3 A8 4C 68 00: mov dword ptr [0x684ca8], eax
        __asm _emit 0xa3
        __asm _emit 0xa8
        __asm _emit 0x4c
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A8 4C 68 00 00: cmp dword ptr [0x684ca8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x4c
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x40ebc6
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 DE 00 00 00: jmp 0x40eca4
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 63383ch
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 14 B8 68 00: call dword ptr [0x68b814]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 12 62 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x62
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes A3 AC 4C 68 00: mov dword ptr [0x684cac], eax
        __asm _emit 0xa3
        __asm _emit 0xac
        __asm _emit 0x4c
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D AC 4C 68 00 00: cmp dword ptr [0x684cac], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xac
        __asm _emit 0x4c
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x40ebf3
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 B1 00 00 00: jmp 0x40eca4
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 633820h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 14 B8 68 00: call dword ptr [0x68b814]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E5 61 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x61
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes A3 B0 4C 68 00: mov dword ptr [0x684cb0], eax
        __asm _emit 0xa3
        __asm _emit 0xb0
        __asm _emit 0x4c
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B0 4C 68 00 00: cmp dword ptr [0x684cb0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x4c
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x40ec20
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x40eca4
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 63380ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 14 B8 68 00: call dword ptr [0x68b814]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B8 61 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x61
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes A3 B4 4C 68 00: mov dword ptr [0x684cb4], eax
        __asm _emit 0xa3
        __asm _emit 0xb4
        __asm _emit 0x4c
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B4 4C 68 00 00: cmp dword ptr [0x684cb4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0x4c
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x40ec4a
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5A: jmp 0x40eca4
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov esi, esp
        push 6337f4h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 14 B8 68 00: call dword ptr [0x68b814]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8E 61 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x61
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes A3 B8 4C 68 00: mov dword ptr [0x684cb8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0x4c
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B8 4C 68 00 00: cmp dword ptr [0x684cb8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x4c
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x40ec74
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 30: jmp 0x40eca4
        __asm _emit 0xeb
        __asm _emit 0x30
        mov esi, esp
        push 1
        push 0
        mov edi, esp
        ; Exact mapped bytes FF 15 F0 B7 68 00: call dword ptr [0x68b7f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp edi, esp
        ; Exact mapped bytes E8 67 61 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x61
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 A4 4C 68 00: call dword ptr [0x684ca4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x4c
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 59 61 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x61
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x40ec9f
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x40eca4
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 3F 61 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x61
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
