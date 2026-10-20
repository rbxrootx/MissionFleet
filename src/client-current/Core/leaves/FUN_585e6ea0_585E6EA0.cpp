// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E6EA0 .. +0xBA bytes.
extern "C" __declspec(naked) void FUN_585e6ea0_585E6EA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585e6ebc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 0F 8D 8D 00 00 00: jge 0x585e6f53
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx*4 + 58948c34h]
        ; Exact mapped bytes E8 DB BF FE FF: call 0x585d2eb0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 75: je 0x585e6f4e
        __asm _emit 0x74
        __asm _emit 0x75
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 0C 50: mov cx, word ptr [eax + edx*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x50
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE 4F EA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x4f
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x585e6f02
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 31 52 EA FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x52
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 46: je 0x585e6f4e
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 40 52 EA FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x52
        __asm _emit 0xea
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 4]
        cmp eax, edx
        ; Exact mapped bytes 75 34: jne 0x585e6f4c
        __asm _emit 0x75
        __asm _emit 0x34
        push 2
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7C 66 18 00: call 0x5876d5a0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x66
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        movzx esi, word ptr [ebp - 4]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C FA E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xfa
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 15 52 EA FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x52
        __asm _emit 0xea
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 0D: jne 0x585e6f4c
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 584h], 1
        ; Exact mapped bytes EB A9: jmp 0x585e6ef7
        __asm _emit 0xeb
        __asm _emit 0xa9
        ; Exact mapped bytes E9 60 FF FF FF: jmp 0x585e6eb3
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
