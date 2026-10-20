// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C81B0 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_587c81b0_587C81B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x587c828b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 54h], 0
        ; Exact mapped bytes 75 16: jne 0x587c81f2
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9C 76 CD FF: call 0x5849f880
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x76
        __asm _emit 0xcd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 58h]
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes EB 0F: jmp 0x587c8201
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 54h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x587c8222
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x587c8222
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x587c828b
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x587c8245
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x587c822b
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C3 D3 CC FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xd3
        __asm _emit 0xcc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x587c8269
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x587c828b
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x587c8289
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9F D3 CC FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xd3
        __asm _emit 0xcc
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x587c822b
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
