// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58BF62F5 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_58bf62f5() {
    __asm {
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 66 0F 4D CA: cmovge cx, dx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x4d
        __asm _emit 0xca
        ; Exact mapped bytes 0F 9B C5: setnp ch
        __asm _emit 0x0f
        __asm _emit 0x9b
        __asm _emit 0xc5
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 0F BF F0: movsx esi, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xf0
        ; Exact mapped bytes 66 0F BE CA: movsx cx, dl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xca
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 0F 44 CE: cmove ecx, esi
        __asm _emit 0x0f
        __asm _emit 0x44
        __asm _emit 0xce
        ; Exact mapped bytes 9C: pushfd
        __asm _emit 0x9c
        ; Exact mapped bytes 81 DE 50 64 75 76: sbb esi, 0x76756450
        __asm _emit 0x81
        __asm _emit 0xde
        __asm _emit 0x50
        __asm _emit 0x64
        __asm _emit 0x75
        __asm _emit 0x76
        ; Exact mapped bytes B9 00 00 73 48: mov ecx, 0x48730000
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x73
        __asm _emit 0x48
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 7C 24 28: mov edi, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 66 0F AC CE E6: shrd si, cx, 0xe6
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xac
        __asm _emit 0xce
        __asm _emit 0xe6
        ; Exact mapped bytes 81 C7 07 36 50 06: add edi, 0x6503607
        __asm _emit 0x81
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x36
        __asm _emit 0x50
        __asm _emit 0x06
        ; Exact mapped bytes 0F 4C DD: cmovl ebx, ebp
        __asm _emit 0x0f
        __asm _emit 0x4c
        __asm _emit 0xdd
        ; Exact mapped bytes 0F CF: bswap edi
        __asm _emit 0x0f
        __asm _emit 0xcf
        ; Exact mapped bytes 0F B7 EE: movzx ebp, si
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xee
        ; Exact mapped bytes 0F 4D EC: cmovge ebp, esp
        __asm _emit 0x0f
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 66 0F C1 EB: xadd bx, bp
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc1
        __asm _emit 0xeb
        ; Exact mapped bytes F7 DF: neg edi
        __asm _emit 0xf7
        __asm _emit 0xdf
        ; Exact mapped bytes 66 8B F1: mov si, cx
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes F7 D7: not edi
        __asm _emit 0xf7
        __asm _emit 0xd7
        ; Exact mapped bytes F9: stc
        __asm _emit 0xf9
        ; Exact mapped bytes D2 D3: rcl bl, cl
        __asm _emit 0xd2
        __asm _emit 0xd3
        ; Exact mapped bytes 66 0F B3 DE: btr si, bx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb3
        __asm _emit 0xde
        ; Exact mapped bytes 0F CF: bswap edi
        __asm _emit 0x0f
        __asm _emit 0xcf
        ; Exact mapped bytes 8A DB: mov bl, bl
        __asm _emit 0x8a
        __asm _emit 0xdb
        ; Exact mapped bytes D1 CF: ror edi, 1
        __asm _emit 0xd1
        __asm _emit 0xcf
        ; Exact mapped bytes 81 DB A3 05 94 1E: sbb ebx, 0x1e9405a3
        __asm _emit 0x81
        __asm _emit 0xdb
        __asm _emit 0xa3
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x1e
        ; Exact mapped bytes D3 CB: ror ebx, cl
        __asm _emit 0xd3
        __asm _emit 0xcb
        ; Exact mapped bytes 81 C7 46 6D 3F 6A: add edi, 0x6a3f6d46
        __asm _emit 0x81
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x6d
        __asm _emit 0x3f
        __asm _emit 0x6a
        ; Exact mapped bytes 8D 3C 0F: lea edi, [edi + ecx]
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0x0f
        ; Exact mapped bytes 8B F4: mov esi, esp
        __asm _emit 0x8b
        __asm _emit 0xf4
        ; Exact mapped bytes 84 E3: test bl, ah
        __asm _emit 0x84
        __asm _emit 0xe3
        ; Exact mapped bytes 81 EC C0 00 00 00: sub esp, 0xc0
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B DF: mov ebx, edi
        __asm _emit 0x8b
        __asm _emit 0xdf
        ; Exact mapped bytes 66 81 E9 92 72: sub cx, 0x7292
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x72
        ; Exact mapped bytes B9 00 00 73 48: mov ecx, 0x48730000
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x73
        __asm _emit 0x48
        ; Exact mapped bytes 66 0F AB F5: bts bp, si
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xab
        __asm _emit 0xf5
        ; Exact mapped bytes 2B D9: sub ebx, ecx
        __asm _emit 0x2b
        __asm _emit 0xd9
        ; Exact mapped bytes 8D 2D 76 63 BF 58: lea ebp, [0x58bf6376]
        __asm _emit 0x8d
        __asm _emit 0x2d
        __asm _emit 0x76
        __asm _emit 0x63
        __asm _emit 0xbf
        __asm _emit 0x58
        ; Exact mapped bytes 8D BF FC FF FF FF: lea edi, [edi - 4]
        __asm _emit 0x8d
        __asm _emit 0xbf
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D2 E1: shl cl, cl
        __asm _emit 0xd2
        __asm _emit 0xe1
        ; Exact mapped bytes F6 C1 F3: test cl, 0xf3
        __asm _emit 0xf6
        __asm _emit 0xc1
        __asm _emit 0xf3
        ; Exact mapped bytes 66 C1 F9 45: sar cx, 0x45
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xf9
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 33 CB: xor ecx, ebx
        __asm _emit 0x33
        __asm _emit 0xcb
        ; Exact mapped bytes F5: cmc
        __asm _emit 0xf5
        ; Exact mapped bytes F9: stc
        __asm _emit 0xf9
        ; Exact mapped bytes F7 D9: neg ecx
        __asm _emit 0xf7
        __asm _emit 0xd9
        ; Exact mapped bytes C1 C9 02: ror ecx, 2
        __asm _emit 0xc1
        __asm _emit 0xc9
        __asm _emit 0x02
        ; Exact mapped bytes 81 E9 FB 55 EF 64: sub ecx, 0x64ef55fb
        __asm _emit 0x81
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x55
        __asm _emit 0xef
        __asm _emit 0x64
        ; Exact mapped bytes 3B DE: cmp ebx, esi
        __asm _emit 0x3b
        __asm _emit 0xde
        ; Exact mapped bytes F9: stc
        __asm _emit 0xf9
        ; Exact mapped bytes 0F C9: bswap ecx
        __asm _emit 0x0f
        __asm _emit 0xc9
        ; Exact mapped bytes 3A C2: cmp al, dl
        __asm _emit 0x3a
        __asm _emit 0xc2
        ; Exact mapped bytes E9 EB 4D 1E 00: jmp 0x58ddb193
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x4d
        __asm _emit 0x1e
        __asm _emit 0x00
    }
}
