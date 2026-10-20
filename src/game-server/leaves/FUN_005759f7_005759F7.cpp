// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005759F7 .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_005759f7_005759F7() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57edech
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
        sub esp, 8
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 14 54 F8 FF: call 0x4fae31
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x54
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 10h
        ; Exact mapped bytes E8 D8 B4 FB FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xb4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18h
        ; Exact mapped bytes E8 C9 B4 FB FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xb4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1ch
        ; Exact mapped bytes E8 BA B4 FB FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xb4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 587e8ch
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 0E: je 0x575a6e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 60000h
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 07: jmp 0x575a75
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 55 10: mov dx, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 51 0C: mov word ptr [ecx + 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0F: je 0x575a9e
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 10h
        ; Exact mapped bytes E8 5F 80 F7 FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x80
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0ffffh
        neg ecx
        sbb ecx, ecx
        and ecx, 7fff0001h
        add ecx, 8000ffffh
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 20h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
