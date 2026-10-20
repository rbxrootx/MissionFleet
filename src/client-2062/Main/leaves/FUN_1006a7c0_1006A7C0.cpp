// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006A7C0 .. +0x102 bytes.
extern "C" __declspec(naked) void FUN_1006a7c0_1006A7C0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebx, ebx
        mov eax, 1
        mov dword ptr [esi + 20b88h], ebx
        ; Exact mapped bytes 66 C7 86 84 0B 02 00 08 00: mov word ptr [esi + 0x20b84], 8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [esi + 1045ch], ebx
        mov dword ptr [esi + 10460h], ebx
        mov byte ptr [esi + 10470h], bl
        mov dword ptr [esi + 1047ch], ebx
        mov dword ptr [esi + 10480h], ebx
        mov dword ptr [esi + 10478h], eax
        mov byte ptr [esi + 10a74h], bl
        mov dword ptr [esi + 20a74h], eax
        mov dword ptr [esi + 104a8h], ebx
        mov dword ptr [esi + 104b4h], 0ffffffffh
        mov dword ptr [esi + 104bch], ebx
        mov dword ptr [esi + 378h], ebx
        mov dword ptr [esi + 10448h], ebx
        mov dword ptr [esi + 384h], ebx
        mov byte ptr [esi + 398h], bl
        mov dword ptr [esi + 394h], ebx
        mov dword ptr [esi + 37ch], ebx
        mov dword ptr [esi + 0a8h], ebx
        mov dword ptr [esi + 0ach], ebx
        mov dword ptr [esi + 20c84h], ebx
        mov dword ptr [esi + 10498h], ebx
        mov dword ptr [esi + 1049ch], ebx
        mov dword ptr [esi + 10494h], ebx
        mov ebp, dword ptr [esi + 20bb8h]
        push edi
        mov edi, dword ptr [ebp + 4]
        cmp edi, ebx
        ; Exact mapped bytes 74 13: je 0x1006a88a
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, edi
        mov edi, dword ptr [edi + 8]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1006a886
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp edi, ebx
        ; Exact mapped bytes 75 ED: jne 0x1006a877
        __asm _emit 0x75
        __asm _emit 0xed
        lea edi, [esi + 88h]
        mov ecx, 8
        xor eax, eax
        mov dword ptr [ebp + 8], ebx
        mov dword ptr [ebp + 4], ebx
        mov dword ptr [ebp + 0ch], ebx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, dword ptr [esi + 21710h]
        mov dword ptr [esi + 20bbch], ebx
        cmp eax, ebx
        ; Exact mapped bytes 74 0B: je 0x1006a8bd
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [esi + 21a4ch]
        ; Exact mapped bytes E8 C3 8F FB FF: call 0x10023880
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x8f
        __asm _emit 0xfb
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
