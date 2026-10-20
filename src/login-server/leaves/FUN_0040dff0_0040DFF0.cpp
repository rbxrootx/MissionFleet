// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040DFF0 .. +0x135 bytes.
extern "C" __declspec(naked) void FUN_0040dff0_0040DFF0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 43a095h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 61 45 00 00: call 0x412579
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 110h
        ; Exact mapped bytes E8 83 62 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 114h
        ; Exact mapped bytes E8 71 62 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 118h
        ; Exact mapped bytes E8 5F 62 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 11ch
        ; Exact mapped bytes E8 ED F4 FF FF: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 120h
        ; Exact mapped bytes E8 DF F4 FF FF: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 D1 F4 FF FF: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 128h
        ; Exact mapped bytes E8 C3 F4 FF FF: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 12ch
        ; Exact mapped bytes E8 15 62 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 43d0c0h
        push 44dbc4h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 110h
        ; Exact mapped bytes E8 79 FC 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        push 44dbc8h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 114h
        ; Exact mapped bytes E8 66 FC 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        push 44dbcch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 118h
        ; Exact mapped bytes E8 53 FC 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        push 44dbd0h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 12ch
        ; Exact mapped bytes E8 40 FC 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 14h], 8
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 8ch], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
