// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040C664 .. +0x12C bytes.
extern "C" __declspec(naked) void FUN_0040c664_0040C664() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439f01h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 18h
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax], 43cf1ch
        mov dword ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 0cc4h], 0
        ; Exact mapped bytes 74 25: je 0x40c6c3
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 0cc4h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 62 12 02 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 0cc4h], 0
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 0cc8h], 0
        ; Exact mapped bytes 74 25: je 0x40c6f4
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 0cc8h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 31 12 02 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 0cc8h], 0
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 40d00h], 0
        ; Exact mapped bytes 74 3D: je 0x40c73d
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 40d00h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 11: je 0x40c729
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x40c730
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 40d00h], 0
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 0cfch
        ; Exact mapped bytes E8 11 E6 FF FF: call 0x40ad60
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 0cf4h
        ; Exact mapped bytes E8 93 21 00 00: call 0x40e8f4
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 0ccch
        ; Exact mapped bytes E8 9D 0C 00 00: call 0x40d410
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 EE 4E 00 00: call 0x411670
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
