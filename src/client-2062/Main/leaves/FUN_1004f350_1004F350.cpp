// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004F350 .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_1004f350_1004F350() {
    __asm {
        mov edx, dword ptr [esp + 4]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 10h]
        mov eax, dword ptr [edx + 160h]
        push esi
        cmp eax, ebp
        push edi
        ; Exact mapped bytes 7E 1F: jle 0x1004f385
        __asm _emit 0x7e
        __asm _emit 0x1f
        test ebp, ebp
        ; Exact mapped bytes 7C 1B: jl 0x1004f385
        __asm _emit 0x7c
        __asm _emit 0x1b
        mov edx, dword ptr [edx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 0D: je 0x1004f381
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, ebp
        shl eax, 6
        add eax, edx
        mov edx, dword ptr [esp + 14h]
        ; Exact mapped bytes EB 06: jmp 0x1004f387
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [esp + 14h]
        xor eax, eax
        xor esi, esi
        ; Exact mapped bytes 66 8B 70 0C: mov si, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x0c
        mov eax, dword ptr [esp + 1ch]
        dec esi
        mov dword ptr [ecx + 0c4h], eax
        mov dword ptr [ecx + 0a8h], esi
        lea esi, [ecx + 0ach]
        xor edi, edi
        mov ecx, dword ptr [esi]
        mov ebx, dword ptr [ecx + 4]
        ; Exact mapped bytes EB 04: jmp 0x1004f3b1
        __asm _emit 0xeb
        __asm _emit 0x04
        mov edx, dword ptr [esp + 14h]
        cmp dword ptr [edx + 160h], ebp
        ; Exact mapped bytes 7E 17: jle 0x1004f3d0
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebp, ebp
        ; Exact mapped bytes 7C 13: jl 0x1004f3d0
        __asm _emit 0x7c
        __asm _emit 0x13
        mov ecx, dword ptr [edx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x1004f3d0
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, ebp
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1004f3d2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1004f403
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx + 1ch]
        mov eax, dword ptr [ecx + 14h]
        sub edx, eax
        imul edx, edi
        add edx, ebx
        push edx
        ; Exact mapped bytes E8 30 F9 0A 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xf9
        __asm _emit 0x0a
        __asm _emit 0x00
        inc edi
        add esi, 4
        cmp edi, 4
        ; Exact mapped bytes 7C 84: jl 0x1004f3ad
        __asm _emit 0x7c
        __asm _emit 0x84
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
