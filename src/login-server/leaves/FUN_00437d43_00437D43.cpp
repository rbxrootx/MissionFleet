// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437D43 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_00437d43_00437D43() {
    __asm {
        mov eax, 43b1fch
        ; Exact mapped bytes E8 BB 78 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        mov eax, dword ptr [ebp + 8]
        push ebx
        push esi
        push edi
        lea edi, [eax - 34h]
        mov eax, dword ptr [ebp + 14h]
        test eax, eax
        mov dword ptr [ebp - 10h], esp
        ; Exact mapped bytes 74 03: je 0x437d64
        __asm _emit 0x74
        __asm _emit 0x03
        and dword ptr [eax], 0
        mov ebx, dword ptr [ebp + 0ch]
        mov esi, dword ptr [ebp + 10h]
        and dword ptr [ebp - 4], 0
        mov dword ptr [ebp + 8], ebx
        mov dword ptr [ebp + 10h], 8000ffffh
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 22: je 0x437da0
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [edi]
        push esi
        mov ecx, edi
        ; Exact mapped bytes FF 50 50: call dword ptr [eax + 0x50]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x50
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x437da0
        __asm _emit 0x74
        __asm _emit 0x16
        add esi, dword ptr [edi + 1ch]
        dec dword ptr [ebp + 8]
        ; Exact mapped bytes EB E6: jmp 0x437d78
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 8C A9 FF FF: call 0x432726
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 437db7h
        ret
        mov eax, dword ptr [ebp + 14h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x437dac
        __asm _emit 0x74
        __asm _emit 0x05
        sub ebx, dword ptr [ebp + 8]
        mov dword ptr [eax], ebx
        xor eax, eax
        cmp dword ptr [ebp + 8], eax
        setne al
        mov dword ptr [ebp + 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 10h]
    }
}
