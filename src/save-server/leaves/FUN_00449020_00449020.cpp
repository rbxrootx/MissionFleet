// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00449020 .. +0x14A bytes.
extern "C" __declspec(naked) void FUN_00449020_00449020() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        mov dword ptr [ebp - 58h], ecx
        mov al, byte ptr [ebp - 14h]
        mov byte ptr [ebp - 10h], al
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        sub edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 8C 9B 00 00 00: jl 0x4490e8
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 12: jmp 0x449073
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 18h]
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 74 0C: je 0x449087
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 18h]
        mov al, byte ptr [edx]
        mov byte ptr [ecx], al
        ; Exact mapped bytes EB DA: jmp 0x449061
        __asm _emit 0xeb
        __asm _emit 0xda
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 4E: je 0x4490e6
        __asm _emit 0x74
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, dword ptr [ebp + 0ch]
        add ecx, 1
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 08: jne 0x4490b5
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 5ch], edx
        ; Exact mapped bytes EB 17: jmp 0x4490cc
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 9A CB 01 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes EB 79: jmp 0x449161
        __asm _emit 0xeb
        __asm _emit 0x79
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 0ch], edx
        mov al, byte ptr [ebp - 34h]
        mov byte ptr [ebp - 30h], al
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes EB 12: jmp 0x449123
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 38h]
        add edx, 1
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 40h]
        add eax, 1
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 38h]
        cmp ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 74 0C: je 0x449137
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [ebp - 38h]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        ; Exact mapped bytes EB DA: jmp 0x449111
        __asm _emit 0xeb
        __asm _emit 0xda
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 50h], eax
        mov cl, byte ptr [ebp - 4ch]
        mov byte ptr [ebp - 48h], cl
        lea edx, [ebp - 48h]
        push edx
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 6F F1 FF FF: call 0x4482d0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 58h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
