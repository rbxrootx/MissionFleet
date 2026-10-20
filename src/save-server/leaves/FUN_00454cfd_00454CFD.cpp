// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00454CFD .. +0x1B5 bytes.
extern "C" __declspec(naked) void FUN_00454cfd_00454CFD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 0d8h
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 40h], ecx
        cmp dword ptr [ebp - 40h], 4
        ; Exact mapped bytes 77 35: ja 0x454d60
        __asm _emit 0x77
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 24 95 B2 4E 45 00: jmp dword ptr [edx*4 + 0x454eb2]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xb2
        __asm _emit 0x4e
        __asm _emit 0x45
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 22: jmp 0x454d60
        __asm _emit 0xeb
        __asm _emit 0x22
        mov dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes EB 19: jmp 0x454d60
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 0ch], 6
        ; Exact mapped bytes EB 10: jmp 0x454d60
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes EB 07: jmp 0x454d60
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 7
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        sub ecx, 4
        mov dword ptr [ebp - 44h], ecx
        cmp dword ptr [ebp - 44h], 9
        ; Exact mapped bytes 77 34: ja 0x454db0
        __asm _emit 0x77
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 44h]
        xor edx, edx
        mov dl, byte ptr [eax + 454edah]
        ; Exact mapped bytes FF 24 95 C6 4E 45 00: jmp dword ptr [edx*4 + 0x454ec6]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xc6
        __asm _emit 0x4e
        __asm _emit 0x45
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 7
        ; Exact mapped bytes EB 19: jmp 0x454db0
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 10h], 3
        ; Exact mapped bytes EB 10: jmp 0x454db0
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 10h], 5
        ; Exact mapped bytes EB 07: jmp 0x454db0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 2
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x454dc9
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E0 00 00 00: jmp 0x454ea9
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 75 14: jne 0x454de6
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d89h
        push 67702ch
        ; Exact mapped bytes E8 5F 3F 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x3f
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x454de6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x454dc9
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 75 13: jne 0x454e05
        __asm _emit 0x75
        __asm _emit 0x13
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 75 0D: jne 0x454e05
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes EB 69: jmp 0x454e6e
        __asm _emit 0xeb
        __asm _emit 0x69
        cmp dword ptr [ebp - 10h], 7
        ; Exact mapped bytes 75 06: jne 0x454e11
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 74 0C: je 0x454e1d
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp - 0ch], 6
        ; Exact mapped bytes 75 57: jne 0x454e6e
        __asm _emit 0x75
        __asm _emit 0x57
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 75 51: jne 0x454e6e
        __asm _emit 0x75
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 44h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 44h], 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 DC FF FF: call 0x452b26
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 44h], edx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 44h], 0
        ; Exact mapped bytes 75 0B: jne 0x454e6e
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 33: je 0x454ea7
        __asm _emit 0x74
        __asm _emit 0x33
        push 3
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 32 20 00 00: call 0x456eb0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 1ch], ecx
        lea edx, [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 81 A9 FF FF: call 0x44f817
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 05: jge 0x454ea7
        __asm _emit 0x7d
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 02: jmp 0x454ea9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
