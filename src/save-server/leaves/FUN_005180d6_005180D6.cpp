// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005180D6 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_005180d6_005180D6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 34 A7 FB FF: call 0x4d2823
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xa7
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x5180fd
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x518181
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        shr ecx, 10h
        and ecx, 0ffffh
        and ecx, 0ffffh
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 55: je 0x51817f
        __asm _emit 0x74
        __asm _emit 0x55
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 4F: jne 0x51817f
        __asm _emit 0x75
        __asm _emit 0x4f
        push 0
        push 0
        push 87h
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 2010h
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x51817f
        __asm _emit 0x74
        __asm _emit 0x33
        push -10h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 0fh
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 12: je 0x518176
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 74 0C: je 0x518176
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp - 10h], 8
        ; Exact mapped bytes 74 06: je 0x518176
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 10h], 0bh
        ; Exact mapped bytes 75 09: jne 0x51817f
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2ch], edx
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
