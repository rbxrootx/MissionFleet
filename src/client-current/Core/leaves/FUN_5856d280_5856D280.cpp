// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856D280 .. +0xA9 bytes.
extern "C" __declspec(naked) void FUN_5856d280_5856D280() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x5856d323
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4ch]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 40: je 0x5856d2ee
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5A 84 F2 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        test edx, edx
        ; Exact mapped bytes 7C 02: jl 0x5856d2bf
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 2F: jmp 0x5856d2ee
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 64h
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 89 85 F2 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB BA: jmp 0x5856d2a8
        __asm _emit 0xeb
        __asm _emit 0xba
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2F: je 0x5856d323
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 64h
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 54 85 F2 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB CB: jmp 0x5856d2ee
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
