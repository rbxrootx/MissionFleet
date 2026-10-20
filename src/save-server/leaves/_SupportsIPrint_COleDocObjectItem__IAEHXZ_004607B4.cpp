// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004607B4 .. +0x8F bytes.
extern "C" __declspec(naked) void _SupportsIPrint_COleDocObjectItem__IAEHXZ_004607B4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 7ch], 0
        ; Exact mapped bytes 75 54: jne 0x46081a
        __asm _emit 0x75
        __asm _emit 0x54
        push 641478h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes E8 1F A1 0E 00: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xa1
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 7ch], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 7ch], 0
        ; Exact mapped bytes 75 34: jne 0x46081a
        __asm _emit 0x75
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes FF 15 0C C3 68 00: call dword ptr [0x68c30c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 0C: jge 0x460803
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 7ch], 0ffffffffh
        ; Exact mapped bytes EB 17: jmp 0x46081a
        __asm _emit 0xeb
        __asm _emit 0x17
        push 641478h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 E2 A0 0E 00: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xa0
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 7ch], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 7ch], 0
        ; Exact mapped bytes 74 12: je 0x460835
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 7ch], -1
        ; Exact mapped bytes 74 09: je 0x460835
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x46083c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
