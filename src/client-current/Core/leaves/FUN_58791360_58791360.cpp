// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58791360 .. +0x23D bytes.
extern "C" __declspec(naked) void FUN_58791360_58791360() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 10: jne 0x5879139b
        __asm _emit 0x75
        __asm _emit 0x10
        mov dword ptr [ebp - 10h], 0ah
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x587913b4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0ah
        ; Exact mapped bytes 0F 8D 67 01 00 00: jge 0x58791525
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 1
        cmp dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 0F 85 AC 00 00 00: jne 0x58791479
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 64h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx*4 + 588b6a90h]
        push eax
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 30 37 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x37
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 31 4B CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x4b
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 4], 9
        ; Exact mapped bytes 75 38: jne 0x5879143e
        __asm _emit 0x75
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 8ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx*4 + 588b6a6ch]
        push eax
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F4 36 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x36
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F5 4A CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x4a
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 36: jmp 0x58791474
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 8ch]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx*4 + 588b6a68h]
        push eax
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC 36 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x36
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 BD 4A CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x4a
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 32 FF FF FF: jmp 0x587913ab
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 64h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx*4 + 588b6a40h]
        push eax
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 36 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 85 4A CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x4a
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 4], 9
        ; Exact mapped bytes 75 38: jne 0x587914ea
        __asm _emit 0x75
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 8ch]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx*4 + 588b6a1ch]
        push eax
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 36 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x36
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 49 4A CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x4a
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 36: jmp 0x58791520
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 8ch]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx*4 + 588b6a18h]
        push eax
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 36 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x36
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 11 4A CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x4a
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 86 FE FF FF: jmp 0x587913ab
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58791537
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 9
        ; Exact mapped bytes 7D 5A: jge 0x58791597
        __asm _emit 0x7d
        __asm _emit 0x5a
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 1D: jle 0x58791560
        __asm _emit 0x7e
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 8ch]
        mov dword ptr [ebp - 44h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 33 4A CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x4a
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 35: jmp 0x58791595
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 8ch]
        mov dword ptr [ebp - 48h], edx
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 16 4A CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x4a
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 8ch]
        mov dword ptr [ebp - 4ch], edx
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 9C 49 CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x49
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 97: jmp 0x5879152e
        __asm _emit 0xeb
        __asm _emit 0x97
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
