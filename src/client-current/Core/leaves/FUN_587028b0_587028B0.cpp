// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587028B0 .. +0x25A bytes.
extern "C" __declspec(naked) void FUN_587028b0_587028B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0a0h], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D9 48 DD FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x48
        __asm _emit 0xdd
        __asm _emit 0xff
        movzx edx, word ptr [eax + 84h]
        cmp edx, 10h
        ; Exact mapped bytes 75 0E: jne 0x587028f1
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 65 E4 FF FF: call 0x58700d50
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9E 01 00 00: jmp 0x58702a8f
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58702903
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 7D 51: jge 0x5870295a
        __asm _emit 0x7d
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0dch]
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BD 35 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x35
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1c4h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A3 35 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x35
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0bch]
        mov dword ptr [ebp - 18h], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E9 CE D9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A0: jmp 0x587028fa
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5870296c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 0a0h]
        ; Exact mapped bytes 0F 8D 95 00 00 00: jge 0x58702a13
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 1D: jne 0x587029a1
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0bch]
        mov dword ptr [ebp - 1ch], eax
        push 5
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 A2 CE D9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xce
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1B: jmp 0x587029bc
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0bch]
        mov dword ptr [ebp - 20h], eax
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 85 CE D9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0dch]
        mov dword ptr [ebp - 24h], eax
        push 100h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 67 2B 0B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x2b
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 164h]
        mov dword ptr [ebp - 28h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 9D 35 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x35
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1e8h]
        mov dword ptr [ebp - 2ch], eax
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D3 34 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x34
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 50 FF FF FF: jmp 0x58702963
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 09: jmp 0x58702a1e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 7D 6B: jge 0x58702a8f
        __asm _emit 0x7d
        __asm _emit 0x6b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0bch]
        mov dword ptr [ebp - 30h], ecx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 02 CE D9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xce
        __asm _emit 0xd9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0dch]
        mov dword ptr [ebp - 34h], ecx
        push 32h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 E8 2A 0B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 164h]
        mov dword ptr [ebp - 38h], ecx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 1E 35 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x35
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 1e8h]
        mov dword ptr [ebp - 3ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 54 34 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x34
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 86: jmp 0x58702a15
        __asm _emit 0xeb
        __asm _emit 0x86
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 8
        ; Exact mapped bytes 74 0F: je 0x58702aad
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 9
        ; Exact mapped bytes 75 57: jne 0x58702b04
        __asm _emit 0x75
        __asm _emit 0x57
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58702abf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ecx + 0a0h]
        ; Exact mapped bytes 7D 37: jge 0x58702b04
        __asm _emit 0x7d
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 164h]
        mov dword ptr [ebp - 40h], edx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 A9 34 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x34
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 0dch]
        mov dword ptr [ebp - 44h], edx
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 DF 33 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x33
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B2: jmp 0x58702ab6
        __asm _emit 0xeb
        __asm _emit 0xb2
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
