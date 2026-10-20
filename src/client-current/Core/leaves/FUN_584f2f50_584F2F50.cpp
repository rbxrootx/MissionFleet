// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F2F50 .. +0x17B bytes.
extern "C" __declspec(naked) void FUN_584f2f50_584F2F50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 64h
        ; Exact mapped bytes E8 3C 1F 00 00: call 0x584f4ea0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov ecx, 32h
        div ecx
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0ah
        ; Exact mapped bytes 73 07: jae 0x584f2f80
        __asm _emit 0x73
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0ah
        mov edx, dword ptr [ebp - 0ch]
        add edx, 64h
        mov dword ptr [ebp - 1ch], edx
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EB 50 F9 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x50
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 64h
        ; Exact mapped bytes E8 FF 1E 00 00: call 0x584f4ea0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        cmp dword ptr [ecx], eax
        ; Exact mapped bytes 73 11: jae 0x584f2fb9
        __asm _emit 0x73
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 5A EE FF FF: call 0x584f1e10
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x584f2fc2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], 0
        ; Exact mapped bytes EB 0F: jmp 0x584f2fd3
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 24h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 5E 60 F9 FF: call 0x58489030
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x60
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 0ch]
        add eax, 64h
        mov dword ptr [ebp - 20h], eax
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A8 51 F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x51
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 DF 49 F9 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x49
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 C7 00 00 00: je 0x584f30c3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 86 BD 00 00 00: jbe 0x584f30c3
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        add ecx, 1
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], ecx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 25 4A F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x4a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 8E A1 F9 FF: call 0x5848d1b0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xa1
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x584f30b5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 0E 4A F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x4a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 76 9F F9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x9f
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 77: jne 0x584f30b5
        __asm _emit 0x75
        __asm _emit 0x77
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 FA 49 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x49
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 93 A0 F9 FF: call 0x5848d0e0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa0
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        sub edx, eax
        mov dword ptr [ebp - 14h], edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 E1 49 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x49
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 9A A0 F9 FF: call 0x5848d100
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xa0
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 14h]
        imul eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 18h]
        imul ecx, dword ptr [ebp - 18h]
        add eax, ecx
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes F2 0F 2A 45 F0: cvtsi2sd xmm0, dword ptr [ebp - 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 8A DF 35 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xdf
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 F2 E1 33 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xe1
        __asm _emit 0x33
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 76 0C: jbe 0x584f30b5
        __asm _emit 0x76
        __asm _emit 0x0c
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 8F 49 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x49
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 10: jmp 0x584f30c5
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 8]
        sub eax, 1
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 01 FF FF FF: jmp 0x584f2fc4
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
