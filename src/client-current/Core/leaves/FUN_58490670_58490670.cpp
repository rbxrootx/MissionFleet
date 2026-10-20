// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58490670 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_58490670_58490670() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0e0h], 0
        ; Exact mapped bytes 74 71: je 0x584906f6
        __asm _emit 0x74
        __asm _emit 0x71
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e0h]
        cmp dword ptr [edx + ecx], 0
        ; Exact mapped bytes 74 5A: je 0x584906f6
        __asm _emit 0x74
        __asm _emit 0x5a
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584906ae
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0ech]
        cmp dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 7D 39: jge 0x584906f6
        __asm _emit 0x7d
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e0h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 23: jne 0x584906f4
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e4h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*4]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e4h]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4], eax
        ; Exact mapped bytes EB 02: jmp 0x584906f6
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB AF: jmp 0x584906a5
        __asm _emit 0xeb
        __asm _emit 0xaf
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
