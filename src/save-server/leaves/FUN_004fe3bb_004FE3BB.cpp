// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FE3BB .. +0x13B bytes.
extern "C" __declspec(naked) void FUN_004fe3bb_004FE3BB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 8c5h
        push 674fe8h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 86 BE FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        lea ecx, [ebp - 4]
        push ecx
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 E8 00 00 00: call dword ptr [edx + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x4fe40b
        __asm _emit 0x75
        __asm _emit 0x17
        push 675504h
        push 675544h
        ; Exact mapped bytes E8 12 22 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x22
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 E2 00 00 00: jmp 0x4fe4ed
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7C 0B: jl 0x4fe41c
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes 7C 14: jl 0x4fe430
        __asm _emit 0x7c
        __asm _emit 0x14
        push 8ceh
        push 674fe8h
        ; Exact mapped bytes E8 15 A9 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fe430
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4fe40b
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7C 0B: jl 0x4fe447
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes 7C 14: jl 0x4fe45b
        __asm _emit 0x7c
        __asm _emit 0x14
        push 8cfh
        push 674fe8h
        ; Exact mapped bytes E8 EA A8 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fe45b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4fe436
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 38: je 0x4fe49f
        __asm _emit 0x74
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 27: jge 0x4fe49d
        __asm _emit 0x7d
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 6ch]
        sub edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 8]
        sub eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 0C: jge 0x4fe49d
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 68h]
        sub edx, 1
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 36: jmp 0x4fe4d5
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 7C 22: jl 0x4fe4d5
        __asm _emit 0x7c
        __asm _emit 0x22
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 68h]
        ; Exact mapped bytes 7C 07: jl 0x4fe4d5
        __asm _emit 0x7c
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 90 EC 00 00 00: call dword ptr [eax + 0xec]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
