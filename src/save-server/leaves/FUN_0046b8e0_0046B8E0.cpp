// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046B8E0 .. +0x121 bytes.
extern "C" __declspec(naked) void FUN_0046b8e0_0046B8E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        ; Exact mapped bytes A1 98 DB 67 00: mov eax, dword ptr [0x67db98]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0xdb
        __asm _emit 0x67
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x46b908
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 7
        ; Exact mapped bytes 73 33: jae 0x46b941
        __asm _emit 0x73
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx*4]
        push ecx
        ; Exact mapped bytes E8 23 9E FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx*4 + 1ch]
        push ecx
        ; Exact mapped bytes E8 0E 9E FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        add eax, dword ptr [ebp - 8]
        lea edx, [eax + esi + 2]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB BE: jmp 0x46b8ff
        __asm _emit 0xeb
        __asm _emit 0xbe
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        push eax
        ; Exact mapped bytes E8 43 AE FF FF: call 0x466790
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x46b9f9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x46b975
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 7
        ; Exact mapped bytes 73 6F: jae 0x46b9ea
        __asm _emit 0x73
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 14h]
        mov byte ptr [eax], 3ah
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx*4]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 D3 9F FF FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 9A 9D FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        add ecx, eax
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov byte ptr [edx], 3ah
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx*4 + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 9C 9F FF FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 63 9D FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 14h]
        add edx, eax
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 82: jmp 0x46b96c
        __asm _emit 0xeb
        __asm _emit 0x82
        mov eax, dword ptr [ebp - 14h]
        mov byte ptr [eax], 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 4]
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
