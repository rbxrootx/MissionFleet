// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E95C0 .. +0xE1 bytes.
extern "C" __declspec(naked) void FUN_587e95c0() {
    __asm {
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        sub esp, 0ch
        cmp dword ptr [eax + 4], 0
        push edi
        mov edi, ecx
        ; Exact mapped bytes 0F 84 CD 00 00 00: je 0x587e96a2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 20d54h]
        push ebx
        mov ebx, dword ptr [ecx + 4]
        test ebx, ebx
        ; Exact mapped bytes 0F 84 BA 00 00 00: je 0x587e96a1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes EB 06: jmp 0x587e95f0
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebx + 0ch]
        test esi, esi
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x587e9695
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 10524h]
        mov edx, dword ptr [eax + 0b4h]
        imul edx, dword ptr [eax + 0ach]
        mov ecx, dword ptr [eax + 0b0h]
        imul ecx, dword ptr [eax + 0a8h]
        push edx
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 AC D4 F6 FF: call 0x58756ad0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xd4
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [eax + 8]
        sub eax, dword ptr [esi + 8]
        sub ecx, dword ptr [esi + 4]
        mov edx, eax
        imul edx, eax
        mov dword ptr [esp + 10h], ecx
        mov dword ptr [esp + 0ch], edx
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 44 24 0C: fild dword ptr [esp + 0xc]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes D9 C1: fld st(1)
        __asm _emit 0xd9
        __asm _emit 0xc1
        ; Exact mapped bytes DE CA: fmulp st(2)
        __asm _emit 0xde
        __asm _emit 0xca
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes E8 37 36 19 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x36
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes E8 42 36 19 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x36
        __asm _emit 0x19
        __asm _emit 0x00
        cmp eax, 320h
        mov ecx, 100h
        ; Exact mapped bytes 7D 23: jge 0x587e968d
        __asm _emit 0x7d
        __asm _emit 0x23
        imul eax, eax, 0ffh
        mov ecx, eax
        mov eax, 51eb851fh
        imul ecx
        sar edx, 8
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        cmp ecx, 1eh
        ; Exact mapped bytes 7D 05: jge 0x587e968d
        __asm _emit 0x7d
        __asm _emit 0x05
        mov ecx, 1eh
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 4B 96 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x96
        __asm _emit 0x11
        __asm _emit 0x00
        mov ebx, dword ptr [ebx + 8]
        test ebx, ebx
        ; Exact mapped bytes 0F 85 50 FF FF FF: jne 0x587e95f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
    }
}
