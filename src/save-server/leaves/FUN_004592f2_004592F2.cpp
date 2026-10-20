// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004592F2 .. +0x132 bytes.
extern "C" __declspec(naked) void FUN_004592f2_004592F2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        cmp ecx, 2011h
        ; Exact mapped bytes 75 16: jne 0x459321
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 20 BB 68 00: call dword ptr [0x68bb20]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 74 64: je 0x459385
        __asm _emit 0x74
        __asm _emit 0x64
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 08 BB 68 00: call dword ptr [0x68bb08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x459343
        __asm _emit 0x74
        __asm _emit 0x14
        push 98h
        push 678664h
        ; Exact mapped bytes E8 02 FA 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xfa
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x459343
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x459321
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 00 11 20: mov word ptr [eax], 0x2011
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x11
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        lea edx, [ebp - 0ch]
        push edx
        push 1
        push 11h
        ; Exact mapped bytes FF 15 54 BB 68 00: call dword ptr [0x68bb54]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 05: jne 0x459380
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 5C 9B 04 00: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x45941b
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 18h]
        push eax
        push 1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 EC BA 68 00: call dword ptr [0x68baec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 E2 FA FF FF: call 0x458e80
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 14h]
        push eax
        push 1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 F0 BA 68 00: call dword ptr [0x68baf0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 C9 FA FF FF: call 0x458e80
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        sub eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 2A: jge 0x4593f0
        __asm _emit 0x7d
        __asm _emit 0x2a
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x4593e3
        __asm _emit 0x74
        __asm _emit 0x14
        push 0adh
        push 678664h
        ; Exact mapped bytes E8 62 F9 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf9
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4593e3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4593c6
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 23: je 0x45941b
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], edx
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 58 BB 68 00: call dword ptr [0x68bb58]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 65 FA FF FF: call 0x458e80
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
