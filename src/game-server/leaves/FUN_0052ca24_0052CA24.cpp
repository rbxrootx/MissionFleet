// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052CA24 .. +0x200 bytes.
extern "C" __declspec(naked) void FUN_0052ca24_0052CA24() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BD 83 FC FF: call 0x4f4df5
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x83
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 574h
        push 5c8fcch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 12 E7 FC FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xe7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 74 29: je 0x52ca80
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
        ; Exact mapped bytes 74 05: je 0x52ca80
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 9B 01 00 00: jmp 0x52cc1b
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0ffffh
        ; Exact mapped bytes 0F 85 9F 00 00 00: jne 0x52cb2c
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
        ; Exact mapped bytes 75 0F: jne 0x52cab4
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 90h], 0e001h
        ; Exact mapped bytes EB 0D: jmp 0x52cac1
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
        ; Exact mapped bytes E8 FF F0 00 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 90h]
        cmp edx, dword ptr [ecx + 94h]
        ; Exact mapped bytes 74 14: je 0x52cb02
        __asm _emit 0x74
        __asm _emit 0x14
        push 58dh
        push 5c8fcch
        ; Exact mapped bytes E8 03 7F 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52cb02
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x52cada
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
        ; Exact mapped bytes 74 08: je 0x52cb27
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 ED F8 00 00: call 0x53c414
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 BE 00 00 00: jmp 0x52cbea
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0C: je 0x52cb3e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 0ch]
        and eax, 810h
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x52cb50
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 90h], 0
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x52cbdb
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0f000h
        ; Exact mapped bytes 72 5E: jb 0x52cbb7
        __asm _emit 0x72
        __asm _emit 0x5e
        cmp dword ptr [ebp + 8], 0f1f0h
        ; Exact mapped bytes 73 55: jae 0x52cbb7
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
        ; Exact mapped bytes 72 0F: jb 0x52cb9b
        __asm _emit 0x72
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 90h], 0ef1fh
        ; Exact mapped bytes 72 14: jb 0x52cbaf
        __asm _emit 0x72
        __asm _emit 0x14
        push 5a0h
        push 5c8fcch
        ; Exact mapped bytes E8 56 7E 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52cbaf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C8: jne 0x52cb7d
        __asm _emit 0x75
        __asm _emit 0xc8
        ; Exact mapped bytes EB 24: jmp 0x52cbdb
        __asm _emit 0xeb
        __asm _emit 0x24
        cmp dword ptr [ebp + 8], 0ff00h
        ; Exact mapped bytes 72 0F: jb 0x52cbcf
        __asm _emit 0x72
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 90h], 0ef1fh
        ; Exact mapped bytes EB 0C: jmp 0x52cbdb
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
        ; Exact mapped bytes 74 1D: je 0x52cc1b
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 33 04 01 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x52cc1b
        __asm _emit 0x74
        __asm _emit 0x11
        push 0
        push 0
        push 36ah
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 12 F0 00 00: call 0x53bc2d
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xf0
        __asm _emit 0x00
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
