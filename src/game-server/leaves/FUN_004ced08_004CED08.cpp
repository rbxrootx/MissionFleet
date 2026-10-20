// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CED08 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_004ced08_004CED08() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A0 22 06 00: call 0x530fba
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x22
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4ced23
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x4cedb0
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2C EA 01 00: call 0x4ed757
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xea
        __asm _emit 0x01
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
        ; Exact mapped bytes 74 2A: je 0x4ced67
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
        ; Exact mapped bytes E8 93 E2 FB FF: call 0x48cfe0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xe2
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x4ced56
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 11: jmp 0x4ced67
        __asm _emit 0xeb
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 21 E3 FB FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xe3
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB CC: jmp 0x4ced33
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 74 3F: je 0x4cedb0
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 40 21 06 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x21
        __asm _emit 0x06
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
        ; Exact mapped bytes E8 F1 DA FD FF: call 0x4ac890
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xda
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0F 21 06 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x21
        __asm _emit 0x06
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
