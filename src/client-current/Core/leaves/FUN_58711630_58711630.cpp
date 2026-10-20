// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58711630 .. +0x101 bytes.
extern "C" __declspec(naked) void FUN_58711630_58711630() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F2 3B 0A 00: call 0x587b5240
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x3b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DA 3B 0A 00: call 0x587b5240
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x3b
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        movzx eax, byte ptr [ebp + 0ch]
        cmp eax, 1
        ; Exact mapped bytes 75 16: jne 0x58711686
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BB 3B 0A 00: call 0x587b5240
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x3b
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58711698
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 64h
        ; Exact mapped bytes 7D 1F: jge 0x587116bd
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 20f8h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 86 3B 0A 00: call 0x587b5240
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x3b
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D2: jmp 0x5871168f
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x587116cf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 7D 1F: jge 0x587116f4
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 8ch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 4F 3B 0A 00: call 0x587b5240
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x3b
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D2: jmp 0x587116c6
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58711706
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 3
        ; Exact mapped bytes 7D 1F: jge 0x5871172b
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 2418h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 18 3B 0A 00: call 0x587b5240
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x3b
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D2: jmp 0x587116fd
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
