// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100308C0 .. +0x16C bytes.
extern "C" __declspec(naked) void FUN_100308c0_100308C0() {
    __asm {
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 0a024h]
        mov dword ptr [esi + 0a00ch], 15h
        ; Exact mapped bytes E8 35 3E 0D 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x3e
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a024h]
        xor ebx, ebx
        mov edi, 40000000h
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [esi + 9fe4h]
        mov dword ptr [eax + 7ch], ebx
        mov dword ptr [eax + 74h], edi
        mov ecx, dword ptr [esi + 9fe4h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov eax, dword ptr [esi + 9fe8h]
        mov dword ptr [eax + 7ch], ebx
        mov dword ptr [eax + 74h], edi
        mov ecx, dword ptr [esi + 9fe8h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [esi + 9fech]
        mov dword ptr [eax + 80h], ebx
        mov ecx, dword ptr [esi + 9fech]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [esi + 9ff0h]
        mov dword ptr [eax + 7ch], ebx
        mov dword ptr [eax + 74h], edi
        mov ecx, dword ptr [esi + 9ff0h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov eax, dword ptr [esi + 9ff4h]
        mov dword ptr [eax + 28h], 100h
        mov dword ptr [eax + 84h], ebx
        mov dword ptr [eax + 8ch], edi
        mov ecx, dword ptr [esi + 9ff4h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        lea eax, [esi + 360h]
        mov edx, 2
        mov ecx, dword ptr [eax]
        add eax, 4
        ; Exact mapped bytes 66 81 61 24 FE FF: and word ptr [ecx + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x61
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        dec edx
        ; Exact mapped bytes 75 F2: jne 0x10030979
        __asm _emit 0x75
        __asm _emit 0xf2
        mov eax, dword ptr [esi + 46ch]
        mov dword ptr [esp + 0ch], ebx
        cmp eax, ebx
        ; Exact mapped bytes 7E 55: jle 0x100309ea
        __asm _emit 0x7e
        __asm _emit 0x55
        push ebp
        lea edi, [esi + 9b74h]
        lea ebp, [esi + 8572h]
        mov eax, dword ptr [edi + 200h]
        mov dword ptr [eax + 7ch], ebx
        mov ecx, dword ptr [edi + 200h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [edi]
        mov dword ptr [eax + 80h], ebx
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes 66 39 5D 00: cmp word ptr [ebp], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x100309d0
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [edi]
        mov dword ptr [eax + 50h], ebx
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 46ch]
        inc eax
        add ebp, 2
        add edi, 4
        cmp eax, ecx
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 7C B9: jl 0x100309a2
        __asm _emit 0x7c
        __asm _emit 0xb9
        pop ebp
        mov eax, dword ptr [esi + 9ffch]
        mov ecx, 0fffeh
        mov dword ptr [esi + 9fdch], ebx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a000h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 9fech]
        mov dword ptr [ecx + 80h], ebx
        mov ecx, dword ptr [esi + 9fech]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, esi
        ; Exact mapped bytes E8 B9 04 00 00: call 0x10030ee0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret
    }
}
