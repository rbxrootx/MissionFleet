// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58700D50 .. +0x1FE bytes.
extern "C" __declspec(naked) void FUN_58700d50_58700D50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58700d6b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 7D 6B: jge 0x58700ddc
        __asm _emit 0x7d
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1c4h]
        mov dword ptr [ebp - 0ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 55 51 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x51
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1e8h]
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3B 51 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x51
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0bch]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 81 EA D9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xea
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 164h]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B7 24 00 00: call 0x58703290
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 86: jmp 0x58700d62
        __asm _emit 0xeb
        __asm _emit 0x86
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58700dee
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 3
        ; Exact mapped bytes 7D 28: jge 0x58700e1c
        __asm _emit 0x7d
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 1c4h]
        mov dword ptr [ebp - 1ch], ecx
        imul edx, dword ptr [ebp - 4], 0ch
        add edx, 2
        push edx
        push 109h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 07 48 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x48
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C9: jmp 0x58700de5
        __asm _emit 0xeb
        __asm _emit 0xc9
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx + 1c4h]
        mov dword ptr [ebp - 20h], eax
        push 2
        push 11bh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E0 47 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x47
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 4
        ; Exact mapped bytes EB 09: jmp 0x58700e53
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 7
        ; Exact mapped bytes 7D 2D: jge 0x58700e86
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 1c4h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 4]
        sub edx, 4
        imul eax, edx, 0ch
        add eax, 2
        push eax
        push 12dh
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 9D 47 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x47
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C4: jmp 0x58700e4a
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov ecx, 4
        imul edx, ecx, 7
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 1c4h]
        mov dword ptr [ebp - 28h], ecx
        push 2
        push 11bh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 76 47 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x47
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58700ebd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes 7D 37: jge 0x58700f02
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 164h]
        mov dword ptr [ebp - 2ch], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 AB 50 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x50
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0dch]
        mov dword ptr [ebp - 30h], ecx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 E1 4F D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x4f
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B2: jmp 0x58700eb4
        __asm _emit 0xeb
        __asm _emit 0xb2
        ; Exact mapped bytes EB 09: jmp 0x58700f0d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 7D 37: jge 0x58700f4a
        __asm _emit 0x7d
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 0dch]
        mov dword ptr [ebp - 34h], edx
        push 32h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 13 46 0B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x46
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 164h]
        mov dword ptr [ebp - 38h], edx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 49 50 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x50
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BA: jmp 0x58700f04
        __asm _emit 0xeb
        __asm _emit 0xba
        mov esp, ebp
        pop ebp
        ret
    }
}
