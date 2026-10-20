// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056AC92 .. +0x18D bytes.
extern "C" __declspec(naked) void FUN_0056ac92_0056AC92() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 2b0h
        push 5d053ch
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 AF 04 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x04
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 0c0h], 0
        ; Exact mapped bytes 74 21: je 0x56acde
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 50 68: call dword ptr [eax + 0x68]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x68
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x56acd1
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 47 01 00 00: jmp 0x56ae18
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 0c0h], 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FE 17 FE FF: call 0x54c4e4
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 62 B9 FF FF: call 0x566654
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 0ach], 0
        ; Exact mapped bytes 74 33: je 0x56ad31
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 0b4h], 0
        ; Exact mapped bytes 74 27: je 0x56ad31
        __asm _emit 0x74
        __asm _emit 0x27
        push 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0ach]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ach]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 0b4h], 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 58 55 00 00: call 0x570291
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 48h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 48h], 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 46 B8 FF FF: call 0x56659a
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        push 2d2h
        push 5d053ch
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 F9 03 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x03
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 0ach], 0
        ; Exact mapped bytes 74 25: je 0x56ad98
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0ach]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ach]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 0ach], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C9: jne 0x56ad67
        __asm _emit 0x75
        __asm _emit 0xc9
        push 58e540h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 89 12 FE FF: call 0x54c034
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x12
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x56adc8
        __asm _emit 0x75
        __asm _emit 0x14
        push 2d9h
        push 5d053ch
        ; Exact mapped bytes E8 3D 9C FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x9c
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56adc8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x56adae
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 74 2A 5E 00: call dword ptr [0x5e2a74]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        add edx, 4
        push edx
        ; Exact mapped bytes FF 15 E4 23 5E 00: call dword ptr [0x5e23e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 2B: je 0x56ae18
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 12: je 0x56ae11
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x56ae18
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
