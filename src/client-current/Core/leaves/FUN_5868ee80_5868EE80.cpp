// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5868EE80 .. +0x1BE bytes.
extern "C" __declspec(naked) void FUN_5868ee80_5868EE80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC 67 E0 FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x67
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x5868eea6
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x5868eeb8
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 738h]
        ; Exact mapped bytes 75 05: jne 0x5868eebd
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 7D 01 00 00: jmp 0x5868f03a
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 738h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC 7A DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x7a
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A5 D5 DF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xd5
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx edx, ax
        test edx, edx
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x5868ef77
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 0b4h
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB EB EB FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xeb
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b4h], 0
        ; Exact mapped bytes 7E 34: jle 0x5868ef46
        __asm _emit 0x7e
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        sub edx, 19h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b4h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 0b4h
        push eax
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B EE EB FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xee
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0c0h]
        sub eax, dword ptr [edx + 0b4h]
        cmp eax, 7dh
        ; Exact mapped bytes 7E 1A: jle 0x5868ef77
        __asm _emit 0x7e
        __asm _emit 0x1a
        push 24h
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 2F 0E 00: call 0x58771ea0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x2f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c0h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 7A DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x7a
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F7 D4 DF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xd4
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx edx, ax
        test edx, edx
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x5868f029
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 7A DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x7a
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4A 67 E0 FF: call 0x584956f0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x67
        __asm _emit 0xe0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 7F: jne 0x5868f029
        __asm _emit 0x75
        __asm _emit 0x7f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 0b4h
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 EB EB FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xeb
        __asm _emit 0xeb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 0c4h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b4h], ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0b4h]
        cmp eax, dword ptr [edx + 0b8h]
        ; Exact mapped bytes 7E 12: jle 0x5868f00a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b8h]
        mov dword ptr [ecx + 0b4h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 0b4h
        push eax
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 ED EB FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xed
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FF ED FF FF: call 0x5868de30
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 77 EE FF FF: call 0x5868deb0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
