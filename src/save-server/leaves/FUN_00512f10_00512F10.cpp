// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00512F10 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_00512f10_00512F10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FC 16 00 00: call 0x514620
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 44h], 0
        ; Exact mapped bytes 74 58: je 0x512f85
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 40 BE 68 00: call dword ptr [0x68be40]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp eax, dword ptr [ecx + 44h]
        ; Exact mapped bytes 74 43: je 0x512f85
        __asm _emit 0x74
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 44h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 3C BE 68 00: call dword ptr [0x68be3c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 40 BE 68 00: call dword ptr [0x68be40]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 44h]
        ; Exact mapped bytes 74 14: je 0x512f7f
        __asm _emit 0x74
        __asm _emit 0x14
        push 35eh
        push 673dc0h
        ; Exact mapped bytes E8 C6 5D 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512f7f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D1: jne 0x512f56
        __asm _emit 0x75
        __asm _emit 0xd1
        ; Exact mapped bytes E8 E6 EA 01 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1E: je 0x512fb1
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 13: jne 0x512fb1
        __asm _emit 0x75
        __asm _emit 0x13
        push 0
        push 2
        push 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 E0 BE 68 00: call dword ptr [0x68bee0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 85 D7 FB FF: call 0x4d073e
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0xfb
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
