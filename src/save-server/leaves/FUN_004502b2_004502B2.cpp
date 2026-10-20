// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004502B2 .. +0x117 bytes.
extern "C" __declspec(naked) void FUN_004502b2_004502B2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 1ch]
        and eax, 80h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x4502d7
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
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x45036e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x450304
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 2ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 0C: jmp 0x450310
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 1ch]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 1E: je 0x450338
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2ch
        ; Exact mapped bytes E8 8B 1F 0E 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x1f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2ch
        ; Exact mapped bytes E8 93 1F 0E 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x1f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0C: jmp 0x450344
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
        ; Exact mapped bytes 74 10: je 0x450388
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
        ; Exact mapped bytes E8 F7 B1 0D 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xb1
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes FF 15 54 BF 68 00: call dword ptr [0x68bf54]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
