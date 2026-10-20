// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C94BF .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_004c94bf_004C94BF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        push 52h
        push 674970h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 88 0D 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 7D: je 0x4c955e
        __asm _emit 0x74
        __asm _emit 0x7d
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4c94f3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 73 41: jae 0x4c953f
        __asm _emit 0x73
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 08: jmp 0x4c9517
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 20: je 0x4c953d
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 8]
        add edx, 8
        push edx
        ; Exact mapped bytes E8 62 00 00 00: call 0x4c958b
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 8]
        add eax, 0ch
        push eax
        ; Exact mapped bytes E8 53 00 00 00: call 0x4c958b
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB D2: jmp 0x4c950f
        __asm _emit 0xeb
        __asm _emit 0xd2
        ; Exact mapped bytes EB AB: jmp 0x4c94ea
        __asm _emit 0xeb
        __asm _emit 0xab
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 58 2F 00 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x2f
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
        ; Exact mapped bytes E8 90 29 FF FF: call 0x4bbf0d
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 14h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
