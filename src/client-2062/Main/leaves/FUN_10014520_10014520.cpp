// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10014520 .. +0x12F bytes.
extern "C" __declspec(naked) void FUN_10014520_10014520() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        test byte ptr [esi + 24h], 4
        ; Exact mapped bytes 0F 84 F5 00 00 00: je 0x10014626
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5ch]
        push 20h
        mov dword ptr [esi + 0a8h], ebx
        mov dword ptr [esi + 0a4h], ebx
        lea eax, [eax + eax*4]
        mov dword ptr [esi + 98h], ebx
        mov dword ptr [esi + 94h], ebx
        mov dword ptr [esi + 3b0h], ebx
        lea eax, [eax + eax*4]
        mov dword ptr [esi + 50h], 0ffffffffh
        lea eax, [eax + eax*4]
        shl eax, 3
        mov dword ptr [esi + 6ch], eax
        mov eax, dword ptr [esi + 60h]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea ecx, [eax + eax*4]
        shl ecx, 3
        mov dword ptr [esi + 70h], ecx
        mov ecx, esi
        ; Exact mapped bytes E8 8D 01 00 00: call 0x10014710
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 96 02 00 00: call 0x10014820
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        mov eax, dword ptr [esi + 78h]
        mov edx, ecx
        imul edx, ecx
        mov ecx, eax
        imul ecx, eax
        add edx, ecx
        cmp edx, 0e10h
        ; Exact mapped bytes 7D 57: jge 0x100145fb
        __asm _emit 0x7d
        __asm _emit 0x57
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        ; Exact mapped bytes E8 D0 67 05 00: call 0x1006ad80
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x67
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3b4h]
        mov ecx, 40000000h
        mov dword ptr [eax + 28h], 100h
        mov dword ptr [eax + 84h], ebx
        mov dword ptr [eax + 8ch], ecx
        mov dword ptr [esi + 3b8h], ecx
        mov ecx, dword ptr [esi + 3b4h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        lea ecx, [esi + 0b0h]
        mov edx, 20h
        mov edi, 0fffeh
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100145ef
        __asm _emit 0x75
        __asm _emit 0xf4
        cmp dword ptr [esi + 3b8h], ebx
        ; Exact mapped bytes 75 23: jne 0x10014626
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [esi + 0ach]
        mov ecx, dword ptr [esi + 0a8h]
        cmp ecx, eax
        ; Exact mapped bytes 7E 09: jle 0x1001461c
        __asm _emit 0x7e
        __asm _emit 0x09
        inc eax
        mov dword ptr [esi + 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x10014626
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [esi + 3b8h], 20000000h
        mov ecx, dword ptr [esi + 3ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 1E: je 0x1001464b
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0F: je 0x10014646
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        cmp edi, ebx
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x1001462d
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        pop ebx
        ret
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        pop edi
        pop esi
        pop ebx
        ret
    }
}
