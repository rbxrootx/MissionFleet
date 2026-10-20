// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00487109 .. +0x129 bytes.
extern "C" __declspec(naked) void FUN_00487109_00487109() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 0F 84 EF 00 00 00: je 0x487223
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 10h], 0
        mov esi, esp
        push 0
        mov edx, dword ptr [ebp - 14h]
        add edx, 20h
        push edx
        push 0
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 14h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 60 29 5E 00: call dword ptr [0x5e2960]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6F 16 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 47: jne 0x4871bd
        __asm _emit 0x75
        __asm _emit 0x47
        mov esi, esp
        ; Exact mapped bytes FF 15 50 29 5E 00: call dword ptr [0x5e2950]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5B 16 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 3e5h
        ; Exact mapped bytes 75 0C: jne 0x48719d
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 10h], 1
        ; Exact mapped bytes EB 20: jmp 0x4871bd
        __asm _emit 0xeb
        __asm _emit 0x20
        cmp dword ptr [ebp - 0ch], 2747h
        ; Exact mapped bytes 74 09: je 0x4871af
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 0ch], 274ah
        ; Exact mapped bytes 75 0E: jne 0x4871bd
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6C 19 00 00: call 0x488b27
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 66: jmp 0x487223
        __asm _emit 0xeb
        __asm _emit 0x66
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4871cf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 14h]
        ; Exact mapped bytes 7D 3F: jge 0x487219
        __asm _emit 0x7d
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + edx*8 + 4], 0
        ; Exact mapped bytes 74 2D: je 0x487217
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*8 + 4]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 06 62 06 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x62
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 1ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + ecx*8 + 4], 0
        ; Exact mapped bytes EB AD: jmp 0x4871c6
        __asm _emit 0xeb
        __asm _emit 0xad
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 14h], 0
        pop esi
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 B2 15 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
