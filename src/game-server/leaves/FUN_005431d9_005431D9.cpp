// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005431D9 .. +0xA6 bytes.
extern "C" __declspec(naked) void FUN_005431d9_005431D9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 14h
        ; Exact mapped bytes E8 A1 DD FE FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x543200
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 14h
        ; Exact mapped bytes E8 FF A8 FA FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xa8
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 79: jmp 0x543279
        __asm _emit 0xeb
        __asm _emit 0x79
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10h], 3
        ; Exact mapped bytes 75 20: jne 0x543229
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        add ecx, 18h
        ; Exact mapped bytes E8 78 DD FE FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x543229
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 18h
        ; Exact mapped bytes E8 D6 A8 FA FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xa8
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 50: jmp 0x543279
        __asm _emit 0xeb
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10h], 3
        ; Exact mapped bytes 75 20: jne 0x543252
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1ch
        ; Exact mapped bytes E8 4F DD FE FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x543252
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1ch
        ; Exact mapped bytes E8 AD A8 FA FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xa8
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 27: jmp 0x543279
        __asm _emit 0xeb
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10h], 3
        ; Exact mapped bytes 75 1E: jne 0x543279
        __asm _emit 0x75
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        add ecx, 20h
        ; Exact mapped bytes E8 26 DD FE FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x543279
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 20h
        ; Exact mapped bytes E8 84 A8 FA FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0xfa
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
