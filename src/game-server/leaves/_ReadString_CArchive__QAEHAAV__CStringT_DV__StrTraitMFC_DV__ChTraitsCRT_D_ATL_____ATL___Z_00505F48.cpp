// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00505F48 .. +0xE5 bytes.
extern "C" __declspec(naked) void _ReadString_CArchive__QAEHAAV__CStringT_DV__StrTraitMFC_DV__ChTraitsCRT_D_ATL_____ATL___Z_00505F48() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        push 5dcbech
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9F 7B FE FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 80h
        push 80h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 86 80 FE FF: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push -80h
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 36 FE FF FF: call 0x505db9
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push -1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A3 81 FE FF: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 25: je 0x505fbb
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 80h
        ; Exact mapped bytes 7C 0F: jl 0x505fbb
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 42 FF: movsx eax, byte ptr [edx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0xff
        cmp eax, 0ah
        ; Exact mapped bytes 75 02: jne 0x505fbd
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 25: jmp 0x505fe2
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9B AF 02 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 80h
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1E 80 FE FF: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 93: jmp 0x505f75
        __asm _emit 0xeb
        __asm _emit 0x93
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0C 80 FE FF: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 69 AF 02 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 1E: je 0x50601e
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 42 FF: movsx eax, byte ptr [edx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0xff
        cmp eax, 0ah
        ; Exact mapped bytes 75 0F: jne 0x50601e
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 1
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 89 81 FE FF: call 0x4ee1a7
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        xor eax, eax
        cmp dword ptr [ebp - 8], 0
        setne al
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
