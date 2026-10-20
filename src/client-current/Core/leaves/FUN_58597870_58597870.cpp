// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58597870 .. +0x105 bytes.
extern "C" __declspec(naked) void FUN_58597870_58597870() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 20h], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 134h], 0
        ; Exact mapped bytes 75 05: jne 0x5859789a
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 D7 00 00 00: jmp 0x58597971
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585978ac
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7D 37: jge 0x585978e9
        __asm _emit 0x7d
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 134h]
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 14 E6 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xe6
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 148h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FA E5 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xe5
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BA: jmp 0x585978a3
        __asm _emit 0xeb
        __asm _emit 0xba
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0fch], 0c8h
        ; Exact mapped bytes 75 79: jne 0x58597971
        __asm _emit 0x75
        __asm _emit 0x79
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a06h]
        movzx ecx, word ptr [eax*2 + 58902e9ah]
        test ecx, ecx
        ; Exact mapped bytes 74 63: je 0x58597971
        __asm _emit 0x74
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a06h]
        cmp dword ptr [eax*8 + 58902ecch], -1
        ; Exact mapped bytes 74 4F: je 0x58597971
        __asm _emit 0x74
        __asm _emit 0x4f
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58597934
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes 7D 37: jge 0x58597971
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 134h]
        mov dword ptr [ebp - 18h], ecx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 8C E5 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe5
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 148h]
        mov dword ptr [ebp - 1ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 72 E5 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xe5
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BA: jmp 0x5859792b
        __asm _emit 0xeb
        __asm _emit 0xba
        mov esp, ebp
        pop ebp
        ret
    }
}
