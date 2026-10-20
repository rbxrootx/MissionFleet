// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BE3F0 .. +0x9E bytes.
extern "C" __declspec(naked) void FUN_584be3f0_584BE3F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 58895a1ch
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584be414
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 7D 67: jge 0x584be481
        __asm _emit 0x7d
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 0b0h], 0
        ; Exact mapped bytes 74 55: je 0x584be47f
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 0b0h], 0
        ; Exact mapped bytes 74 45: je 0x584be47f
        __asm _emit 0x74
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 0b0h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x584be467
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x584be46e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 0b0h], 0
        ; Exact mapped bytes EB 8A: jmp 0x584be40b
        __asm _emit 0xeb
        __asm _emit 0x8a
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D7 66 2F 00: call 0x587b4b60
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x66
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
