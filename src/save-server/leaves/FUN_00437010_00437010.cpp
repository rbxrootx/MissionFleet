// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437010 .. +0x144 bytes.
extern "C" __declspec(naked) void FUN_00437010_00437010() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58bcfch
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
        sub esp, 34h
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp - 38h]
        add eax, 8
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 0
        mov dword ptr [ebp - 4], 0
        mov edx, 0fffffffeh
        add edx, 1
        cmp dword ptr [ebp - 14h], edx
        ; Exact mapped bytes 77 67: ja 0x4370d7
        __asm _emit 0x77
        __asm _emit 0x67
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 76 61: jbe 0x4370d7
        __asm _emit 0x76
        __asm _emit 0x61
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 31: je 0x4370ad
        __asm _emit 0x74
        __asm _emit 0x31
        cmp dword ptr [ebp - 14h], 80h
        ; Exact mapped bytes 76 11: jbe 0x437096
        __asm _emit 0x76
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 D2 53 09 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x53
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 0F: jmp 0x4370a5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 21 CF FF FF: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 40h], edx
        ; Exact mapped bytes EB 07: jmp 0x4370b4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx + 4], ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes EB 0D: jmp 0x4370e4
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 1F EF FF FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 30h], eax
        mov cl, byte ptr [ebp - 20h]
        mov byte ptr [ebp - 18h], cl
        mov dl, byte ptr [ebp - 24h]
        mov byte ptr [ebp - 1ch], dl
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes EB 12: jmp 0x43711f
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 2ch]
        sub edx, 1
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 28h]
        add eax, 1
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 76 0A: jbe 0x43712f
        __asm _emit 0x76
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 28h]
        mov dl, byte ptr [ebp + 0ch]
        mov byte ptr [ecx], dl
        ; Exact mapped bytes EB DE: jmp 0x43710d
        __asm _emit 0xeb
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 4]
        mov byte ptr [eax], 0
        mov eax, dword ptr [ebp - 38h]
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
