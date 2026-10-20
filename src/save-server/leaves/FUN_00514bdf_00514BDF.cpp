// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00514BDF .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_00514bdf_00514BDF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9E 16 FC FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x16
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 8000h
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x514bfb
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 61: jmp 0x514c5c
        __asm _emit 0xeb
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 68h], 0
        ; Exact mapped bytes 74 17: je 0x514c1b
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
        ; Exact mapped bytes 74 02: je 0x514c1b
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 41: jmp 0x514c5c
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
        ; Exact mapped bytes 74 20: je 0x514c52
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1A: je 0x514c52
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 54 C8 01 00: call 0x531494
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 63 01 01 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 12 00 00 00: call 0x514c62
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x514c5c
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 06 00 00 00: call 0x514c62
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
