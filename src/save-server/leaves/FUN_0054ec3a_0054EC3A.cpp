// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054EC3A .. +0x14C bytes.
extern "C" __declspec(naked) void FUN_0054ec3a_0054EC3A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f2ebh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 2ch], ecx
        push 126h
        push 67bee8h
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 EE B5 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xb5
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x54ec8f
        __asm _emit 0x75
        __asm _emit 0x14
        push 127h
        push 67bee8h
        ; Exact mapped bytes E8 B6 A0 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54ec8f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x54ec72
        __asm _emit 0x75
        __asm _emit 0xdd
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 34: call dword ptr [edx + 0x34]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x34
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7D 09: jge 0x54ecbd
        __asm _emit 0x7d
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 D6 F7 FF FF: call 0x54e493
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x54ecd7
        __asm _emit 0x75
        __asm _emit 0x14
        push 12eh
        push 67bee8h
        ; Exact mapped bytes E8 6E A0 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54ecd7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x54ecbd
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 4], 0
        push 134h
        push 67bee8h
        push 18h
        ; Exact mapped bytes E8 03 D4 F7 FF: call 0x4cc0ff
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xd4
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 28h], edx
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 17: je 0x54ed26
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 35 F3 FF FF: call 0x54e050
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes EB 07: jmp 0x54ed2d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 24h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes EB 40: jmp 0x54ed8b
        __asm _emit 0xeb
        __asm _emit 0x40
        push 636e20h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 38 B4 F8 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xb4
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54ed70
        __asm _emit 0x75
        __asm _emit 0x14
        push 137h
        push 67bee8h
        ; Exact mapped bytes E8 D5 9F FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x9f
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54ed70
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x54ed4b
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        push 0
        push 0
    }
}
