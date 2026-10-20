// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004123B7 .. +0x1C2 bytes.
extern "C" __declspec(naked) void FUN_004123b7_004123B7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        lea eax, [ebp - 2]
        push esi
        push eax
        lea eax, [ebp - 0ch]
        push 4
        mov esi, ecx
        push eax
        push 4fh
        push dword ptr [esi + 4]
        and dword ptr [esi + 4ch], 0
        ; Exact mapped bytes E8 B6 A1 01 00: call 0x42c58e
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x4123fa
        __asm _emit 0x74
        __asm _emit 0x16
        test byte ptr [ebp - 0ch], 4
        ; Exact mapped bytes 74 10: je 0x4123fa
        __asm _emit 0x74
        __asm _emit 0x10
        test byte ptr [ebp - 0ch], 8
        ; Exact mapped bytes 74 0A: je 0x4123fa
        __asm _emit 0x74
        __asm _emit 0x0a
        test byte ptr [ebp - 0ch], 10h
        ; Exact mapped bytes 74 04: je 0x4123fa
        __asm _emit 0x74
        __asm _emit 0x04
        or dword ptr [esi + 4ch], 1
        lea eax, [ebp - 2]
        push ebx
        push eax
        lea eax, [ebp - 10h]
        push 4
        push eax
        push 50h
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 7F A1 01 00: call 0x42c58e
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        push 2
        test eax, eax
        pop ebx
        ; Exact mapped bytes 74 0E: je 0x41242c
        __asm _emit 0x74
        __asm _emit 0x0e
        test byte ptr [ebp - 10h], 1
        ; Exact mapped bytes 74 08: je 0x41242c
        __asm _emit 0x74
        __asm _emit 0x08
        test byte ptr [ebp - 10h], bl
        ; Exact mapped bytes 74 03: je 0x41242c
        __asm _emit 0x74
        __asm _emit 0x03
        or dword ptr [esi + 4ch], ebx
        lea eax, [ebp - 2]
        push eax
        lea eax, [ebp - 4]
        push ebx
        push eax
        push 2eh
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 4F A1 01 00: call 0x42c58e
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x412459
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 7D FC 00: cmp word ptr [ebp - 4], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xfc
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x412459
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [esi + 40h], 1
        lea eax, [ebp - 2]
        push edi
        lea edi, [esi + 46h]
        push eax
        push ebx
        push edi
        push 17h
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 21 A1 01 00: call 0x42c58e
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x41247d
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 0F FF: or word ptr [edi], 0xffff
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x0f
        __asm _emit 0xff
        lea eax, [ebp - 2]
        lea edi, [esi + 48h]
        push eax
        push ebx
        push edi
        push 18h
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 FE A0 01 00: call 0x42c58e
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4124a0
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 0F FF: or word ptr [edi], 0xffff
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x0f
        __asm _emit 0xff
        lea eax, [ebp - 2]
        push eax
        lea eax, [esi + 50h]
        push 4
        push eax
        push 52h
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 DA A0 01 00: call 0x42c58e
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        lea eax, [ebp - 2]
        push eax
        lea eax, [ebp - 14h]
        push 4
        push eax
        push 51h
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 BE A0 01 00: call 0x42c58e
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        test eax, eax
        pop edi
        ; Exact mapped bytes 75 03: jne 0x4124e0
        __asm _emit 0x75
        __asm _emit 0x03
        and dword ptr [ebp - 14h], eax
        test byte ptr [ebp - 14h], 8
        ; Exact mapped bytes 74 04: je 0x4124ea
        __asm _emit 0x74
        __asm _emit 0x04
        or dword ptr [esi + 4ch], 4
        cmp dword ptr [esi + 3ch], 0
        ; Exact mapped bytes 74 47: je 0x412537
        __asm _emit 0x74
        __asm _emit 0x47
        lea eax, [ebp - 2]
        push eax
        lea eax, [ebp - 20h]
        push 0ah
        push eax
        push 19h
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 8A A0 01 00: call 0x42c58e
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x412531
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 66 83 7D FE 01: cmp word ptr [ebp - 2], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0x01
        ; Exact mapped bytes 75 1A: jne 0x412531
        __asm _emit 0x75
        __asm _emit 0x1a
        lea eax, [ebp - 20h]
        push 43d5f4h
        push eax
        ; Exact mapped bytes FF 15 68 C2 43 00: call dword ptr [0x43c268]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        neg eax
        mov dword ptr [esi + 3ch], eax
        ; Exact mapped bytes EB 12: jmp 0x412543
        __asm _emit 0xeb
        __asm _emit 0x12
        and dword ptr [esi + 3ch], 0
        ; Exact mapped bytes EB 0C: jmp 0x412543
        __asm _emit 0xeb
        __asm _emit 0x0c
        push 1
        push 65h
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 51 A0 01 00: call 0x42c594
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 2]
        push eax
        lea eax, [ebp - 6]
        push ebx
        push eax
        push 1dh
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 38 A0 01 00: call 0x42c58e
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        test eax, eax
        pop ebx
        ; Exact mapped bytes 74 0F: je 0x412572
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 66 83 7D FE 01: cmp word ptr [ebp - 2], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0x01
        ; Exact mapped bytes 75 08: jne 0x412572
        __asm _emit 0x75
        __asm _emit 0x08
        mov al, byte ptr [ebp - 6]
        mov byte ptr [esi + 14h], al
        ; Exact mapped bytes EB 04: jmp 0x412576
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [esi + 14h], 20h
        pop esi
        leave
        ret
    }
}
