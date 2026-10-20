// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053DFDE .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_0053dfde_0053DFDE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 09: jmp 0x53dff9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 3B 0D 48 72 68 00: cmp ecx, dword ptr [0x687248]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 7D 68: jge 0x53e06c
        __asm _emit 0x7d
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes A1 4C 72 68 00: mov eax, dword ptr [0x68724c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [eax + edx*4]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        xor eax, eax
        ; Exact mapped bytes 3B 15 48 72 68 00: cmp edx, dword ptr [0x687248]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        sete al
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 2dh
        ; Exact mapped bytes 74 0B: je 0x53e043
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 2fh
        ; Exact mapped bytes 75 10: jne 0x53e053
        __asm _emit 0x75
        __asm _emit 0x10
        mov dword ptr [ebp - 0ch], 1
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        ; Exact mapped bytes EB 84: jmp 0x53dff0
        __asm _emit 0xeb
        __asm _emit 0x84
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
