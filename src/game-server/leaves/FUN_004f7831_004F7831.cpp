// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F7831 .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_004f7831_004F7831() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 01 DC 04 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x4f785f
        __asm _emit 0x74
        __asm _emit 0x14
        push 0ed1h
        push 5c5574h
        ; Exact mapped bytes E8 A6 D1 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd1
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f785f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4f783d
        __asm _emit 0x75
        __asm _emit 0xd8
        ; Exact mapped bytes E8 D9 DB 04 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xdb
        __asm _emit 0x04
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x4f7877
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 6E: jmp 0x4f78e5
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x4f7894
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ed6h
        push 5c5574h
        ; Exact mapped bytes E8 71 D1 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7894
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4f7877
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, 5de894h
        ; Exact mapped bytes E8 1C AC 04 00: call 0x5424c0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 75 1A: jne 0x4f78c7
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 28h], 0
        ; Exact mapped bytes 74 0F: je 0x4f78c5
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 51 28: call dword ptr [ecx + 0x28]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x28
        ; Exact mapped bytes EB 20: jmp 0x4f78e5
        __asm _emit 0xeb
        __asm _emit 0x20
        ; Exact mapped bytes EB 1C: jmp 0x4f78e3
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2ch], 0
        ; Exact mapped bytes 74 13: je 0x4f78e3
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 2C: call dword ptr [eax + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x2c
        ; Exact mapped bytes EB 02: jmp 0x4f78e5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
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
