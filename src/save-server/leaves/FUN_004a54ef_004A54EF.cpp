// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A54EF .. +0xA4 bytes.
extern "C" __declspec(naked) void FUN_004a54ef_004A54EF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 48h
        push 6779b8h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 55 4D 03 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x4d
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 70h]
        and edx, 10h
        test edx, edx
        ; Exact mapped bytes 75 11: jne 0x4a5529
        __asm _emit 0x75
        __asm _emit 0x11
        push 49h
        push 6779b8h
        ; Exact mapped bytes E8 1C 38 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x38
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a5529
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DC: jne 0x4a550b
        __asm _emit 0x75
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 78h], 0
        ; Exact mapped bytes 75 11: jne 0x4a5549
        __asm _emit 0x75
        __asm _emit 0x11
        push 4ah
        push 6779b8h
        ; Exact mapped bytes E8 FC 37 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x37
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a5549
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4a552f
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 30 90 02 00: call 0x4ce587
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 60h], eax
        mov edx, dword ptr [ebp - 8]
        add edx, 5ch
        push edx
        ; Exact mapped bytes E8 55 EA FD FF: call 0x483fbe
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 88 90 02 00: call 0x4ce5fc
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 08: je 0x4a5582
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4a5589
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 2
        mov eax, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
