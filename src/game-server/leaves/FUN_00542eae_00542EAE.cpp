// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00542EAE .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_00542eae_00542EAE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 09: jmp 0x542ec9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 3B 0D 6C ED 5D 00: cmp ecx, dword ptr [0x5ded6c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 7D 68: jge 0x542f3c
        __asm _emit 0x7d
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes A1 70 ED 5D 00: mov eax, dword ptr [0x5ded70]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + edx*4]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        xor eax, eax
        ; Exact mapped bytes 3B 15 6C ED 5D 00: cmp edx, dword ptr [0x5ded6c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        sete al
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 2dh
        ; Exact mapped bytes 74 0B: je 0x542f13
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 2fh
        ; Exact mapped bytes 75 10: jne 0x542f23
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
        ; Exact mapped bytes EB 84: jmp 0x542ec0
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
