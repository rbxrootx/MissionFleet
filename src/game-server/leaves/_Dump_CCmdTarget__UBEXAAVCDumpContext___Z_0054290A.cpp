// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054290A .. +0xE4 bytes.
extern "C" __declspec(naked) void _Dump_CCmdTarget__UBEXAAVCDumpContext___Z_0054290A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7B 89 FB FF: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x89
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 34: je 0x54295a
        __asm _emit 0x74
        __asm _emit 0x34
        push 5c5c5ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E8 21 FF FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        push 5c5ca0h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        push eax
        push 5c5c88h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CF 21 FF FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 14 24 FF FF: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C1 21 FF FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 18h], 0
        ; Exact mapped bytes 74 0D: je 0x542970
        __asm _emit 0x74
        __asm _emit 0x0d
        push 5c5ca4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AB 21 FF FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 40: call dword ptr [eax + 0x40]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x40
        cmp eax, 583100h
        ; Exact mapped bytes 74 66: je 0x5429e8
        __asm _emit 0x74
        __asm _emit 0x66
        push 5c5ccch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8C 21 FF FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 5c5ce0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 78 21 FF FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 55 23 FF FF: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 5c5cech
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5D 21 FF FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2F 24 FF FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 74 0D: je 0x5429db
        __asm _emit 0x74
        __asm _emit 0x0d
        push 5c5d00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 40 21 FF FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        push 5c5d20h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 33 21 FF FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
