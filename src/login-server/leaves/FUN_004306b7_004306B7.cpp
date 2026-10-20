// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004306B7 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_004306b7_004306B7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov eax, dword ptr [ebp + 8]
        push ebx
        push esi
        push edi
        movzx edi, ax
        xor ebx, ebx
        mov esi, ecx
        shr eax, 10h
        cmp dword ptr [ebp + 0ch], ebx
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes 75 3A: jne 0x43070f
        __asm _emit 0x75
        __asm _emit 0x3a
        cmp edi, ebx
        ; Exact mapped bytes 74 66: je 0x43073f
        __asm _emit 0x74
        __asm _emit 0x66
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 AC FF FF FF: call 0x43068d
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        lea ecx, [ebp - 2ch]
        push ebx
        push ecx
        push -1
        push edi
        mov ecx, esi
        mov dword ptr [ebp - 28h], edi
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        cmp dword ptr [ebp - 4], ebx
        ; Exact mapped bytes 74 3E: je 0x430736
        __asm _emit 0x74
        __asm _emit 0x3e
        mov dword ptr [ebp + 8], ebx
        mov eax, dword ptr [esi]
        push ebx
        push ebx
        mov ecx, esi
        push dword ptr [ebp + 8]
        push edi
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 435d3bh
        mov ecx, 44dcc0h
        ; Exact mapped bytes E8 95 66 00 00: call 0x436db3
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0b8h]
        cmp eax, dword ptr [esi + 1ch]
        ; Exact mapped bytes 74 0D: je 0x430736
        __asm _emit 0x74
        __asm _emit 0x0d
        push ebx
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 0C 03 00 00: call 0x430a3e
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x43073b
        __asm _emit 0x74
        __asm _emit 0x05
        push 1
        pop eax
        ; Exact mapped bytes EB CD: jmp 0x430708
        __asm _emit 0xeb
        __asm _emit 0xcd
        cmp edi, ebx
        ; Exact mapped bytes 75 BC: jne 0x4306fb
        __asm _emit 0x75
        __asm _emit 0xbc
        xor eax, eax
        ; Exact mapped bytes EB C5: jmp 0x430708
        __asm _emit 0xeb
        __asm _emit 0xc5
    }
}
