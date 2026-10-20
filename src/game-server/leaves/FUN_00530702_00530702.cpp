// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00530702 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_00530702_00530702() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 11: je 0x530726
        __asm _emit 0x74
        __asm _emit 0x11
        push 2ch
        push 5cf778h
        ; Exact mapped bytes E8 DF 42 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x530726
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x53070c
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 20h], 0
        ; Exact mapped bytes 74 11: je 0x530746
        __asm _emit 0x74
        __asm _emit 0x11
        push 2dh
        push 5cf778h
        ; Exact mapped bytes E8 BF 42 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x530746
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x53072c
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 14h], 0
        ; Exact mapped bytes 74 11: je 0x530766
        __asm _emit 0x74
        __asm _emit 0x11
        push 2eh
        push 5cf778h
        ; Exact mapped bytes E8 9F 42 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x530766
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x53074c
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 2ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2ch]
        push eax
        ; Exact mapped bytes FF 15 A8 23 5E 00: call dword ptr [0x5e23a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2ch]
        push eax
        ; Exact mapped bytes FF 15 C8 22 5E 00: call dword ptr [0x5e22c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [edx + 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 30h], eax
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
