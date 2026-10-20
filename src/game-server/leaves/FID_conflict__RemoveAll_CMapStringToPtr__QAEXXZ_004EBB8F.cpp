// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EBB8F .. +0xBD bytes.
extern "C" __declspec(naked) void FID_conflict__RemoveAll_CMapStringToPtr__QAEXXZ_004EBB8F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        push 52h
        push 5c7dd4h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 B8 F5 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 6E: je 0x4ebc1f
        __asm _emit 0x74
        __asm _emit 0x6e
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4ebbc3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 73 32: jae 0x4ebc00
        __asm _emit 0x73
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 08: jmp 0x4ebbe7
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 11: je 0x4ebbfe
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 8]
        add edx, 8
        push edx
        ; Exact mapped bytes E8 53 00 00 00: call 0x4ebc4c
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB E1: jmp 0x4ebbdf
        __asm _emit 0xeb
        __asm _emit 0xe1
        ; Exact mapped bytes EB BA: jmp 0x4ebbba
        __asm _emit 0xeb
        __asm _emit 0xba
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 F7 17 00 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 10h], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes E8 7F C0 FF FF: call 0x4e7cbd
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 14h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
