// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584D14A0 .. +0x14C bytes.
extern "C" __declspec(naked) void FUN_584d14a0_584D14A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7E 01 00 00: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 0F 8D 2A 01 00 00: jge 0x584d15e5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 0fch]
        cmp edx, dword ptr [ecx + 0f8h]
        ; Exact mapped bytes 0F 85 12 01 00 00: jne 0x584d15e5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov edx, dword ptr [ebp + 8]
        movzx eax, byte ptr [ecx + edx]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A2 01 00 00: call 0x584d1690
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x584d157c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        and edx, 80h
        ; Exact mapped bytes 74 6B: je 0x584d157c
        __asm _emit 0x74
        __asm _emit 0x6b
        push -2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 05 28 00 00: call 0x584d3d20
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x584d152d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 84h]
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7F 21: jg 0x584d1565
        __asm _emit 0x7f
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov ecx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 8]
        mov al, byte ptr [eax + esi + 2]
        mov byte ptr [edx + ecx], al
        ; Exact mapped bytes EB BF: jmp 0x584d1524
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        sub edx, 2
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 94h], edx
        ; Exact mapped bytes EB 69: jmp 0x584d15e5
        __asm _emit 0xeb
        __asm _emit 0x69
        push -1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9A 27 00 00: call 0x584d3d20
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 09: jmp 0x584d1598
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 84h]
        cmp dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 7F 21: jg 0x584d15d0
        __asm _emit 0x7f
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov edx, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp - 0ch]
        mov cl, byte ptr [ecx + esi + 1]
        mov byte ptr [eax + edx], cl
        ; Exact mapped bytes EB BF: jmp 0x584d158f
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 94h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 94h], eax
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
