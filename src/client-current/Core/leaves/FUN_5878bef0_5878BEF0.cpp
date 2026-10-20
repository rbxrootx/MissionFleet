// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878BEF0 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_5878bef0_5878BEF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 0C 08 00 00: call 0x5878c710
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 20h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 13: jne 0x5878bf34
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 1F BE FF FF: call 0x58787d50
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5D: jmp 0x5878bf91
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 C4 EA FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 0bh]
        mov dword ptr [ebp - 14h], edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 B5 EA FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 0bh]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A6 EA FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 0ah]
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 97 EA FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 0ah]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D0 BD FF FF: call 0x58787d50
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 C0 BD FF FF: call 0x58787d50
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 E4 07 00 00: call 0x5878c780
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
