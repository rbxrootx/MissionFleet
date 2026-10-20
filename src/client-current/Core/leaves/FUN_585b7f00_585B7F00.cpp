// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B7F00 .. +0x45C bytes.
extern "C" __declspec(naked) void FUN_585b7f00_585B7F00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ach
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 0ach], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 48: jne 0x585b7f6b
        __asm _emit 0x75
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4f8h]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A7 DF EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xdf
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4fch]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 91 DF EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xdf
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 500h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 7B DF EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xdf
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 EB 03 00 00: jmp 0x585b8356
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4f8h]
        mov dword ptr [ebp - 20h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 5F DF EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xdf
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4fch]
        mov dword ptr [ebp - 24h], eax
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 49 DF EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xdf
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 500h]
        mov dword ptr [ebp - 28h], edx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 33 DF EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xdf
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        mov ecx, 18h
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 7C 90 27 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x90
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 10h], eax
        imul ecx, dword ptr [ebp + 8], 18h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 AC 48 29 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x48
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 500h]
        ; Exact mapped bytes E8 CB 88 20 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x88
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585b8008
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 83 2A 03 00 00: jae 0x585b833e
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x2a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 8], 18h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0eh
        ; Exact mapped bytes 0F 87 05 03 00 00: ja 0x585b8339
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 95 5C 83 5B 58: jmp dword ptr [edx*4 + 0x585b835c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0x83
        __asm _emit 0x5b
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 500h]
        mov dword ptr [ebp - 34h], ecx
        push 588ab438h
        ; Exact mapped bytes E8 9C 9F F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x9f
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        push -1
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 D8 DE 19 00: call 0x58755f40
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xde
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 CB 02 00 00: jmp 0x585b8339
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 500h]
        mov dword ptr [ebp - 3ch], ecx
        push 588ab464h
        ; Exact mapped bytes E8 6C 9F F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x9f
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        push -1
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 A8 DE 19 00: call 0x58755f40
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xde
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 9B 02 00 00: jmp 0x585b8339
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 500h]
        mov dword ptr [ebp - 44h], ecx
        push 588ab498h
        ; Exact mapped bytes E8 3C 9F F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x9f
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        push -1
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 78 DE 19 00: call 0x58755f40
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xde
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 6B 02 00 00: jmp 0x585b8339
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 500h]
        mov dword ptr [ebp - 4ch], ecx
        push 588ab4c4h
        ; Exact mapped bytes E8 0C 9F F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x9f
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        push -1
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 48 DE 19 00: call 0x58755f40
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xde
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 3B 02 00 00: jmp 0x585b8339
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 500h]
        mov dword ptr [ebp - 54h], ecx
        push 588ab500h
        ; Exact mapped bytes E8 DC 9E F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x9e
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        push -1
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 18 DE 19 00: call 0x58755f40
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xde
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 0B 02 00 00: jmp 0x585b8339
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 500h]
        mov dword ptr [ebp - 5ch], ecx
        push 588ab528h
        ; Exact mapped bytes E8 AC 9E F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x9e
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        push -1
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 E8 DD 19 00: call 0x58755f40
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 DB 01 00 00: jmp 0x585b8339
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 500h]
        mov dword ptr [ebp - 64h], ecx
        push 588ab558h
        ; Exact mapped bytes E8 7C 9E F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x9e
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        push -1
        mov edx, dword ptr [ebp - 60h]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 B8 DD 19 00: call 0x58755f40
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xdd
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 AB 01 00 00: jmp 0x585b8339
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 500h]
        mov dword ptr [ebp - 6ch], ecx
        push 588ab58ch
        ; Exact mapped bytes E8 4C 9E F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x9e
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        push -1
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 88 DD 19 00: call 0x58755f40
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xdd
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 7B 01 00 00: jmp 0x585b8339
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 500h]
        mov dword ptr [ebp - 74h], ecx
        push 588ab5b8h
        ; Exact mapped bytes E8 1C 9E F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x9e
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        push -1
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 58 DD 19 00: call 0x58755f40
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xdd
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 4B 01 00 00: jmp 0x585b8339
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 500h]
        mov dword ptr [ebp - 7ch], ecx
        push 588ab5e4h
        ; Exact mapped bytes E8 EC 9D F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x9d
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        push -1
        mov edx, dword ptr [ebp - 78h]
        push edx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 28 DD 19 00: call 0x58755f40
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xdd
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 1B 01 00 00: jmp 0x585b8339
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 500h]
        mov dword ptr [ebp - 84h], ecx
        push 588ab604h
        ; Exact mapped bytes E8 B9 9D F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x9d
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        push -1
        mov edx, dword ptr [ebp - 80h]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 F2 DC 19 00: call 0x58755f40
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xdc
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E5 00 00 00: jmp 0x585b8339
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 500h]
        mov dword ptr [ebp - 8ch], ecx
        push 588ab62ch
        ; Exact mapped bytes E8 83 9D F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x9d
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        push -1
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 B6 DC 19 00: call 0x58755f40
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xdc
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A9 00 00 00: jmp 0x585b8339
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 500h]
        mov dword ptr [ebp - 94h], ecx
        push 588ab658h
        ; Exact mapped bytes E8 47 9D F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x9d
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        push -1
        mov edx, dword ptr [ebp - 90h]
        push edx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 7A DC 19 00: call 0x58755f40
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xdc
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 70: jmp 0x585b8339
        __asm _emit 0xeb
        __asm _emit 0x70
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 500h]
        mov dword ptr [ebp - 9ch], ecx
        push 588ab684h
        ; Exact mapped bytes E8 0E 9D F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x9d
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        push -1
        mov edx, dword ptr [ebp - 98h]
        push edx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 41 DC 19 00: call 0x58755f40
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xdc
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 37: jmp 0x585b8339
        __asm _emit 0xeb
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 500h]
        mov dword ptr [ebp - 0a4h], ecx
        push 588ab6b0h
        ; Exact mapped bytes E8 D5 9C F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x9c
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        push -1
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 08 DC 19 00: call 0x58755f40
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xdc
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 C1 FC FF FF: jmp 0x585b7fff
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0a8h], eax
        mov ecx, dword ptr [ebp - 0a8h]
        push ecx
        ; Exact mapped bytes E8 F8 8C 27 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x8c
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
