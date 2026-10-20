// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00493C8D .. +0x117 bytes.
extern "C" __declspec(naked) void FUN_00493c8d_00493C8D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 1ch]
        and eax, 80h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x493cb2
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        and eax, 3
        cmp eax, 3
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x493d49
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x493cdf
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 2ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 0C: jmp 0x493ceb
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 1ch]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 1E: je 0x493d13
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2ch
        ; Exact mapped bytes E8 3A 21 0A 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x21
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2ch
        ; Exact mapped bytes E8 42 21 0A 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x21
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0C: jmp 0x493d1f
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 1ch]
        and edx, 8
        neg edx
        sbb edx, edx
        inc edx
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 A0 00 00 00: call dword ptr [edx + 0xa0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x493d63
        __asm _emit 0x74
        __asm _emit 0x10
        push 5
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        and al, 3fh
        mov dword ptr [ebp + 1ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        or ecx, 3
        mov dword ptr [ebp + 1ch], ecx
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BC 7D 0A 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x7d
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes FF 15 14 26 5E 00: call dword ptr [0x5e2614]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
