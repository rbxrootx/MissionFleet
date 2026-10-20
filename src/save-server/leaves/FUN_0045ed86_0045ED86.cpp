// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045ED86 .. +0x17E bytes.
extern "C" __declspec(naked) void FUN_0045ed86_0045ED86() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 77 14: ja 0x45edaa
        __asm _emit 0x77
        __asm _emit 0x14
        push 0b2eh
        push 678664h
        ; Exact mapped bytes E8 9B 9F 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x9f
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45edaa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x45ed90
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x45edca
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b2fh
        push 678664h
        ; Exact mapped bytes E8 7B 9F 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x9f
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45edca
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x45edb0
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        and edx, 2000h
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x45edf7
        __asm _emit 0x74
        __asm _emit 0x14
        push 0b32h
        push 678664h
        ; Exact mapped bytes E8 4E 9F 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x9f
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45edf7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x45edd0
        __asm _emit 0x75
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        and ecx, 4000h
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x45ee24
        __asm _emit 0x74
        __asm _emit 0x14
        push 0b33h
        push 678664h
        ; Exact mapped bytes E8 21 9F 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x9f
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45ee24
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x45edfd
        __asm _emit 0x75
        __asm _emit 0xd3
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        and eax, 1000h
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x45ee4f
        __asm _emit 0x74
        __asm _emit 0x14
        push 0b34h
        push 678664h
        ; Exact mapped bytes E8 F6 9E 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x9e
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45ee4f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x45ee2a
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 75 14: jne 0x45ee76
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b35h
        push 678664h
        ; Exact mapped bytes E8 CF 9E 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x9e
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45ee76
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x45ee55
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        cmp ecx, 1
        ; Exact mapped bytes 75 14: jne 0x45ee9e
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b36h
        push 678664h
        ; Exact mapped bytes E8 A7 9E 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x9e
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45ee9e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x45ee7c
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FF CD 0E 00: call 0x54bcab
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xcd
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes 66 8B 55 08: mov dx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        push edx
        ; Exact mapped bytes FF 15 54 BB 68 00: call dword ptr [0x68bb54]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 05: jne 0x45eed3
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 09 40 04 00: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        or ah, 20h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 14h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 23 CE 0E 00: call 0x54bd18
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xce
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10h], eax
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
