// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052D4C0 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_0052d4c0_0052D4C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2D 19 FC FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x19
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 8000h
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x52d4dc
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 61: jmp 0x52d53d
        __asm _emit 0xeb
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 68h], 0
        ; Exact mapped bytes 74 17: je 0x52d4fc
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 68h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 68h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x52d4fc
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 41: jmp 0x52d53d
        __asm _emit 0xeb
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 20: je 0x52d533
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1A: je 0x52d533
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 22 45 01 00: call 0x541a43
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 82 3A 00 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 12 00 00 00: call 0x52d543
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x52d53d
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 06 00 00 00: call 0x52d543
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
