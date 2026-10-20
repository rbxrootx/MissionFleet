// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005626E4 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_005626e4_005626E4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x56270a
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b2h
        push 5ce898h
        ; Exact mapped bytes E8 FB 22 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x22
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56270a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5626f0
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 25: je 0x56273b
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 14h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 33 D7 F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xd7
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56273b
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b4h
        push 5ce898h
        ; Exact mapped bytes E8 CA 22 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x22
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56273b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x562710
        __asm _emit 0x75
        __asm _emit 0xcf
        lea eax, [ebp - 18h]
        push eax
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 2B B4 FE FF: call 0x54db7e
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp + 10h], eax
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax + 10h], 1
        push 1
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E8 FD FF FF: call 0x562556
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 14h], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1ch], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
