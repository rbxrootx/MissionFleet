// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878FA60 .. +0xF3 bytes.
extern "C" __declspec(naked) void FUN_5878fa60_5878FA60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 0ch], ecx
        movzx eax, word ptr [ebp + 8]
        movzx ecx, word ptr [ebp + 0ch]
        add eax, ecx
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        movzx edx, word ptr [ebp - 4]
        cmp edx, 1
        ; Exact mapped bytes 7D 05: jge 0x5878fa85
        __asm _emit 0x7d
        __asm _emit 0x05
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x5878fb4d
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 4]
        mov ecx, 8
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 A4 15 0A 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x15
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 10h], eax
        movzx ecx, word ptr [ebp - 4]
        shl ecx, 3
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 D1 CD 0B 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xcd
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5878fad4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        movzx edx, word ptr [ebp - 4]
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 7D 23: jge 0x5878fb00
        __asm _emit 0x7d
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*8 + 4]
        push ecx
        mov edx, dword ptr [eax + edx*8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 33 3A 00 00: call 0x58793530
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CB: jmp 0x5878facb
        __asm _emit 0xeb
        __asm _emit 0xcb
        movzx eax, word ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax*8]
        mov dword ptr [ebp - 14h], edx
        movzx eax, word ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 7E 19: jle 0x5878fb2e
        __asm _emit 0x7e
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        movzx edx, word ptr [ebp + 0ch]
        push edx
        movzx eax, word ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 15 EE FF FF: call 0x5878e940
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0D: jmp 0x5878fb3b
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B6 ED FF FF: call 0x5878e8f0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 01 15 0A 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x15
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
