// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050D6A3 .. +0x1CA bytes.
extern "C" __declspec(naked) void FUN_0050d6a3_0050D6A3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 128h
        mov dword ptr [ebp - 124h], ecx
        push 0
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 61 FF FF FF: call 0x50d620
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 110h]
        push eax
        push 0
        ; Exact mapped bytes E8 B7 02 00 00: call 0x50d984
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10ch], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 31: je 0x50d711
        __asm _emit 0x74
        __asm _emit 0x31
        push 0
        push 0
        push 376h
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 120h], eax
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 0C: je 0x50d711
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 120h]
        mov dword ptr [ebp - 10ch], edx
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 75 1A: jne 0x50d734
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 74 11: je 0x50d734
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 124h]
        add eax, 0a0h
        mov dword ptr [ebp - 10ch], eax
        mov dword ptr [ebp - 114h], 0
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 74 24: je 0x50d76b
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 114h], edx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 10: je 0x50d76b
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 10h]
        add eax, 30000h
        mov ecx, dword ptr [ebp - 10ch]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0f0h
        test edx, edx
        ; Exact mapped bytes 75 35: jne 0x50d7ad
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0fh
        mov dword ptr [ebp - 128h], eax
        cmp dword ptr [ebp - 128h], 4
        ; Exact mapped bytes 77 20: ja 0x50d7ad
        __asm _emit 0x77
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes FF 24 8D 6D D8 50 00: jmp dword ptr [ecx*4 + 0x50d86d]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x6d
        __asm _emit 0xd8
        __asm _emit 0x50
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        or edx, 30h
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes EB 08: jmp 0x50d7ad
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        or al, 30h
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0f0h
        test ecx, ecx
        ; Exact mapped bytes 75 12: jne 0x50d7cc
        __asm _emit 0x75
        __asm _emit 0x12
        push 5c4e68h
        push 5c4e98h
        ; Exact mapped bytes E8 4C 24 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 74 11: je 0x50d7e6
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes EB 20: jmp 0x50d806
        __asm _emit 0xeb
        __asm _emit 0x20
        lea ecx, [ebp - 108h]
        mov dword ptr [ebp - 118h], ecx
        push 104h
        lea edx, [ebp - 108h]
        push edx
        push 0
        ; Exact mapped bytes FF 15 50 24 5E 00: call dword ptr [0x5e2450]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 58 26 5E 00: call dword ptr [0x5e2658]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 11ch], eax
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 74 0E: je 0x50d83c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [ecx], edx
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 74 0F: je 0x50d854
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov eax, dword ptr [ebp - 110h]
        push eax
        ; Exact mapped bytes FF 15 84 26 5E 00: call dword ptr [0x5e2684]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 BF FD FF FF: call 0x50d620
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 11ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
