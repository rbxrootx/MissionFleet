// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042779F .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_0042779f_0042779F() {
    __asm {
        mov ecx, dword ptr [esp + 4]
        push esi
        ; Exact mapped bytes 3B 0D 80 11 45 00: cmp ecx, dword ptr [0x451180]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes 73 58: jae 0x427805
        __asm _emit 0x73
        __asm _emit 0x58
        mov eax, ecx
        sar eax, 5
        lea edi, [eax*4 + 451080h]
        mov eax, ecx
        and eax, 1fh
        lea esi, [eax + eax*8]
        mov eax, dword ptr [edi]
        shl esi, 2
        add eax, esi
        test byte ptr [eax + 4], 1
        ; Exact mapped bytes 74 37: je 0x427805
        __asm _emit 0x74
        __asm _emit 0x37
        cmp dword ptr [eax], -1
        ; Exact mapped bytes 74 32: je 0x427805
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 83 3D 94 A8 44 00 01: cmp dword ptr [0x44a894], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0xa8
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 1F: jne 0x4277fb
        __asm _emit 0x75
        __asm _emit 0x1f
        xor eax, eax
        sub ecx, eax
        ; Exact mapped bytes 74 10: je 0x4277f2
        __asm _emit 0x74
        __asm _emit 0x10
        dec ecx
        ; Exact mapped bytes 74 08: je 0x4277ed
        __asm _emit 0x74
        __asm _emit 0x08
        dec ecx
        ; Exact mapped bytes 75 13: jne 0x4277fb
        __asm _emit 0x75
        __asm _emit 0x13
        push eax
        push -0ch
        ; Exact mapped bytes EB 08: jmp 0x4277f5
        __asm _emit 0xeb
        __asm _emit 0x08
        push eax
        push -0bh
        ; Exact mapped bytes EB 03: jmp 0x4277f5
        __asm _emit 0xeb
        __asm _emit 0x03
        push eax
        push -0ah
        ; Exact mapped bytes FF 15 A4 C1 43 00: call dword ptr [0x43c1a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        or dword ptr [eax + esi], 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes EB 16: jmp 0x42781b
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes E8 D0 A3 FF FF: call 0x421bda
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes E8 CE A3 FF FF: call 0x421be3
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [eax], 0
        or eax, 0ffffffffh
        pop edi
        pop esi
        ret
    }
}
