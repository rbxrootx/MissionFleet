// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CEB12 .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_004ceb12_004CEB12() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 14: je 0x4ceb38
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4ch]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A3 5E 00 00: call 0x4d49d6
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 12: jmp 0x4ceb4a
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 40h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C9 5D 00 00: call 0x4d4910
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 20: jne 0x4ceb70
        __asm _emit 0x75
        __asm _emit 0x20
        push 6717bch
        push 6717f0h
        ; Exact mapped bytes E8 B6 1A FD FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x1a
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        push -1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9B FD FF FF: call 0x4ce907
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 5E: jmp 0x4cebce
        __asm _emit 0xeb
        __asm _emit 0x5e
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A1 58 00 00: call 0x4d441b
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x4ceb9e
        __asm _emit 0x75
        __asm _emit 0x20
        push 6717f4h
        push 671824h
        ; Exact mapped bytes E8 88 1A FD FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x1a
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        push -1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6D FD FF FF: call 0x4ce907
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 30: jmp 0x4cebce
        __asm _emit 0xeb
        __asm _emit 0x30
        push 0e146h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C6 71 00 00: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 15: je 0x4cebc9
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes E8 E4 FE FF FF: call 0x4cea9d
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        neg eax
        sbb eax, eax
        and eax, 5
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F6 7B 00 00: call 0x4d67bf
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
