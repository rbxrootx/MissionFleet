// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585640B0 .. +0x194 bytes.
extern "C" __declspec(naked) void FUN_585640b0_585640B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC 28 F2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x28
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 88h], eax
        ; Exact mapped bytes 75 20: jne 0x585640ef
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 104h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 104h
        push ecx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 99 FE FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 104h]
        xor eax, 55555555h
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 34 01 00 00: jne 0x5856423c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0f4h], 0
        ; Exact mapped bytes 0F 84 24 01 00 00: je 0x5856423c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        cmp dword ptr [eax + 58947974h], 0
        ; Exact mapped bytes 75 09: jne 0x58564132
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1F 01 00 00: call 0x58564250
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 138h]
        and edx, 1fh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        and ecx, 0ffffffe0h
        or ecx, edx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DB F9 FF FF: call 0x58563b30
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        and eax, 0fffh
        shl eax, 0fh
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        and edx, 0f8007fffh
        or edx, eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 33 FA FF FF: call 0x58563bb0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        and ecx, 3ffh
        shl ecx, 5
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        and eax, 0ffff801fh
        or eax, ecx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 74 6C: je 0x58564215
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 138h]
        push ecx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 7C 11 00: call 0x5867be30
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x7c
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 FE: mov word ptr [ebp - 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfe
        movzx edx, word ptr [ebp - 2]
        and edx, 3
        shl edx, 1bh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        and ecx, 0e7ffffffh
        or ecx, edx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 138h]
        push ecx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D 7D 11 00: call 0x5867bf00
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x7d
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        movzx edx, word ptr [ebp - 4]
        and edx, 3
        shl edx, 1dh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        and ecx, 9fffffffh
        or ecx, edx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes EB 20: jmp 0x58564235
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        and ecx, 0e7ffffffh
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        and ecx, 9fffffffh
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], ecx
        mov eax, 4
        ; Exact mapped bytes EB 02: jmp 0x5856423e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
