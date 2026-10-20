// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EC58F .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_004ec58f_004EC58F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        push 52h
        push 5c7e38h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 B8 EB 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 7D: je 0x4ec62e
        __asm _emit 0x74
        __asm _emit 0x7d
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4ec5c3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 73 41: jae 0x4ec60f
        __asm _emit 0x73
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 08: jmp 0x4ec5e7
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 20: je 0x4ec60d
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 8]
        add edx, 8
        push edx
        ; Exact mapped bytes E8 62 00 00 00: call 0x4ec65b
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 8]
        add eax, 0ch
        push eax
        ; Exact mapped bytes E8 53 00 00 00: call 0x4ec65b
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB D2: jmp 0x4ec5df
        __asm _emit 0xeb
        __asm _emit 0xd2
        ; Exact mapped bytes EB AB: jmp 0x4ec5ba
        __asm _emit 0xeb
        __asm _emit 0xab
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 E8 0D 00 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 10h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes E8 70 B6 FF FF: call 0x4e7cbd
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 14h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
