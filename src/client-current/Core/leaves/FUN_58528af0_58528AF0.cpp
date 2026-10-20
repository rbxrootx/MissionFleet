// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58528AF0 .. +0x2C4 bytes.
extern "C" __declspec(naked) void FUN_58528af0_58528AF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 12148h], 15h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 12150h]
        ; Exact mapped bytes E8 AC 7D 29 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x7d
        __asm _emit 0x29
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 12150h]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 66 D4 F5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xd4
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 1211ch]
        ; Exact mapped bytes E8 88 E3 FB FF: call 0x584e6ec0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xe3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1211ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 1211ch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 12120h]
        ; Exact mapped bytes E8 61 E3 FB FF: call 0x584e6ec0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xe3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 12120h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 12120h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 12124h]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 82 61 F9 FF: call 0x584bed10
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x61
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12124h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 12124h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12128h]
        ; Exact mapped bytes E8 0B E3 FB FF: call 0x584e6ec0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 12128h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 12128h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 1212ch]
        ; Exact mapped bytes E8 54 61 F9 FF: call 0x584bed30
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x61
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1212ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 1212ch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 140h]
        mov dword ptr [ebp - 14h], edx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 85 D3 F5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xd3
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 13ch]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6F D3 F5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xd3
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 250h], 0
        ; Exact mapped bytes 7E 35: jle 0x58528c63
        __asm _emit 0x7e
        __asm _emit 0x35
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58528c40
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 1D: jge 0x58528c63
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 11a60h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 80 D2 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xd2
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x58528c37
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58528c75
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 1D: jge 0x58528c98
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 11f1ch]
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 FB D2 F5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xd2
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x58528c6c
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 138h], 0
        ; Exact mapped bytes 74 44: je 0x58528ce8
        __asm _emit 0x74
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 138h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 138h]
        mov ecx, dword ptr [ecx]
        push eax
        mov edx, dword ptr [ecx + 80h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 138h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 138h]
        mov ecx, dword ptr [ecx]
        push eax
        mov edx, dword ptr [ecx + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 138h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58528cfa
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 250h]
        ; Exact mapped bytes 7D 6E: jge 0x58528d76
        __asm _emit 0x7d
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 11a68h]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 EE 5F F9 FF: call 0x584bed10
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x5f
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 11a68h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [edx + ecx*4 + 11a68h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax*2 + 8356h]
        test edx, edx
        ; Exact mapped bytes 75 1B: jne 0x58528d71
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 11a68h]
        mov dword ptr [ebp - 28h], edx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 D0 6A F7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x6a
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 7B FF FF FF: jmp 0x58528cf1
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 12114h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 12134h]
        mov dword ptr [ebp - 2ch], edx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 47 D1 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xd1
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12138h]
        mov dword ptr [ebp - 30h], ecx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 31 D1 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xd1
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
