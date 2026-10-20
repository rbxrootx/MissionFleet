// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58563500 .. +0x14D bytes.
extern "C" __declspec(naked) void FUN_58563500_58563500() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0fch], 0
        ; Exact mapped bytes 0F 84 30 01 00 00: je 0x58563649
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5ch], 0
        ; Exact mapped bytes 0F 85 23 01 00 00: jne 0x58563649
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 118h], 40000000h
        ; Exact mapped bytes 75 0F: jne 0x58563544
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0d0h], 2
        ; Exact mapped bytes EB 33: jmp 0x58563577
        __asm _emit 0xeb
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 110h], 40000000h
        ; Exact mapped bytes 75 17: jne 0x5856356a
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0cch]
        add eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0d0h], eax
        ; Exact mapped bytes EB 0D: jmp 0x58563577
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0d0h], 5
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 108h], 40000000h
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x58563615
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0d0h]
        imul eax, dword ptr [edx + 124h]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 0a8h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a8h], eax
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 0a8h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a8h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0a8h], 0
        ; Exact mapped bytes 7D 17: jge 0x585635ec
        __asm _emit 0x7d
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        add eax, 0e10h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a8h], eax
        push 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 50 01 00 00: call 0x58563750
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3C 01 00 00: call 0x58563750
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 168h], 0
        ; Exact mapped bytes 74 28: je 0x58563649
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 168h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 130h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 68 96 FB FF: call 0x5851ccb0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
