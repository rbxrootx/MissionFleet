// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00561C3E .. +0x151 bytes.
extern "C" __declspec(naked) void FUN_00561c3e_00561C3E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 18h], ecx
        push 1ebh
        push 67c6f0h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 06 86 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x86
        __asm _emit 0xf7
        __asm _emit 0xff
        push 1ech
        push 67c6f0h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 F3 85 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x561d02
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 6ch
        ; Exact mapped bytes E8 CE 4D FC FF: call 0x526a57
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x4d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 6B: je 0x561cfd
        __asm _emit 0x74
        __asm _emit 0x6b
        lea edx, [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp + 8]
        add ecx, 6ch
        ; Exact mapped bytes E8 D8 4D FC FF: call 0x526a79
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x4d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0ch], eax
        push 1f7h
        push 67c6f0h
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 A7 85 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A2 64 FC FF: call 0x528163
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 8
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x561cfb
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 60h]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x561cfb
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 60h]
        and edx, 0fffffffbh
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 60h], edx
        push 1
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 76 1F FB FF: call 0x513c6a
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x1f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 8F: jmp 0x561c8c
        __asm _emit 0xeb
        __asm _emit 0x8f
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x561d86
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 6ch
        ; Exact mapped bytes E8 4A 4D FC FF: call 0x526a57
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x4d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 70: je 0x561d86
        __asm _emit 0x74
        __asm _emit 0x70
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        add ecx, 6ch
        ; Exact mapped bytes E8 54 4D FC FF: call 0x526a79
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x4d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 14h], eax
        push 208h
        push 67c6f0h
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 23 85 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 90 D0 00 00 00: call dword ptr [eax + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x561d84
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0C 64 FC FF: call 0x528163
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 8
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x561d84
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 60h]
        or edx, 4
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 60h], edx
        push 1
        push 0
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 ED 1E FB FF: call 0x513c6a
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x1e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 8A: jmp 0x561d10
        __asm _emit 0xeb
        __asm _emit 0x8a
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
