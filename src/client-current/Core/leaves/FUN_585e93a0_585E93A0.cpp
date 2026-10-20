// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E93A0 .. +0x146 bytes.
extern "C" __declspec(naked) void FUN_585e93a0_585E93A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10730h], 0
        ; Exact mapped bytes 74 5C: je 0x585e9411
        __asm _emit 0x74
        __asm _emit 0x5c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10730h]
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 45 7B 17 00: call 0x58760f10
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x7b
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA D5 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xd5
        __asm _emit 0xe9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x585e93f1
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB D5 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xd5
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 64 2D EA FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x2d
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x585e93f8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 106b8h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10740h], 0
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x585e94c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1072ch], 0
        ; Exact mapped bytes 0F 84 9D 00 00 00: je 0x585e94c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1072ch]
        mov dword ptr [ebp - 10h], edx
        push 40000000h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CC 7A 17 00: call 0x58760f10
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x7a
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 106b8h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1072ch]
        mov dword ptr [edx + 10730h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 D5 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xd5
        __asm _emit 0xe9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x585e9497
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 D5 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xd5
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CD 2C EA FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x2c
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 74 0F: je 0x585e9497
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10740h], 40000000h
        ; Exact mapped bytes EB 0D: jmp 0x585e94a4
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10740h], 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 1072ch]
        ; Exact mapped bytes E8 4E B5 E9 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xb5
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10d90h], edx
        mov dword ptr [ecx + 10d94h], eax
        ; Exact mapped bytes EB 18: jmp 0x585e94e0
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10730h], 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 21 F8 FE FF: call 0x585d8d00
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
