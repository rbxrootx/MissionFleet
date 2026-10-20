// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586842D0 .. +0x117 bytes.
extern "C" __declspec(naked) void FUN_586842d0_586842D0() {
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
        ; Exact mapped bytes 0F 84 F2 00 00 00: je 0x586843e5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58684305
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 50: jge 0x5868435b
        __asm _emit 0x7d
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 0a8h], 0
        ; Exact mapped bytes 74 3E: je 0x58684359
        __asm _emit 0x74
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 0ch]
        mov cl, byte ptr [eax + 0c8h]
        sub cl, 1
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp - 0ch]
        mov byte ptr [edx + 0c8h], cl
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 0ch]
        movzx ecx, byte ptr [eax + 0c8h]
        test ecx, ecx
        ; Exact mapped bytes 75 12: jne 0x58684359
        __asm _emit 0x75
        __asm _emit 0x12
        push 0
        push 0
        movzx edx, byte ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 88 13 00 00: call 0x586856e0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB A1: jmp 0x586842fc
        __asm _emit 0xeb
        __asm _emit 0xa1
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x5868437c
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x5868437c
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x586843e5
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x5868439f
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x58684385
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 69 12 E1 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x12
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x586843c3
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x586843e5
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x586843e3
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 45 12 E1 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x12
        __asm _emit 0xe1
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
        ; Exact mapped bytes EB A0: jmp 0x58684385
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
