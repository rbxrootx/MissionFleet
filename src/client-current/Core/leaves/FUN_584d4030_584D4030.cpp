// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584D4030 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_584d4030_584D4030() {
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
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x584d40e3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x584d40e3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 68h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], 0fh
        ; Exact mapped bytes 75 0B: jne 0x584d4083
        __asm _emit 0x75
        __asm _emit 0x0b
        push 0fh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0E 1F FB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x1f
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 09 FB FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x09
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7A 18 FB FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x18
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x584d40ce
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 DB 17 FC FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x17
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x584d40ce
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 99 08 FB FF: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x08
        __asm _emit 0xfb
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 15: jne 0x584d40e3
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 60h], 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AE 1E FB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x1e
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
