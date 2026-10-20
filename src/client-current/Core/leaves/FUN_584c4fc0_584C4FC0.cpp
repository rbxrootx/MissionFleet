// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C4FC0 .. +0x16A bytes.
extern "C" __declspec(naked) void FUN_584c4fc0_584C4FC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 45 01 00 00: je 0x584c5128
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 58h]
        cmp edx, dword ptr [ecx + 50h]
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x584c509e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 58h]
        cmp edx, dword ptr [ecx + 50h]
        ; Exact mapped bytes 7E 33: jle 0x584c5036
        __asm _emit 0x7e
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 58h]
        sub edx, dword ptr [ecx + 50h]
        cmp edx, 12h
        ; Exact mapped bytes 7E 11: jle 0x584c5025
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x584c5034
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], ecx
        ; Exact mapped bytes EB 31: jmp 0x584c5067
        __asm _emit 0xeb
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 50h]
        sub edx, dword ptr [ecx + 58h]
        cmp edx, 12h
        ; Exact mapped bytes 7E 11: jle 0x584c5058
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x584c5067
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 7D 11: jge 0x584c5081
        __asm _emit 0x7d
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        add edx, 24h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], edx
        ; Exact mapped bytes EB 1D: jmp 0x584c509e
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 50h], 24h
        ; Exact mapped bytes 7C 14: jl 0x584c509e
        __asm _emit 0x7c
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        cdq
        mov ecx, 24h
        idiv ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x584c50bf
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x584c50bf
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x584c5128
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x584c50e2
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x584c50c8
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 26 05 FD FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x584c5106
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x584c5128
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x584c5126
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 02 05 FD FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x05
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x584c50c8
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
