// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00482790 .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_00482790_00482790() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 3B 05 DC 8A 68 00: cmp eax, dword ptr [0x688adc]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xdc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 73 22: jae 0x4827c1
        __asm _emit 0x73
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        sar ecx, 5
        mov edx, dword ptr [ebp + 8]
        and edx, 1fh
        imul edx, edx, 24h
        mov eax, dword ptr [ecx*4 + 6889a0h]
        ; Exact mapped bytes 0F BE 4C 10 04: movsx ecx, byte ptr [eax + edx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x04
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 75 13: jne 0x4827d4
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes E8 BA AE FE FF: call 0x46d680
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 9
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x48285e
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 D3 DC FF FF: call 0x4804b0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        sar eax, 5
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov edx, dword ptr [eax*4 + 6889a0h]
        ; Exact mapped bytes 0F BE 44 0A 04: movsx eax, byte ptr [edx + ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x04
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x48283d
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 25 DB FF FF: call 0x480330
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes FF 15 34 B9 68 00: call dword ptr [0x68b934]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x482824
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 07: jmp 0x48282b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 02: jne 0x482833
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 1C: jmp 0x48284f
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 58 AE FE FF: call 0x46d690
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [eax], edx
        ; Exact mapped bytes E8 3E AE FE FF: call 0x46d680
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 9
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 E8 DC FF FF: call 0x480540
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
