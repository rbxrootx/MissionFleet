// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00429107 .. +0xFF bytes.
extern "C" __declspec(naked) void FUN_00429107_00429107() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x4291f4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4ch]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 85 C6 00 00 00: jne 0x4291f4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 54h], 0
        ; Exact mapped bytes 74 3A: je 0x429171
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 54h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 58h]
        mov dword ptr [ecx + 58h], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 58h], 0
        ; Exact mapped bytes 74 11: je 0x429160
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 58h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [eax + 54h], edx
        ; Exact mapped bytes EB 0F: jmp 0x42916f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [eax + 118h], edx
        ; Exact mapped bytes EB 34: jmp 0x4291a5
        __asm _emit 0xeb
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [eax + 114h], edx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 74 0F: je 0x429198
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [edx + 54h], 0
        ; Exact mapped bytes EB 0D: jmp 0x4291a5
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 118h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 110h]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 110h], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4ch], 0
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 54h], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 58h], 0
        push 0
        push 46bh
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0c90h
        ; Exact mapped bytes E8 7A 80 FD FF: call 0x401267
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4291f6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 F0 BB 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
