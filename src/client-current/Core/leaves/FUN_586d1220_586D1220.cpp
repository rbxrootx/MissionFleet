// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586D1220 .. +0x260 bytes.
extern "C" __declspec(naked) void FUN_586d1220_586D1220() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 45 02 00 00: jne 0x586d1478
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 6ch]
        ; Exact mapped bytes 75 54: jne 0x586d129b
        __asm _emit 0x75
        __asm _emit 0x54
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586d1259
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7D 1A: jge 0x586d1279
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6ch]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 6A 4B DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x4b
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D7: jmp 0x586d1250
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6ch]
        mov dword ptr [ebp - 20h], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 4B 4B DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x4b
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DD 01 00 00: jmp 0x586d1478
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax + 6ch]
        ; Exact mapped bytes 75 54: jne 0x586d1303
        __asm _emit 0x75
        __asm _emit 0x54
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586d12c1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes 7D 1A: jge 0x586d12e1
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 6ch]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 02 4B DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x4b
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D7: jmp 0x586d12b8
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 6ch]
        mov dword ptr [ebp - 28h], eax
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E3 4A DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x4a
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 75 01 00 00: jmp 0x586d1478
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 6ch]
        ; Exact mapped bytes 75 53: jne 0x586d1369
        __asm _emit 0x75
        __asm _emit 0x53
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586d1328
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 7D 1A: jge 0x586d1348
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6ch]
        mov dword ptr [ebp - 2ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 9B 4A DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x4a
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D7: jmp 0x586d131f
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 6ch]
        mov dword ptr [ebp - 30h], ecx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 7D 4A DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x4a
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 0F 01 00 00: jmp 0x586d1478
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax + 6ch]
        ; Exact mapped bytes 75 54: jne 0x586d13d1
        __asm _emit 0x75
        __asm _emit 0x54
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586d138f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 7D 1A: jge 0x586d13af
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 6ch]
        mov dword ptr [ebp - 34h], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 34 4A DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x4a
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D7: jmp 0x586d1386
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 6ch]
        mov dword ptr [ebp - 38h], ecx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 15 4A DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x4a
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x586d1478
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx + 6ch]
        ; Exact mapped bytes 75 51: jne 0x586d1436
        __asm _emit 0x75
        __asm _emit 0x51
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x586d13f7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 5
        ; Exact mapped bytes 7D 1A: jge 0x586d1417
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 6ch]
        mov dword ptr [ebp - 3ch], edx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 CC 49 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x49
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D7: jmp 0x586d13ee
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6ch]
        mov dword ptr [ebp - 40h], edx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 AD 49 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x49
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 42: jmp 0x586d1478
        __asm _emit 0xeb
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes 75 18: jne 0x586d145c
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B4 11 00 00: call 0x586d2600
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 1C: jmp 0x586d1478
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 88h]
        ; Exact mapped bytes 75 0E: jne 0x586d1478
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
