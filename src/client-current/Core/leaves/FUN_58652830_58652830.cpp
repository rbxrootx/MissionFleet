// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58652830 .. +0x2A1 bytes.
extern "C" __declspec(naked) void FUN_58652830_58652830() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 2d9h]
        cmp ecx, 5
        ; Exact mapped bytes 0F 85 7F 02 00 00: jne 0x58652acb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 2d9h], 4
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58652868
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 83 84 00 00 00: jae 0x586528f8
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 5
        ; Exact mapped bytes 77 7E: ja 0x586528f8
        __asm _emit 0x77
        __asm _emit 0x7e
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5865288c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 23: jge 0x586528b5
        __asm _emit 0x7d
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 17ch]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 14h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2E 36 E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x36
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x58652883
        __asm _emit 0xeb
        __asm _emit 0xce
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1a4h]
        mov dword ptr [ebp - 18h], ecx
        imul edx, dword ptr [ebp - 8], 54h
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C7 37 E3 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x37
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        imul edx, dword ptr [ebp - 8], 54h
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 8B 0D 34 05 96 58: mov ecx, dword ptr [0x58960534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp ecx, dword ptr [eax + edx + 4]
        ; Exact mapped bytes 75 06: jne 0x586528f3
        __asm _emit 0x75
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes E9 67 FF FF FF: jmp 0x5865285f
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x58652909
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7D 5B: jge 0x5865296a
        __asm _emit 0x7d
        __asm _emit 0x5b
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58652921
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 23: jge 0x5865294a
        __asm _emit 0x7d
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 17ch]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 99 35 E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x35
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x58652918
        __asm _emit 0xeb
        __asm _emit 0xce
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1a4h]
        mov dword ptr [ebp - 20h], ecx
        push 588af47eh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 39 37 E3 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x37
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 96: jmp 0x58652900
        __asm _emit 0xeb
        __asm _emit 0x96
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        imul ecx, dword ptr [ebp - 24h], 14h
        lea edx, [eax + ecx + 101h]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes 0F BF 05 38 05 96 58: movsx eax, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, 3
        ; Exact mapped bytes 0F 85 CE 00 00 00: jne 0x58652a5c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 150h]
        mov dword ptr [ebp - 28h], edx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 3C 35 E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x35
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 154h]
        mov dword ptr [ebp - 2ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 86 CE E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xce
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 154h]
        mov dword ptr [ebp - 30h], eax
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 10 35 E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x35
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 154h]
        mov dword ptr [ebp - 34h], edx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 7A 33 E3 FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x33
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 154h]
        mov dword ptr [ebp - 38h], ecx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 E4 33 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x33
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 150h]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 1C 2D 16 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x2d
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 154h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 154h]
        ; Exact mapped bytes E8 92 3F E3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x3f
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 8F 98 E7 FF: call 0x584cc2d0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x98
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 154h]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 D7 2C 16 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x2c
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 6F: jmp 0x58652acb
        __asm _emit 0xeb
        __asm _emit 0x6f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 150h]
        mov dword ptr [ebp - 4ch], edx
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 6E 34 E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x34
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 154h]
        mov dword ptr [ebp - 50h], ecx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 B8 CD E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xcd
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 154h]
        mov dword ptr [ebp - 54h], eax
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 42 34 E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x34
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 154h]
        mov dword ptr [ebp - 58h], edx
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 AC 32 E3 FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x32
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 154h]
        mov dword ptr [ebp - 5ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 16 33 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x33
        __asm _emit 0xe3
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
