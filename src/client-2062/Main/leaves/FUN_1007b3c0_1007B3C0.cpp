// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1007B3C0 .. +0x15C bytes.
extern "C" __declspec(naked) void FUN_1007b3c0_1007B3C0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        and eax, 0ffffh
        cmp eax, 3
        ; Exact mapped bytes 0F 87 42 01 00 00: ja 0x1007b514
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 1C B5 07 10: jmp dword ptr [eax*4 + 0x1007b51c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0xb5
        __asm _emit 0x07
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 198h]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax + 0b5ch], edx
        mov eax, dword ptr [esp + 0ch]
        mov dword ptr [ecx + 1ach], eax
        mov eax, dword ptr [ecx + 198h]
        mov edx, dword ptr [eax + 0b5ch]
        test edx, edx
        ; Exact mapped bytes 75 06: jne 0x1007b409
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 66 C7 40 7A 00 00: mov word ptr [eax + 0x7a], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 134h]
        test byte ptr [edx + 24h], 1
        ; Exact mapped bytes 0F 84 FB 00 00 00: je 0x1007b514
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 124h]
        or byte ptr [eax + 24h], 0fh
        ; Exact mapped bytes E8 08 01 00 00: call 0x1007b530
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 198h]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax + 0b60h], edx
        mov eax, dword ptr [esp + 0ch]
        mov dword ptr [ecx + 1b0h], eax
        mov eax, dword ptr [ecx + 198h]
        mov edx, dword ptr [eax + 0b60h]
        test edx, edx
        ; Exact mapped bytes 75 06: jne 0x1007b45b
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 66 C7 40 7C 00 00: mov word ptr [eax + 0x7c], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 134h]
        test byte ptr [edx + 24h], 1
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x1007b514
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 128h]
        or byte ptr [eax + 24h], 0fh
        ; Exact mapped bytes E8 B6 00 00 00: call 0x1007b530
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 198h]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax + 0b68h], edx
        mov eax, dword ptr [esp + 0ch]
        mov dword ptr [ecx + 1b4h], eax
        mov eax, dword ptr [ecx + 198h]
        mov edx, dword ptr [eax + 0b68h]
        test edx, edx
        ; Exact mapped bytes 75 09: jne 0x1007b4b0
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 66 C7 80 80 00 00 00 00 00: mov word ptr [eax + 0x80], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 134h]
        test byte ptr [edx + 24h], 1
        ; Exact mapped bytes 74 58: je 0x1007b514
        __asm _emit 0x74
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 12ch]
        or byte ptr [eax + 24h], 0fh
        ; Exact mapped bytes E8 65 00 00 00: call 0x1007b530
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 198h]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax + 0b64h], edx
        mov eax, dword ptr [esp + 0ch]
        mov dword ptr [ecx + 1b8h], eax
        mov eax, dword ptr [ecx + 198h]
        mov edx, dword ptr [eax + 0b64h]
        test edx, edx
        ; Exact mapped bytes 75 06: jne 0x1007b4fe
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 66 C7 40 7E 00 00: mov word ptr [eax + 0x7e], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 134h]
        test byte ptr [edx + 24h], 1
        ; Exact mapped bytes 74 0A: je 0x1007b514
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx + 130h]
        or byte ptr [eax + 24h], 0fh
        ; Exact mapped bytes E8 17 00 00 00: call 0x1007b530
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
