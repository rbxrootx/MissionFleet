// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432BA0 .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_00432ba0_00432BA0() {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push esi
        cmp ebx, 7ffffffeh
        mov esi, ecx
        ; Exact mapped bytes 77 14: ja 0x432bc5
        __asm _emit 0x77
        __asm _emit 0x14
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi]
        sub eax, ecx
        mov ecx, 7ffffffeh
        sar eax, 1
        sub ecx, ebx
        cmp eax, ecx
        ; Exact mapped bytes 76 0D: jbe 0x432bd2
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 31 34 00 00: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [esi + 4]
        mov edx, dword ptr [esi + 8]
        sub eax, ecx
        sub edx, ecx
        sar eax, 1
        sar edx, 1
        dec edx
        lea ecx, [eax + ebx]
        cmp ecx, edx
        ; Exact mapped bytes 76 1C: jbe 0x432c06
        __asm _emit 0x76
        __asm _emit 0x1c
        cmp eax, ebx
        mov dword ptr [esp + 8], eax
        lea ecx, [esp + 10h]
        ; Exact mapped bytes 72 04: jb 0x432bfa
        __asm _emit 0x72
        __asm _emit 0x04
        lea ecx, [esp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, esi
        add edx, eax
        push edx
        ; Exact mapped bytes E8 DA FD FF FF: call 0x4329e0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test ebx, ebx
        ; Exact mapped bytes 76 4D: jbe 0x432c57
        __asm _emit 0x76
        __asm _emit 0x4d
        mov edx, dword ptr [esp + 14h]
        push edi
        mov edi, dword ptr [esi + 4]
        lea ecx, [ebx - 1]
        add edi, 2
        test ecx, ecx
        ; Exact mapped bytes 76 18: jbe 0x432c34
        __asm _emit 0x76
        __asm _emit 0x18
        mov eax, edx
        push ebp
        ; Exact mapped bytes 66 8B E8: mov bp, ax
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xe8
        shl ebp, 10h
        ; Exact mapped bytes 66 8B E8: mov bp, ax
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xe8
        mov eax, ebp
        pop ebp
        shr ecx, 1
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        adc ecx, ecx
        ; Exact mapped bytes 66 F3 AB: rep stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, dword ptr [esi + 4]
        lea eax, [ebx + ebx]
        pop edi
        ; Exact mapped bytes 66 C7 04 01 00 00: mov word ptr [ecx + eax], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        ; Exact mapped bytes 66 89 11: mov word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x11
        mov ecx, dword ptr [esi + 4]
        add ecx, eax
        mov eax, esi
        mov dword ptr [esi + 4], ecx
        pop esi
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
