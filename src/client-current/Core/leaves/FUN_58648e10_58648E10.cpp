// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58648E10 .. +0x25A bytes.
extern "C" __declspec(naked) void FUN_58648e10_58648E10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 240h]
        ; Exact mapped bytes E8 49 7E 17 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x7e
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58648e3c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 0F 8D 20 02 00 00: jge 0x58649066
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 240h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 FF 7C 17 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x7c
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 B8 01 00 00: je 0x58649026
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 240h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 D7 7C 17 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x7c
        __asm _emit 0x17
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 0F 84 94 01 00 00: je 0x58649026
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D6 C3 F8 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xc3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 40: jne 0x58648ee5
        __asm _emit 0x75
        __asm _emit 0x40
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58648eb7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 23: jge 0x58648ee0
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 218h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 28h], edx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 63 69 E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x69
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x58648eae
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes E9 3F 01 00 00: jmp 0x58649024
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 83 C3 F8 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 40 08: movsx eax, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x40
        __asm _emit 0x08
        cmp eax, 3
        ; Exact mapped bytes 75 54: jne 0x58648f4a
        __asm _emit 0x75
        __asm _emit 0x54
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58648f08
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 37: jge 0x58648f45
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 218h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 44 C3 F8 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xc3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 1ch]
        lea edx, [ecx + ecx + 4]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 FE 68 E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x68
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BA: jmp 0x58648eff
        __asm _emit 0xeb
        __asm _emit 0xba
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x58649024
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1E C3 F8 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xc3
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 48 08: movsx ecx, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x08
        cmp ecx, 4
        ; Exact mapped bytes 75 40: jne 0x58648f9b
        __asm _emit 0x75
        __asm _emit 0x40
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58648f6d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 23: jge 0x58648f96
        __asm _emit 0x7d
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 218h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 34h], ecx
        push 3
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 AD 68 E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x68
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x58648f64
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x58649024
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CD C2 F8 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xc2
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 50 08: movsx edx, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x50
        __asm _emit 0x08
        cmp edx, 6
        ; Exact mapped bytes 75 3D: jne 0x58648fe9
        __asm _emit 0x75
        __asm _emit 0x3d
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58648fbe
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 23: jge 0x58648fe7
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 218h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 38h], edx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 5C 68 E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x68
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x58648fb5
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes EB 3B: jmp 0x58649024
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58648ffb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 23: jge 0x58649024
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 218h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 3ch], edx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 1F 68 E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x68
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x58648ff2
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes EB 3B: jmp 0x58649061
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58649038
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 23: jge 0x58649061
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 218h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 40h], edx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 E2 67 E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x67
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x5864902f
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes E9 CD FD FF FF: jmp 0x58648e33
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
