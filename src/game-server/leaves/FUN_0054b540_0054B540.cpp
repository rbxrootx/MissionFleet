// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054B540 .. +0x182 bytes.
extern "C" __declspec(naked) void FUN_0054b540_0054B540() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f499h
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
        ; Exact mapped bytes E8 77 C7 FA FF: call 0x4f7ce0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xc7
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 44h
        ; Exact mapped bytes E8 95 03 00 00: call 0x54b910
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 5892bch
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 22: je 0x54b5ac
        __asm _emit 0x74
        __asm _emit 0x22
        push 583058h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 93 FE FA FF: call 0x4fb42a
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xfe
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x54b5ac
        __asm _emit 0x75
        __asm _emit 0x11
        push 28h
        push 5ce6c8h
        ; Exact mapped bytes E8 59 94 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54b5ac
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x54b584
        __asm _emit 0x75
        __asm _emit 0xd2
        push 0
        push 10h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 97 48 F8 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x48
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x54b5d4
        __asm _emit 0x75
        __asm _emit 0x11
        push 29h
        push 5ce6c8h
        ; Exact mapped bytes E8 31 94 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54b5d4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x54b5b2
        __asm _emit 0x75
        __asm _emit 0xd8
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 20: je 0x54b600
        __asm _emit 0x74
        __asm _emit 0x20
        push -1
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        ; Exact mapped bytes E8 47 48 F8 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x48
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x54b600
        __asm _emit 0x75
        __asm _emit 0x11
        push 2ah
        push 5ce6c8h
        ; Exact mapped bytes E8 05 94 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54b600
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x54b5da
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
        ; Exact mapped bytes E8 CE 9D FF FF: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        ; Exact mapped bytes E8 5B C6 FF FF: call 0x547cda
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 24h
        ; Exact mapped bytes E8 E2 02 00 00: call 0x54b970
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 77 C7 FF FF: call 0x547e0c
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        push 40h
        push 5ce6c8h
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 BB FA FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xfa
        __asm _emit 0xfa
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
