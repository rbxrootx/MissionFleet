// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F7AE9 .. +0x16B bytes.
extern "C" __declspec(naked) void FUN_004f7ae9_004F7AE9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 20 F8 FF FF: call 0x4f731e
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push -10h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 20000h
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f7b2a
        __asm _emit 0x75
        __asm _emit 0x14
        push 134h
        push 672eech
        ; Exact mapped bytes E8 1B 12 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x12
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7b2a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D1: jne 0x4f7b01
        __asm _emit 0x75
        __asm _emit 0xd1
        push 0
        push 0
        push 87h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f7b5e
        __asm _emit 0x75
        __asm _emit 0x14
        push 135h
        push 672eech
        ; Exact mapped bytes E8 E7 11 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7b5e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CC: jne 0x4f7b30
        __asm _emit 0x75
        __asm _emit 0xcc
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 09: je 0x4f7b75
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 0ffffffffh
        mov dword ptr [ebp - 4], 0
        push 0
        push 0
        push 87h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 74 75: je 0x4f7c0b
        __asm _emit 0x74
        __asm _emit 0x75
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 43: je 0x4f7be1
        __asm _emit 0x74
        __asm _emit 0x43
        push 0
        push 0
        push 0f0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x4f7bdf
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 10h]
        cmp dword ptr [ecx], -1
        ; Exact mapped bytes 74 14: je 0x4f7bd1
        __asm _emit 0x74
        __asm _emit 0x14
        push 145h
        push 672eech
        ; Exact mapped bytes E8 74 11 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7bd1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x4f7bb5
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 1F: jmp 0x4f7c00
        __asm _emit 0xeb
        __asm _emit 0x1f
        push 0
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        cmp eax, dword ptr [edx]
        sete cl
        push ecx
        push 0f1h
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 12: jmp 0x4f7c1d
        __asm _emit 0xeb
        __asm _emit 0x12
        push 673054h
        push 673084h
        ; Exact mapped bytes E8 FB 89 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x89
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 D8 BE 68 00: call dword ptr [0x68bed8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 19: je 0x4f7c4b
        __asm _emit 0x74
        __asm _emit 0x19
        push -10h
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 20000h
        test eax, eax
        ; Exact mapped bytes 0F 84 31 FF FF FF: je 0x4f7b7c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
