// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585FE1C0 .. +0xD6 bytes.
extern "C" __declspec(naked) void FUN_585fe1c0_585FE1C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax*4 + 58948c34h]
        ; Exact mapped bytes E8 B8 8F ED FF: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x8f
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        sub edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 6ch], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 6ch], 0
        ; Exact mapped bytes 0F 8C 8F 00 00 00: jl 0x585fe286
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585fe209
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7D 73: jge 0x585fe284
        __asm _emit 0x7d
        __asm _emit 0x73
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 6ch], 0
        ; Exact mapped bytes 7C 65: jl 0x585fe27f
        __asm _emit 0x7c
        __asm _emit 0x65
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0d4h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C9 9B 13 00: call 0x58737e10
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x9b
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0d4h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 0d4h]
        ; Exact mapped bytes E8 47 DE E8 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xde
        __asm _emit 0xe8
        __asm _emit 0xff
        imul ecx, dword ptr [ebp + 0ch], 0eh
        add eax, ecx
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B2 74 1B 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x74
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 7C FF FF FF: jmp 0x585fe200
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x585fe290
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 6ch], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
