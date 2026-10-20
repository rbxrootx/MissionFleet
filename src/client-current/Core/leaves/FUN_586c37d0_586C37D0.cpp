// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C37D0 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_586c37d0_586C37D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 22ch]
        ; Exact mapped bytes E8 D5 D3 0F 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xd3
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586c3800
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7D 1F: jge 0x586c3825
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 22ch]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6E DD 0F 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xdd
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D2: jmp 0x586c37f7
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 22ch]
        ; Exact mapped bytes E8 14 29 E8 FF: call 0x58546150
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x29
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 D9 0B 00: call 0x58781220
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xd9
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 34: je 0x586c388b
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 7F 36 FE FF: call 0x586a6ef0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b0h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 0b0h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 88h], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
