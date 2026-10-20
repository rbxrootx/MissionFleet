// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B8430 .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_585b8430_585B8430() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 09: jne 0x585b8448
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0eh
        ; Exact mapped bytes EB 25: jmp 0x585b846d
        __asm _emit 0xeb
        __asm _emit 0x25
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 09: jne 0x585b8457
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 11h
        ; Exact mapped bytes EB 16: jmp 0x585b846d
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 09: jne 0x585b8466
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 11h
        ; Exact mapped bytes EB 07: jmp 0x585b846d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0eh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 508h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 C6 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xc6
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 1
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 51 D8 F7 FF: call 0x58535cf0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xd8
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 508h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        push edx
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F C6 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xc6
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 1
        push 0
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 BC D8 F7 FF: call 0x58535d90
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd8
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 508h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 2
        push ecx
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA C5 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xc5
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 85 D7 F7 FF: call 0x58535c90
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
