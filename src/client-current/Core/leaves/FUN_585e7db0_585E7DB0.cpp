// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E7DB0 .. +0x153 bytes.
extern "C" __declspec(naked) void FUN_585e7db0_585E7DB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 1077ah]
        cmp ecx, 7
        ; Exact mapped bytes 74 43: je 0x585e7e0b
        __asm _emit 0x74
        __asm _emit 0x43
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 10dd8h]
        ; Exact mapped bytes E8 01 F1 EF FF: call 0x584e6ee0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf1
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 10dd8h]
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + ecx + 10dd8h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 21abch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 21ac0h], 0
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 1077ah]
        cmp ecx, 7
        ; Exact mapped bytes 74 5B: je 0x585e7e8f
        __asm _emit 0x74
        __asm _emit 0x5b
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 10dd8h]
        ; Exact mapped bytes E8 95 F0 EF FF: call 0x584e6ee0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 10dd8h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [edx + ecx + 10dd8h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10de0h]
        mov dword ptr [ebp - 8], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 04 E1 E9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xe1
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 55: jmp 0x585e7ee4
        __asm _emit 0xeb
        __asm _emit 0x55
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 10dd8h]
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E2 E0 E9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xe0
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 10dd8h]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C3 E0 E9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xe0
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10de0h]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AD E0 E9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xe0
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020600h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 4A 24 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x4a
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
