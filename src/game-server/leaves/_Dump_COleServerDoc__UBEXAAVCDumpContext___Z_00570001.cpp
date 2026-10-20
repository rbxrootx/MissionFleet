// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00570001 .. +0x11A bytes.
extern "C" __declspec(naked) void _Dump_COleServerDoc__UBEXAAVCDumpContext___Z_00570001() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 42 7A FF FF: call 0x567a56
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 33 1F FC FF: call 0x531f4f
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x1f
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 72: je 0x570092
        __asm _emit 0x74
        __asm _emit 0x72
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0c0h], 0
        ; Exact mapped bytes 74 20: je 0x57004c
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        push eax
        push 5d063ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D8 4A FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x4a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 51 4D FC FF: call 0x534d9b
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x4d
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x570059
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5d0654h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C2 4A FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x4a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0c4h], 0
        ; Exact mapped bytes 74 20: je 0x570085
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c4h]
        push eax
        push 5d0670h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9F 4A FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x4a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 18 4D FC FF: call 0x534d9b
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x4d
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x570092
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5d0688h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 89 4A FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ach]
        push edx
        push 5d06a4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 4A FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x4a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 44 4D FC FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x4d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        add eax, 0b0h
        push eax
        push 5d06b8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 55 4A FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x4a
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 19 D9 F7 FF: call 0x4ed9e5
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xd9
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        push edx
        push 5d06cch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 38 4A FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x4a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7D 4C FC FF: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x4c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c8h]
        push ecx
        push 5d06e0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1A 4A FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x4a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2B 4C FC FF: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x4c
        __asm _emit 0xfc
        __asm _emit 0xff
        push 5d06f4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 06 4A FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x4a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
