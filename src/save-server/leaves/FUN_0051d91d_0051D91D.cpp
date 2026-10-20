// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051D91D .. +0xD6 bytes.
extern "C" __declspec(naked) void FUN_0051d91d_0051D91D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B6 FA 00 00: call 0x52d3eb
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x51d940
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x51d9ea
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 46 89 FB FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x89
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 100h
        test eax, eax
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x51d9e5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E1 51 FB FF: call 0x4d2b3e
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x51
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x51d97a
        __asm _emit 0x75
        __asm _emit 0x14
        push 9ch
        push 679288h
        ; Exact mapped bytes E8 CB B3 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51d97a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x51d960
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes E8 5C F5 00 00: call 0x52cee1
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 2B: je 0x51d9bb
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5E F0 00 00: call 0x52c9f6
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 15: jne 0x51d9b2
        __asm _emit 0x75
        __asm _emit 0x15
        push 0
        push 40h
        push 36dh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8B DC 00 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x51d9bb
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 07: jmp 0x51d9c2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 1
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 4], eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        neg ecx
        sbb ecx, ecx
        and ecx, 0fffffffch
        add ecx, 8
        push ecx
        push 36dh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 54 DC 00 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
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
