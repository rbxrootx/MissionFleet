// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00440570 .. +0x210 bytes.
extern "C" __declspec(naked) void FUN_00440570_00440570() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58becch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8ch
        mov dword ptr [ebp - 8ch], ecx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 70 62 FF FF: call 0x436810
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp - 8ch]
        add eax, 8
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], 0
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 84h], edx
        mov al, byte ptr [ebp - 1ch]
        mov byte ptr [ebp - 18h], al
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 80h], ecx
        mov edx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 7ch], edx
        mov al, byte ptr [ebp - 28h]
        mov byte ptr [ebp - 24h], al
        mov ecx, dword ptr [ebp - 80h]
        sub ecx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 2ch], edx
        mov eax, 0fffffffeh
        add eax, 1
        cmp dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 0F 87 8C 00 00 00: ja 0x4406bf
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 0F 86 82 00 00 00: jbe 0x4406bf
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 3D: je 0x440680
        __asm _emit 0x74
        __asm _emit 0x3d
        cmp dword ptr [ebp - 2ch], 80h
        ; Exact mapped bytes 76 14: jbe 0x440660
        __asm _emit 0x76
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        ; Exact mapped bytes E8 0B BE 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xbe
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 12: jmp 0x440672
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 57 39 FF FF: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x44068a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [ebp - 98h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [edx + 8], ecx
        ; Exact mapped bytes EB 0D: jmp 0x4406cc
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 37 59 FF FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 74h], ecx
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 70h], edx
        mov eax, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 6ch], eax
        mov cl, byte ptr [ebp - 38h]
        mov byte ptr [ebp - 30h], cl
        mov dl, byte ptr [ebp - 3ch]
        mov byte ptr [ebp - 34h], dl
        mov al, byte ptr [ebp - 44h]
        mov byte ptr [ebp - 40h], al
        mov cl, byte ptr [ebp - 50h]
        mov byte ptr [ebp - 48h], cl
        mov dl, byte ptr [ebp - 54h]
        mov byte ptr [ebp - 4ch], dl
        mov al, byte ptr [ebp - 5ch]
        mov byte ptr [ebp - 58h], al
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 68h], ecx
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 64h], edx
        mov eax, dword ptr [ebp - 70h]
        sub eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 09: jmp 0x440727
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 60h]
        sub ecx, 1
        mov dword ptr [ebp - 60h], ecx
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 7E 1E: jle 0x44074b
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 68h]
        mov eax, dword ptr [ebp - 64h]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        mov edx, dword ptr [ebp - 64h]
        add edx, 1
        mov dword ptr [ebp - 64h], edx
        mov eax, dword ptr [ebp - 68h]
        add eax, 1
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB D3: jmp 0x44071e
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [eax + 4]
        mov byte ptr [ecx], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
