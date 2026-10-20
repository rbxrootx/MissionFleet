// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000D020 .. +0x1B3 bytes.
extern "C" __declspec(naked) void FUN_1000d020_1000D020() {
    __asm {
        sub esp, 18h
        mov eax, dword ptr [ecx + 1ch]
        push ebx
        xor ebx, ebx
        cmp eax, 4
        mov dword ptr [esp + 8], ecx
        mov dword ptr [esp + 4], ebx
        ; Exact mapped bytes 76 09: jbe 0x1000d03f
        __asm _emit 0x76
        __asm _emit 0x09
        xor eax, eax
        pop ebx
        add esp, 18h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 10h]
        push edi
        mov edi, dword ptr [ecx + 0ch]
        cmp edi, eax
        ; Exact mapped bytes 0F 84 72 01 00 00: je 0x1000d1c0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        mov ebp, dword ptr [esp + 34h]
        push esi
        mov esi, dword ptr [esp + 2ch]
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx + 1ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 B5 00 00 00: jne 0x1000d11a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 96 51 FF FF: call 0x10002200
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 3C 01 00 00: je 0x1000d1ae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 47 5E FF FF: call 0x10002ec0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 2D 01 00 00: je 0x1000d1ae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [esp + 18h], eax
        mov eax, dword ptr [esp + 30h]
        and eax, 80000003h
        mov dword ptr [esp + 1ch], ecx
        ; Exact mapped bytes 79 05: jns 0x1000d09e
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        cmp eax, 3
        ; Exact mapped bytes 77 5B: ja 0x1000d0fe
        __asm _emit 0x77
        __asm _emit 0x5b
        ; Exact mapped bytes FF 24 85 D4 D1 00 10: jmp dword ptr [eax*4 + 0x1000d1d4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x10
        mov edx, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 1ch]
        mov eax, 12ch
        add edx, eax
        add ecx, eax
        mov dword ptr [esp + 18h], edx
        ; Exact mapped bytes EB 39: jmp 0x1000d0fa
        __asm _emit 0xeb
        __asm _emit 0x39
        mov edx, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 1ch]
        mov eax, 12ch
        sub edx, eax
        add ecx, eax
        mov dword ptr [esp + 18h], edx
        ; Exact mapped bytes EB 22: jmp 0x1000d0fa
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [esp + 18h]
        mov eax, 12ch
        sub edx, eax
        ; Exact mapped bytes EB 0B: jmp 0x1000d0f0
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, dword ptr [esp + 18h]
        mov eax, 12ch
        add edx, eax
        mov ecx, dword ptr [esp + 1ch]
        mov dword ptr [esp + 18h], edx
        sub ecx, eax
        mov dword ptr [esp + 1ch], ecx
        mov edx, dword ptr [esp + 34h]
        mov ecx, dword ptr [edi]
        push ebp
        lea eax, [esp + 1ch]
        push edx
        push eax
        push esi
        ; Exact mapped bytes E8 CF 5D FF FF: call 0x10002ee0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        add dword ptr [esp + 10h], eax
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x1000d1ae
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 1ch]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [esp + 20h], eax
        mov edx, dword ptr [ecx + 1ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [esp + 24h], eax
        mov eax, ebx
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x1000d13c
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        cmp eax, 3
        ; Exact mapped bytes 77 5B: ja 0x1000d19c
        __asm _emit 0x77
        __asm _emit 0x5b
        ; Exact mapped bytes FF 24 85 E4 D1 00 10: jmp dword ptr [eax*4 + 0x1000d1e4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x10
        mov edx, dword ptr [esp + 20h]
        mov eax, 96h
        add edx, eax
        mov dword ptr [esp + 20h], edx
        mov edx, dword ptr [esp + 24h]
        add edx, eax
        ; Exact mapped bytes EB 39: jmp 0x1000d198
        __asm _emit 0xeb
        __asm _emit 0x39
        mov edx, dword ptr [esp + 20h]
        mov eax, 96h
        sub edx, eax
        mov dword ptr [esp + 20h], edx
        mov edx, dword ptr [esp + 24h]
        add edx, eax
        ; Exact mapped bytes EB 22: jmp 0x1000d198
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [esp + 20h]
        mov eax, 96h
        sub edx, eax
        ; Exact mapped bytes EB 0B: jmp 0x1000d18e
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, dword ptr [esp + 20h]
        mov eax, 96h
        add edx, eax
        mov dword ptr [esp + 20h], edx
        mov edx, dword ptr [esp + 24h]
        sub edx, eax
        mov dword ptr [esp + 24h], edx
        mov edx, dword ptr [esp + 34h]
        push ebp
        lea eax, [esp + 24h]
        push edx
        push eax
        push esi
        inc ebx
        ; Exact mapped bytes E8 32 5D FF FF: call 0x10002ee0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 14h]
        add edi, 4
        cmp edi, dword ptr [ecx + 10h]
        ; Exact mapped bytes 0F 85 9A FE FF FF: jne 0x1000d058
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        pop ebp
        mov eax, dword ptr [esp + 8]
        pop edi
        mov dword ptr [ecx + 1ch], 4
        pop ebx
        add esp, 18h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
