// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00506570 .. +0x163 bytes.
extern "C" __declspec(naked) void FUN_00506570_00506570() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        push 0
        push 0fh
        push 0fh
        push 0
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 15 88 BE 68 00: call dword ptr [0x68be88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x5065b7
        __asm _emit 0x74
        __asm _emit 0x25
        push 0fh
        push 0fh
        push 0
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 24 BD 68 00: call dword ptr [0x68bd24]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x5065ab
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 21 01 00 00: jmp 0x5066cc
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 15 8C BE 68 00: call dword ptr [0x68be8c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB C5: jmp 0x50657c
        __asm _emit 0xeb
        __asm _emit 0xc5
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 68h]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ecx + 68h]
        mov dword ptr [edx + 70h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 68h]
        mov eax, dword ptr [edx + 64h]
        and eax, 0f000h
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 78h], eax
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 78h], 0
        ; Exact mapped bytes 75 14: jne 0x5065f7
        __asm _emit 0x75
        __asm _emit 0x14
        push 1a3h
        push 677edch
        ; Exact mapped bytes E8 4E 27 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5065f7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x5065da
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 0ch
        ; Exact mapped bytes E8 9B BE 02 00: call 0x5324a3
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 20h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 1ch], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 7ch], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 80h], 0
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 74 14: je 0x50665d
        __asm _emit 0x74
        __asm _emit 0x14
        push 1abh
        push 677edch
        ; Exact mapped bytes E8 E8 26 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50665d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x50663d
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes E8 3C 5F 02 00: call 0x52c5a4
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7E 5C 02 00: call 0x52c2f1
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x506691
        __asm _emit 0x74
        __asm _emit 0x1a
        push 403h
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0D 5C 02 00: call 0x52c293
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 84h], eax
        ; Exact mapped bytes EB 15: jmp 0x5066a6
        __asm _emit 0xeb
        __asm _emit 0x15
        push 3
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F6 5B 02 00: call 0x52c293
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 84h], eax
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 84h], 0
        ; Exact mapped bytes 75 14: jne 0x5066c6
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b1h
        push 677edch
        ; Exact mapped bytes E8 7F 26 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5066c6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x5066a6
        __asm _emit 0x75
        __asm _emit 0xda
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
