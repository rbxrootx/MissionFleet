// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10024350 .. +0x117 bytes.
extern "C" __declspec(naked) void FUN_10024350_10024350() {
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff8h
        sub esp, 10h
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        mov ecx, dword ptr [ebx + 5ch]
        mov eax, dword ptr [ebx + 60h]
        cmp ecx, eax
        push edi
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x1002445f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        mov ebp, dword ptr [eax + 10h]
        mov edx, dword ptr [eax + 14h]
        cmp ebp, edx
        ; Exact mapped bytes 0F 84 CC 00 00 00: je 0x1002444d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        mov esi, dword ptr [eax + 0ch]
        mov ecx, dword ptr [eax + 10h]
        cmp esi, ecx
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x1002443b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebx + 6ch]
        mov eax, dword ptr [ebx + 70h]
        cmp edi, eax
        ; Exact mapped bytes 74 79: je 0x10024415
        __asm _emit 0x74
        __asm _emit 0x79
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [edi + 4]
        push ecx
        mov ecx, ebx
        mov eax, dword ptr [eax + 0ch]
        push eax
        ; Exact mapped bytes E8 93 FC FF FF: call 0x10024040
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 75 59: jne 0x1002440b
        __asm _emit 0x75
        __asm _emit 0x59
        mov eax, dword ptr [esi]
        mov edx, dword ptr [edi]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [edx + 4e8h]
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [ecx + 8]
        sub ecx, dword ptr [edx + 8]
        sub eax, dword ptr [edx + 4]
        mov edx, ecx
        imul edx, ecx
        mov ecx, eax
        imul ecx, eax
        add edx, ecx
        mov dword ptr [esp + 18h], edx
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DD 5C 24 18: fstp qword ptr [esp + 0x18]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        mov edx, dword ptr [esp + 1ch]
        mov eax, dword ptr [esp + 18h]
        push edx
        push eax
        ; Exact mapped bytes E8 BA 83 14 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x83
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 AC 83 14 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x83
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [edx + 0c38h]
        shl ecx, 1
        cmp eax, ecx
        ; Exact mapped bytes 7C 26: jl 0x10024431
        __asm _emit 0x7c
        __asm _emit 0x26
        mov eax, dword ptr [ebx + 70h]
        add edi, 8
        cmp edi, eax
        ; Exact mapped bytes 75 87: jne 0x1002439c
        __asm _emit 0x75
        __asm _emit 0x87
        mov edx, dword ptr [esi]
        add esi, 4
        mov dword ptr [edx + 23ch], 0
        mov eax, dword ptr [ebp]
        cmp esi, dword ptr [eax + 10h]
        ; Exact mapped bytes 74 0F: je 0x1002443b
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes E9 61 FF FF FF: jmp 0x10024392
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [edi]
        mov dword ptr [ecx + 23ch], edx
        mov ecx, dword ptr [esp + 14h]
        add ebp, 4
        mov eax, dword ptr [ecx]
        cmp ebp, dword ptr [eax + 14h]
        ; Exact mapped bytes 0F 85 34 FF FF FF: jne 0x10024381
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 60h]
        add ecx, 4
        cmp ecx, eax
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 0F 85 12 FF FF FF: jne 0x10024371
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
