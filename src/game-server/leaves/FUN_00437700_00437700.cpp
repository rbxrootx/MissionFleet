// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437700 .. +0x9C bytes.
extern "C" __declspec(naked) void FUN_00437700_00437700() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 0C: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x0c
        ; Exact mapped bytes C7 45 F4 CC CC CC CC: mov dword ptr [ebp - 0xc], 0xcccccccc
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf4
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        ; Exact mapped bytes C7 45 F8 CC CC CC CC: mov dword ptr [ebp - 8], 0xcccccccc
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        ; Exact mapped bytes C7 45 FC CC CC CC CC: mov dword ptr [ebp - 4], 0xcccccccc
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        ; Exact mapped bytes 89 4D F4: mov dword ptr [ebp - 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes C7 45 FC 00 00 00 00: mov dword ptr [ebp - 4], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 F8 01 00 00 00: mov dword ptr [ebp - 8], 1
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x437737
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 45 F8: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C0 01: add eax, 1
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes 89 45 F8: mov dword ptr [ebp - 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 83 7D F8 20: cmp dword ptr [ebp - 8], 0x20
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xf8
        __asm _emit 0x20
        ; Exact mapped bytes 7F 56: jg 0x437793
        __asm _emit 0x7f
        __asm _emit 0x56
        ; Exact mapped bytes 8B 4D F8: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes 83 E9 01: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        ; Exact mapped bytes BA 01 00 00 00: mov edx, 1
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D3 E2: shl edx, cl
        __asm _emit 0xd3
        __asm _emit 0xe2
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 8B 84 81 18 36 00 00: mov eax, dword ptr [ecx + eax*4 + 0x3618]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x18
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 23 C2: and eax, edx
        __asm _emit 0x23
        __asm _emit 0xc2
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 34: jne 0x437791
        __asm _emit 0x75
        __asm _emit 0x34
        ; Exact mapped bytes 8B 4D F8: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes 89 4D FC: mov dword ptr [ebp - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4D F8: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes 83 E9 01: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        ; Exact mapped bytes BA 01 00 00 00: mov edx, 1
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D3 E2: shl edx, cl
        __asm _emit 0xd3
        __asm _emit 0xe2
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 8B 84 81 18 36 00 00: mov eax, dword ptr [ecx + eax*4 + 0x3618]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x18
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0B C2: or eax, edx
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 8B 55 F4: mov edx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes 89 84 8A 18 36 00 00: mov dword ptr [edx + ecx*4 + 0x3618], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x18
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes EB 05: jmp 0x437796
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes EB 9B: jmp 0x43772e
        __asm _emit 0xeb
        __asm _emit 0x9b
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
