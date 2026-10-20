// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052DB67 .. +0x14A bytes.
extern "C" __declspec(naked) void FUN_0052db67_0052DB67() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 0b0h], 0
        ; Exact mapped bytes 74 05: je 0x52db81
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 2A 01 00 00: jmp 0x52dcab
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 0b0h], 1
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0b8h]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x52dba5
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp + 8], 1
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0b8h]
        and edx, 0fffffff3h
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 0b8h], edx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1A: je 0x52dbda
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 74 11: je 0x52dbda
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 68h]
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + 68h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1C 12 FC FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x12
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 2000h
        test eax, eax
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x52dc7d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 7fffh
        push 7fffh
        push 0
        push 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5A 81 00 00: call 0x535d5f
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 10h]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        push 1
        push 0e900h
        push 0ffffh
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 93 78 FC FF: call 0x4f54b8
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x78
        __asm _emit 0xfc
        __asm _emit 0xff
        push 1
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 58h
        push ecx
        push 2
        push 0e900h
        push 0ffffh
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 70 78 FC FF: call 0x4f54b8
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x78
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        push 16h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 ED 81 00 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 CE 81 00 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 15 16 FC FF: call 0x4ef290
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x16
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 21: jmp 0x52dc9e
        __asm _emit 0xeb
        __asm _emit 0x21
        push 1
        push 0
        mov eax, dword ptr [ebp - 14h]
        add eax, 58h
        push eax
        push 2
        push 0e900h
        push 0ffffh
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1A 78 FC FF: call 0x4f54b8
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x78
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 0b0h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
