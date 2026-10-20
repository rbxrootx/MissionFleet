// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00554DC7 .. +0x205 bytes.
extern "C" __declspec(naked) void FUN_00554dc7_00554DC7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 60h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 60h], ecx
        push 393h
        push 5cfa08h
        mov eax, dword ptr [ebp - 60h]
        push eax
        ; Exact mapped bytes E8 7A 63 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x63
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 60h]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 75 14: jne 0x554e03
        __asm _emit 0x75
        __asm _emit 0x14
        push 394h
        push 5cfa08h
        ; Exact mapped bytes E8 02 FC FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554e03
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x554de6
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 60h]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 75 14: jne 0x554e26
        __asm _emit 0x75
        __asm _emit 0x14
        push 395h
        push 5cfa08h
        ; Exact mapped bytes E8 DF FB FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xfb
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554e26
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x554e09
        __asm _emit 0x75
        __asm _emit 0xdd
        push 58e4b0h
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes E8 49 70 FF FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x554e5a
        __asm _emit 0x75
        __asm _emit 0x14
        push 39ah
        push 5cfa08h
        ; Exact mapped bytes E8 AB FB FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfb
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554e5a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x554e40
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 58 2F 00 00: call 0x557dc0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 75 10: jne 0x554e7e
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 34: jne 0x554eb2
        __asm _emit 0x75
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 3A 2F 00 00: call 0x557dc0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        cmp dword ptr [eax + 74h], 0
        sete dl
        push edx
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 B8 29 5E 00: call dword ptr [0x5e29b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 20: call dword ptr [ecx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        push 1
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax + 34h]
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [edx + 34h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 24: call dword ptr [edx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax + 38h]
        push ecx
        ; Exact mapped bytes FF 15 BC 29 5E 00: call dword ptr [0x5e29bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x554ef7
        __asm _emit 0x74
        __asm _emit 0x14
        push 3a4h
        push 5cfa08h
        ; Exact mapped bytes E8 0E FB FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xfb
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554ef7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x554ed2
        __asm _emit 0x75
        __asm _emit 0xd5
        lea eax, [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx + 38h]
        push edx
        ; Exact mapped bytes FF 15 C0 29 5E 00: call dword ptr [0x5e29c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 09: je 0x554f20
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 58h]
        push eax
        ; Exact mapped bytes E8 6A 85 FF FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        lea ecx, [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [edx + 38h]
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx + 38h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 24: call dword ptr [ecx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x24
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 09: je 0x554f4a
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 58h]
        push edx
        ; Exact mapped bytes E8 40 85 FF FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 14: je 0x554f64
        __asm _emit 0x74
        __asm _emit 0x14
        push 3b1h
        push 5cfa08h
        ; Exact mapped bytes E8 A1 FA FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554f64
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x554f4a
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 12 CC FD FF: call 0x531b8e
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xcc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 54h]
        push eax
        ; Exact mapped bytes FF 15 A8 23 5E 00: call dword ptr [0x5e23a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 75 14: jne 0x554fa3
        __asm _emit 0x75
        __asm _emit 0x14
        push 3b7h
        push 5cfa08h
        ; Exact mapped bytes E8 62 FA FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554fa3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x554f89
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 04 FB FF: call 0x5053e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x04
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        ; Exact mapped bytes FF 15 AC 23 5E 00: call dword ptr [0x5e23ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
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
