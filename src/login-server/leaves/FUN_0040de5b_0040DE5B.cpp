// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040DE5B .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_0040de5b_0040DE5B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 120h
        ; Exact mapped bytes E8 C4 FC 01 00: call 0x42db36
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 B6 FC 01 00: call 0x42db36
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 118h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 11ch], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 114h], 0
        ; Exact mapped bytes 74 25: je 0x40decb
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 114h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 5A FA 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 114h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 110h], 0
        ; Exact mapped bytes 74 3B: je 0x40df12
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 110h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0F: je 0x40defe
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 77 AC FF FF: call 0x408b70
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x40df05
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 110h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
