// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58617F30 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_58617f30_58617F30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 97 00 00 00: jne 0x58617fda
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 0a4h]
        ; Exact mapped bytes 74 17: je 0x58617f71
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 0a4h]
        ; Exact mapped bytes 75 69: jne 0x58617fda
        __asm _emit 0x75
        __asm _emit 0x69
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 08: je 0x58617f8b
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 74 02: je 0x58617f8b
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 4F: jmp 0x58617fda
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 0a4h]
        ; Exact mapped bytes 75 0B: jne 0x58617fad
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B6 01 00 00: call 0x58618160
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2D: jmp 0x58617fda
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 0a4h]
        ; Exact mapped bytes 75 16: jne 0x58617fda
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 44 01 00 00: call 0x58618110
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
