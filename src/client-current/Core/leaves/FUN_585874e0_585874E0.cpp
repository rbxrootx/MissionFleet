// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585874E0 .. +0xF6 bytes.
extern "C" __declspec(naked) void FUN_585874e0_585874E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DB D5 EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xd5
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C4 28 F4 FF: call 0x584c9dc0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x28
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx ecx, ax
        sub ecx, 1
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0a8h], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 0c4h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax + 0ach]
        ; Exact mapped bytes E8 92 F4 EF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xf4
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58587543
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 4
        ; Exact mapped bytes 0F 8D 83 00 00 00: jge 0x585875d0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 0ach]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 67 D5 EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xd5
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E8 F6 EF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BE 7F F1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x7f
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        ; Exact mapped bytes E8 1C E3 F0 FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xe3
        __asm _emit 0xf0
        __asm _emit 0xff
        imul eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E6 E0 22 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xe0
        __asm _emit 0x22
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 6A FF FF FF: jmp 0x5858753a
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
