// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00507E3B .. +0xF8 bytes.
extern "C" __declspec(naked) void _Dump_CDocTemplate__UBEXAAVCDumpContext___Z_00507E3B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BA AA 03 00: call 0x54290a
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 3ch]
        push edx
        push 5ca598h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B7 CC 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 60 CE 02 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        add eax, 60h
        push eax
        push 5ca5ach
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9C CC 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 60 5B FE FF: call 0x4ed9e5
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x5b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 74 1F: je 0x507ead
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4ch]
        mov ecx, dword ptr [eax]
        push ecx
        push 5ca5c0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 77 CC 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 70 CC 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x507eba
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5ca5d0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 61 CC 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8D A0 02 00: call 0x531f4f
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 5A: jle 0x507f20
        __asm _emit 0x7e
        __asm _emit 0x5a
        push 5ca5e4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 48 CC 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 50 5C: call dword ptr [eax + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x5c
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2C: je 0x507f13
        __asm _emit 0x74
        __asm _emit 0x2c
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 50 60: call dword ptr [eax + 0x60]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x60
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 5ca5f8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 11 CC 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8A CE 02 00: call 0x534d9b
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB CE: jmp 0x507ee1
        __asm _emit 0xeb
        __asm _emit 0xce
        push 5ca604h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FB CB 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0x00
        push 5ca608h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EE CB 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xcb
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
