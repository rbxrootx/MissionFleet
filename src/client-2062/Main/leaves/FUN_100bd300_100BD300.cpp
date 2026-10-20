// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BD300 .. +0x136 bytes.
extern "C" __declspec(naked) void FUN_100bd300_100BD300() {
    __asm {
        mov eax, dword ptr [esp + 8]
        sub esp, 100h
        and eax, 0ffffh
        push esi
        cmp eax, 5
        push edi
        mov esi, ecx
        ; Exact mapped bytes 0F 87 99 00 00 00: ja 0x100bd3b5
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 38 D4 0B 10: jmp dword ptr [eax*4 + 0x100bd438]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0xd4
        __asm _emit 0x0b
        __asm _emit 0x10
        mov eax, dword ptr [esp + 10ch]
        lea ecx, [esp + 8]
        push eax
        push 101abf70h
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact mapped bytes EB 75: jmp 0x100bd3b5
        __asm _emit 0xeb
        __asm _emit 0x75
        mov eax, dword ptr [esi + 168h]
        mov edi, dword ptr [esp + 10ch]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x100bd360
        __asm _emit 0x74
        __asm _emit 0x0c
        test edi, edi
        ; Exact mapped bytes 74 08: je 0x100bd360
        __asm _emit 0x74
        __asm _emit 0x08
        push edi
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push edi
        lea edx, [esp + 0ch]
        push 101ac020h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact mapped bytes EB 3F: jmp 0x100bd3b5
        __asm _emit 0xeb
        __asm _emit 0x3f
        push 101ac0f8h
        ; Exact mapped bytes EB 2A: jmp 0x100bd3a7
        __asm _emit 0xeb
        __asm _emit 0x2a
        push 10h
        push 8
        lea ecx, [esp + 10h]
        push 101ac0bch
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 10h
        ; Exact mapped bytes EB 1F: jmp 0x100bd3b5
        __asm _emit 0xeb
        __asm _emit 0x1f
        lea edx, [esp + 8]
        push 101ac088h
        push edx
        ; Exact mapped bytes EB 0A: jmp 0x100bd3ac
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 101ac05ch
        lea eax, [esp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 8
        push 0ffff00h
        lea ecx, [esp + 0ch]
        push -1
        push ecx
        mov ecx, dword ptr [esi + 198h]
        ; Exact mapped bytes E8 E4 68 04 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 63 6A 04 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x6a
        __asm _emit 0x04
        __asm _emit 0x00
        add edi, -0ah
        cmp eax, edi
        ; Exact mapped bytes 75 0B: jne 0x100bd3ef
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [esi + 198h]
        ; Exact mapped bytes E8 A1 73 04 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        mov edx, dword ptr [ecx + 88h]
        dec edx
        push edx
        ; Exact mapped bytes E8 4E 73 04 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 194h]
        lea eax, [esp + 8]
        push 0ffff00h
        push eax
        ; Exact mapped bytes E8 79 BE 04 00: call 0x10109290
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, dword ptr [esi + 194h]
        pop edi
        mov dword ptr [esi + 6ch], 0ffff00h
        mov dword ptr [esi + 70h], 0
        pop esi
        add esp, 100h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
