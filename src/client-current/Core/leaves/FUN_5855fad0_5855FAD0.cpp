// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5855FAD0 .. +0x180 bytes.
extern "C" __declspec(naked) void FUN_5855fad0_5855FAD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 67 01 00 00: je 0x5855fc4a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0cdcdcdcdh
        ; Exact mapped bytes 0F 84 5A 01 00 00: je 0x5855fc4a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0fdfdfdfdh
        ; Exact mapped bytes 0F 84 4D 01 00 00: je 0x5855fc4a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0cdcdcdadh
        ; Exact mapped bytes 0F 84 40 01 00 00: je 0x5855fc4a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 0ch], ecx
        lea edx, [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5E 85 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5855fb34
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea eax, [ebp - 28h]
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 4D 7F F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x7f
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 10h], edx
        lea eax, [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 44 86 F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x86
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 7B 7E F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x7e
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x5855fb72
        __asm _emit 0x74
        __asm _emit 0x16
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 DC 7E F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x7e
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 61 FF FF FF: call 0x5855fad0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B3: jmp 0x5855fb25
        __asm _emit 0xeb
        __asm _emit 0xb3
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0a8h]
        ; Exact mapped bytes E8 70 85 F2 FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 0a0h], 0
        ; Exact mapped bytes 74 25: je 0x5855fbb2
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 A9 14 2D 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x14
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 0a0h], 0
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 0a4h], 0
        ; Exact mapped bytes 74 27: je 0x5855fbe5
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 1ch], edx
        push 1
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 5F 14 2D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x14
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 0a4h], 0
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 0a8h], 0
        ; Exact mapped bytes 74 35: je 0x5855fc26
        __asm _emit 0x74
        __asm _emit 0x35
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0F: je 0x5855fc12
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 83 FA FF FF: call 0x5855f690
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5855fc19
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 0a8h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1E: je 0x5855fc4a
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 24h], eax
        push 0bch
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 F4 13 2D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x13
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp + 8], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
