// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587025C0 .. +0x1AF bytes.
extern "C" __declspec(naked) void FUN_587025c0_587025C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 18h], ecx
        xor eax, eax
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp - 18h]
        movzx edx, byte ptr [ecx + 1e4h]
        test edx, edx
        ; Exact mapped bytes 75 61: jne 0x5870263e
        __asm _emit 0x75
        __asm _emit 0x61
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x587025ef
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 8
        ; Exact mapped bytes 7D 44: jge 0x58702639
        __asm _emit 0x7d
        __asm _emit 0x44
        cmp dword ptr [ebp - 1ch], 3
        ; Exact mapped bytes 7E 09: jle 0x58702604
        __asm _emit 0x7e
        __asm _emit 0x09
        mov ecx, 8
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        imul edx, dword ptr [ebp - 1ch], 12h
        movzx eax, word ptr [ebp - 4]
        lea ecx, [edx + eax + 101h]
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + edx*4 + 1c4h]
        mov dword ptr [ebp - 20h], ecx
        push 8
        movzx edx, word ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 EA 2F 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x2f
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB AD: jmp 0x587025e6
        __asm _emit 0xeb
        __asm _emit 0xad
        ; Exact mapped bytes E9 AD 00 00 00: jmp 0x587026eb
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 4
        ; Exact mapped bytes EB 09: jmp 0x58702650
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 7D 3A: jge 0x58702690
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, 4
        imul edx, ecx, 12h
        movzx eax, word ptr [ebp - 4]
        lea ecx, [edx + eax + 101h]
        ; Exact mapped bytes 66 89 4D F4: mov word ptr [ebp - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + edx*4 + 1c4h]
        mov dword ptr [ebp - 24h], ecx
        push 8
        movzx edx, word ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 93 2F 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x2f
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB B7: jmp 0x58702647
        __asm _emit 0xeb
        __asm _emit 0xb7
        mov eax, 8
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x587026ab
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 7D 3A: jge 0x587026eb
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 14h]
        add edx, 4
        imul eax, edx, 12h
        movzx ecx, word ptr [ebp - 4]
        lea edx, [eax + ecx + 101h]
        ; Exact mapped bytes 66 89 55 F0: mov word ptr [ebp - 0x10], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + eax*4 + 1c4h]
        mov dword ptr [ebp - 28h], edx
        push 8
        movzx eax, word ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 38 2F 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x2f
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB B7: jmp 0x587026a2
        __asm _emit 0xeb
        __asm _emit 0xb7
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 2ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D6 37 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x37
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 30h], edx
        push 100h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 14 2E 0B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x2e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + ecx + 164h]
        mov dword ptr [ebp - 34h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 45 38 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x38
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + edx + 164h]
        mov dword ptr [ebp - 38h], ecx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 26 0B 00 00: call 0x58703290
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
