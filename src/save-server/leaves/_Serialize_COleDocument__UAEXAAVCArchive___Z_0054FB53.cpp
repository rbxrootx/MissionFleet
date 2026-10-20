// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054FB53 .. +0x128 bytes.
extern "C" __declspec(naked) void _Serialize_COleDocument__UAEXAAVCArchive___Z_0054FB53() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 1ch], ecx
        push 0c2h
        push 67bf90h
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 F1 A6 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xa6
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 68 5B FD FF: call 0x5256df
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x5b
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x54fc4a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 42: je 0x54fbdf
        __asm _emit 0x74
        __asm _emit 0x42
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 92 C0 00 00 00: call dword ptr [edx + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        push 0cch
        push 67bf90h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 9B A6 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xa6
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x54fbdd
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB B8: jmp 0x54fb97
        __asm _emit 0xeb
        __asm _emit 0xb8
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6C 5D FD FF: call 0x525957
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x5d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 90 BC 00 00 00: call dword ptr [eax + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 46: je 0x54fc48
        __asm _emit 0x74
        __asm _emit 0x46
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 90 C0 00 00 00: call dword ptr [eax + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 0d9h
        push 67bf90h
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 36 A6 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xa6
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x54fc46
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 8A 60 FD FF: call 0x525cd0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB B4: jmp 0x54fbfc
        __asm _emit 0xeb
        __asm _emit 0xb4
        ; Exact mapped bytes EB 2B: jmp 0x54fc75
        __asm _emit 0xeb
        __asm _emit 0x2b
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E8 5E FD FF: call 0x525b3e
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 14h]
        sub edx, 1
        mov dword ptr [ebp - 14h], edx
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x54fc75
        __asm _emit 0x74
        __asm _emit 0x0f
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 79 72 FF FF: call 0x546eec
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB E1: jmp 0x54fc56
        __asm _emit 0xeb
        __asm _emit 0xe1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
