// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D8F9D .. +0xDC bytes.
extern "C" __declspec(naked) void FUN_004d8f9d_004D8F9D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 1d1h
        push 6725f0h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 A4 12 00 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 1
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 44: je 0x4d9014
        __asm _emit 0x74
        __asm _emit 0x44
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 34h
        push ecx
        ; Exact mapped bytes FF 15 88 BE 68 00: call dword ptr [0x68be88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2B: jne 0x4d9014
        __asm _emit 0x75
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 50 68: call dword ptr [eax + 0x68]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x68
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4d9012
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB B6: jmp 0x4d8fca
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x4d9030
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        ; Exact mapped bytes EB 65: jmp 0x4d9095
        __asm _emit 0xeb
        __asm _emit 0x65
        mov eax, dword ptr [ebp - 0ch]
        add eax, 34h
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x4d9054
        __asm _emit 0x74
        __asm _emit 0x0e
        mov dword ptr [ebp - 8], 1
        mov dword ptr [ebp - 4], 0
        push 0
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 0ch]
        add eax, 34h
        push eax
        ; Exact mapped bytes FF 15 88 BE 68 00: call dword ptr [0x68be88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 A7: jne 0x4d9014
        __asm _emit 0x75
        __asm _emit 0xa7
        ; Exact mapped bytes E9 58 FF FF FF: jmp 0x4d8fca
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 1
        test ecx, ecx
    }
}
