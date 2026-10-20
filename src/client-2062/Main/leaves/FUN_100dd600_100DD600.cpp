// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DD600 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_100dd600_100DD600() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push edi
        mov edi, ecx
        xor dl, dl
        mov al, byte ptr [edi + 98h]
        mov byte ptr [edi + 139fh], bl
        test al, al
        mov byte ptr [esp + 0ch], dl
        ; Exact mapped bytes 0F 86 A6 00 00 00: jbe 0x100dd6c8
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        push esi
        mov eax, dword ptr [esp + 14h]
        cmp dl, bl
        ; Exact mapped bytes 72 74: jb 0x100dd6a0
        __asm _emit 0x72
        __asm _emit 0x74
        mov ecx, ebx
        mov esi, eax
        and ecx, 0ffh
        and esi, 0ffh
        lea ebp, [ecx + 5]
        cmp esi, ebp
        ; Exact mapped bytes 7D 5D: jge 0x100dd6a0
        __asm _emit 0x7d
        __asm _emit 0x5d
        mov edx, dword ptr [edi + 6ch]
        mov eax, dword ptr [edx + 8]
        mov edx, dword ptr [edx + 4]
        add eax, 3ah
        push eax
        mov eax, esi
        sub eax, ecx
        mov ecx, eax
        shl ecx, 4
        add ecx, eax
        lea eax, [edx + ecx*4 + 20h]
        mov ecx, dword ptr [edi + esi*4 + 0d9ch]
        push eax
        ; Exact mapped bytes E8 64 16 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [edi + esi*4 + 119ch]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100dd67e
        __asm _emit 0x74
        __asm _emit 0x07
        push 100h
        ; Exact mapped bytes EB 05: jmp 0x100dd683
        __asm _emit 0xeb
        __asm _emit 0x05
        push 80h
        mov ecx, dword ptr [edi + esi*4 + 0d9ch]
        ; Exact mapped bytes E8 91 1A 02 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        mov esi, dword ptr [edi + esi*4 + 0d9ch]
        mov dl, byte ptr [esp + 14h]
        or byte ptr [esi + 24h], 1
        ; Exact mapped bytes EB 12: jmp 0x100dd6b2
        __asm _emit 0xeb
        __asm _emit 0x12
        and eax, 0ffh
        mov eax, dword ptr [edi + eax*4 + 0d9ch]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov al, byte ptr [edi + 98h]
        inc dl
        cmp dl, al
        mov byte ptr [esp + 14h], dl
        ; Exact mapped bytes 0F 82 5E FF FF FF: jb 0x100dd624
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        pop ebp
        pop edi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
