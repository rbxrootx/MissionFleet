// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58590670 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_58590670_58590670() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 14: je 0x58590696
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585906a8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 2B: jge 0x585906d9
        __asm _emit 0x7d
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 8], 0
        ; Exact mapped bytes 74 1C: je 0x585906d7
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [edx + ecx*4 + 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB C6: jmp 0x5859069f
        __asm _emit 0xeb
        __asm _emit 0xc6
        mov esp, ebp
        pop ebp
        ret
    }
}
