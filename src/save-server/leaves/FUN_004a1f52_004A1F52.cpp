// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A1F52 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_004a1f52_004A1F52() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 56 2E 08 00: call 0x524dba
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x2e
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4a1f6d
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x4a1ffa
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 82 A8 02 00: call 0x4cc7f7
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 2A: je 0x4a1fb1
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 D9 76 FA FF: call 0x449670
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x76
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x4a1fa0
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 11: jmp 0x4a1fb1
        __asm _emit 0xeb
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 67 77 FA FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x77
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB CC: jmp 0x4a1f7d
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 74 3F: je 0x4a1ffa
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F6 2C 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x2c
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [edx]
        mov edx, dword ptr [eax + 4]
        sub edx, ecx
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 77 3C FC FF: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x3c
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C5 2C 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x2c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 4], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
