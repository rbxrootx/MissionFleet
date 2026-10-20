// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58684CF0 .. +0x27C bytes.
extern "C" __declspec(naked) void FUN_58684cf0_58684CF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 258h
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0a90h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C1 11 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x11
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0a90h]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A2 11 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x11
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 138h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 40h
        ; Exact mapped bytes 0F 87 D3 01 00 00: ja 0x58684f32
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, byte ptr [edx + 58684f90h]
        ; Exact mapped bytes FF 24 85 6C 4F 68 58: jmp dword ptr [eax*4 + 0x58684f6c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0x4f
        __asm _emit 0x68
        __asm _emit 0x58
        mov dword ptr [ebp - 8], 258h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ab0h]
        mov dword ptr [ebp - 1ch], edx
        push 3ch
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 81 F2 E7 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0aa8h]
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 EB 63 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x63
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0aach]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D5 63 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x63
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a7ch]
        mov dword ptr [ebp - 2ch], edx
        push 17h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC FC DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 7D 1E E0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x1e
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a7ch]
        mov dword ptr [ebp - 30h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 E7 0F E0 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x0f
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 33 01 00 00: jmp 0x58684f32
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 259h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ab0h]
        mov dword ptr [ebp - 34h], ecx
        push 3ch
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 F4 F2 E7 FF: call 0x58504110
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf2
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 10 01 00 00: jmp 0x58684f32
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 25ah
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ab0h]
        mov dword ptr [ebp - 38h], eax
        push 3ch
        push 3ch
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 CF F1 E7 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xf1
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a7ch]
        mov dword ptr [ebp - 40h], edx
        push 18h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 FC DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 F7 1D E0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x1d
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C3 00 00 00: jmp 0x58684f32
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 64h
        ; Exact mapped bytes 77 45: ja 0x58684ec0
        __asm _emit 0x77
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx + 58684ff0h]
        ; Exact mapped bytes FF 24 85 D4 4F 68 58: jmp dword ptr [eax*4 + 0x58684fd4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x4f
        __asm _emit 0x68
        __asm _emit 0x58
        mov dword ptr [ebp - 8], 25ch
        ; Exact mapped bytes EB 2B: jmp 0x58684ec0
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov dword ptr [ebp - 8], 25dh
        ; Exact mapped bytes EB 22: jmp 0x58684ec0
        __asm _emit 0xeb
        __asm _emit 0x22
        mov dword ptr [ebp - 8], 25fh
        ; Exact mapped bytes EB 19: jmp 0x58684ec0
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 8], 25eh
        ; Exact mapped bytes EB 10: jmp 0x58684ec0
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 8], 25bh
        ; Exact mapped bytes EB 07: jmp 0x58684ec0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 260h
        ; Exact mapped bytes EB 70: jmp 0x58684f32
        __asm _emit 0xeb
        __asm _emit 0x70
        mov dword ptr [ebp - 8], 258h
        ; Exact mapped bytes EB 67: jmp 0x58684f32
        __asm _emit 0xeb
        __asm _emit 0x67
        mov dword ptr [ebp - 8], 258h
        ; Exact mapped bytes EB 5E: jmp 0x58684f32
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov dword ptr [ebp - 8], 258h
        ; Exact mapped bytes EB 55: jmp 0x58684f32
        __asm _emit 0xeb
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a7ch]
        mov dword ptr [ebp - 48h], edx
        push 16h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA FB DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xfb
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 5B 1D E0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x1d
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a7ch]
        mov dword ptr [ebp - 4ch], edx
        push 2
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 25 A9 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa9
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a7ch]
        mov dword ptr [ebp - 50h], ecx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 AF 0E E0 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x0e
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8ch]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a88h]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 CA FB DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xfb
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 CB 0F E0 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x0f
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
