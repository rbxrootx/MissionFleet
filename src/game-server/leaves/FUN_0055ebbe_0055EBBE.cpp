// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055EBBE .. +0x151 bytes.
extern "C" __declspec(naked) void FUN_0055ebbe_0055EBBE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 18h], ecx
        push 1ebh
        push 5cff18h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 86 C5 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc5
        __asm _emit 0xf9
        __asm _emit 0xff
        push 1ech
        push 5cff18h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 73 C5 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xc5
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x55ec82
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 6ch
        ; Exact mapped bytes E8 85 40 FD FF: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 6B: je 0x55ec7d
        __asm _emit 0x74
        __asm _emit 0x6b
        lea edx, [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp + 8]
        add ecx, 6ch
        ; Exact mapped bytes E8 8F 40 FD FF: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x40
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0ch], eax
        push 1f7h
        push 5cff18h
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 27 C5 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xc5
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 86 57 FD FF: call 0x5343c7
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x57
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 8
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x55ec7b
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 60h]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x55ec7b
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 60h]
        and edx, 0fffffffbh
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 60h], edx
        push 1
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D7 D8 FC FF: call 0x52c54b
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xd8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 8F: jmp 0x55ec0c
        __asm _emit 0xeb
        __asm _emit 0x8f
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x55ed06
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 6ch
        ; Exact mapped bytes E8 01 40 FD FF: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x40
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 70: je 0x55ed06
        __asm _emit 0x74
        __asm _emit 0x70
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        add ecx, 6ch
        ; Exact mapped bytes E8 0B 40 FD FF: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x40
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 14h], eax
        push 208h
        push 5cff18h
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 A3 C4 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xc4
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 90 D0 00 00 00: call dword ptr [eax + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x55ed04
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F0 56 FD FF: call 0x5343c7
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 8
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x55ed04
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 60h]
        or edx, 4
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 60h], edx
        push 1
        push 0
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4E D8 FC FF: call 0x52c54b
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xd8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 8A: jmp 0x55ec90
        __asm _emit 0xeb
        __asm _emit 0x8a
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
