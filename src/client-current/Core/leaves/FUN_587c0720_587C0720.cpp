// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C0720 .. +0x18D bytes.
extern "C" __declspec(naked) void FUN_587c0720_587C0720() {
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
        ; Exact mapped bytes 66 D1 E9: shr cx, 1
        __asm _emit 0x66
        __asm _emit 0xd1
        __asm _emit 0xe9
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 63 01 00 00: je 0x587c08a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x587c07d6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 11: ja 0x587c076e
        __asm _emit 0x77
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], 0
        xor eax, eax
        ; Exact mapped bytes E9 3D 01 00 00: jmp 0x587c08ab
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 C7 41 CC FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0xcc
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 09: jne 0x587c078d
        __asm _emit 0x75
        __asm _emit 0x09
        xor eax, eax
        ; Exact mapped bytes E9 20 01 00 00: jmp 0x587c08ab
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 28: jmp 0x587c07b5
        __asm _emit 0xeb
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 10h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 94 41 CC FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x41
        __asm _emit 0xcc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 02: jne 0x587c07b5
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 21: jmp 0x587c07d6
        __asm _emit 0xeb
        __asm _emit 0x21
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 19: je 0x587c07d4
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0E: ja 0x587c07d4
        __asm _emit 0x77
        __asm _emit 0x0e
        mov dword ptr [ebp - 8], 0
        xor eax, eax
        ; Exact mapped bytes E9 D7 00 00 00: jmp 0x587c08ab
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB A8: jmp 0x587c077e
        __asm _emit 0xeb
        __asm _emit 0xa8
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 201h
        ; Exact mapped bytes 77 24: ja 0x587c080c
        __asm _emit 0x77
        __asm _emit 0x24
        cmp dword ptr [ebp - 0ch], 201h
        ; Exact mapped bytes 74 4B: je 0x587c083c
        __asm _emit 0x74
        __asm _emit 0x4b
        cmp dword ptr [ebp - 0ch], 100h
        ; Exact mapped bytes 74 7B: je 0x587c0875
        __asm _emit 0x74
        __asm _emit 0x7b
        cmp dword ptr [ebp - 0ch], 102h
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x587c0888
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x587c089b
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 202h
        ; Exact mapped bytes 74 14: je 0x587c0829
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 0ch], 204h
        ; Exact mapped bytes 74 44: je 0x587c0862
        __asm _emit 0x74
        __asm _emit 0x44
        cmp dword ptr [ebp - 0ch], 205h
        ; Exact mapped bytes 74 28: je 0x587c084f
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes EB 72: jmp 0x587c089b
        __asm _emit 0xeb
        __asm _emit 0x72
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes EB 6F: jmp 0x587c08ab
        __asm _emit 0xeb
        __asm _emit 0x6f
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 34h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes EB 5C: jmp 0x587c08ab
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 28h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes EB 49: jmp 0x587c08ab
        __asm _emit 0xeb
        __asm _emit 0x49
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 2ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes EB 36: jmp 0x587c08ab
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes EB 23: jmp 0x587c08ab
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 18h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes EB 10: jmp 0x587c08ab
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 34h]
        ; Exact mapped bytes EB 08: jmp 0x587c08ab
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes EB 06: jmp 0x587c08ab
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 34h]
        mov esp, ebp
    }
}
