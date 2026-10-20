// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00514143 .. +0x200 bytes.
extern "C" __declspec(naked) void FUN_00514143_00514143() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CE EB FB FF: call 0x4d2d25
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xeb
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 578h
        push 673dc0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 F3 60 FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x60
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 74 29: je 0x51419f
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 68h]
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 68h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 84 00 00 00: call dword ptr [eax + 0x84]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x51419f
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 9B 01 00 00: jmp 0x51433a
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0ffffh
        ; Exact mapped bytes 0F 85 9F 00 00 00: jne 0x51424b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 24h]
        and edx, 0ffffffbfh
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 24h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 75 0F: jne 0x5141d3
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 90h], 0e001h
        ; Exact mapped bytes EB 0D: jmp 0x5141e0
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 90h], 0e002h
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 90h]
        push edx
        push 362h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 40 74 01 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 90h]
        cmp edx, dword ptr [ecx + 94h]
        ; Exact mapped bytes 74 14: je 0x514221
        __asm _emit 0x74
        __asm _emit 0x14
        push 591h
        push 673dc0h
        ; Exact mapped bytes E8 24 4B 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x514221
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x5141f9
        __asm _emit 0x75
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 DC 00 00 00: call dword ptr [edx + 0xdc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 08: je 0x514246
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2E 7C 01 00: call 0x52be74
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 BE 00 00 00: jmp 0x514309
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0C: je 0x51425d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 0ch]
        and eax, 810h
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x51426f
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 90h], 0
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x5142fa
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0f000h
        ; Exact mapped bytes 72 5E: jb 0x5142d6
        __asm _emit 0x72
        __asm _emit 0x5e
        cmp dword ptr [ebp + 8], 0f1f0h
        ; Exact mapped bytes 73 55: jae 0x5142d6
        __asm _emit 0x73
        __asm _emit 0x55
        mov edx, dword ptr [ebp + 8]
        sub edx, 0f000h
        shr edx, 4
        add edx, 0ef00h
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 90h], edx
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 90h], 0ef00h
        ; Exact mapped bytes 72 0F: jb 0x5142ba
        __asm _emit 0x72
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 90h], 0ef1fh
        ; Exact mapped bytes 72 14: jb 0x5142ce
        __asm _emit 0x72
        __asm _emit 0x14
        push 5a4h
        push 673dc0h
        ; Exact mapped bytes E8 77 4A 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5142ce
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C8: jne 0x51429c
        __asm _emit 0x75
        __asm _emit 0xc8
        ; Exact mapped bytes EB 24: jmp 0x5142fa
        __asm _emit 0xeb
        __asm _emit 0x24
        cmp dword ptr [ebp + 8], 0ff00h
        ; Exact mapped bytes 72 0F: jb 0x5142ee
        __asm _emit 0x72
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 90h], 0ef1fh
        ; Exact mapped bytes EB 0C: jmp 0x5142fa
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 90h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24h]
        or edx, 40h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 24h], edx
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + 90h]
        cmp eax, dword ptr [edx + 94h]
        ; Exact mapped bytes 74 1D: je 0x51433a
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 74 87 01 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x51433a
        __asm _emit 0x74
        __asm _emit 0x11
        push 0
        push 0
        push 36ah
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 53 73 01 00: call 0x52b68d
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
