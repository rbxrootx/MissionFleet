// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433EB0 .. +0x107 bytes.
extern "C" __declspec(naked) void FUN_00433eb0_00433EB0() {
    __asm {
        push -1
        push 58baf0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebp, ebp
        push edi
        mov dword ptr [esi], ebp
        mov dword ptr [esi + 4], ebp
        mov dword ptr [esp + 14h], esi
        mov dword ptr [esi + 8], ebp
        mov edi, dword ptr [esp + 2ch]
        mov ebx, dword ptr [esp + 28h]
        sub edi, ebx
        mov dword ptr [esp + 20h], ebp
        sar edi, 1
        lea eax, [edi + 1]
        cmp eax, 7fffffffh
        ; Exact mapped bytes 77 7E: ja 0x433f74
        __asm _emit 0x77
        __asm _emit 0x7e
        cmp eax, ebp
        ; Exact mapped bytes 76 7A: jbe 0x433f74
        __asm _emit 0x76
        __asm _emit 0x7a
        lea ebx, [eax + eax]
        cmp ebx, 80h
        ; Exact mapped bytes 76 15: jbe 0x433f1a
        __asm _emit 0x76
        __asm _emit 0x15
        push ebx
        ; Exact mapped bytes E8 55 85 09 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add ebx, eax
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], ebx
        ; Exact mapped bytes EB 67: jmp 0x433f81
        __asm _emit 0xeb
        __asm _emit 0x67
        lea eax, [ebx - 1]
        lea ecx, [esp + 10h]
        shr eax, 3
        lea ebp, [eax*4 + 685054h]
        mov dword ptr [esp + 2ch], ebp
        ; Exact mapped bytes E8 7C 03 00 00: call 0x4342b0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esp + 20h], 1
        mov ebp, dword ptr [ebp]
        test ebp, ebp
        ; Exact mapped bytes 74 0B: je 0x433f4b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [esp + 2ch]
        mov ecx, dword ptr [ebp]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes EB 0B: jmp 0x433f56
        __asm _emit 0xeb
        __asm _emit 0x0b
        push ebx
        ; Exact mapped bytes E8 2F 0A 00 00: call 0x434980
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ebp, eax
        lea ecx, [esp + 10h]
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 5C 04 00 00: call 0x4343c0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebp
        xor ebp, ebp
        add ebx, eax
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], ebx
        ; Exact mapped bytes EB 0D: jmp 0x433f81
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 82 20 00 00: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp + 28h]
        cmp edi, ebp
        ; Exact mapped bytes 7E 0F: jle 0x433f9a
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        add ecx, 2
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        add eax, 2
        dec edi
        ; Exact mapped bytes 75 F1: jne 0x433f8b
        __asm _emit 0x75
        __asm _emit 0xf1
        mov ecx, dword ptr [esp + 18h]
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes 66 89 28: mov word ptr [eax], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x28
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
