// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BE340 .. +0xC3 bytes.
extern "C" __declspec(naked) void FUN_587be340_587BE340() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        sub edx, 2
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 0F 87 94 00 00 00: ja 0x587be3f9
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 85 04 E4 7B 58: jmp dword ptr [eax*4 + 0x587be404]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0xe4
        __asm _emit 0x7b
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], 1
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 30h], 0
        ; Exact mapped bytes 74 2E: je 0x587be3b0
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        ; Exact mapped bytes E8 03 23 CE FF: call 0x584a0690
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x23
        __asm _emit 0xce
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 1C: je 0x587be3b0
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        push 4
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 30h]
        mov edx, dword ptr [eax + 18h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        xor eax, eax
        ; Exact mapped bytes EB 4B: jmp 0x587be3ff
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 5
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 30h], 0
        ; Exact mapped bytes 74 2E: je 0x587be3f5
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 30h]
        ; Exact mapped bytes E8 BE 22 CE FF: call 0x584a0690
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x22
        __asm _emit 0xce
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x587be3f5
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        push 4
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 30h]
        mov eax, dword ptr [edx + 18h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        xor eax, eax
        ; Exact mapped bytes EB 06: jmp 0x587be3ff
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 34h]
        mov esp, ebp
        pop ebp
        ret
    }
}
