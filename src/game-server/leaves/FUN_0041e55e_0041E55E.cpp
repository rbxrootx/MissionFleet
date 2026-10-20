// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041E55E .. +0x144 bytes.
extern "C" __declspec(naked) void FUN_0041e55e_0041E55E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 20h], ecx
        lea eax, [ebp + 8]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 4
        ; Exact mapped bytes E8 45 06 00 00: call 0x41ebe0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 4
        ; Exact mapped bytes E8 21 05 00 00: call 0x41ead0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 18 08 00 00: call 0x41edd0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x41e5c8
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 C9 00 00 00: jmp 0x41e691
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 80 07 00 00: call 0x41ed50
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x41e68f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D6 BA FF FF: call 0x41a0be
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x41e5fa
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes 7D 24: jge 0x41e624
        __asm _emit 0x7d
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*8 + 8ch], 0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*8 + 90h], 0
        ; Exact mapped bytes EB CD: jmp 0x41e5f1
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], 0
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 82 8A 00 00 00 00 00: mov word ptr [edx + 0x8a], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 80 08 01 00 00 00 00: mov word ptr [eax + 0x108], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 1A: je 0x41e672
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 73 A1 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x41e679
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        lea eax, [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 4
        ; Exact mapped bytes E8 F8 04 00 00: call 0x41eb80
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x41e691
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        add esp, 24h
        cmp ebp, esp
        ; Exact mapped bytes E8 44 A1 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
