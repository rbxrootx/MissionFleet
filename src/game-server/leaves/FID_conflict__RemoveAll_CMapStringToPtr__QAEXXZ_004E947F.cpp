// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E947F .. +0xBD bytes.
extern "C" __declspec(naked) void FID_conflict__RemoveAll_CMapStringToPtr__QAEXXZ_004E947F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        push 52h
        push 5c4fd0h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 C8 1C 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 6E: je 0x4e950f
        __asm _emit 0x74
        __asm _emit 0x6e
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4e94b3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 73 32: jae 0x4e94f0
        __asm _emit 0x73
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 08: jmp 0x4e94d7
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 11: je 0x4e94ee
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 8]
        add edx, 8
        push edx
        ; Exact mapped bytes E8 53 00 00 00: call 0x4e953c
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB E1: jmp 0x4e94cf
        __asm _emit 0xeb
        __asm _emit 0xe1
        ; Exact mapped bytes EB BA: jmp 0x4e94aa
        __asm _emit 0xeb
        __asm _emit 0xba
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 07 3F 00 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x3f
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
        ; Exact mapped bytes E8 8F E7 FF FF: call 0x4e7cbd
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 14h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
