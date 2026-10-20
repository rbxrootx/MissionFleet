// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C55A0 .. +0x137 bytes.
extern "C" __declspec(naked) void FUN_587c55a0_587C55A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
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
        ; Exact mapped bytes 0F 84 12 01 00 00: je 0x587c56d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 25 41 D6 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x41
        __asm _emit 0xd6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 7C: je 0x587c564b
        __asm _emit 0x74
        __asm _emit 0x7c
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7E B5 FF FF: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 94h]
        shl eax, 1
        cmp ecx, eax
        ; Exact mapped bytes 76 55: jbe 0x587c564b
        __asm _emit 0x76
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        sub edx, dword ptr [ecx + 98h]
        mov eax, dword ptr [ebp - 4]
        cmp edx, dword ptr [eax + 94h]
        ; Exact mapped bytes 76 3E: jbe 0x587c564b
        __asm _emit 0x76
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B2 FB FE FF: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8A 02 CD FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0xcd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 5ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B 18 CF FF: call 0x584b6e50
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x18
        __asm _emit 0xcf
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 31 B3 FF FF: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 98h], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x587c566c
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x587c566c
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x587c56d5
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x587c568f
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x587c5675
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 79 FF CC FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xcc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x587c56b3
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
        ; Exact mapped bytes EB 24: jmp 0x587c56d5
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x587c56d3
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 55 FF CC FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xcc
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x587c5675
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
