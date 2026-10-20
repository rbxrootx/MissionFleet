// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58793180 .. +0x220 bytes.
extern "C" __declspec(naked) void FUN_58793180_58793180() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push esi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 05: jne 0x58793195
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 04 02 00 00: jmp 0x58793399
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        sub eax, 1
        cdq
        mov ecx, 0ch
        idiv ecx
        mov esi, eax
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 30 70 D1 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x70
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7C 05: jl 0x587931b9
        __asm _emit 0x7c
        __asm _emit 0x05
        ; Exact mapped bytes E9 E0 01 00 00: jmp 0x58793399
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 05: jne 0x587931da
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 BF 01 00 00: jmp 0x58793399
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 06 FE FF FF: call 0x58792ff0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x5879329f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x5879329f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F5 77 FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        movzx esi, byte ptr [eax + 8]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E9 77 FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 8]
        cmp esi, edx
        ; Exact mapped bytes 74 05: je 0x58793224
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 75 01 00 00: jmp 0x58793399
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 93 8D FF FF: call 0x5878bfd0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BB 77 FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 0bh]
        mov dword ptr [ebp - 2ch], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AC 77 FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 0ah]
        mov dword ptr [ebp - 28h], edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9D 77 FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 0ah]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8E 77 FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 0bh]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C7 4A FF FF: call 0x58787d50
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B7 4A FF FF: call 0x58787d50
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C3 00 00 00: jmp 0x58793362
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 59 77 FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 8]
        test eax, eax
        ; Exact mapped bytes 75 67: jne 0x58793316
        __asm _emit 0x75
        __asm _emit 0x67
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x587932c1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 4F: jge 0x58793316
        __asm _emit 0x7d
        __asm _emit 0x4f
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x587932d9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 3
        ; Exact mapped bytes 7D 35: jge 0x58793314
        __asm _emit 0x7d
        __asm _emit 0x35
        imul eax, dword ptr [ebp - 0ch], 6
        add eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F4 FC FF FF: call 0x58792ff0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0D: je 0x58793312
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 05: je 0x58793312
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x58793399
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB BC: jmp 0x587932d0
        __asm _emit 0xeb
        __asm _emit 0xbc
        ; Exact mapped bytes EB A2: jmp 0x587932b8
        __asm _emit 0xeb
        __asm _emit 0xa2
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 3ch], edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D9 76 FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 0bh]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CA 76 FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 0ah]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 CF 8C FF FF: call 0x5878c020
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EF 49 FF FF: call 0x58787d50
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 46 48 FF FF: call 0x58787bb0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8E 76 FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 44h], ecx
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes 8B 0D 58 06 96 58: mov ecx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 CA FF FF: call 0x5878fe60
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
