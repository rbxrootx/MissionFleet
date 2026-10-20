// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C52C0 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_100c52c0_100C52C0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        test eax, eax
        mov dword ptr [esi + 98h], eax
        ; Exact mapped bytes 7E 59: jle 0x100c532e
        __asm _emit 0x7e
        __asm _emit 0x59
        mov ebx, 1
        test edi, edi
        ; Exact mapped bytes 75 0F: jne 0x100c52ed
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [esi + 0a4h]
        mov dword ptr [eax + 50h], 5
        ; Exact mapped bytes EB 0A: jmp 0x100c52f7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [esi + edi*4 + 0a4h]
        mov dword ptr [ecx + 50h], ebx
        mov ecx, dword ptr [esi + edi*4 + 0c4h]
        push 100h
        ; Exact mapped bytes E8 18 9E 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x9e
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + edi*4 + 150h]
        or byte ptr [eax + 24h], 0fh
        mov eax, dword ptr [esi + edi*4 + 1b4h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 98h]
        inc edi
        cmp edi, eax
        ; Exact mapped bytes 7C B1: jl 0x100c52da
        __asm _emit 0x7c
        __asm _emit 0xb1
        cmp edi, 8
        ; Exact mapped bytes 7D 42: jge 0x100c5370
        __asm _emit 0x7d
        __asm _emit 0x42
        mov ebx, 8
        lea esi, [esi + edi*4 + 0c4h]
        sub ebx, edi
        mov edi, 0fffeh
        mov edx, dword ptr [esi - 20h]
        push 32h
        mov dword ptr [edx + 50h], 0
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 CC 9D 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x9d
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8ch]
        add esi, 4
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0ech]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        dec ebx
        ; Exact mapped bytes 75 D1: jne 0x100c5341
        __asm _emit 0x75
        __asm _emit 0xd1
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
