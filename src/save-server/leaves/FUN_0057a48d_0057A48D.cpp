// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057A48D .. +0x17E bytes.
extern "C" __declspec(naked) void FUN_0057a48d_0057A48D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        push 2bfh
        push 67d108h
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 B4 FD F5 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xfd
        __asm _emit 0xf5
        __asm _emit 0xff
        push 1
        push 0ch
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 AD 8F F2 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x8f
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x57a4d1
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c0h
        push 67d108h
        ; Exact mapped bytes E8 74 E8 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57a4d1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x57a4ac
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 25: je 0x57a502
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 8
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 7C 8F F2 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x8f
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x57a502
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c2h
        push 67d108h
        ; Exact mapped bytes E8 43 E8 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57a502
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x57a4d7
        __asm _emit 0x75
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 92 ED FF FF: call 0x5792a2
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 14: jne 0x57a52d
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c5h
        push 67d108h
        ; Exact mapped bytes E8 18 E8 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57a52d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x57a513
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 2C: je 0x57a573
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 54 76 FB FF: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x76
        __asm _emit 0xfb
        __asm _emit 0xff
        lea ecx, [ebp - 20h]
        push ecx
        xor ecx, ecx
        ; Exact mapped bytes E8 79 23 FA FF: call 0x51c8e0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x23
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 1E: je 0x57a597
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        lea edx, [ebp - 10h]
        push edx
        xor ecx, ecx
        ; Exact mapped bytes E8 4B 23 FA FF: call 0x51c8e0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x23
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 0E: jmp 0x57a5a5
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 24h]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 24 BA 68 00: call dword ptr [0x68ba24]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        push 1
        push 0
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 2E 2A FD FF: call 0x54cff9
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x2a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 24h]
        add edx, 4
        push edx
        ; Exact mapped bytes FF 15 20 BA 68 00: call dword ptr [0x68ba20]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 05: jne 0x57a5e6
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 F6 88 F2 FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x88
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 1
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax + 8], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
