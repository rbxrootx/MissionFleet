// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042964A .. +0x10E bytes.
extern "C" __declspec(naked) void FUN_0042964a_0042964A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov esi, esp
        ; Exact mapped bytes FF 15 CC C0 68 00: call dword ptr [0x68c0cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xc0
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 78 B7 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xb7
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 114h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x429749
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 87 02 00 00: call 0x429920
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x42973b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 37 02 00 00: call 0x4298e0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        sub edx, eax
        mov eax, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [eax + 0c74h]
        ; Exact mapped bytes 76 39: jbe 0x4296f2
        __asm _emit 0x76
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 0c7ch], 0
        ; Exact mapped bytes 74 0E: je 0x4296d3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 0c7ch]
        ; Exact mapped bytes E8 ED 02 00 00: call 0x4299c0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 4cch
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0b0h
        ; Exact mapped bytes E8 7F 7B FD FF: call 0x401267
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x7b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9D 08 00 00: call 0x429f8d
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 49: jmp 0x42973b
        __asm _emit 0xeb
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 40: je 0x42973b
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DD 01 00 00: call 0x4298e0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        sub ecx, eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0c74h]
        cdq
        sub eax, edx
        sar eax, 1
        cmp ecx, eax
        ; Exact mapped bytes 76 21: jbe 0x42973b
        __asm _emit 0x76
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8001000fh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E7 09 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes E9 3E FF FF FF: jmp 0x429687
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 9C B6 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xb6
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
