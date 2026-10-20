// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878D170 .. +0xDB bytes.
extern "C" __declspec(naked) void FUN_5878d170_5878D170() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 11: je 0x5878d196
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 74 46: je 0x5878d1d1
        __asm _emit 0x74
        __asm _emit 0x46
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 74 7B: je 0x5878d20c
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x5878d245
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 60h]
        mov dword ptr [ebp - 0ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2E 8D CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x8d
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 60h]
        mov dword ptr [ebp - 10h], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 12 8D CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x8d
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 74: jmp 0x5878d245
        __asm _emit 0xeb
        __asm _emit 0x74
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 60h]
        mov dword ptr [ebp - 14h], edx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F3 8C CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x8c
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 60h]
        mov dword ptr [ebp - 18h], edx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D7 8C CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x8c
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 39: jmp 0x5878d245
        __asm _emit 0xeb
        __asm _emit 0x39
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 60h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B8 8C CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 60h]
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 9C 8C CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x8c
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
