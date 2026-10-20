// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588E73A0 .. +0xD9 bytes.
extern "C" __declspec(naked) void FUN_588e73a0() {
    __asm {
        mov eax, dword ptr [ecx + 4ch]
        xor eax, 0aaaaaaaah
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x588e7459
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx + 0ccch], 0
        ; Exact mapped bytes 74 7F: je 0x588e7436
        __asm _emit 0x74
        __asm _emit 0x7f
        cmp dword ptr [ecx + 0cc8h], 0
        ; Exact mapped bytes 74 76: je 0x588e7436
        __asm _emit 0x74
        __asm _emit 0x76
        cmp dword ptr [ecx + 9a4h], 0
        ; Exact mapped bytes 74 4A: je 0x588e7413
        __asm _emit 0x74
        __asm _emit 0x4a
        mov edx, dword ptr [ecx + 0cc0h]
        mov eax, dword ptr [edx + 78h]
        mov ecx, dword ptr [ecx + 0a70h]
        imul eax, eax, 3e8h
        xor ecx, 0aaaaaaaah
        cmp ecx, eax
        ; Exact mapped bytes 77 08: ja 0x588e73f0
        __asm _emit 0x77
        __asm _emit 0x08
        mov eax, 1
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esp + 4], 0
        ; Exact mapped bytes 74 7D: je 0x588e7474
        __asm _emit 0x74
        __asm _emit 0x7d
        push 0
        push 0
        push 0
        push 12dh
        ; Exact mapped bytes E8 E9 46 E8 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 22 D9 E7 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xd9
        __asm _emit 0xe7
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esp + 4], 0
        ; Exact mapped bytes 74 5A: je 0x588e7474
        __asm _emit 0x74
        __asm _emit 0x5a
        push 0
        push 0
        push 0
        push 132h
        ; Exact mapped bytes E8 C6 46 E8 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x46
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FF D8 E7 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xd8
        __asm _emit 0xe7
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esp + 4], 0
        ; Exact mapped bytes 74 37: je 0x588e7474
        __asm _emit 0x74
        __asm _emit 0x37
        push 0
        push 0
        push 0
        push 399h
        ; Exact mapped bytes E8 A3 46 E8 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x46
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DC D8 E7 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xd8
        __asm _emit 0xe7
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esp + 4], 0
        ; Exact mapped bytes 74 14: je 0x588e7474
        __asm _emit 0x74
        __asm _emit 0x14
        push 0
        push 0
        push 0
        push 0eh
        ; Exact mapped bytes E8 83 46 E8 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x46
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BC D8 E7 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd8
        __asm _emit 0xe7
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
