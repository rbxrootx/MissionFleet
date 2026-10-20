// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58827660 .. +0x100 bytes.
extern "C" __declspec(naked) void FUN_58827660_58827660() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 DB 00 00 00: je 0x5882775e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 4
        ; Exact mapped bytes 74 09: je 0x58827695
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 50h], 6
        ; Exact mapped bytes 75 3F: jne 0x588276d4
        __asm _emit 0x75
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 58h], 0
        ; Exact mapped bytes 75 27: jne 0x588276c5
        __asm _emit 0x75
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 74 10: je 0x588276b7
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 30h]
        ; Exact mapped bytes E8 5A CB F9 FF: call 0x587c4210
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xcb
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [eax + 58h], edx
        ; Exact mapped bytes EB 0F: jmp 0x588276d4
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 58h], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x588276f5
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x588276f5
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x5882775e
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x58827718
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x588276fe
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F0 DE C6 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xde
        __asm _emit 0xc6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x5882773c
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x5882775e
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x5882775c
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CC DE C6 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xde
        __asm _emit 0xc6
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x588276fe
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
