// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A2000 .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_004a2000_004A2000() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E6 A7 02 00: call 0x4cc7f7
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xa7
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 0F BE 55 08: movsx edx, byte ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp edx, ecx
        ; Exact mapped bytes 75 11: jne 0x4a2038
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 E0 76 FA FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x76
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB E1: jmp 0x4a2019
        __asm _emit 0xeb
        __asm _emit 0xe1
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 74 3F: je 0x4a2081
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6F 2C 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x6f
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
        ; Exact mapped bytes E8 F0 3B FC FF: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x3b
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3E 2C 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x3e
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
