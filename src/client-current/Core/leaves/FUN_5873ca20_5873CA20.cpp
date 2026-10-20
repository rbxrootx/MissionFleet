// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873CA20 .. +0xDC bytes.
extern "C" __declspec(naked) void FUN_5873ca20_5873CA20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 9
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 54: jne 0x5873ca8b
        __asm _emit 0x75
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 258h]
        ; Exact mapped bytes E8 2B 42 08 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x42
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 40: jle 0x5873ca89
        __asm _emit 0x7e
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 258h]
        ; Exact mapped bytes E8 99 CC DE FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xcc
        __asm _emit 0xde
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 2D: jle 0x5873ca89
        __asm _emit 0x7e
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 258h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 258h]
        ; Exact mapped bytes E8 FA 41 08 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        sub eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D8 4C 08 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 6A: jmp 0x5873caf5
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 258h]
        ; Exact mapped bytes E8 D7 41 08 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 258h]
        ; Exact mapped bytes E8 47 CC DE FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xcc
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        sub eax, edx
        cmp esi, eax
        ; Exact mapped bytes 7D 40: jge 0x5873caf5
        __asm _emit 0x7d
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 258h]
        ; Exact mapped bytes E8 2D CC DE FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xcc
        __asm _emit 0xde
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 2D: jle 0x5873caf5
        __asm _emit 0x7e
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 258h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 258h]
        ; Exact mapped bytes E8 8E 41 08 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6C 4C 08 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
