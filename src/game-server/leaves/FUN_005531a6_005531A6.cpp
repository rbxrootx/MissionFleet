// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005531A6 .. +0x310 bytes.
extern "C" __declspec(naked) void FUN_005531a6_005531A6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 250h
        mov dword ptr [ebp - 240h], 0
        mov dword ptr [ebp - 224h], 0
        mov dword ptr [ebp - 114h], 0
        mov dword ptr [ebp - 23ch], 0
        mov dword ptr [ebp - 220h], 0
        mov dword ptr [ebp - 110h], 0
        lea eax, [ebp - 22ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 24 2A 5E 00: call dword ptr [0x5e2a24]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 234h], eax
        cmp dword ptr [ebp - 234h], 0
        ; Exact mapped bytes 7D 07: jge 0x553212
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 9A 02 00 00: jmp 0x5534ac
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 4]
        push edx
        push 20019h
        push 0
        push 5cfa40h
        push 80000000h
        ; Exact mapped bytes FF 15 04 1E 5E 00: call dword ptr [0x5e1e04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 68 01 00 00: jne 0x55339d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 22ch]
        mov dword ptr [ebp - 114h], eax
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 75 0C: jne 0x553256
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 24ch], 0
        ; Exact mapped bytes EB 4D: jmp 0x5532a3
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        ; Exact mapped bytes FF 15 D8 22 5E 00: call dword ptr [0x5e22d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        lea edx, [eax + eax + 2]
        mov dword ptr [ebp - 240h], edx
        mov eax, dword ptr [ebp - 240h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 43 65 F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x65
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 250h], esp
        mov eax, dword ptr [ebp - 240h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        mov edx, dword ptr [ebp - 250h]
        push edx
        ; Exact mapped bytes E8 13 95 F4 FF: call 0x49c7b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 24ch], eax
        lea eax, [ebp - 228h]
        push eax
        push 20019h
        push 0
        mov ecx, dword ptr [ebp - 24ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 04 1E 5E 00: call dword ptr [0x5e1e04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 C9 00 00 00: jne 0x553393
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 230h]
        push eax
        push 20019h
        push 0
        push 5cfa48h
        mov ecx, dword ptr [ebp - 228h]
        push ecx
        ; Exact mapped bytes FF 15 04 1E 5E 00: call dword ptr [0x5e1e04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x553386
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 244h], 105h
        lea edx, [ebp - 244h]
        push edx
        lea eax, [ebp - 10ch]
        push eax
        lea ecx, [ebp - 110h]
        push ecx
        push 0
        push 0
        mov edx, dword ptr [ebp - 230h]
        push edx
        ; Exact mapped bytes FF 15 08 1E 5E 00: call dword ptr [0x5e1e08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 53: jne 0x553379
        __asm _emit 0x75
        __asm _emit 0x53
        lea eax, [ebp - 238h]
        push eax
        lea ecx, [ebp - 21ch]
        push ecx
        lea edx, [ebp - 10ch]
        push edx
        ; Exact mapped bytes E8 76 01 00 00: call 0x5534b6
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 238h]
        push eax
        lea ecx, [ebp - 21ch]
        push ecx
        ; Exact mapped bytes E8 AA 21 FE FF: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax + 6ch]
        push edx
        ; Exact mapped bytes FF 15 20 25 5E 00: call dword ptr [0x5e2520]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 220h], eax
        cmp dword ptr [ebp - 220h], 1
        ; Exact mapped bytes 75 0A: jne 0x553379
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ebp - 220h], 0
        mov eax, dword ptr [ebp - 230h]
        push eax
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 228h]
        push ecx
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 220h], 0
        ; Exact mapped bytes 0F 85 EF 00 00 00: jne 0x553499
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 228h]
        push eax
        push 20019h
        push 0
        push 5cfa54h
        push 80000000h
        ; Exact mapped bytes FF 15 04 1E 5E 00: call dword ptr [0x5e1e04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 C9 00 00 00: jne 0x553499
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 230h]
        push ecx
        push 20019h
        push 0
        push 5cfa60h
        mov edx, dword ptr [ebp - 228h]
        push edx
        ; Exact mapped bytes FF 15 04 1E 5E 00: call dword ptr [0x5e1e04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x55348c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 248h], 105h
        lea eax, [ebp - 248h]
        push eax
        lea ecx, [ebp - 10ch]
        push ecx
        lea edx, [ebp - 110h]
        push edx
        push 0
        push 0
        mov eax, dword ptr [ebp - 230h]
        push eax
        ; Exact mapped bytes FF 15 08 1E 5E 00: call dword ptr [0x5e1e08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 53: jne 0x55347f
        __asm _emit 0x75
        __asm _emit 0x53
        lea ecx, [ebp - 238h]
        push ecx
        lea edx, [ebp - 21ch]
        push edx
        lea eax, [ebp - 10ch]
        push eax
        ; Exact mapped bytes E8 70 00 00 00: call 0x5534b6
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 238h]
        push ecx
        lea edx, [ebp - 21ch]
        push edx
        ; Exact mapped bytes E8 A4 20 FE FF: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [eax + 6ch]
        push eax
        ; Exact mapped bytes FF 15 20 25 5E 00: call dword ptr [0x5e2520]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 220h], eax
        cmp dword ptr [ebp - 220h], 1
        ; Exact mapped bytes 75 0A: jne 0x55347f
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ebp - 220h], 0
        mov ecx, dword ptr [ebp - 230h]
        push ecx
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 228h]
        push edx
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 22ch]
        push eax
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 220h]
        lea esp, [ebp - 250h]
        mov esp, ebp
        pop ebp
        ret
    }
}
