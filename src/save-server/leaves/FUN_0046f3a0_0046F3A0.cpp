// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046F3A0 .. +0x107 bytes.
extern "C" __declspec(naked) void FUN_0046f3a0_0046F3A0() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D F0 DD 67 00 FF: cmp dword ptr [0x67ddf0], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0xdd
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 F5 00 00 00: je 0x46f4a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 0F: jne 0x46f3c5
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes A1 F0 DD 67 00: mov eax, dword ptr [0x67ddf0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0xdd
        __asm _emit 0x67
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 48 B9 68 00: call dword ptr [0x68b948]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp + 8], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 C7 00 00 00: je 0x46f496
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 74 11: je 0x46f3e9
        __asm _emit 0x74
        __asm _emit 0x11
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 24h]
        push eax
        ; Exact mapped bytes E8 7A 7F FF FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 28h], 0
        ; Exact mapped bytes 74 11: je 0x46f403
        __asm _emit 0x74
        __asm _emit 0x11
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 28h]
        push eax
        ; Exact mapped bytes E8 60 7F FF FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 30h], 0
        ; Exact mapped bytes 74 11: je 0x46f41d
        __asm _emit 0x74
        __asm _emit 0x11
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 30h]
        push eax
        ; Exact mapped bytes E8 46 7F FF FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 38h], 0
        ; Exact mapped bytes 74 11: je 0x46f437
        __asm _emit 0x74
        __asm _emit 0x11
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 38h]
        push eax
        ; Exact mapped bytes E8 2C 7F FF FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 40h], 0
        ; Exact mapped bytes 74 11: je 0x46f451
        __asm _emit 0x74
        __asm _emit 0x11
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40h]
        push eax
        ; Exact mapped bytes E8 12 7F FF FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 44h], 0
        ; Exact mapped bytes 74 11: je 0x46f46b
        __asm _emit 0x74
        __asm _emit 0x11
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 44h]
        push eax
        ; Exact mapped bytes E8 F8 7E FF FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 50h], 67e0e0h
        ; Exact mapped bytes 74 11: je 0x46f488
        __asm _emit 0x74
        __asm _emit 0x11
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 50h]
        push eax
        ; Exact mapped bytes E8 DB 7E FF FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 CD 7E FF FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push 0
        ; Exact mapped bytes 8B 15 F0 DD 67 00: mov edx, dword ptr [0x67ddf0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xdd
        __asm _emit 0x67
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 50 B9 68 00: call dword ptr [0x68b950]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        pop ebp
        ret
    }
}
