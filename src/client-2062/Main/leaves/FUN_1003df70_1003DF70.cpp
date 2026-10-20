// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1003DF70 .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_1003df70_1003DF70() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 74 7E: je 0x1003dff8
        __asm _emit 0x74
        __asm _emit 0x7e
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x1003df9c
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 65: je 0x1003dff1
        __asm _emit 0x74
        __asm _emit 0x65
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 75 EC: jne 0x1003df88
        __asm _emit 0x75
        __asm _emit 0xec
        cmp dword ptr [edi + 4], 100h
        ; Exact mapped bytes 75 4C: jne 0x1003dff1
        __asm _emit 0x75
        __asm _emit 0x4c
        mov edi, dword ptr [edi + 8]
        cmp edi, 0dh
        ; Exact mapped bytes 74 28: je 0x1003dfd5
        __asm _emit 0x74
        __asm _emit 0x28
        cmp edi, 1bh
        ; Exact mapped bytes 75 3F: jne 0x1003dff1
        __asm _emit 0x75
        __asm _emit 0x3f
        mov ecx, dword ptr [esi + 80h]
        mov eax, dword ptr [esi + 84h]
        push eax
        push 10h
        mov edx, dword ptr [ecx]
        push esi
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        mov edx, dword ptr [esi + 84h]
        push edx
        push 0fh
        mov eax, dword ptr [ecx]
        push esi
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
