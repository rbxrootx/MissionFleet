// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052BB69 .. +0x177 bytes.
extern "C" __declspec(naked) void FUN_0052bb69_0052BB69() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 72 1B 01 00: call 0x53d6fb
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6D 32 FC FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x32
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x52bba2
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 0B: jmp 0x52bbad
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4B 92 FC FF: call 0x4f4df5
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x92
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x52bbcd
        __asm _emit 0x75
        __asm _emit 0x14
        push 3c6h
        push 5c8fcch
        ; Exact mapped bytes E8 38 8E 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52bbcd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x52bbb3
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 08: jne 0x52bbe1
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 06: jmp 0x52bbe7
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 74 33: je 0x52bc28
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F8 91 FC FF: call 0x4f4df5
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x91
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 75 1D: jne 0x52bc1f
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 1E: je 0x52bc28
        __asm _emit 0x74
        __asm _emit 0x1e
        push 0
        push 40h
        push 36dh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BE FF 00 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x52bc28
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 07: jmp 0x52bc2f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 1
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        and ecx, 0ffffffdfh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 24h], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0F: je 0x52bc59
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        or ecx, 20h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 24h], ecx
        mov eax, dword ptr [ebp - 8]
        neg eax
        sbb eax, eax
        and al, 0fch
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A0 F0 FF FF: call 0x52ad0e
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1D 07 00 00: call 0x52c393
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 18: jne 0x52bc97
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 FF 06 00 00: call 0x52c393
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 3A: je 0x52bcd7
        __asm _emit 0x74
        __asm _emit 0x3a
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1E: je 0x52bcc1
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 18: jne 0x52bcc1
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        push 1
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 90 EC 00 00 00: call dword ptr [eax + 0xec]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 F0 00 00 00: call dword ptr [edx + 0xf0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xf0
        __asm _emit 0x00
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
