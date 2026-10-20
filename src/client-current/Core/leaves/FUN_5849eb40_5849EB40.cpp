// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5849EB40 .. +0x20D bytes.
extern "C" __declspec(naked) void FUN_5849eb40_5849EB40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 3
        ; Exact mapped bytes 0F 87 BC 01 00 00: ja 0x5849ed15
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 24 8D 50 ED 49 58: jmp dword ptr [ecx*4 + 0x5849ed50]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0xed
        __asm _emit 0x49
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 18h]
        add eax, 1
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 18h]
        and edx, 80000001h
        ; Exact mapped bytes 79 05: jns 0x5849eb81
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffffeh
        inc edx
        test edx, edx
        ; Exact mapped bytes 74 13: je 0x5849eb98
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        shl eax, 1
        mov ecx, dword ptr [ebp + 18h]
        sub ecx, eax
        imul ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 06: jmp 0x5849eb9e
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 4]
        shl ecx, 3
        neg ecx
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 2ch]
        shl edx, 4
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        lea ecx, [ebp - 3ch]
        push ecx
        lea edx, [ebp - 44h]
        push edx
        ; Exact mapped bytes E8 87 4F 04 00: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x4f
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 44 01 00 00: jmp 0x5849ed15
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 18h]
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x5849ebe0
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x5849ebf4
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 18h]
        add eax, 1
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 0B: jmp 0x5849ebff
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 18h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 18h]
        and edx, 80000001h
        ; Exact mapped bytes 79 05: jns 0x5849ec15
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffffeh
        inc edx
        test edx, edx
        ; Exact mapped bytes 74 13: je 0x5849ec2c
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 8]
        shl eax, 1
        mov ecx, dword ptr [ebp + 18h]
        sub ecx, eax
        imul ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 06: jmp 0x5849ec32
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], eax
        imul ecx, dword ptr [ebp - 8], 6
        neg ecx
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 20h]
        neg edx
        imul eax, edx, 18h
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 20h]
        neg ecx
        imul edx, ecx, 18h
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax + 4e4h], edx
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        lea edx, [ebp - 3ch]
        push edx
        lea eax, [ebp - 4ch]
        push eax
        ; Exact mapped bytes E8 E2 4E 04 00: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x4e
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x5849ed15
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        and ecx, 80000001h
        ; Exact mapped bytes 79 05: jns 0x5849ec86
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0fffffffeh
        inc ecx
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x5849ec9a
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 18h]
        add eax, 1
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 0B: jmp 0x5849eca5
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 18h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 18h]
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x5849ecba
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x5849ecd1
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 1
        mov edx, dword ptr [ebp + 18h]
        sub edx, ecx
        imul edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes EB 06: jmp 0x5849ecd7
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 3
        neg edx
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 34h]
        shl eax, 4
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        lea edx, [ebp - 3ch]
        push edx
        lea eax, [ebp - 54h]
        push eax
        ; Exact mapped bytes E8 4E 4E 04 00: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x4e
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 0E: jmp 0x5849ed15
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov dword ptr [ebp - 3ch], 0
        mov dword ptr [ebp - 38h], 0
        imul eax, dword ptr [ebp - 38h], 56h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 3ch]
        add edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 38h]
        add eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
