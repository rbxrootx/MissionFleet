// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004768D0 .. +0xE4 bytes.
extern "C" __declspec(naked) void FUN_004768d0_004768D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bee9h
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
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 20h], ecx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 72 02 00 00: call 0x476b80
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 13 02 00 00: call 0x476b30
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F4 04 00 00: call 0x476e20
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E5 07 00 00: call 0x477120
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 0ch], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E9 26 05 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes A1 58 CB 5D 00: mov eax, dword ptr [0x5dcb58]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes A3 58 CB 5D 00: mov dword ptr [0x5dcb58], eax
        __asm _emit 0xa3
        __asm _emit 0x58
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 58 CB 5D 00 00: cmp dword ptr [0x5dcb58], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 19: jne 0x47698d
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 54 CB 5D 00: mov ecx, dword ptr [0x5dcb54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 9D 07 00 00: call 0x477120
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 54 CB 5D 00 00 00 00 00: mov dword ptr [0x5dcb54], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 84 27 05 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x05
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
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 30 1E 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x1e
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
