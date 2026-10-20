// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D99E9 .. +0x244 bytes.
extern "C" __declspec(naked) void FUN_004d99e9_004D99E9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 FC 40 06 00: call 0x53dafa
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 50h]
        push edx
        push 672730h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 39 EE 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 0B F1 04 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xf1
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 54h]
        push ecx
        push 672744h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1E EE 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F0 F0 04 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 24h]
        push eax
        push 672758h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 03 EE 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 48 F0 04 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 28h]
        push edx
        push 67276ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E8 ED 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 BA F0 04 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 2ch]
        push ecx
        push 67277ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CD ED 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DE EF 04 00: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 30h]
        push eax
        push 67278ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B2 ED 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F7 EF 04 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E8 B4 ED FF FF: call 0x4d8859
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 75 1B: jne 0x4d9ac5
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 6727a4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8D ED 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 06 F0 04 00: call 0x528acb
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        push 6727b4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 79 ED 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        push 6727c4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 65 ED 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 0E EF 04 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 38h]
        push eax
        push 6727d0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4A ED 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F3 EE 04 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 3ch]
        push edx
        push 6727e0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2F ED 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D8 EE 04 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 40h]
        push ecx
        push 6727ech
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 14 ED 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E6 EF 04 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 44h]
        push eax
        push 6727f8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F9 EC 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 0A EF 04 00: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 4ch]
        push edx
        mov eax, dword ptr [ecx + 48h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 11 83 05 00: call 0x531e7d
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x83
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 672804h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BF EC 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 00 C0 00 00: call 0x4e5b92
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        push 67280ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AC EC 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 50h]
        push eax
        push 672810h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 98 EC 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 6A EF 04 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 54h]
        push edx
        push 672824h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7D EC 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 4F EF 04 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 60h]
        mov edx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        push 672838h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 52 EC 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 93 BF 00 00: call 0x4e5b92
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 68h]
        push eax
        push 67284ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 38 EC 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E1 ED 04 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        push 67285ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 24 EC 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
