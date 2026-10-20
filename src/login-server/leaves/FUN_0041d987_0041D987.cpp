// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D987 .. +0xDC bytes.
extern "C" __declspec(naked) void FUN_0041d987_0041D987() {
    __asm {
        push ebp
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        test esi, esi
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x41da32
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1ch]
        ; Exact mapped bytes 8B 3D 78 C4 43 00: mov edi, dword ptr [0x43c478]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push 2
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push eax
        ; Exact mapped bytes E8 2E 19 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        mov ebp, dword ptr [esp + 10h]
        ; Exact mapped bytes 75 32: jne 0x41d9e4
        __asm _emit 0x75
        __asm _emit 0x32
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 08 C5 43 00: call dword ptr [0x43c508]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 17 19 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        push ebp
        ; Exact mapped bytes E8 66 FF FF FF: call 0x41d92e
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 68: je 0x41da36
        __asm _emit 0x74
        __asm _emit 0x68
        cmp esi, ebp
        ; Exact mapped bytes 74 64: je 0x41da36
        __asm _emit 0x74
        __asm _emit 0x64
        mov eax, dword ptr [esi + 1ch]
        push 2
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push eax
        ; Exact mapped bytes E8 F8 18 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 CE: je 0x41d9b2
        __asm _emit 0x74
        __asm _emit 0xce
        mov esi, dword ptr [esi + 1ch]
        push 2
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push eax
        ; Exact mapped bytes E8 E6 18 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, eax
        push ebx
        push -14h
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, 10000h
        ; Exact mapped bytes 74 53: je 0x41da5a
        __asm _emit 0x74
        __asm _emit 0x53
        mov ebx, dword ptr [esp + 1ch]
        test bl, 1
        ; Exact mapped bytes 74 0D: je 0x41da1d
        __asm _emit 0x74
        __asm _emit 0x0d
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 1C C4 43 00: call dword ptr [0x43c41c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x41da2d
        __asm _emit 0x74
        __asm _emit 0x10
        test bl, 2
        ; Exact mapped bytes 74 2D: je 0x41da4f
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, esi
        ; Exact mapped bytes E8 25 09 01 00: call 0x42e34e
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x41da4f
        __asm _emit 0x75
        __asm _emit 0x22
        push ebx
        push esi
        push ebp
        ; Exact mapped bytes EB 21: jmp 0x41da53
        __asm _emit 0xeb
        __asm _emit 0x21
        mov ebp, dword ptr [esp + 10h]
        push dword ptr [ebp + 1ch]
        ; Exact mapped bytes FF 15 20 C4 43 00: call dword ptr [0x43c420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 93 18 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 75 A9: jne 0x41d9f4
        __asm _emit 0x75
        __asm _emit 0xa9
        mov eax, ebp
        ; Exact mapped bytes EB 0E: jmp 0x41da5d
        __asm _emit 0xeb
        __asm _emit 0x0e
        push ebx
        push 0
        push esi
        ; Exact mapped bytes E8 2F FF FF FF: call 0x41d987
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        mov eax, esi
        pop ebx
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
