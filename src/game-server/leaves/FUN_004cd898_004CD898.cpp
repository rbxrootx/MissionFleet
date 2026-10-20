// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD898 .. +0x107 bytes.
extern "C" __declspec(naked) void FUN_004cd898_004CD898() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 07: jge 0x4cd8ae
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp + 8], 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 03 37 06 00: call 0x530fba
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x37
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F7 35 06 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 8E C4 00 00 00: jle 0x4cd996
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 7D FE 01 00: call 0x4ed757
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 06: jle 0x4cd8e8
        __asm _emit 0x7e
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C0 35 06 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x35
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 44: jge 0x4cd945
        __asm _emit 0x7d
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B0 35 06 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x35
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F9 FB 01 00: call 0x4ed519
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 E7 B6 FD FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xb6
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 1D FD 01 00: call 0x4ed662
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp + 8]
        sub eax, dword ptr [ebp - 4]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 B4 B6 FD FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xb6
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 9B B6 FD FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xb6
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 29 35 06 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x35
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 4], ecx
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
