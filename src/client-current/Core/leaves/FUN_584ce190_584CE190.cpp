// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CE190 .. +0xCF bytes.
extern "C" __declspec(naked) void FUN_584ce190_584CE190() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [eax + 70h], edx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 62: je 0x584ce20b
        __asm _emit 0x74
        __asm _emit 0x62
        push 80h
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        push ecx
        ; Exact mapped bytes E8 54 EC 37 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xec
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        push 100h
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 80h
        push edx
        ; Exact mapped bytes E8 3B EC 37 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xec
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        push eax
        push 100h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 80h
        push ecx
        ; Exact mapped bytes E8 90 5F 2E 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x5f
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        add edx, 80h
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 78h], eax
        ; Exact mapped bytes EB 2F: jmp 0x584ce23a
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov edx, 1
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov byte ptr [eax + edx], 0
        mov eax, 1
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + ecx + 80h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 78h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 7ch], 0
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 12 7B FB FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x7b
        __asm _emit 0xfb
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F8 12 FD FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
