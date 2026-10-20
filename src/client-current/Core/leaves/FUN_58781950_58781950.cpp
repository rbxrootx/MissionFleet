// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58781950 .. +0x10C bytes.
extern "C" __declspec(naked) void FUN_58781950_58781950() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 09: jmp 0x5878196d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 DF 00 00 00: je 0x58781a56
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E1 30 D0 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x30
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        shr ecx, 0ah
        and ecx, 3fffffh
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 BE 00 00 00: jne 0x58781a51
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 30: jne 0x587819cc
        __asm _emit 0x75
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 0C: jne 0x587819bd
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], 0
        ; Exact mapped bytes EB 0D: jmp 0x587819ca
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [eax + 4], 0
        ; Exact mapped bytes EB 35: jmp 0x58781a01
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 0E: jne 0x587819f2
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 8], edx
        ; Exact mapped bytes EB 0F: jmp 0x58781a01
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        sub edx, 1
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], edx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 30h]
        ; Exact mapped bytes 75 0A: jne 0x58781a25
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 30h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x58781a48
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x58781a4f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 05: jmp 0x58781a56
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 0E FF FF FF: jmp 0x58781964
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
