// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584D4FF0 .. +0x167 bytes.
extern "C" __declspec(naked) void FUN_584d4ff0_584D4FF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 6ch], 0
        ; Exact mapped bytes 0F 84 49 01 00 00: je 0x584d5150
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 60h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        ; Exact mapped bytes E8 A5 F9 FA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xf9
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 14h], eax
        lea edx, [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        nop
        cmp dword ptr [ebp - 24h], 1eh
        ; Exact mapped bytes 7D 07: jge 0x584d5056
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 1eh
        mov edx, dword ptr [ebp - 20h]
        add edx, 6
        push edx
        mov eax, dword ptr [ebp - 24h]
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 04 1E FE FF: call 0x584b6e70
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BC B5 FC FF: call 0x584a0630
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xb5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 52 08 FC FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x08
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        sub ecx, eax
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        sub esi, eax
        mov dword ptr [ebp - 0ch], esi
        cmp dword ptr [ebp - 0ch], 0ah
        ; Exact mapped bytes 7F 09: jg 0x584d509e
        __asm _emit 0x7f
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0ah
        ; Exact mapped bytes EB 2C: jmp 0x584d50ca
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov esi, dword ptr [ebp - 0ch]
        add esi, dword ptr [ebp - 24h]
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D1 F8 FA FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf8
        __asm _emit 0xfa
        __asm _emit 0xff
        sub eax, 5
        cmp esi, eax
        ; Exact mapped bytes 7C 14: jl 0x584d50ca
        __asm _emit 0x7c
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF F8 FA FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf8
        __asm _emit 0xfa
        __asm _emit 0xff
        sub eax, 14h
        sub eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9E B5 FC FF: call 0x584a0670
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xb5
        __asm _emit 0xfc
        __asm _emit 0xff
        sub eax, dword ptr [ebp - 20h]
        sub eax, 0fh
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0ah
        ; Exact mapped bytes 7F 09: jg 0x584d50ea
        __asm _emit 0x7f
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0ah
        ; Exact mapped bytes EB 2C: jmp 0x584d5116
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov esi, dword ptr [ebp - 8]
        add esi, dword ptr [ebp - 20h]
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 06 FC FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x06
        __asm _emit 0xfc
        __asm _emit 0xff
        sub eax, 14h
        cmp esi, eax
        ; Exact mapped bytes 7C 14: jl 0x584d5116
        __asm _emit 0x7c
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 06 FC FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x06
        __asm _emit 0xfc
        __asm _emit 0xff
        sub eax, 14h
        sub eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FA 04 2E 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x2e
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 20 A4 FC FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xa4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 68h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 51 0F FB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x0f
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
