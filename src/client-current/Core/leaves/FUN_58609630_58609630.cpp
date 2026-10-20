// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58609630 .. +0x416 bytes.
extern "C" __declspec(naked) void FUN_58609630_58609630() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a8h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 0ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8A C8 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xc8
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 77 C8 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xc8
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 14h], edx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 64 C8 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xc8
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 18h], ecx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 51 C8 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc8
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 1ch], eax
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 3E C8 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xc8
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 20h], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 2B C8 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xc8
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 24h], ecx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 18 C8 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xc8
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 28h], eax
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 02 C8 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xc8
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 2ch], edx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 EF C7 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xc7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 30h], ecx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 D9 C7 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xc7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 34h], eax
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 C3 C7 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 38h], edx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 AD C7 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xc7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 3ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 97 C7 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xc7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 40h], eax
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 81 C7 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xc7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 44h], edx
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 6B C7 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xc7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 48h], ecx
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 55 C7 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xc7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 4ch], eax
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 3F C7 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xc7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 50h], edx
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 29 C7 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xc7
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586097ca
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 0F 8D D6 00 00 00: jge 0x586098aa
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0c4h]
        mov dword ptr [ebp - 54h], eax
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 F2 C6 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xc6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0cch]
        mov dword ptr [ebp - 58h], eax
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 D8 C6 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xc6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0d4h]
        mov dword ptr [ebp - 5ch], eax
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 BE C6 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xc6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0fch]
        mov dword ptr [ebp - 60h], eax
        push 0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 A4 C6 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0dch]
        mov dword ptr [ebp - 64h], eax
        push 0
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 8A C6 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xc6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0e4h]
        mov dword ptr [ebp - 68h], eax
        push 0
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 70 C6 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xc6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0ech]
        mov dword ptr [ebp - 6ch], eax
        push 0
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 56 C6 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xc6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0f4h]
        mov dword ptr [ebp - 70h], eax
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 3C C6 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xc6
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 17 FF FF FF: jmp 0x586097c1
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 104h]
        mov dword ptr [ebp - 74h], edx
        push 0
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 20 C6 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xc6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10ch]
        mov dword ptr [ebp - 78h], ecx
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 0A C6 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xc6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 108h]
        mov dword ptr [ebp - 7ch], eax
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 F4 C5 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xc5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 110h]
        mov dword ptr [ebp - 80h], edx
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 DE C5 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xc5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 120h]
        mov dword ptr [ebp - 84h], ecx
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 C2 C5 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xc5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 124h]
        mov dword ptr [ebp - 88h], eax
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 A6 C5 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xc5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 128h]
        mov dword ptr [ebp - 8ch], edx
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 8A C5 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xc5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12ch]
        mov dword ptr [ebp - 90h], ecx
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 6E C5 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xc5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 130h]
        mov dword ptr [ebp - 94h], eax
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 52 C5 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xc5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 134h]
        mov dword ptr [ebp - 98h], edx
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 36 C5 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xc5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 138h]
        mov dword ptr [ebp - 9ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 1A C5 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xc5
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586099d9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 63: jge 0x58609a42
        __asm _emit 0x7d
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 13ch]
        mov dword ptr [ebp - 0a0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 E1 C4 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xc4
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 15ch]
        mov dword ptr [ebp - 0a4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 C1 C4 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xc4
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 17ch]
        mov dword ptr [ebp - 0a8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 A1 C4 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 8E: jmp 0x586099d0
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov esp, ebp
        pop ebp
        ret
    }
}
