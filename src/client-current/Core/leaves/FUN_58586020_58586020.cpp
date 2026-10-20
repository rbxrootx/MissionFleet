// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58586020 .. +0x105 bytes.
extern "C" __declspec(naked) void FUN_58586020_58586020() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 72 08: jb 0x58586037
        __asm _emit 0x72
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 08: jmp 0x5858603f
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        neg ecx
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5ch], 0
        ; Exact mapped bytes 7E 11: jle 0x5858605f
        __asm _emit 0x7e
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ecx + 0e8h], eax
        ; Exact mapped bytes EB 3F: jmp 0x5858609e
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e8h], 0
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 26: je 0x5858609e
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 10h]
        xor edx, edx
        mov ecx, 0ah
        div ecx
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e8h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e8h], eax
        ; Exact mapped bytes EB D4: jmp 0x58586072
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e8h]
        sub eax, 1
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x585860b8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7C 4D: jl 0x5858610b
        __asm _emit 0x7c
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e8h]
        sub eax, 1
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 74 0F: je 0x585860de
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 09: jne 0x585860de
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0ah
        ; Exact mapped bytes EB 0F: jmp 0x585860ed
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0ch]
        xor edx, edx
        mov ecx, 0ah
        div ecx
        mov dword ptr [ebp - 18h], edx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + edx*4 + 68h], ecx
        mov eax, dword ptr [ebp - 0ch]
        xor edx, edx
        mov ecx, 0ah
        div ecx
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB A4: jmp 0x585860af
        __asm _emit 0xeb
        __asm _emit 0xa4
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 73 0E: jae 0x5858611f
        __asm _emit 0x73
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 68h], 0bh
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
