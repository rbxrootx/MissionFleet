// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A1DB7 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_004a1db7_004A1DB7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2E AA 02 00: call 0x4cc7f7
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xaa
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x4a1e1f
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 7E 78 FA FF: call 0x449670
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x78
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x4a1e07
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 06: jne 0x4a1e05
        __asm _emit 0x75
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 07: jmp 0x4a1e0e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 F9 78 FA FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x78
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB B9: jmp 0x4a1dd8
        __asm _emit 0xeb
        __asm _emit 0xb9
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 19: je 0x4a1e3e
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 8]
        mov byte ptr [eax], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp - 8]
        sub esi, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7E 2E 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x2e
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [eax + 4], esi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
