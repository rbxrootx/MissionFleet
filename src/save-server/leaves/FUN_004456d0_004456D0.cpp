// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004456D0 .. +0x148 bytes.
extern "C" __declspec(naked) void FUN_004456d0_004456D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 78h
        mov dword ptr [ebp - 70h], ecx
        mov al, byte ptr [ebp - 8]
        mov byte ptr [ebp - 4], al
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 6ch], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 68h], edx
        mov al, byte ptr [ebp - 14h]
        mov byte ptr [ebp - 10h], al
        mov ecx, dword ptr [ebp - 6ch]
        sub ecx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        mov eax, 0fffffffeh
        add eax, 1
        cmp dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 77 67: ja 0x445777
        __asm _emit 0x77
        __asm _emit 0x67
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 76 61: jbe 0x445777
        __asm _emit 0x76
        __asm _emit 0x61
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 31: je 0x44574d
        __asm _emit 0x74
        __asm _emit 0x31
        cmp dword ptr [ebp - 18h], 80h
        ; Exact mapped bytes 76 11: jbe 0x445736
        __asm _emit 0x76
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 32 6D 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x6d
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 0F: jmp 0x445745
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 81 E8 FE FF: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x445754
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov ecx, dword ptr [ebp - 70h]
        mov edx, dword ptr [ebp - 78h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [ebp - 70h]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [edx + 8], ecx
        ; Exact mapped bytes EB 0D: jmp 0x445784
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 7F 08 FF FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 60h], ecx
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 5ch], edx
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 58h], eax
        mov cl, byte ptr [ebp - 24h]
        mov byte ptr [ebp - 1ch], cl
        mov dl, byte ptr [ebp - 28h]
        mov byte ptr [ebp - 20h], dl
        mov al, byte ptr [ebp - 30h]
        mov byte ptr [ebp - 2ch], al
        mov cl, byte ptr [ebp - 3ch]
        mov byte ptr [ebp - 34h], cl
        mov dl, byte ptr [ebp - 40h]
        mov byte ptr [ebp - 38h], dl
        mov al, byte ptr [ebp - 48h]
        mov byte ptr [ebp - 44h], al
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 5ch]
        sub eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 09: jmp 0x4457dc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4ch]
        sub ecx, 1
        mov dword ptr [ebp - 4ch], ecx
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 7E 1E: jle 0x445800
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [ebp - 50h]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        mov edx, dword ptr [ebp - 50h]
        add edx, 1
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 54h]
        add eax, 1
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB D3: jmp 0x4457d3
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp - 70h]
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [eax + 4]
        mov byte ptr [ecx], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
