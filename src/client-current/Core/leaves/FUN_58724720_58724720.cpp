// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58724720 .. +0x142 bytes.
extern "C" __declspec(naked) void FUN_58724720_58724720() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 8], ecx
        mov byte ptr [ebp - 1], 0
        ; Exact mapped bytes EB 08: jmp 0x58724737
        __asm _emit 0xeb
        __asm _emit 0x08
        mov al, byte ptr [ebp - 1]
        add al, 1
        mov byte ptr [ebp - 1], al
        movzx ecx, byte ptr [ebp - 1]
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 0a0h]
        cmp ecx, eax
        ; Exact mapped bytes 0F 8D 0F 01 00 00: jge 0x5872485c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 15: je 0x58724768
        __asm _emit 0x74
        __asm _emit 0x15
        movzx ecx, byte ptr [ebp - 1]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 0fa4h], 0
        ; Exact mapped bytes 0F 85 EF 00 00 00: jne 0x58724857
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebp - 1]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 0da4h]
        mov dword ptr [ebp - 0ch], edx
        movzx eax, byte ptr [ebp - 1]
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + eax*4 + 6a4h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4F 17 D6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x17
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx eax, byte ptr [ebp - 1]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 0da4h]
        mov dword ptr [ebp - 10h], edx
        movzx eax, byte ptr [ebp - 1]
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [ecx + eax*2 + 8a4h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C6 16 D6 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x16
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx eax, byte ptr [ebp - 1]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 0da4h]
        mov dword ptr [ebp - 14h], edx
        push 100h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 68 0D 09 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x0d
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        movzx eax, byte ptr [ebp - 1]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*4 + 0a4h], 0
        ; Exact mapped bytes 74 29: je 0x58724813
        __asm _emit 0x74
        __asm _emit 0x29
        movzx edx, byte ptr [ebp - 1]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0a4h]
        mov dword ptr [ebp - 18h], ecx
        movzx edx, byte ptr [ebp - 1]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0da4h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5E A5 D8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xa5
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        movzx edx, byte ptr [ebp - 1]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0da4h]
        mov dword ptr [ebp - 1ch], ecx
        movzx edx, byte ptr [ebp - 1]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*8 + 2a4h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 F5 AB D7 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xab
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx edx, byte ptr [ebp - 1]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0da4h]
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 1A A8 DD FF: call 0x584ff070
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xa8
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D3 FE FF FF: jmp 0x5872472f
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
