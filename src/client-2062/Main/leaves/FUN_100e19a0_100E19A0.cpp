// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E19A0 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_100e19a0_100E19A0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 138h]
        push edi
        lea edi, [esi + 138h]
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x100e19ee
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes E8 82 24 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 5D: jle 0x100e1a1f
        __asm _emit 0x7e
        __asm _emit 0x5d
        mov ebx, 2
        mov ecx, dword ptr [esi + 13ch]
        ; Exact mapped bytes E8 6E 24 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        dec eax
        push eax
        ; Exact mapped bytes E8 85 24 02 00: call 0x10103e60
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 E6: jne 0x100e19c7
        __asm _emit 0x75
        __asm _emit 0xe6
        mov ecx, esi
        ; Exact mapped bytes E8 E8 FE FF FF: call 0x100e18d0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ebx, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 47 24 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        add ebx, -4
        cmp eax, ebx
        ; Exact mapped bytes 7D 1F: jge 0x100e1a1f
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov ebx, 2
        mov ecx, dword ptr [esi + 13ch]
        ; Exact mapped bytes E8 30 24 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        inc eax
        push eax
        ; Exact mapped bytes E8 47 24 02 00: call 0x10103e60
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 E6: jne 0x100e1a05
        __asm _emit 0x75
        __asm _emit 0xe6
        mov ecx, esi
        ; Exact mapped bytes E8 AA FE FF FF: call 0x100e18d0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
