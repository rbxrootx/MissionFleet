// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00471541 .. +0x124 bytes.
extern "C" __declspec(naked) void FUN_00471541_00471541() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bd4ah
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
        sub esp, 1ch
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax], 581c98h
        mov dword ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 40: je 0x4715d3
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 1A: je 0x4715c2
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 23 72 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x72
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x4715c9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 0ch], 0
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 10h], 0
        ; Exact mapped bytes 74 40: je 0x47161c
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 1A: je 0x47160b
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 DA 71 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x71
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x471612
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 10h], 0
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 5ch
        ; Exact mapped bytes E8 15 F9 F9 FF: call 0x410f40
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xf9
        __asm _emit 0xf9
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 38h
        ; Exact mapped bytes E8 06 F9 F9 FF: call 0x410f40
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf9
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 14h
        ; Exact mapped bytes E8 F4 F8 F9 FF: call 0x410f40
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf8
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 28h
        cmp ebp, esp
        ; Exact mapped bytes E8 7F 71 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x71
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
