// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E4F50 .. +0x1D9 bytes.
extern "C" __declspec(naked) void FUN_585e4f50_585E4F50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 11ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 110h], ecx
        mov eax, dword ptr [ebp - 110h]
        mov dword ptr [eax + 5b0h], 0
        mov dword ptr [ebp - 10ch], 0
        mov dword ptr [ebp - 108h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585e4f9e
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 108h]
        add ecx, 1
        mov dword ptr [ebp - 108h], ecx
        cmp dword ptr [ebp - 108h], 20h
        ; Exact mapped bytes 0F 8D 2F 01 00 00: jge 0x585e50da
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [ebp - 110h]
        cmp dword ptr [eax + edx*4 + 5b4h], 0
        ; Exact mapped bytes 0F 84 10 01 00 00: je 0x585e50d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        shl ecx, 2
        ; Exact mapped bytes 66 8B 95 F8 FE FF FF: mov dx, word ptr [ebp - 0x108]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 94 4D FC FE FF FF: mov word ptr [ebp + ecx*2 - 0x104], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x4d
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 19 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x19
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 51 74 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x74
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        mov eax, dword ptr [ebp - 108h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 59 DB EB FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xdb
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 14h]
        and ecx, 3ffh
        mov edx, dword ptr [ebp - 10ch]
        shl edx, 2
        ; Exact mapped bytes 66 89 8C 55 FE FE FF FF: mov word ptr [ebp + edx*2 - 0x102], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 19 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x19
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0D 74 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        mov eax, dword ptr [ebp - 108h]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 15 DB EB FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xdb
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 14h]
        shr ecx, 0ah
        and ecx, 3ffh
        mov edx, dword ptr [ebp - 10ch]
        shl edx, 2
        ; Exact mapped bytes 66 89 8C 55 00 FF FF FF: mov word ptr [ebp + edx*2 - 0x100], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D 19 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x19
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C6 73 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x73
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        mov eax, dword ptr [ebp - 108h]
        push eax
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 CE DA EB FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xda
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 14h]
        shr ecx, 14h
        and ecx, 3ffh
        mov edx, dword ptr [ebp - 10ch]
        shl edx, 2
        ; Exact mapped bytes 66 89 8C 55 02 FF FF FF: mov word ptr [ebp + edx*2 - 0xfe], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [ebp - 110h]
        mov dword ptr [ecx + eax*4 + 5b4h], 0
        mov edx, dword ptr [ebp - 10ch]
        add edx, 1
        mov dword ptr [ebp - 10ch], edx
        ; Exact mapped bytes E9 B5 FE FF FF: jmp 0x585e4f8f
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 74 38: je 0x585e511b
        __asm _emit 0x74
        __asm _emit 0x38
        push 0
        mov eax, dword ptr [ebp - 10ch]
        shl eax, 3
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        push edx
        mov eax, dword ptr [ebp - 110h]
        mov ecx, dword ptr [eax + 106e4h]
        push ecx
        push 80020e01h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 78 24 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 2B BF 24 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xbf
        __asm _emit 0x24
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
