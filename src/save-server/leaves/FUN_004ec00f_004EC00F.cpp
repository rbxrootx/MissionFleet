// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EC00F .. +0xF8 bytes.
extern "C" __declspec(naked) void FUN_004ec00f_004EC00F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push 675a8ch
        push 675abch
        ; Exact mapped bytes E8 F1 45 FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x45
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E8 49 41 05 00: call 0x540175
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 B1 00 00 00: je 0x4ec0ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x4ec0ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes E8 6E B7 F7 FF: call 0x4677c0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xb7
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 77 2D: ja 0x4ec090
        __asm _emit 0x77
        __asm _emit 0x2d
        push 675ac0h
        push 675af4h
        ; Exact mapped bytes E8 A3 45 FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x45
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes E8 9F B2 F7 FF: call 0x467320
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xb2
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], 0
        ; Exact mapped bytes EB 53: jmp 0x4ec0e3
        __asm _emit 0xeb
        __asm _emit 0x53
        push 0
        ; Exact mapped bytes E8 A8 01 FE FF: call 0x4cc23f
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4
        mov edx, dword ptr [ebp - 8]
        sub edx, ecx
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        ; Exact mapped bytes E8 AE B1 F7 FF: call 0x467260
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xb1
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 81 01 FE FF: call 0x4cc23f
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes E8 F2 B6 F7 FF: call 0x4677c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xb6
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        push eax
        mov eax, dword ptr [ebp - 8]
        push eax
        push 675af8h
        ; Exact mapped bytes E8 35 45 FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x45
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 10h
        mov eax, 1
        ; Exact mapped bytes EB 19: jmp 0x4ec103
        __asm _emit 0xeb
        __asm _emit 0x19
        push 675b48h
        push 675b84h
        ; Exact mapped bytes E8 1C 45 FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x45
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E8 DB 6D FB FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x6d
        __asm _emit 0xfb
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
