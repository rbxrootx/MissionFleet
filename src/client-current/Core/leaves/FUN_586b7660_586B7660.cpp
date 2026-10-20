// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586B7660 .. +0x155 bytes.
extern "C" __declspec(naked) void FUN_586b7660_586B7660() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        push 48h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 88h
        push eax
        ; Exact mapped bytes E8 95 57 19 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x57
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0d0h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0d4h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0d8h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0dch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0e0h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586b76d1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 84h]
        ; Exact mapped bytes 0F 8D CE 00 00 00: jge 0x586b77b1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 104h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 88 3A 10 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x3a
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 104h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 63 3A 10 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x3a
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 104h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 14h], ecx
        push -64h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 5E DE 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xde
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 104h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 18h], eax
        push -64h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 39 DE 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xde
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0e4h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 FF 39 10 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x39
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0e4h]
        mov dword ptr [ebp - 20h], eax
        push -64h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 05 DE 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xde
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 17 FF FF FF: jmp 0x586b76c8
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
