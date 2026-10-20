// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FF0F0 .. +0x129 bytes.
extern "C" __declspec(naked) void FUN_584ff0f0_584FF0F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        xor eax, 55h
        mov ecx, 2
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 44 11 58: mov word ptr [ecx + edx + 0x58], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 0ch]
        xor edx, 55h
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 54 01 58: mov word ptr [ecx + eax + 0x58], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 10h]
        xor edx, 55h
        mov eax, 2
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 54 01 58: mov word ptr [ecx + eax + 0x58], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x58
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 228h]
        mov dword ptr [ebp - 8], edx
        mov eax, 2
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 58h]
        xor eax, 55h
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F5 4F 00 00: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 228h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 58h]
        xor ecx, 55h
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        movzx edx, word ptr [eax + edx + 58h]
        xor edx, 55h
        add ecx, edx
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AF 4F 00 00: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 228h]
        mov dword ptr [ebp - 10h], edx
        mov eax, 2
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 58h]
        xor eax, 55h
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        movzx ecx, word ptr [edx + ecx + 58h]
        xor ecx, 55h
        add eax, ecx
        mov edx, 2
        shl edx, 1
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + edx + 58h]
        xor edx, 55h
        add eax, edx
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 56 4F 00 00: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EE E3 FF FF: call 0x584fd600
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
