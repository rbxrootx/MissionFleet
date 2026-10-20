// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58724F20 .. +0x140 bytes.
extern "C" __declspec(naked) void FUN_58724f20_58724F20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [eax + 13a7h], cl
        mov byte ptr [ebp - 1], 0
        ; Exact mapped bytes EB 09: jmp 0x58724f44
        __asm _emit 0xeb
        __asm _emit 0x09
        mov dl, byte ptr [ebp - 1]
        add dl, 1
        mov byte ptr [ebp - 1], dl
        movzx eax, byte ptr [ebp - 1]
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 0a0h]
        cmp eax, edx
        ; Exact mapped bytes 0F 8D 00 01 00 00: jge 0x5872505a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebp - 1]
        movzx ecx, byte ptr [ebp + 8]
        cmp eax, ecx
        ; Exact mapped bytes 7C 0F: jl 0x58724f75
        __asm _emit 0x7c
        __asm _emit 0x0f
        movzx edx, byte ptr [ebp - 1]
        movzx eax, byte ptr [ebp + 8]
        add eax, 5
        cmp edx, eax
        ; Exact mapped bytes 7C 21: jl 0x58724f96
        __asm _emit 0x7c
        __asm _emit 0x21
        movzx ecx, byte ptr [ebp - 1]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0da4h]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 00 10 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 BF 00 00 00: jmp 0x58725055
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [ebp - 1]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0da4h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 FE 70 D6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x70
        __asm _emit 0xd6
        __asm _emit 0xff
        add eax, 3ah
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 FD 19 D6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x19
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx ecx, byte ptr [ebp - 1]
        movzx edx, byte ptr [ebp + 8]
        sub ecx, edx
        imul ecx, ecx, 44h
        lea edx, [eax + ecx + 20h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 39 06 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x06
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        movzx edx, byte ptr [ebp - 1]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 11a4h], 0
        ; Exact mapped bytes 74 21: je 0x5872501a
        __asm _emit 0x74
        __asm _emit 0x21
        movzx ecx, byte ptr [ebp - 1]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0da4h]
        mov dword ptr [ebp - 1ch], eax
        push 100h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 29 05 09 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x05
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1F: jmp 0x58725039
        __asm _emit 0xeb
        __asm _emit 0x1f
        movzx ecx, byte ptr [ebp - 1]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0da4h]
        mov dword ptr [ebp - 20h], eax
        push 80h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 08 05 09 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        movzx ecx, byte ptr [ebp - 1]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0da4h]
        mov dword ptr [ebp - 24h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 3C 0F D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E1 FE FF FF: jmp 0x58724f3b
        __asm _emit 0xe9
        __asm _emit 0xe1
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
