// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005430CF .. +0x10A bytes.
extern "C" __declspec(naked) void FUN_005430cf_005430CF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 5c5dcch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 64 24 5E 00: call dword ptr [0x5e2464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x5430f8
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10h], 3
        ; Exact mapped bytes E9 DB 00 00 00: jmp 0x5431d3
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c5dd0h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 64 24 5E 00: call dword ptr [0x5e2464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x54311a
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10h], 2
        ; Exact mapped bytes E9 B9 00 00 00: jmp 0x5431d3
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c5dd4h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x543140
        __asm _emit 0x74
        __asm _emit 0x13
        push 5c5de0h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x54314f
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10h], 5
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x5431d3
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c5dech
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 64 24 5E 00: call dword ptr [0x5e2464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x543175
        __asm _emit 0x75
        __asm _emit 0x13
        push 0
        ; Exact mapped bytes E8 66 B1 FE FF: call 0x52e2cf
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10h], 4
        ; Exact mapped bytes EB 5E: jmp 0x5431d3
        __asm _emit 0xeb
        __asm _emit 0x5e
        push 5c5df0h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1D: jne 0x5431a5
        __asm _emit 0x75
        __asm _emit 0x1d
        push 0
        ; Exact mapped bytes E8 40 B1 FE FF: call 0x52e2cf
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], 0
        ; Exact mapped bytes EB 2E: jmp 0x5431d3
        __asm _emit 0xeb
        __asm _emit 0x2e
        push 5c5dfch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x5431d3
        __asm _emit 0x75
        __asm _emit 0x1b
        push 0
        ; Exact mapped bytes E8 10 B1 FE FF: call 0x52e2cf
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
