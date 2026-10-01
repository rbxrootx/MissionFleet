// Reconstructed from FUN_10167bf0 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void AllocateObjectThunk();
extern "C" void FUN_10105c00();
extern "C" void FUN_1016cd6e();
extern "C" void FUN_1016cd74();

extern "C" __declspec(naked) void FUN_10167bf0() {
    __asm {
        ; Exact immediate encoding: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        push 10174babh
        push eax
        ; Exact immediate encoding: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [esp + 14h]
        push edi
        xor edi, edi
        cmp esi, edi
        ; Exact immediate encoding: je near ptr L_10167D02
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: cmp dword ptr [101c9348h], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact immediate encoding: jne near ptr L_10167CAD
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 20h], 1
        ; Exact immediate encoding: jne short L_10167C6D
        __asm _emit 0x75
        __asm _emit 0x45
        push edi
        push 101c9348h
        push edi
        call FUN_1016cd74
        test eax, eax
        ; Exact immediate encoding: jge short L_10167C40
        __asm _emit 0x7d
        __asm _emit 0x08
        ; Exact immediate encoding: mov dword ptr [101c9348h], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact immediate encoding: jmp short L_10167C6D
        __asm _emit 0xeb
        __asm _emit 0x2d
L_10167C40:
        ; Exact immediate encoding: mov eax, dword ptr [101c9348h]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, edi
        ; Exact immediate encoding: je short L_10167C6D
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [eax]
        push 1
        push esi
        push eax
        call dword ptr [ecx + 18h]
        test eax, eax
        ; Exact immediate encoding: mov eax, dword ptr [101c9348h]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact immediate encoding: jge short L_10167C69
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov edx, dword ptr [eax]
        push eax
        call dword ptr [edx + 8]
        ; Exact immediate encoding: mov dword ptr [101c9348h], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact immediate encoding: jmp short L_10167C6D
        __asm _emit 0xeb
        __asm _emit 0x04
L_10167C69:
        cmp eax, edi
        ; Exact immediate encoding: jne short L_10167CAD
        __asm _emit 0x75
        __asm _emit 0x40
L_10167C6D:
        mov eax, dword ptr [esp + 1ch]
        push edi
        push 101c934ch
        push eax
        call FUN_1016cd6e
        test eax, eax
        ; Exact immediate encoding: jge short L_10167C8A
        __asm _emit 0x7d
        __asm _emit 0x09
        xor eax, eax
        ; Exact immediate encoding: mov dword ptr [101c934ch], eax
        __asm _emit 0xa3
        __asm _emit 0x4c
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact immediate encoding: jmp short L_10167C8F
        __asm _emit 0xeb
        __asm _emit 0x05
L_10167C8A:
        ; Exact immediate encoding: mov eax, dword ptr [101c934ch]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
L_10167C8F:
        mov ecx, dword ptr [eax]
        push 1
        push esi
        push eax
        call dword ptr [ecx + 18h]
        test eax, eax
        ; Exact immediate encoding: jge short L_10167CAD
        __asm _emit 0x7d
        __asm _emit 0x11
        ; Exact immediate encoding: mov eax, dword ptr [101c934ch]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        mov edx, dword ptr [eax]
        call dword ptr [edx + 8]
        ; Exact immediate encoding: mov dword ptr [101c934ch], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
L_10167CAD:
        push 14h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 18h], eax
        cmp eax, edi
        mov dword ptr [esp + 10h], edi
        ; Exact immediate encoding: je short L_10167CE5
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, eax
        call FUN_10105c00
        ; Exact immediate encoding: mov dword ptr [101c9350h], eax
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact immediate encoding: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 8]
        ; Exact immediate encoding: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 0ch
        ret
L_10167CE5:
        xor eax, eax
        ; Exact immediate encoding: mov dword ptr [101c9350h], eax
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact immediate encoding: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 8]
        ; Exact immediate encoding: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 0ch
        ret
L_10167D02:
        mov ecx, dword ptr [esp + 8]
        pop edi
        xor eax, eax
        ; Exact immediate encoding: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 0ch
        ret
    }
}
