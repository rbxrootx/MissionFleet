// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005628E9 .. +0x1CF bytes.
extern "C" __declspec(naked) void FUN_005628e9_005628E9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        push 370h
        push 67c6f0h
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 58 79 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x79
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x562925
        __asm _emit 0x75
        __asm _emit 0x14
        push 371h
        push 67c6f0h
        ; Exact mapped bytes E8 20 64 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x562925
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x562908
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 CB 3F FF FF: call 0x5568fe
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56294b
        __asm _emit 0x75
        __asm _emit 0x14
        push 372h
        push 67c6f0h
        ; Exact mapped bytes E8 FA 63 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x63
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56294b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x56292b
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 25: je 0x56297c
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 10h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 02 0B F4 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x0b
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56297c
        __asm _emit 0x75
        __asm _emit 0x14
        push 374h
        push 67c6f0h
        ; Exact mapped bytes E8 C9 63 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x63
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56297c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x562951
        __asm _emit 0x75
        __asm _emit 0xcf
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 25: je 0x5629ad
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 10h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 D1 0A F4 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x0a
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5629ad
        __asm _emit 0x75
        __asm _emit 0x14
        push 376h
        push 67c6f0h
        ; Exact mapped bytes E8 98 63 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x63
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5629ad
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x562982
        __asm _emit 0x75
        __asm _emit 0xcf
        push 640c50h
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes E8 32 7F FE FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x5629d4
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 DB 00 00 00: jmp 0x562aaf
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 EB F7 FC FF: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xf7
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 35: jne 0x562a17
        __asm _emit 0x75
        __asm _emit 0x35
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 14: je 0x5629fc
        __asm _emit 0x74
        __asm _emit 0x14
        push 382h
        push 67c6f0h
        ; Exact mapped bytes E8 49 63 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x63
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5629fc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5629e2
        __asm _emit 0x75
        __asm _emit 0xe0
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 52 78: call dword ptr [edx + 0x78]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x78
        lea eax, [ebp - 14h]
        mov dword ptr [ebp + 8], eax
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 A8 F7 FC FF: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf7
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 18: jne 0x562a3d
        __asm _emit 0x75
        __asm _emit 0x18
        lea ecx, [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 90 90 00 00 00: call dword ptr [eax + 0x90]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 24h]
        mov dword ptr [ebp + 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x562a57
        __asm _emit 0x75
        __asm _emit 0x14
        push 38eh
        push 67c6f0h
        ; Exact mapped bytes E8 EE 62 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x562a57
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x562a3d
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x562a77
        __asm _emit 0x75
        __asm _emit 0x14
        push 38fh
        push 67c6f0h
        ; Exact mapped bytes E8 CE 62 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x562a77
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x562a5d
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 1C: call dword ptr [ecx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 30h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 28h]
        xor eax, eax
        cmp dword ptr [edx + 30h], 0
        setge al
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
