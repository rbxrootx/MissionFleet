// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58485FC0 .. +0xD8 bytes.
extern "C" __declspec(naked) void FUN_58485fc0_58485FC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 0F 8C BD 00 00 00: jl 0x58486092
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp + 8]
        cmp ecx, 0bh
        ; Exact mapped bytes 0F 8D B0 00 00 00: jge 0x58486092
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 60h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A4 00 00 00: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 75 6D: jne 0x58486070
        __asm _emit 0x75
        __asm _emit 0x6d
        movzx eax, word ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 60h]
        ; Exact mapped bytes E8 AD E9 FF FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        movzx eax, word ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 60h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 0f5h
        mov eax, dword ptr [ebp - 24h]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 43 F6 32 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf6
        __asm _emit 0x32
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 22: jmp 0x58486092
        __asm _emit 0xeb
        __asm _emit 0x22
        movzx edx, word ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 60h]
        mov dword ptr [ebp - 1ch], ecx
        movzx edx, word ptr [ebp + 14h]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 4]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 1F F6 32 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xf6
        __asm _emit 0x32
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
