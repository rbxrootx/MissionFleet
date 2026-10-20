// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00573642 .. +0x18D bytes.
extern "C" __declspec(naked) void FUN_00573642_00573642() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 2b0h
        push 67cd14h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 FF 6B F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x6b
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 0c0h], 0
        ; Exact mapped bytes 74 21: je 0x57368e
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
        ; Exact mapped bytes 74 05: je 0x573681
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 47 01 00 00: jmp 0x5737c8
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 0c0h], 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BE 78 FD FF: call 0x54af54
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x78
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B2 8E FF FF: call 0x56c554
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 0ach], 0
        ; Exact mapped bytes 74 33: je 0x5736e1
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 0b4h], 0
        ; Exact mapped bytes 74 27: je 0x5736e1
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
        ; Exact mapped bytes E8 58 55 00 00: call 0x578c41
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
        ; Exact mapped bytes E8 96 8D FF FF: call 0x56c49a
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        push 2d2h
        push 67cd14h
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 49 6B F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x6b
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 0ach], 0
        ; Exact mapped bytes 74 25: je 0x573748
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
        ; Exact mapped bytes 75 C9: jne 0x573717
        __asm _emit 0x75
        __asm _emit 0xc9
        push 640d30h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 49 73 FD FF: call 0x54aaa4
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x73
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x573778
        __asm _emit 0x75
        __asm _emit 0x14
        push 2d9h
        push 67cd14h
        ; Exact mapped bytes E8 CD 55 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x55
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x573778
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x57375e
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 14 C3 68 00: call dword ptr [0x68c314]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        add edx, 4
        push edx
        ; Exact mapped bytes FF 15 20 BA 68 00: call dword ptr [0x68ba20]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 2B: je 0x5737c8
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 12: je 0x5737c1
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
        ; Exact mapped bytes EB 07: jmp 0x5737c8
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
