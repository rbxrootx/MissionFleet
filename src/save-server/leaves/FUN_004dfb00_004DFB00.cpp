// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DFB00 .. +0x117 bytes.
extern "C" __declspec(naked) void FUN_004dfb00_004DFB00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 11: je 0x4dfb20
        __asm _emit 0x74
        __asm _emit 0x11
        push 18h
        push 6813f0h
        ; Exact mapped bytes E8 25 92 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x92
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dfb20
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4dfb09
        __asm _emit 0x75
        __asm _emit 0xe3
        mov dword ptr [ebp - 8], 0ffffffffh
        ; Exact mapped bytes E8 27 8D FF FF: call 0x4d8859
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E8 36 1F 05 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x1f
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 4E 4B 06 00: call 0x5446a0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x4b
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4dfb5b
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 B1 00 00 00: jmp 0x4dfc0c
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 17: je 0x4dfb78
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 8C 00 00 00: call dword ptr [eax + 0x8c]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4dfb78
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x4dfc0a
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 3C: jne 0x4dfbc3
        __asm _emit 0x75
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 23: je 0x4dfbb3
        __asm _emit 0x74
        __asm _emit 0x23
        push 6813fch
        push 681428h
        ; Exact mapped bytes E8 76 0A FC FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x0a
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 1ch]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 1ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 45: jmp 0x4dfc08
        __asm _emit 0xeb
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 5C: call dword ptr [edx + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x5c
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E8 EE 0A 06 00: call 0x5406c4
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x0a
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 74 16: je 0x4dfbf2
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes E8 E3 0A 06 00: call 0x5406c4
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x0a
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [eax + 10h]
        push eax
        push 68142ch
        ; Exact mapped bytes E8 26 0A FC FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x0a
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E8 39 BF FF FF: call 0x4dbb30
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        push -1
        ; Exact mapped bytes E8 51 BF FF FF: call 0x4dbb4f
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 ED 99 0A 00: call 0x5895f0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x99
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 06: jmp 0x4dfc0e
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes EB C7: jmp 0x4dfbd1
        __asm _emit 0xeb
        __asm _emit 0xc7
        ; Exact mapped bytes EB C5: jmp 0x4dfbd1
        __asm _emit 0xeb
        __asm _emit 0xc5
        ; Exact mapped bytes EB C3: jmp 0x4dfbd1
        __asm _emit 0xeb
        __asm _emit 0xc3
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
