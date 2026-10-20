// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432840 .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_00432840_00432840() {
    __asm {
        push -1
        push 58ba58h
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
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 24h]
        mov esi, ecx
        lea eax, [esp + 24h]
        mov ecx, edi
        push eax
        mov dword ptr [esp + 14h], esi
        ; Exact mapped bytes E8 50 C7 FF FF: call 0x42efc0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebp, ebp
        mov dword ptr [esi], ebp
        mov dword ptr [esi + 4], ebp
        mov dword ptr [esi + 8], ebp
        mov eax, dword ptr [edi + 4]
        mov ebx, dword ptr [edi]
        sub eax, ebx
        mov dword ptr [esp + 1ch], ebp
        mov edi, eax
        sar edi, 1
        lea eax, [edi + 1]
        cmp eax, 7fffffffh
        ; Exact mapped bytes 77 3C: ja 0x4328cf
        __asm _emit 0x77
        __asm _emit 0x3c
        cmp eax, ebp
        ; Exact mapped bytes 76 38: jbe 0x4328cf
        __asm _emit 0x76
        __asm _emit 0x38
        lea ebp, [eax + eax]
        cmp ebp, 80h
        push ebp
        ; Exact mapped bytes 76 16: jbe 0x4328b9
        __asm _emit 0x76
        __asm _emit 0x16
        ; Exact mapped bytes E8 B8 9B 09 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x9b
        __asm _emit 0x09
        __asm _emit 0x00
        add ebp, eax
        add esp, 4
        mov dword ptr [esi + 8], ebp
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], eax
        xor ebp, ebp
        ; Exact mapped bytes EB 23: jmp 0x4328dc
        __asm _emit 0xeb
        __asm _emit 0x23
        ; Exact mapped bytes E8 02 17 00 00: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        add ebp, eax
        add esp, 4
        mov dword ptr [esi + 8], ebp
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], eax
        xor ebp, ebp
        ; Exact mapped bytes EB 0D: jmp 0x4328dc
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 27 37 00 00: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [esi]
        cmp edi, ebp
        mov ecx, ebx
        ; Exact mapped bytes 7E 0F: jle 0x4328f3
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
        ; Exact mapped bytes 75 F1: jne 0x4328e4
        __asm _emit 0x75
        __asm _emit 0xf1
        mov ecx, dword ptr [esp + 14h]
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
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
