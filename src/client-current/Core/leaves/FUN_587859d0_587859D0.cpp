// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587859D0 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_587859d0_587859D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 60h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 17: je 0x587859ff
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes E8 B3 07 00 00: call 0x587861a0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 34 03 00 00: call 0x58785d30
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 70: jmp 0x58785a6f
        __asm _emit 0xeb
        __asm _emit 0x70
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 64h]
        ; Exact mapped bytes E8 A6 FD FF FF: call 0x587857b0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 10h], ecx
        movzx edx, word ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 50 08 00 00: call 0x58786270
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58785a33
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        movzx ecx, word ptr [ebp + 10h]
        cmp dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 7D 27: jge 0x58785a63
        __asm _emit 0x7d
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 14h], eax
        imul esi, dword ptr [ebp - 8], 58h
        add esi, dword ptr [ebp + 14h]
        sub esp, 58h
        mov ecx, 16h
        mov edi, esp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F0 FC FF FF: call 0x58785750
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C7: jmp 0x58785a2a
        __asm _emit 0xeb
        __asm _emit 0xc7
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 68h]
        ; Exact mapped bytes E8 D2 F7 FF FF: call 0x58785240
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
