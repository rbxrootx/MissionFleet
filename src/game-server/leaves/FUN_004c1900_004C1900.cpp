// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C1900 .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_004c1900_004C1900() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 3B 05 20 F2 5D 00: cmp eax, dword ptr [0x5df220]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 73 22: jae 0x4c1931
        __asm _emit 0x73
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        sar ecx, 5
        mov edx, dword ptr [ebp + 8]
        and edx, 1fh
        imul edx, edx, 24h
        mov eax, dword ptr [ecx*4 + 5df120h]
        ; Exact mapped bytes 0F BE 4C 10 04: movsx ecx, byte ptr [eax + edx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x04
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 75 13: jne 0x4c1944
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes E8 3A F9 FE FF: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 9
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x4c19ce
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 F3 FE FF FF: call 0x4c1840
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        sar eax, 5
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov edx, dword ptr [eax*4 + 5df120h]
        ; Exact mapped bytes 0F BE 44 0A 04: movsx eax, byte ptr [edx + ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x04
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x4c19ad
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 45 FD FF FF: call 0x4c16c0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes FF 15 14 23 5E 00: call dword ptr [0x5e2314]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x4c1994
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 07: jmp 0x4c199b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 02: jne 0x4c19a3
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 1C: jmp 0x4c19bf
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 D8 F8 FE FF: call 0x4b1280
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [eax], edx
        ; Exact mapped bytes E8 BE F8 FE FF: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 9
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 08 FF FF FF: call 0x4c18d0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
