// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044A4A8 .. +0xEE bytes.
extern "C" __declspec(naked) void FUN_0044a4a8_0044A4A8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov esi, esp
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 108h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 108h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        cmp esi, esp
        ; Exact mapped bytes E8 F5 E2 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xe2
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 108h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 40: je 0x44a53a
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 108h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 108h], edx
        mov esi, esp
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 108h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 108h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        cmp esi, esp
        ; Exact mapped bytes E8 AD E2 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xe2
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 4D: jmp 0x44a587
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp - 4]
        push ecx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        add ecx, 40cf0h
        ; Exact mapped bytes E8 CB 1E 00 00: call 0x44c420
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 1B: je 0x44a575
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 8]
        push eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        add ecx, 40cf0h
        ; Exact mapped bytes E8 1B 1F 00 00: call 0x44c490
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CF D1 FF FF: call 0x44774c
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F9 D0 FF FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 4E E2 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xe2
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
