// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EEF9A .. +0xF0 bytes.
extern "C" __declspec(naked) void FUN_004eef9a_004EEF9A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 19 32 04 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A1 CB 03 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xcb
        __asm _emit 0x03
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 06: jne 0x4eefc6
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 14: je 0x4eefda
        __asm _emit 0x74
        __asm _emit 0x14
        push 210h
        push 677c28h
        ; Exact mapped bytes E8 6B 9D 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x9d
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eefda
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4eefba
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 95 72 FE FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F7 FE FF FF: call 0x4eeeff
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 1C: je 0x4ef02c
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 14h]
        and edx, 200000h
        test edx, edx
        ; Exact mapped bytes 74 0F: je 0x4ef02c
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [edx]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 1F: je 0x4ef054
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 14h]
        and edx, 100000h
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x4ef054
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [edx + 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ecx]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 7E 17: jle 0x4ef077
        __asm _emit 0x7e
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 7E 09: jle 0x4ef077
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 07: jmp 0x4ef07e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
