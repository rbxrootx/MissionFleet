// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F0240 .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_585f0240_585F0240() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 64h
        ; Exact mapped bytes 75 3E: jne 0x585f028d
        __asm _emit 0x75
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 114h], 0
        ; Exact mapped bytes 75 32: jne 0x585f028d
        __asm _emit 0x75
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A 67 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x67
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 43 CD E9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xcd
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], eax
        ; Exact mapped bytes 74 19: je 0x585f028b
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 7ch], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 E2 F8 FF: call 0x5857e4e0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xe2
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4B: jmp 0x585f02d8
        __asm _emit 0xeb
        __asm _emit 0x4b
        cmp dword ptr [ebp + 0ch], 0ch
        ; Exact mapped bytes 75 45: jne 0x585f02d8
        __asm _emit 0x75
        __asm _emit 0x45
        ; Exact mapped bytes 83 3D F8 1F 96 58 00: cmp dword ptr [0x58961ff8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 3C: je 0x585f02d8
        __asm _emit 0x74
        __asm _emit 0x3c
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 16: jne 0x585f02b8
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D F8 1F 96 58: mov ecx, dword ptr [0x58961ff8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D F8 1F 96 58: mov ecx, dword ptr [0x58961ff8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 20: jmp 0x585f02d8
        __asm _emit 0xeb
        __asm _emit 0x20
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 75 1A: jne 0x585f02d8
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 0D F8 1F 96 58: mov ecx, dword ptr [0x58961ff8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 8], eax
        push 1
        ; Exact mapped bytes 8B 0D F8 1F 96 58: mov ecx, dword ptr [0x58961ff8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 55 F8: call dword ptr [ebp - 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf8
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
