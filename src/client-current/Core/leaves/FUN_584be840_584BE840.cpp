// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BE840 .. +0x262 bytes.
extern "C" __declspec(naked) void FUN_584be840_584BE840() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 9ch], 64h
        ; Exact mapped bytes 0F 8D AD 00 00 00: jge 0x584be906
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584be86b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 0a8h]
        ; Exact mapped bytes 0F 8D 84 00 00 00: jge 0x584be901
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 8ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 6ch], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 90h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a4h], eax
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + 60h], 3e8h
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 0a4h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 70h], ecx
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 6ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*8 + 1b0h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*8 + 1b4h], eax
        ; Exact mapped bytes E9 61 FF FF FF: jmp 0x584be862
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 4F 01 00 00: jmp 0x584bea55
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 9ch], 64h
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x584be99d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x584be928
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ecx + 0a8h]
        ; Exact mapped bytes 7D 62: jge 0x584be998
        __asm _emit 0x7d
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 8ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 6ch], ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 90h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 70h], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*8 + 1b0h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*8 + 1b4h], eax
        ; Exact mapped bytes EB 87: jmp 0x584be91f
        __asm _emit 0xeb
        __asm _emit 0x87
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x584bea55
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 9ch], 64h
        ; Exact mapped bytes 0F 8E A8 00 00 00: jle 0x584bea55
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x584be9bf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ecx + 0a8h]
        ; Exact mapped bytes 0F 8D 84 00 00 00: jge 0x584bea55
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 8ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a4h], ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 90h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 70h], edx
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 5ch], 3e8h
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 0a4h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 6ch], eax
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 6ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*8 + 1b0h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*8 + 1b4h], eax
        ; Exact mapped bytes E9 61 FF FF FF: jmp 0x584be9b6
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x584bea67
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [eax + 0a8h]
        ; Exact mapped bytes 7D 29: jge 0x584bea9e
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0b0h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 1b0h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 95 09 FE FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x09
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C0: jmp 0x584bea5e
        __asm _emit 0xeb
        __asm _emit 0xc0
        mov esp, ebp
        pop ebp
        ret
    }
}
