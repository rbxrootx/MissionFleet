// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00578EED .. +0x134 bytes.
extern "C" __declspec(naked) void FUN_00578eed_00578EED() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x578f16
        __asm _emit 0x75
        __asm _emit 0x14
        push 110h
        push 5d1160h
        ; Exact mapped bytes E8 EF BA FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xba
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x578f16
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x578ef9
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 75 14: jne 0x578f3e
        __asm _emit 0x75
        __asm _emit 0x14
        push 111h
        push 5d1160h
        ; Exact mapped bytes E8 C7 BA FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xba
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x578f3e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x578f1c
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 98 1F 5E 00: call dword ptr [0x5e1f98]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 08: jne 0x578f75
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x579018
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 23h
        ; Exact mapped bytes 7F 27: jg 0x578fa8
        __asm _emit 0x7f
        __asm _emit 0x27
        cmp dword ptr [ebp - 0ch], 22h
        ; Exact mapped bytes 7D 6F: jge 0x578ff6
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 3
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 1dh
        ; Exact mapped bytes 77 7F: ja 0x579015
        __asm _emit 0x77
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 0ch]
        xor eax, eax
        mov al, byte ptr [ecx + 579029h]
        ; Exact mapped bytes FF 24 85 21 90 57 00: jmp dword ptr [eax*4 + 0x579021]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0x90
        __asm _emit 0x57
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 1007h
        ; Exact mapped bytes 7F 31: jg 0x578fe2
        __asm _emit 0x7f
        __asm _emit 0x31
        cmp dword ptr [ebp - 0ch], 1007h
        ; Exact mapped bytes 74 3C: je 0x578ff6
        __asm _emit 0x74
        __asm _emit 0x3c
        cmp dword ptr [ebp - 0ch], 304h
        ; Exact mapped bytes 7F 1D: jg 0x578fe0
        __asm _emit 0x7f
        __asm _emit 0x1d
        cmp dword ptr [ebp - 0ch], 300h
        ; Exact mapped bytes 7D 2A: jge 0x578ff6
        __asm _emit 0x7d
        __asm _emit 0x2a
        cmp dword ptr [ebp - 0ch], 100h
        ; Exact mapped bytes 7C 40: jl 0x579015
        __asm _emit 0x7c
        __asm _emit 0x40
        cmp dword ptr [ebp - 0ch], 103h
        ; Exact mapped bytes 7E 18: jle 0x578ff6
        __asm _emit 0x7e
        __asm _emit 0x18
        ; Exact mapped bytes EB 35: jmp 0x579015
        __asm _emit 0xeb
        __asm _emit 0x35
        ; Exact mapped bytes EB 33: jmp 0x579015
        __asm _emit 0xeb
        __asm _emit 0x33
        cmp dword ptr [ebp - 0ch], 1009h
        ; Exact mapped bytes 7C 2A: jl 0x579015
        __asm _emit 0x7c
        __asm _emit 0x2a
        cmp dword ptr [ebp - 0ch], 100ah
        ; Exact mapped bytes 7E 02: jle 0x578ff6
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes EB 1F: jmp 0x579015
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 98 1F 5E 00: call dword ptr [0x5e1f98]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 03: jmp 0x579018
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 4]
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
