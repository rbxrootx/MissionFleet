// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58737E10 .. +0x209 bytes.
extern "C" __declspec(naked) void FUN_58737e10_58737E10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 15: jl 0x58737e34
        __asm _emit 0x7c
        __asm _emit 0x15
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 7D 0F: jge 0x58737e34
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a8h], 0
        ; Exact mapped bytes EB 13: jmp 0x58737e47
        __asm _emit 0xeb
        __asm _emit 0x13
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 75 0D: jne 0x58737e47
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a8h], 1
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 57h]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 8C B1 01 00 00: jl 0x58738008
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 57h]
        cmp edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F 8F A1 01 00 00: jg 0x58738008
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 40000000h
        ; Exact mapped bytes 0F 85 8F 01 00 00: jne 0x58738006
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 9ch], 40000000h
        push 0fh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 02 E1 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe1
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DA 03 00 00: call 0x58738270
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [ebp - 10h], eax
        push 588b47ach
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F1 E1 D4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xe1
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 14h], edx
        push 588b47b0h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D8 E1 D4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xe1
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0dch]
        mov dword ptr [ebp - 18h], ecx
        push 588b47b4h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 BF E1 D4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xe1
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e0h]
        mov dword ptr [ebp - 1ch], eax
        push 588b47b8h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 A6 E1 D4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xe1
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0a8h], 1
        ; Exact mapped bytes 75 64: jne 0x58737f6b
        __asm _emit 0x75
        __asm _emit 0x64
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 C3 DF D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xdf
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 24h], edx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 AD DF D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xdf
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58737f46
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 1D: jge 0x58737f69
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0cch]
        mov dword ptr [ebp - 28h], eax
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 7A DF D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xdf
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x58737f3d
        __asm _emit 0xeb
        __asm _emit 0xd4
        ; Exact mapped bytes EB 6E: jmp 0x58737fd9
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0a8h], 0
        ; Exact mapped bytes 75 62: jne 0x58737fd9
        __asm _emit 0x75
        __asm _emit 0x62
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [ebp - 2ch], eax
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 53 DF D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xdf
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 30h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 3D DF D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xdf
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58737fb6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 1D: jge 0x58737fd9
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0cch]
        mov dword ptr [ebp - 34h], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 0A DF D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xdf
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x58737fad
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0dch]
        mov dword ptr [ebp - 38h], edx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 F1 DE D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xde
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e0h]
        mov dword ptr [ebp - 3ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 DB DE D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xde
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0B: jmp 0x58738013
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7E DF D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xdf
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
