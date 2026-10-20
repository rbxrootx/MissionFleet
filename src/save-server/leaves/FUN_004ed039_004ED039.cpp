// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED039 .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_004ed039_004ED039() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 20h]
        and ecx, 40000000h
        test ecx, ecx
        ; Exact mapped bytes 75 11: jne 0x4ed064
        __asm _emit 0x75
        __asm _emit 0x11
        push 44h
        push 677b4ch
        ; Exact mapped bytes E8 E1 BC 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xbc
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ed064
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D9: jne 0x4ed043
        __asm _emit 0x75
        __asm _emit 0xd9
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 28h], 0
        ; Exact mapped bytes 75 2C: jne 0x4ed09f
        __asm _emit 0x75
        __asm _emit 0x2c
        push 8
        ; Exact mapped bytes E8 B1 82 FE FF: call 0x4d532b
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4ed08f
        __asm _emit 0x75
        __asm _emit 0x11
        push 48h
        push 677b4ch
        ; Exact mapped bytes E8 B6 BC 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xbc
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ed08f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x4ed073
        __asm _emit 0x75
        __asm _emit 0xde
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 28h], 634da4h
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 30: je 0x4ed0d8
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 20h]
        and ecx, 800000h
        test ecx, ecx
        ; Exact mapped bytes 74 20: je 0x4ed0d8
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 2ch]
        or ah, 2
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 2ch], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 20h]
        and eax, 0ff7fffffh
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 20h], eax
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
