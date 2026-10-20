// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E53B0 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_585e53b0_585E53B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 408h], ecx
        mov eax, dword ptr [ebp - 408h]
        mov dword ptr [eax + 21ec0h], 5
        mov ecx, dword ptr [ebp - 408h]
        mov dword ptr [ecx + 21ebch], 2
        push 2
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A B8 F8 FF: call 0x58570c40
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xb8
        __asm _emit 0xf8
        __asm _emit 0xff
        push 5
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD 9A 09 00: call 0x5867eee0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x9a
        __asm _emit 0x09
        __asm _emit 0x00
        push 400h
        push 0
        lea edx, [ebp - 404h]
        push edx
        ; Exact mapped bytes E8 FA 79 26 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x79
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        push eax
        push 588ad1e8h
        ; Exact mapped bytes E8 C9 CB F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xcb
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        push eax
        push 400h
        lea ecx, [ebp - 404h]
        push ecx
        ; Exact mapped bytes E8 B4 B9 EC FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xb9
        __asm _emit 0xec
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 9A F8 FF: call 0x5856ef10
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x9a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 40ch], eax
        lea edx, [ebp - 404h]
        push edx
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes E8 1E 73 F0 FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x73
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        push 18h
        mov ecx, dword ptr [ebp - 408h]
        add ecx, 21ec4h
        push ecx
        ; Exact mapped bytes E8 06 ED 1C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xed
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 C9 BB 24 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xbb
        __asm _emit 0x24
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
