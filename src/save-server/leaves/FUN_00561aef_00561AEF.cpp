// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00561AEF .. +0x14F bytes.
extern "C" __declspec(naked) void FUN_00561aef_00561AEF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 1c1h
        push 67c6f0h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 52 87 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x87
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 4ch], 4
        ; Exact mapped bytes 74 19: je 0x561b30
        __asm _emit 0x74
        __asm _emit 0x19
        push 4
        push 4
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 50 74: call dword ptr [eax + 0x74]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 4ch], 4
        push 1cbh
        push 67c6f0h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 54h]
        push eax
        ; Exact mapped bytes E8 1A 87 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x87
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 3D 47 F7 FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x47
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 58h], eax
        push 0
        push 2000000h
        push 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 F1 47 F7 FF: call 0x4d635c
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x47
        __asm _emit 0xf7
        __asm _emit 0xff
        push 640c50h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes E8 7A 8D FE FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x8d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x561b99
        __asm _emit 0x75
        __asm _emit 0x14
        push 1d2h
        push 67c6f0h
        ; Exact mapped bytes E8 AC 71 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x71
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x561b99
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x561b7f
        __asm _emit 0x75
        __asm _emit 0xe0
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x561bba
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 64h], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 5ch], 0
        ; Exact mapped bytes 74 2B: je 0x561c03
        __asm _emit 0x74
        __asm _emit 0x2b
        push 1deh
        push 67c6f0h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes E8 6F 86 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x86
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ecx + 68h], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 74 2B: je 0x561c37
        __asm _emit 0x74
        __asm _emit 0x2b
        push 1e4h
        push 67c6f0h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 60h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes E8 3B 86 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 60h]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ecx + 68h], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
