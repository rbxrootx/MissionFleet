// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FF3FC .. +0x13F bytes.
extern "C" __declspec(naked) void FUN_004ff3fc_004FF3FC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        push 46h
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 00 BF 68 00: call dword ptr [0x68bf00]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 18h]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x4ff42c
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 09 01 00 00: jmp 0x4ff535
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 93 2D 03 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x2d
        __asm _emit 0x03
        __asm _emit 0x00
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 CF C6 02 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        lea eax, [ebp - 18h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 91 2E 03 00: call 0x5322dd
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 74 64: je 0x4ff4ca
        __asm _emit 0x74
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 400h
        test ecx, ecx
        ; Exact mapped bytes 74 54: je 0x4ff4ca
        __asm _emit 0x74
        __asm _emit 0x54
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 2B 0D C0 6D 68 00: sub ecx, dword ptr [0x686dc0]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 C3 2F 03 00: call 0x532455
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x2f
        __asm _emit 0x03
        __asm _emit 0x00
        push 1
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 5D CB 02 00: call 0x52bffd
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 2B 15 C0 6D 68 00: sub edx, dword ptr [0x686dc0]
        __asm _emit 0x2b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 99 2F 03 00: call 0x532455
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x2f
        __asm _emit 0x03
        __asm _emit 0x00
        push 1
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 33 CB 02 00: call 0x52bffd
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 63: je 0x4ff535
        __asm _emit 0x74
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 64h]
        and eax, 800h
        test eax, eax
        ; Exact mapped bytes 74 54: je 0x4ff535
        __asm _emit 0x74
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 2B 05 C4 6D 68 00: sub eax, dword ptr [0x686dc4]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 58 2F 03 00: call 0x532455
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x2f
        __asm _emit 0x03
        __asm _emit 0x00
        push 1
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F2 CA 02 00: call 0x52bffd
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 2B 0D C4 6D 68 00: sub ecx, dword ptr [0x686dc4]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        push 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 2E 2F 03 00: call 0x532455
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x2f
        __asm _emit 0x03
        __asm _emit 0x00
        push 1
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 C8 CA 02 00: call 0x52bffd
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
