// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00546860 .. +0x182 bytes.
extern "C" __declspec(naked) void FUN_00546860_00546860() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ef79h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F7 04 F9 FF: call 0x4d6d80
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x04
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 44h
        ; Exact mapped bytes E8 95 03 00 00: call 0x546c30
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 63b8e4h
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 22: je 0x5468cc
        __asm _emit 0x74
        __asm _emit 0x22
        push 635528h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 73 3C F9 FF: call 0x4da52a
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x3c
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x5468cc
        __asm _emit 0x75
        __asm _emit 0x11
        push 28h
        push 67aea0h
        ; Exact mapped bytes E8 79 24 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5468cc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x5468a4
        __asm _emit 0x75
        __asm _emit 0xd2
        push 0
        push 10h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 87 CB F5 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xcb
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x5468f4
        __asm _emit 0x75
        __asm _emit 0x11
        push 29h
        push 67aea0h
        ; Exact mapped bytes E8 51 24 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5468f4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x5468d2
        __asm _emit 0x75
        __asm _emit 0xd8
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 20: je 0x546920
        __asm _emit 0x74
        __asm _emit 0x20
        push -1
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        ; Exact mapped bytes E8 37 CB F5 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xcb
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x546920
        __asm _emit 0x75
        __asm _emit 0x11
        push 2ah
        push 67aea0h
        ; Exact mapped bytes E8 25 24 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x546920
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x5468fa
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov byte ptr [ecx + 42h], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 14h]
        add eax, 24h
        mov ecx, dword ptr [edx]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [edx + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 34h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 38h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ecx + 3ch], edx
        mov eax, dword ptr [ebp - 14h]
        mov byte ptr [eax + 43h], 0ffh
        mov ecx, dword ptr [ebp - 14h]
        mov byte ptr [ecx + 40h], 0
        mov edx, dword ptr [ebp - 14h]
        mov byte ptr [edx + 41h], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 1ch], 0
        ; Exact mapped bytes E8 CE 9C FF FF: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        ; Exact mapped bytes E8 DB C3 FF FF: call 0x542d7a
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 24h
        ; Exact mapped bytes E8 E2 02 00 00: call 0x546c90
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 F7 C4 FF FF: call 0x542eac
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        push 40h
        push 67aea0h
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 9B 38 F9 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x38
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
