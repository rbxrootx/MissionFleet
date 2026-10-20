// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878AB10 .. +0x121 bytes.
extern "C" __declspec(naked) void FUN_5878ab10_5878AB10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 588b6860h
        push 100h
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 54 96 02 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 0F 87 CD 00 00 00: ja 0x5878ac0c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 95 34 AC 78 58: jmp dword ptr [edx*4 + 0x5878ac34]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0xac
        __asm _emit 0x78
        __asm _emit 0x58
        push 588b6864h
        ; Exact mapped bytes E8 9D 74 D9 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x74
        __asm _emit 0xd9
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 1B 96 02 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 BE 00 00 00: jmp 0x5878ac2b
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b6874h
        ; Exact mapped bytes E8 79 74 D9 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x74
        __asm _emit 0xd9
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 F7 95 02 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x5878ac2b
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes 8B 0D 58 06 96 58: mov ecx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 7E E4 FF: call 0x585d2a10
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x7e
        __asm _emit 0xe4
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 77 FE FF FF: call 0x5878aa20
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 02: jne 0x5878abb4
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 77: jmp 0x5878ac2b
        __asm _emit 0xeb
        __asm _emit 0x77
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 78 2A: js 0x5878abe9
        __asm _emit 0x78
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 60h]
        ; Exact mapped bytes 7D 1F: jge 0x5878abe9
        __asm _emit 0x7d
        __asm _emit 0x1f
        push 588b6890h
        ; Exact mapped bytes E8 1C 74 D9 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x74
        __asm _emit 0xd9
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 0A 62 D2 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x62
        __asm _emit 0xd2
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB 40: jmp 0x5878ac2b
        __asm _emit 0xeb
        __asm _emit 0x40
        push 588b68a8h
        ; Exact mapped bytes E8 FB 73 D9 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x73
        __asm _emit 0xd9
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 79 95 02 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 1F: jmp 0x5878ac2b
        __asm _emit 0xeb
        __asm _emit 0x1f
        push 588b68bch
        ; Exact mapped bytes E8 DA 73 D9 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x73
        __asm _emit 0xd9
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 58 95 02 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
