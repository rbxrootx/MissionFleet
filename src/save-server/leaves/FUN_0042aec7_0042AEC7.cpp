// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042AEC7 .. +0xA2 bytes.
extern "C" __declspec(naked) void FUN_0042aec7_0042AEC7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        push 10h
        push 0
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 C8 A9 03 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 18h], 10h
        lea ecx, [ebp - 18h]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 6E 13 00 00: call 0x42c280
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 3A: je 0x42af55
        __asm _emit 0x74
        __asm _emit 0x3a
        mov esi, esp
        ; Exact mapped bytes 66 8B 45 F2: mov ax, word ptr [ebp - 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf2
        push eax
        ; Exact mapped bytes FF 15 40 C1 68 00: call dword ptr [0x68c140]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C1 9E 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x9e
        __asm _emit 0x03
        __asm _emit 0x00
        and eax, 0ffffh
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        mov esi, esp
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 3C C1 68 00: call dword ptr [0x68c13c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A4 9E 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x9e
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 48 1C 0A 00: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        pop esi
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 8D 9E 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
