// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048AB38 .. +0x121 bytes.
extern "C" __declspec(naked) void FUN_0048ab38_0048AB38() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x48ac2e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 78 48 FC FF: call 0x44f3d0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 85 CD 00 00 00: jne 0x48ac2e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F7 17 00 00: call 0x48c360
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 3F: jne 0x48abac
        __asm _emit 0x75
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3B 94 F7 FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x94
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c28h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2A 94 F7 FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x94
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x48ab9d
        __asm _emit 0x74
        __asm _emit 0x13
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1C 94 F7 FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x94
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 25 DB FA FF: call 0x4386c0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xdb
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x48abaa
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c2ch], 0
        ; Exact mapped bytes EB 4F: jmp 0x48abfb
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FC 93 F7 FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x93
        __asm _emit 0xf7
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A3 17 00 00: call 0x48c360
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 1C DB FA FF: call 0x4386e0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xdb
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E4 93 F7 FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x93
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x48abea
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 88 17 00 00: call 0x48c360
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CF 93 F7 FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x93
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D8 DA FA FF: call 0x4386c0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xda
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 11: jmp 0x48abfb
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6E 17 00 00: call 0x48c360
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c2ch], eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FB 16 00 00: call 0x48c300
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B1 DA FA FF: call 0x4386c0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xda
        __asm _emit 0xfa
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C7 DA FA FF: call 0x4386e0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xda
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bb0h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0bb0h], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        push 0
        push 469h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 40h]
        ; Exact mapped bytes E8 95 0F 0B 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x0f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 8D DB 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
