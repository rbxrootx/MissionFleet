// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052645D .. +0x1BC bytes.
extern "C" __declspec(naked) void FUN_0052645d_0052645D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 8E 6F FC FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x6f
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 0a8h], 0
        push 5b3h
        push 5c8174h
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 64h
        ; Exact mapped bytes E8 41 C1 00 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, eax, 30h
        push eax
        ; Exact mapped bytes E8 8A 6B FC FF: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x6b
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 0a8h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 8ch]
        and edx, 2020h
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5264e5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 64h
        ; Exact mapped bytes E8 F1 C0 00 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 0F 8D 08 01 00 00: jge 0x526601
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 06 D9 00 00: call 0x533e0b
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 28h
        mov edx, dword ptr [ebp - 10h]
        add edx, 5ch
        push edx
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 30h
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, eax
        push ecx
        ; Exact mapped bytes E8 FE 2A F8 FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x2a
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 30h
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + edx], 30h
        push 584ce0h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4E 4B FD FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x4b
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x5265e4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 8ch
        ; Exact mapped bytes E8 2E AA 00 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 38: jne 0x52659a
        __asm _emit 0x75
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 8ch
        ; Exact mapped bytes E8 3A AA 00 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 30h
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + edx + 28h], eax
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 30h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 4]
        or ch, 10h
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 30h
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + edx + 4], ecx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 90h
        ; Exact mapped bytes E8 E4 A9 00 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 38: jne 0x5265e4
        __asm _emit 0x75
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 90h
        ; Exact mapped bytes E8 F0 A9 00 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 30h
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + ecx + 2ch], eax
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 30h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax + 4]
        or dh, 20h
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 30h
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + eax + 4], edx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 30h
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, eax
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 72 D1 FF FF: call 0x52376e
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 DB FE FF FF: jmp 0x5264dc
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 64h
        ; Exact mapped bytes E8 D5 BF 00 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 0a0h], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
