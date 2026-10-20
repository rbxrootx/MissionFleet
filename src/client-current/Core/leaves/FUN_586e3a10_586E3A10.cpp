// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E3A10 .. +0x228 bytes.
extern "C" __declspec(naked) void FUN_586e3a10_586E3A10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 09: jge 0x586e3a28
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 06: jmp 0x586e3a2e
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 90h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 05 07 E2 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x07
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 17 77 0D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x77
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 0b4h]
        cmp edx, dword ptr [ecx + 90h]
        ; Exact mapped bytes 7E 1E: jle 0x586e3aac
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B7 06 E2 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x586e3ac8
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 99 06 E2 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x06
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 90h]
        cmp ecx, dword ptr [eax + 0b8h]
        ; Exact mapped bytes 7E 2E: jle 0x586e3b0a
        __asm _emit 0x7e
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 24h], eax
        push 21ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B 10 DA FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x10
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 2C 24 DA FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 FA 00 00 00: jmp 0x586e3c04
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 90h]
        cmp ecx, dword ptr [eax + 0b8h]
        ; Exact mapped bytes 7F 42: jg 0x586e3b60
        __asm _emit 0x7f
        __asm _emit 0x42
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 90h]
        cmp ecx, dword ptr [eax + 0bch]
        ; Exact mapped bytes 7E 2E: jle 0x586e3b60
        __asm _emit 0x7e
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 2ch], eax
        push 9b1h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 0F DA FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x0f
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D6 23 DA FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x23
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x586e3c04
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 90h]
        cmp ecx, dword ptr [eax + 0bch]
        ; Exact mapped bytes 7F 3F: jg 0x586e3bb3
        __asm _emit 0x7f
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 90h]
        cmp ecx, dword ptr [eax + 0c0h]
        ; Exact mapped bytes 7E 2B: jle 0x586e3bb3
        __asm _emit 0x7e
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 34h], eax
        push 9b2h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F 0F DA FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x0f
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 80 23 DA FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x23
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 51: jmp 0x586e3c04
        __asm _emit 0xeb
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 90h]
        cmp ecx, dword ptr [eax + 0c0h]
        ; Exact mapped bytes 7F 3D: jg 0x586e3c04
        __asm _emit 0x7f
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 3ch], eax
        push 9b3h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 0F DA FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x0f
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 41 23 DA FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x23
        __asm _emit 0xda
        __asm _emit 0xff
        push 0
        push 82h
        push 21h
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD DE 08 00: call 0x58771ac0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xde
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 90h]
        cmp ecx, dword ptr [eax + 0c0h]
        ; Exact mapped bytes 7F 0C: jg 0x586e3c24
        __asm _emit 0x7f
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 90h], 0
        ; Exact mapped bytes 7F 0E: jg 0x586e3c32
        __asm _emit 0x7f
        __asm _emit 0x0e
        push 21h
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F E2 08 00: call 0x58771ea0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xe2
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
