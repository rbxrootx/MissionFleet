// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040D906 .. +0x104 bytes.
extern "C" __declspec(naked) void FUN_0040d906_0040D906() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 120h
        ; Exact mapped bytes E8 19 02 02 00: call 0x42db36
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 0B 02 02 00: call 0x42db36
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 128h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 12ch], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 130h
        ; Exact mapped bytes E8 E3 01 02 00: call 0x42db36
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 134h], 0
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 135h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 138h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 118h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 11ch], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 114h], 0
        ; Exact mapped bytes 74 25: je 0x40d9bf
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 114h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 66 FF 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 114h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 110h], 0
        ; Exact mapped bytes 74 3B: je 0x40da06
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 110h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0F: je 0x40d9f2
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 83 B1 FF FF: call 0x408b70
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x40d9f9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 110h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
