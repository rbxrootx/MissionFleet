// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CF538 .. +0x74 bytes.
extern "C" __declspec(naked) void __AfxHandleSetCursor__YGHPAVCWnd__II_Z_004CF538() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 0ch], -2
        ; Exact mapped bytes 75 62: jne 0x4cf5a4
        __asm _emit 0x75
        __asm _emit 0x62
        cmp dword ptr [ebp + 10h], 201h
        ; Exact mapped bytes 74 12: je 0x4cf55d
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp + 10h], 207h
        ; Exact mapped bytes 74 09: je 0x4cf55d
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp + 10h], 204h
        ; Exact mapped bytes 75 47: jne 0x4cf5a4
        __asm _emit 0x75
        __asm _emit 0x47
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D9 35 00 00: call 0x4d2b3e
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0B: je 0x4cf579
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 80 D4 05 00: call 0x52c9f6
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xd4
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 25: je 0x4cf5a4
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes E8 5D D9 05 00: call 0x52cee1
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 74 1B: je 0x4cf5a4
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A0 72 00 00: call 0x4d6831
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x4cf5a4
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FB D8 05 00: call 0x52ce98
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4cf5a6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
