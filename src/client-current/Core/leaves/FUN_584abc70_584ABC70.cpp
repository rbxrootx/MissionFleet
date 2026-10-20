// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584ABC70 .. +0x472 bytes.
extern "C" __declspec(naked) void FUN_584abc70_584ABC70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 6ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 0f8h]
        cmp edx, dword ptr [ecx + 0fch]
        ; Exact mapped bytes 0F 84 4B 04 00 00: je 0x584ac0dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 0f8h]
        cmp edx, dword ptr [ecx + 0fch]
        ; Exact mapped bytes 7E 1A: jle 0x584abcbf
        __asm _emit 0x7e
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0fch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 18: jmp 0x584abcd7
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0fch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 28h]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 0F 8C 2E 02 00 00: jl 0x584abf13
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 24h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 28h]
        add edx, dword ptr [eax]
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 0F 8D 1B 02 00 00: jge 0x584abf13
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 28h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 24h]
        add edx, dword ptr [eax]
        cmp dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 0F 8D 01 01 00 00: jge 0x584abe0c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp + 28h]
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov eax, dword ptr [ebp + 28h]
        add edx, dword ptr [eax]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 1ch], eax
        lea ecx, [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp + 28h]
        mov eax, dword ptr [ebp - 0ch]
        sub eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov eax, dword ptr [ebp + 28h]
        add edx, dword ptr [eax]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 9ch]
        add edx, 1
        push edx
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 7A 10 3A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x10
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 E0 0A 3A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x0a
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp + 20h]
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp + 20h]
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 50h]
        ; Exact mapped bytes E8 B5 02 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 20h]
        add eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 20h]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes E9 02 01 00 00: jmp 0x584abf0e
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 24h], ecx
        lea edx, [ebp - 54h]
        push edx
        mov eax, dword ptr [ebp + 28h]
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov ecx, dword ptr [ebp + 28h]
        add eax, dword ptr [ecx]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 2ch], ecx
        lea edx, [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp + 24h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov ecx, dword ptr [ebp + 28h]
        add eax, dword ptr [ecx]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 55 D4: call dword ptr [ebp - 0x2c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 9ch]
        add eax, 1
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 7C 0F 3A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 28h]
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 24h]
        mov edx, dword ptr [ecx]
        sub edx, eax
        push edx
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 D9 09 3A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x09
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov edx, dword ptr [ebp + 20h]
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp + 20h]
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [ebp + 20h]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 50h]
        ; Exact mapped bytes E8 AE 01 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 20h]
        add eax, dword ptr [ecx + 4]
        mov edx, dword ptr [ebp + 20h]
        mov dword ptr [edx + 0ch], eax
        ; Exact mapped bytes E9 C9 01 00 00: jmp 0x584ac0dc
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 28h]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 0F 8D BB 01 00 00: jge 0x584ac0dc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 28h]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 0F 8E DC 00 00 00: jle 0x584ac00b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 28h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 24h]
        add edx, dword ptr [eax]
        cmp dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 0F 8D C9 00 00 00: jge 0x584ac00b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 34h], eax
        lea ecx, [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp + 28h]
        mov eax, dword ptr [ebp - 0ch]
        sub eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov eax, dword ptr [ebp + 28h]
        add edx, dword ptr [eax]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 55 CC: call dword ptr [ebp - 0x34]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xcc
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 9ch]
        add edx, 1
        push edx
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 7C 0E 3A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x0e
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 28h]
        mov edx, dword ptr [ebp - 0ch]
        sub edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp + 28h]
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 DE 08 3A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x08
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 20h]
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp + 20h]
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 20h]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ebp + 20h]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes E8 B6 00 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 20h]
        add eax, dword ptr [ecx + 4]
        mov edx, dword ptr [ebp + 20h]
        mov dword ptr [edx + 0ch], eax
        ; Exact mapped bytes E9 D1 00 00 00: jmp 0x584ac0dc
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 28h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 24h]
        add ecx, dword ptr [edx]
        cmp dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 0F 8C BE 00 00 00: jl 0x584ac0dc
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 3ch], edx
        lea eax, [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp + 24h]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov edx, dword ptr [ebp + 28h]
        add ecx, dword ptr [edx]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 55 C4: call dword ptr [ebp - 0x3c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc4
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 9ch]
        add ecx, 1
        push ecx
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 A3 0D 3A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x0d
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 24h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp + 28h]
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 08 08 3A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov edx, dword ptr [ebp + 20h]
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp + 20h]
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [ebp + 20h]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 50h]
        ; Exact mapped bytes E8 E0 FF FD FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 20h]
        add eax, dword ptr [ecx + 4]
        mov edx, dword ptr [ebp + 20h]
        mov dword ptr [edx + 0ch], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
