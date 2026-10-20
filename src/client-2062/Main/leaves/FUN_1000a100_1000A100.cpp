// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000A100 .. +0x15F bytes.
extern "C" __declspec(naked) void FUN_1000a100_1000A100() {
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff8h
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov edi, ecx
        xor eax, eax
        mov ecx, dword ptr [edi + 4bch]
        mov dword ptr [esp + 18h], eax
        test ecx, ecx
        ; Exact mapped bytes 0F 84 36 01 00 00: je 0x1000a258
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [edi + 4c8h]
        test esi, esi
        ; Exact mapped bytes 0F 84 28 01 00 00: je 0x1000a258
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 4cch]
        cmp edx, -1
        ; Exact mapped bytes 0F 84 19 01 00 00: je 0x1000a258
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, edx
        and edx, 0ffh
        sar ecx, 10h
        and ecx, 0fh
        mov dword ptr [esp + 1ch], edx
        shl ecx, 4
        add ecx, esi
        mov edx, dword ptr [ecx + 0f84h]
        test edx, edx
        ; Exact mapped bytes 0F 84 F4 00 00 00: je 0x1000a258
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 0f7ch]
        mov dword ptr [esp + 14h], 5f5e100h
        test ecx, ecx
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes 0F 84 DA 00 00 00: je 0x1000a258
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ecx + 0ch]
        mov edx, dword ptr [esi + 454h]
        test edx, edx
        ; Exact mapped bytes 0F 85 BA 00 00 00: jne 0x1000a249
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 1ch]
        mov ebx, dword ptr [esi + 78h]
        cmp ebx, edx
        ; Exact mapped bytes 0F 85 AB 00 00 00: jne 0x1000a249
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        mov ecx, dword ptr [esi + 4]
        sub eax, ecx
        cdq
        mov ecx, eax
        mov eax, 57619f1h
        xor ecx, edx
        sub ecx, edx
        mov edx, dword ptr [esi + 4a0h]
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 57619f1h
        mov ebx, edx
        mov edx, dword ptr [edi + 4a0h]
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        sub edx, ebx
        lea eax, [edx + edx*4]
        lea edx, [eax + eax*4]
        mov eax, 51eb851fh
        shl edx, 3
        imul edx
        mov eax, edx
        sar eax, 5
        mov edx, eax
        shr edx, 1fh
        add eax, edx
        cdq
        xor eax, edx
        sub eax, edx
        mov edx, eax
        imul edx, eax
        mov eax, ecx
        imul eax, ecx
        add edx, eax
        mov dword ptr [esp + 20h], edx
        ; Exact mapped bytes DB 44 24 20: fild dword ptr [esp + 0x20]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes DD 5C 24 20: fstp qword ptr [esp + 0x20]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x20
        mov ecx, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 20h]
        push ecx
        push edx
        ; Exact mapped bytes E8 85 25 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 77 25 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x25
        __asm _emit 0x16
        __asm _emit 0x00
        cmp eax, dword ptr [esp + 14h]
        ; Exact mapped bytes 7D 0C: jge 0x1000a241
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [esp + 14h], eax
        mov eax, esi
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes EB 04: jmp 0x1000a245
        __asm _emit 0xeb
        __asm _emit 0x04
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 10h]
        mov ecx, dword ptr [ecx + 8]
        test ecx, ecx
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes 0F 85 26 FF FF FF: jne 0x1000a17e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
