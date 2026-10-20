// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00408E4A .. +0xE1 bytes.
extern "C" __declspec(naked) void FUN_00408e4a_00408E4A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5798bfh
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
        sub esp, 8
        mov dword ptr [ebp - 14h], 0cccccccch
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 14h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 89 80 12 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x80
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D4 11 04 00: call 0x44a065
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x00
        push 30h
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 8
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 38h
        ; Exact mapped bytes E8 21 81 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B3 80 12 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x80
        __asm _emit 0x12
        __asm _emit 0x00
        add eax, 1
        push eax
        push 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 3D 51 0E 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x51
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 38h
        ; Exact mapped bytes E8 FF 80 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 38h
        ; Exact mapped bytes E8 BC 15 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 38h
        ; Exact mapped bytes E8 90 15 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 460h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 45ch]
        push edx
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 30 E3 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xe3
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 3B 49 0E 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x49
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 BB F8 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xf8
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
