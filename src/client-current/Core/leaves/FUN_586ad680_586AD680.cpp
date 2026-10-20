// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586AD680 .. +0x15B bytes.
extern "C" __declspec(naked) void FUN_586ad680_586AD680() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x586ad69d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 8E 2E 01 00 00: jle 0x586ad7d5
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586ad6b9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 8D 0B 01 00 00: jge 0x586ad7d0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EF E2 FF FF: call 0x586ab9c0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 08 E8 DD FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 91 5C E1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x5c
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        xor eax, 55555555h
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C1 E2 FF FF: call 0x586ab9c0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DA E7 DD FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xe7
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 63 5C E1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x5c
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        xor eax, 55555555h
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 96 E2 FF FF: call 0x586ab9c0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AF E7 DD FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xe7
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 38 5C E1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x5c
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        xor eax, 55555555h
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 68 E2 FF FF: call 0x586ab9c0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 81 E7 DD FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe7
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0A 5C E1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x5c
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        xor eax, 55555555h
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes F2 0F 2A 45 F4: cvtsi2sd xmm0, dword ptr [ebp - 0xc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes F2 0F 2A 4D F0: cvtsi2sd xmm1, dword ptr [ebp - 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes F2 0F 5E C1: divsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc1
        ; Exact mapped bytes F2 0F 2A 4D EC: cvtsi2sd xmm1, dword ptr [ebp - 0x14]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes F2 0F 2A 55 E8: cvtsi2sd xmm2, dword ptr [ebp - 0x18]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x55
        __asm _emit 0xe8
        ; Exact mapped bytes F2 0F 5E CA: divsd xmm1, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xca
        ; Exact mapped bytes 66 0F 2F C8: comisd xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc8
        ; Exact mapped bytes 76 32: jbe 0x586ad7cb
        __asm _emit 0x76
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 18 E2 FF FF: call 0x586ab9c0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 09 E2 FF FF: call 0x586ab9c0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 16 00 00 00: call 0x586ad7e0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E0 FE FF FF: jmp 0x586ad6b0
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 BF FE FF FF: jmp 0x586ad694
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
