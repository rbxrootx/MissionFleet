// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585400F0 .. +0x200 bytes.
extern "C" __declspec(naked) void FUN_585400f0_585400F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 A1 BF F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xbf
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 250h]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 0F 85 80 00 00 00: jne 0x585401a0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a0h]
        ; Exact mapped bytes E8 22 15 F9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x15
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 25ch]
        xor edx, 55h
        sub eax, edx
        xor eax, 55h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 78 02 00 00: mov word ptr [ecx + 0x278], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 78 02 00 00: movsx eax, word ptr [edx + 0x278]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 23: jle 0x5854017a
        __asm _emit 0x7e
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF B1 78 02 00 00: movsx esi, word ptr [ecx + 0x278]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xb1
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, 55h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 6E BD F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xbd
        __asm _emit 0xf4
        __asm _emit 0xff
        imul esi, eax
        mov dword ptr [ebp - 8], esi
        ; Exact mapped bytes EB 24: jmp 0x5854019e
        __asm _emit 0xeb
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 78 02 00 00: movsx ecx, word ptr [eax + 0x278]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, 55h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 274h]
        mov edx, dword ptr [ebp - 4]
        imul ecx, dword ptr [edx + eax*4 + 27ch]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 5E: jmp 0x585401fe
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a0h]
        ; Exact mapped bytes E8 A2 14 F9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x14
        __asm _emit 0xf9
        __asm _emit 0xff
        xor eax, 55h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 78 02 00 00: mov word ptr [ecx + 0x278], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF B2 78 02 00 00: movsx esi, word ptr [edx + 0x278]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xb2
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, 55h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 0A BD F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xbd
        __asm _emit 0xf4
        __asm _emit 0xff
        imul esi, eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 25ch]
        xor edx, 55h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 274h]
        mov eax, dword ptr [ebp - 4]
        imul edx, dword ptr [eax + ecx*4 + 27ch]
        sub esi, edx
        mov dword ptr [ebp - 8], esi
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1a0h]
        mov dword ptr [ebp - 0ch], edx
        push 64h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EC C3 FA FF: call 0x584ec600
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xc3
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 19h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 10h], eax
        push 0eeeeeeh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AA 5E F4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x5e
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 1ah
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 14h], ecx
        push 0eeeeeeh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 88 5E F4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x5e
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6C 6D F9 FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x6d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 05 6E F9 FF: call 0x584d7070
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x6e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5E 8B 10 00: call 0x58648dd0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x8b
        __asm _emit 0x10
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7F 3B: jg 0x585402b2
        __asm _emit 0x7f
        __asm _emit 0x3b
        mov edx, 4
        imul eax, edx, 1bh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 18h], edx
        push 0eeeeeeh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 47 5E F4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x5e
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 1ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 91 F5 F5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xf5
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 39: jmp 0x585402eb
        __asm _emit 0xeb
        __asm _emit 0x39
        mov edx, 4
        imul eax, edx, 1bh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 20h], edx
        push 0eeh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 0C 5E F4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x5e
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 24h], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 56 F5 F5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf5
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
