// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A41A4 .. +0x8F bytes.
extern "C" __declspec(naked) void _SupportsIPrint_COleDocObjectItem__IAEHXZ_004A41A4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 7ch], 0
        ; Exact mapped bytes 75 54: jne 0x4a420a
        __asm _emit 0x75
        __asm _emit 0x54
        push 58ec88h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes E8 BF 7C 0A 00: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x7c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 7ch], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 7ch], 0
        ; Exact mapped bytes 75 34: jne 0x4a420a
        __asm _emit 0x75
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes FF 15 78 2A 5E 00: call dword ptr [0x5e2a78]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 0C: jge 0x4a41f3
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 7ch], 0ffffffffh
        ; Exact mapped bytes EB 17: jmp 0x4a420a
        __asm _emit 0xeb
        __asm _emit 0x17
        push 58ec88h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 82 7C 0A 00: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x7c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 7ch], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 7ch], 0
        ; Exact mapped bytes 74 12: je 0x4a4225
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 7ch], -1
        ; Exact mapped bytes 74 09: je 0x4a4225
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x4a422c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
