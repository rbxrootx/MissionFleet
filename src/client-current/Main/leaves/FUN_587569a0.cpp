// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587569A0 .. +0xAF bytes.
extern "C" __declspec(naked) void FUN_587569a0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        xor ebx, ebx
        test al, 4
        ; Exact mapped bytes 74 7B: je 0x58756a29
        __asm _emit 0x74
        __asm _emit 0x7b
        mov ecx, dword ptr [esi + 5ch]
        mov edx, dword ptr [esi + 60h]
        imul ecx, ecx, 3e8h
        imul edx, edx, 3e8h
        mov dword ptr [esi + 6ch], ecx
        push 20h
        mov ecx, esi
        mov dword ptr [esi + 0a8h], ebx
        mov dword ptr [esi + 0a4h], ebx
        mov dword ptr [esi + 98h], ebx
        mov dword ptr [esi + 94h], ebx
        mov dword ptr [esi + 70h], edx
        mov dword ptr [esi + 3b0h], ebx
        mov dword ptr [esi + 50h], 0ffffffffh
        ; Exact mapped bytes E8 BC F8 FF FF: call 0x587562b0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 B7 F9 FF FF: call 0x587563b0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 60 FB FF FF: call 0x58756560
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 3b8h], ebx
        ; Exact mapped bytes 75 21: jne 0x58756a29
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, dword ptr [esi + 0ach]
        cmp dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes 7E 09: jle 0x58756a1f
        __asm _emit 0x7e
        __asm _emit 0x09
        inc eax
        mov dword ptr [esi + 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x58756a29
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [esi + 3b8h], 20000000h
        mov ecx, dword ptr [esi + 3ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 17: je 0x58756a47
        __asm _emit 0x74
        __asm _emit 0x17
        push edi
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0C: je 0x58756a4a
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, edi
        cmp edi, ebx
        ; Exact mapped bytes 75 EB: jne 0x58756a31
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        pop ebx
        ret
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes FF E2: jmp edx
        __asm _emit 0xff
        __asm _emit 0xe2
    }
}
