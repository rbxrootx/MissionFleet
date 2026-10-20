// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051518B .. +0x13B bytes.
extern "C" __declspec(naked) void FUN_0051518b_0051518B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 8c5h
        push 5c84b0h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 B6 5F FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x5f
        __asm _emit 0xfe
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
        ; Exact mapped bytes 75 17: jne 0x5151db
        __asm _emit 0x75
        __asm _emit 0x17
        push 5c89cch
        push 5c8a0ch
        ; Exact mapped bytes E8 42 AA FB FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xaa
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 E2 00 00 00: jmp 0x5152bd
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7C 0B: jl 0x5151ec
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes 7C 14: jl 0x515200
        __asm _emit 0x7c
        __asm _emit 0x14
        push 8ceh
        push 5c84b0h
        ; Exact mapped bytes E8 05 F8 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x515200
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5151db
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7C 0B: jl 0x515217
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes 7C 14: jl 0x51522b
        __asm _emit 0x7c
        __asm _emit 0x14
        push 8cfh
        push 5c84b0h
        ; Exact mapped bytes E8 DA F7 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51522b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x515206
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 38: je 0x51526f
        __asm _emit 0x74
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 27: jge 0x51526d
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
        ; Exact mapped bytes 7D 0C: jge 0x51526d
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 68h]
        sub edx, 1
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 36: jmp 0x5152a5
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 7C 22: jl 0x5152a5
        __asm _emit 0x7c
        __asm _emit 0x22
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 68h]
        ; Exact mapped bytes 7C 07: jl 0x5152a5
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
