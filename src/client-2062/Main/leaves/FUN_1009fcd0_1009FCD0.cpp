// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009FCD0 .. +0x125 bytes.
extern "C" __declspec(naked) void FUN_1009fcd0_1009FCD0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov ecx, 8
        xor eax, eax
        lea edi, [esi + 118h]
        xor ebx, ebx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, 8
        lea edi, [esi + 8ach]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, 8
        lea edi, [esi + 944h]
        mov dword ptr [esi + 8a8h], ebx
        mov dword ptr [esi + 0d0h], ebx
        mov dword ptr [esi + 0d4h], ebx
        push ebx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        lea ecx, [esi + 848h]
        lea edi, [esi + 818h]
        mov dword ptr [ecx], eax
        mov dword ptr [ecx + 4], eax
        mov dword ptr [ecx + 8], eax
        mov dword ptr [ecx + 0ch], eax
        mov ecx, 8
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, 8
        lea edi, [esi + 868h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, 8
        lea edi, [esi + 0d8h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, 8
        lea edi, [esi + 0f8h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, 8
        lea edi, [esi + 888h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, 10h
        lea edi, [esi + 138h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, 1a8h
        lea edi, [esi + 178h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, dword ptr [esi + 9d4h]
        ; Exact mapped bytes E8 96 F9 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xf9
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9d8h]
        push ebx
        ; Exact mapped bytes E8 8A F9 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf9
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9dch]
        push ebx
        ; Exact mapped bytes E8 7E F9 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xf9
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9e0h]
        push ebx
        ; Exact mapped bytes E8 72 F9 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xf9
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9cch]
        push ebx
        ; Exact mapped bytes E8 66 F9 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xf9
        __asm _emit 0x05
        __asm _emit 0x00
        lea edi, [esi + 964h]
        mov ebx, 8
        mov eax, dword ptr [edi - 48h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 FB 27 F9 FF: call 0x100325d0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x27
        __asm _emit 0xf9
        __asm _emit 0xff
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 EA: jne 0x1009fdc5
        __asm _emit 0x75
        __asm _emit 0xea
        lea eax, [esi + 838h]
        mov edx, 0aah
        pop edi
        pop esi
        mov dword ptr [eax], edx
        pop ebx
        mov dword ptr [eax + 4], edx
        mov dword ptr [eax + 8], edx
        mov dword ptr [eax + 0ch], edx
        ret
    }
}
