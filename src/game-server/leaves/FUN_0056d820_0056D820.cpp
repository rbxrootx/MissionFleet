// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056D820 .. +0xE1 bytes.
extern "C" __declspec(naked) void FUN_0056d820_0056D820() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        sub eax, 0d8h
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 0C: je 0x56d843
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 74 25: je 0x56d874
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ach]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ach], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C9: jne 0x56d843
        __asm _emit 0x75
        __asm _emit 0xc9
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ach], edx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0d0h], 0
        ; Exact mapped bytes 74 0E: je 0x56d8a0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0d0h]
        ; Exact mapped bytes E8 99 7A F3 FF: call 0x4a5339
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x7a
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 53: je 0x56d8f9
        __asm _emit 0x74
        __asm _emit 0x53
        lea edx, [ebp - 8]
        push edx
        push 58eca8h
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 7C 3B: jl 0x56d8f9
        __asm _emit 0x7c
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0d0h], 0
        ; Exact mapped bytes 74 14: je 0x56d8de
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0d0h]
        ; Exact mapped bytes E8 8D 7A F3 FF: call 0x4a5369
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x7a
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 1B: jmp 0x56d8f9
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 08 01 00 00: call dword ptr [edx + 0x108]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0d0h], eax
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
