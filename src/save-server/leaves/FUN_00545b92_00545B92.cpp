// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00545B92 .. +0x158 bytes.
extern "C" __declspec(naked) void FUN_00545b92_00545B92() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ec31h
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
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 C0 A5 FF FF: call 0x540175
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 114h], 0
        ; Exact mapped bytes 74 11: je 0x545bd5
        __asm _emit 0x74
        __asm _emit 0x11
        push 36h
        push 678fc8h
        ; Exact mapped bytes E8 70 31 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x545bd5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x545bb8
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E8 83 AA FF FF: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        mov dl, byte ptr [eax + 14h]
        test edx, edx
        ; Exact mapped bytes 74 17: je 0x545c00
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 114h], 0ffffffffh
        mov eax, 1
        ; Exact mapped bytes E9 D9 00 00 00: jmp 0x545cd9
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes FF 15 10 C3 68 00: call dword ptr [0x68c310]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7D 1C: jge 0x545c2d
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 48 62 00 00: call 0x54be62
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 679094h
        ; Exact mapped bytes E8 F0 A9 F5 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xa9
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x545cd0
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 114h], 1
        ; Exact mapped bytes E8 1A 2C F9 FF: call 0x4d8859
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x2c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 58h], 545d7eh
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 5ch], 0
        ; Exact mapped bytes 75 74: jne 0x545cc9
        __asm _emit 0x75
        __asm _emit 0x74
        push 56h
        push 678fc8h
        push 40h
        ; Exact mapped bytes E8 9C 64 F8 FF: call 0x4cc0ff
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x64
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 0D: je 0x545c80
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 55 0A 00 00: call 0x5466d0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x545c87
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 5ch], ecx
        ; Exact mapped bytes E8 AF BE FE FF: call 0x531b51
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xbe
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x545cb7
        __asm _emit 0x75
        __asm _emit 0x11
        push 57h
        push 678fc8h
        ; Exact mapped bytes E8 8E 30 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x545cb7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x545c9d
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes E8 8F BE FE FF: call 0x531b51
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xbe
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BE 0A 00 00: call 0x546787
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 09: jmp 0x545cd9
        __asm _emit 0xeb
        __asm _emit 0x09
        push 0
        ; Exact mapped bytes E8 13 00 00 00: call 0x545cea
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
