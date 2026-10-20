// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587551E0 .. +0x3E2 bytes.
extern "C" __declspec(naked) void FUN_587551e0_587551E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x587551fd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 0F 8D 87 00 00 00: jge 0x5875528e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 30h], 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 0b0h]
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [edx + ecx], 0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*4 + 0c6ch]
        mov edx, 2
        imul eax, edx, 0
        mov edx, 55h
        ; Exact mapped bytes 66 89 14 01: mov word ptr [ecx + eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 0b0h]
        mov eax, 4
        shl eax, 0
        mov dword ptr [edx + eax], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*4 + 0c6ch]
        mov ecx, 2
        shl ecx, 0
        mov edx, 55h
        ; Exact mapped bytes 66 89 14 08: mov word ptr [eax + ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x08
        ; Exact mapped bytes E9 66 FF FF FF: jmp 0x587551f4
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 BA 02 00 00: je 0x58755552
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp - 4]
        add edi, 1f4h
        mov ecx, 2eh
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1f8h]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1f8h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1fch]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1fch], ecx
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 218h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A1 F5 FF FF: call 0x58754890
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 218h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CF F4 FF FF: call 0x587547d0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0B F3 FF FF: call 0x58754620
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 220h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C7 F3 FF FF: call 0x587546f0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 224h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 13 F2 FF FF: call 0x58754550
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 228h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7F 02 00 00: call 0x587555d0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 22ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DB F0 FF FF: call 0x58754440
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 230h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F7 EF FF FF: call 0x58754370
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 99 01 00 00: je 0x5875551d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 1f4h]
        shr eax, 1
        and eax, 1fh
        mov edx, 18h
        mul edx
        mov ecx, 0ffffffffh
        cmovb eax, ecx
        push eax
        ; Exact mapped bytes E8 9B BC 0D 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xbc
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 2c4h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1f4h]
        shr edx, 1
        and edx, 1fh
        imul eax, edx, 18h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2c4h]
        push eax
        ; Exact mapped bytes E8 B2 74 0F 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x74
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x587553f3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1f4h]
        shr eax, 1
        and eax, 1fh
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 0F 83 11 01 00 00: jae 0x5875551b
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        imul ecx, dword ptr [ebp - 8], 18h
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + ecx]
        push eax
        imul ecx, dword ptr [ebp - 8], 18h
        mov edx, dword ptr [ebp + 0ch]
        movzx eax, byte ptr [edx + ecx + 0eh]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 74 07 00 00: call 0x58755ba0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        imul ecx, dword ptr [ebp - 8], 18h
        mov edx, dword ptr [ebp + 0ch]
        movzx eax, byte ptr [edx + ecx + 0eh]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FE 7B D3 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x7b
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 CC 00 00 00: je 0x58755516
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        imul ecx, dword ptr [ebp - 8], 18h
        add ecx, dword ptr [ebp + 0ch]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax + 4]
        push ecx
        imul edx, dword ptr [ebp - 8], 18h
        mov eax, dword ptr [ebp + 0ch]
        movzx ecx, byte ptr [eax + edx + 0eh]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 49 F8 FF FF: call 0x58754cc0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        imul edx, dword ptr [ebp - 8], 18h
        add edx, dword ptr [ebp + 0ch]
        mov eax, 1
        imul ecx, eax, 0
        movzx edx, byte ptr [edx + ecx + 0ch]
        xor edx, 55h
        imul eax, dword ptr [ebp - 8], 18h
        mov ecx, dword ptr [ebp + 0ch]
        movzx eax, byte ptr [ecx + eax + 0eh]
        mov ecx, dword ptr [ebp - 4]
        lea eax, [ecx + eax*4 + 0c6ch]
        mov ecx, 2
        imul ecx, ecx, 0
        ; Exact mapped bytes 66 89 14 08: mov word ptr [eax + ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x08
        push 0
        push 1
        imul edx, dword ptr [ebp - 8], 18h
        add edx, dword ptr [ebp + 0ch]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax + 4]
        push ecx
        imul edx, dword ptr [ebp - 8], 18h
        mov eax, dword ptr [ebp + 0ch]
        movzx ecx, byte ptr [eax + edx + 0eh]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E3 F7 FF FF: call 0x58754cc0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        imul edx, dword ptr [ebp - 8], 18h
        add edx, dword ptr [ebp + 0ch]
        mov eax, 1
        shl eax, 0
        movzx ecx, byte ptr [edx + eax + 0ch]
        xor ecx, 55h
        imul edx, dword ptr [ebp - 8], 18h
        mov eax, dword ptr [ebp + 0ch]
        movzx edx, byte ptr [eax + edx + 0eh]
        mov eax, dword ptr [ebp - 4]
        lea edx, [eax + edx*4 + 0c6ch]
        mov eax, 2
        shl eax, 0
        ; Exact mapped bytes 66 89 0C 02: mov word ptr [edx + eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x02
        ; Exact mapped bytes E9 CF FE FF FF: jmp 0x587553ea
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 33: jmp 0x58755550
        __asm _emit 0xeb
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 2c4h], 0
        ; Exact mapped bytes 74 27: je 0x58755550
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2c4h]
        mov dword ptr [ebp - 14h], eax
        push 18h
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 F4 BA 0D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xba
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2c4h], 0
        ; Exact mapped bytes EB 50: jmp 0x587555a2
        __asm _emit 0xeb
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 24h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 28h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2ch], 0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 09: je 0x587555b1
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D0 AA FF FF: call 0x58750080
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 57 F5 FF FF: call 0x58754b10
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
