// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00445AE0 .. +0x15C bytes.
extern "C" __declspec(naked) void FUN_00445ae0_00445AE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 70h
        mov dword ptr [ebp - 6ch], ecx
        mov al, byte ptr [ebp - 0ch]
        mov byte ptr [ebp - 8], al
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 68h], ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 64h], edx
        mov al, byte ptr [ebp - 20h]
        mov byte ptr [ebp - 1ch], al
        mov ecx, dword ptr [ebp - 68h]
        sub ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 0ch]
        sub edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F 8C 9B 00 00 00: jl 0x445bba
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 12: jmp 0x445b45
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 2ch]
        add edx, 1
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 24h]
        cmp eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 74 0C: je 0x445b59
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 24h]
        mov al, byte ptr [edx]
        mov byte ptr [ecx], al
        ; Exact mapped bytes EB DA: jmp 0x445b33
        __asm _emit 0xeb
        __asm _emit 0xda
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 38h]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 4E: je 0x445bb8
        __asm _emit 0x74
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [eax + 4]
        sub ecx, dword ptr [ebp + 0ch]
        add ecx, 1
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 75 08: jne 0x445b87
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 70h], edx
        ; Exact mapped bytes EB 17: jmp 0x445b9e
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        ; Exact mapped bytes E8 C8 00 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 70h], eax
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes EB 79: jmp 0x445c33
        __asm _emit 0xeb
        __asm _emit 0x79
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 18h], edx
        mov al, byte ptr [ebp - 40h]
        mov byte ptr [ebp - 3ch], al
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 44h], ecx
        ; Exact mapped bytes EB 12: jmp 0x445bf5
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 44h]
        add edx, 1
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 4ch]
        add eax, 1
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 44h]
        cmp ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 74 0C: je 0x445c09
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [ebp - 44h]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        ; Exact mapped bytes EB DA: jmp 0x445be3
        __asm _emit 0xeb
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 5ch], eax
        mov cl, byte ptr [ebp - 58h]
        mov byte ptr [ebp - 54h], cl
        lea edx, [ebp - 54h]
        push edx
        mov eax, dword ptr [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 9D 26 00 00: call 0x4482d0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 6ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
