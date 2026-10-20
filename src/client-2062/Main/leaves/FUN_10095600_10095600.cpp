// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10095600 .. +0x1C5 bytes.
extern "C" __declspec(naked) void FUN_10095600_10095600() {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 8
        test eax, eax
        push esi
        push edi
        mov edi, ecx
        ; Exact mapped bytes 0F 84 AA 01 00 00: je 0x100957bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 88h]
        lea esi, [edi + 84h]
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x1009563f
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [esi + 8]
        sub ecx, eax
        test ecx, 0fffffffch
        ; Exact mapped bytes 74 0F: je 0x1009563f
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [edi + 88h]
        push 0
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 51 CC FE FF: call 0x10082290
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 0ch]
        mov edi, dword ptr [edi + 88h]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        ; Exact mapped bytes 0F 83 C7 00 00 00: jae 0x10095720
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4]
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x1009566c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ; Exact mapped bytes 77 05: ja 0x10095671
        __asm _emit 0x77
        __asm _emit 0x05
        mov ecx, 1
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x10095679
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x1009567e
        __asm _emit 0xeb
        __asm _emit 0x05
        sub eax, edx
        sar eax, 2
        add eax, ecx
        test eax, eax
        mov dword ptr [esp + 0ch], eax
        ; Exact mapped bytes 7D 02: jge 0x1009568a
        __asm _emit 0x7d
        __asm _emit 0x02
        xor eax, eax
        push ebx
        lea edx, [eax*4]
        push ebp
        push edx
        ; Exact mapped bytes E8 07 71 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x71
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr [esp + 10h], eax
        mov ebp, eax
        ; Exact mapped bytes 74 14: je 0x100956bd
        __asm _emit 0x74
        __asm _emit 0x14
        push ebx
        push ebp
        ; Exact mapped bytes E8 E0 C6 FA FF: call 0x10041d90
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xc6
        __asm _emit 0xfa
        __asm _emit 0xff
        add ebx, 4
        add esp, 8
        add ebp, 4
        cmp ebx, edi
        ; Exact mapped bytes 75 EC: jne 0x100956a9
        __asm _emit 0x75
        __asm _emit 0xec
        lea eax, [esp + 1ch]
        mov ecx, esi
        push eax
        push 1
        push ebp
        ; Exact mapped bytes E8 94 C6 FA FF: call 0x10041d60
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xc6
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8]
        add ebp, 4
        push ebp
        push ecx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 54 C6 FA FF: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xc6
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 E5 94 00 00: call 0x1009ebd0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        push ecx
        ; Exact mapped bytes E8 90 70 0D 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x70
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 18h]
        add esp, 4
        mov ecx, esi
        lea eax, [edi + edx*4]
        mov dword ptr [esi + 0ch], eax
        ; Exact mapped bytes E8 04 C6 FA FF: call 0x10041d10
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xc6
        __asm _emit 0xfa
        __asm _emit 0xff
        lea ecx, [edi + eax*4 + 4]
        pop ebp
        mov dword ptr [esi + 4], edi
        pop ebx
        mov dword ptr [esi + 8], ecx
        pop edi
        pop esi
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, eax
        sub edx, edi
        sar edx, 2
        cmp edx, 1
        ; Exact mapped bytes 73 51: jae 0x1009577d
        __asm _emit 0x73
        __asm _emit 0x51
        lea ecx, [edi + 4]
        push ecx
        push eax
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 F7 C5 FA FF: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xc5
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        lea edx, [esp + 14h]
        mov ecx, eax
        push edx
        sub ecx, edi
        mov edx, 1
        sar ecx, 2
        sub edx, ecx
        mov ecx, esi
        push edx
        push eax
        ; Exact mapped bytes E8 08 C6 FA FF: call 0x10041d60
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xc6
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        cmp edi, eax
        ; Exact mapped bytes 74 5A: je 0x100957b9
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [edi], ecx
        add edi, 4
        cmp edi, eax
        ; Exact mapped bytes 75 F3: jne 0x1009575f
        __asm _emit 0x75
        __asm _emit 0xf3
        mov eax, dword ptr [esi + 8]
        pop edi
        add eax, 4
        mov dword ptr [esi + 8], eax
        pop esi
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        push eax
        add eax, -4
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 A6 C5 FA FF: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xc5
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8]
        lea eax, [ecx - 4]
        cmp edi, eax
        ; Exact mapped bytes 74 0F: je 0x100957a3
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [eax - 4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr [ecx], edx
        ; Exact mapped bytes 75 F1: jne 0x10095794
        __asm _emit 0x75
        __asm _emit 0xf1
        lea ecx, [edi + 4]
        mov eax, edi
        cmp edi, ecx
        ; Exact mapped bytes 74 0D: je 0x100957b9
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [eax], edx
        add eax, 4
        cmp eax, ecx
        ; Exact mapped bytes 75 F3: jne 0x100957ac
        __asm _emit 0x75
        __asm _emit 0xf3
        add dword ptr [esi + 8], 4
        pop edi
        pop esi
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
