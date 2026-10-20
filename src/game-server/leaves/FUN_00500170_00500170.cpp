// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00500170 .. +0xEA bytes.
extern "C" __declspec(naked) void FUN_00500170_00500170() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 5cc910h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 91 49 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 63 4C 03 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x00
        push ecx
        mov ecx, esp
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 F7 14 03 00: call 0x531694
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        push 5cc924h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 71 49 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 3B F3 FC FF: call 0x4cf4eb
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf3
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        add eax, 4
        push ecx
        mov ecx, esp
        push eax
        ; Exact mapped bytes E8 D5 14 03 00: call 0x531694
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        push 5cc930h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4F 49 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 19 F3 FC FF: call 0x4cf4eb
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf3
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 8
        push ecx
        mov edx, esp
        push ecx
        mov ecx, edx
        ; Exact mapped bytes E8 B1 14 03 00: call 0x531694
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        push 5cc93ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2B 49 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 F5 F2 FC FF: call 0x4cf4eb
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xf2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        push 5cc948h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 11 49 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 EE 4A 03 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x4a
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov al, byte ptr [edx + 10h]
        push eax
        push 5cc954h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F6 48 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 2D 4A 03 00: call 0x534c59
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x4a
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 12h
        push ecx
        push 5cc964h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DB 48 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D4 48 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        push 5cc978h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C7 48 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
